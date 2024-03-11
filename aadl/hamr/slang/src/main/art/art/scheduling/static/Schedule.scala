// #Sireum

package art.scheduling.static

import org.sireum._
import art.Art
import art.scheduling.static.Explorer.ScheduleState

object Schedule {

  // const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
  //  { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
  //  { .domain = 1, .length =   5 }, // pacer        10ms
  //  { .domain = 0, .length =  95 }, // domain0     190ms
  //  { .domain = 2, .length =   5 }, // source       10ms
  //  { .domain = 0, .length =  95 }, // domain0     190ms
  //  { .domain = 3, .length =   5 }, // destination  10ms
  //  { .domain = 0, .length = 195 }, // domain0     390ms
  // };

  // const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);

  @datatype class DScheduleSpec(maxDomain: Z, // the highest domain # used
                                hyperPeriod: Z, // the hyper period in ticks
                                schedule: DSchedule)

  // contract invariants on schedule

  @datatype class DSchedule(slots: ISZ[Slot])

  // contract invariants on schedule

  @datatype class Slot(domain: Z, length: Z)

  val emptyDScheduleSpec: DScheduleSpec = DScheduleSpec(0, 0, DSchedule(ISZ()))

  // ---------- schedule structure

  var dScheduleSpec: DScheduleSpec = emptyDScheduleSpec
  var domainToBridgeIdMap: ISZ[Art.BridgeId] = ISZ()

  def setSchedule(spec: DScheduleSpec,
                  domainsToBridgeMap: ISZ[Art.BridgeId]): Unit = {
    // pre-condition -- all structural invariants for the domain schedule hold
    validDScheduleSpec(spec)
    // checking period for each thread requires alignment with model -- cannot check that here -- client should guarantee
    // body
    dScheduleSpec = spec
    domainToBridgeIdMap = domainsToBridgeMap
    //
    // Technically, after this point, the schedule is "frozen" and we should have to check the invariant properties on the
    // schedule again.
  }

  // --------- helper method for accessing schedule info

  def getBridgeIdFromSlot(slot: Slot): Art.BridgeId = {
    return domainToBridgeIdMap(slot.domain)
  }

  def getBridgeIdFromSlotNumber(slotNum: Z): Art.BridgeId = {
    return getBridgeIdFromSlot(dScheduleSpec.schedule.slots(slotNum))
  }

  def getBridgeIdFromScheduleState(scheduleState: ScheduleState): Art.BridgeId = {
    return getBridgeIdFromSlotNumber(scheduleState.slotNum)
  }

  def getDomainFromSlotNum(slotNum: Z): Z = {
    return dScheduleSpec.schedule.slots(slotNum).domain
  }

  def getDomainFromScheduleState(scheduleState: Explorer.ScheduleState): Z = {
    return getDomainFromSlotNum(scheduleState.slotNum)
  }

  def threadNickName(bridgeId: Art.BridgeId): String = {
    for (e <- StaticScheduler.threadNickNames.entries) {
      if (e._2 == bridgeId) {
        return e._1
      }
    }
    return "<not found>"
  }

  def getThreadNickNameFromScheduleState(scheduleState: Explorer.ScheduleState): String = {
    val bridgeId = Schedule.getBridgeIdFromSlotNumber(scheduleState.slotNum)
    return threadNickName(bridgeId)
  }

  // ------------- contract invariants on schedule -------------

  // aggregate invariant on static schedule
  def validDScheduleSpec(dScheduleSpec: DScheduleSpec): B = {
    return checkMaxDomain(dScheduleSpec) &&
      checkNoMissingDomain(dScheduleSpec) &&
      checkHyperPeriodTicks(dScheduleSpec)
  }

  // Invariant: no domain id referenced in a slot exceeds the specified max domain
  def checkMaxDomain(dScheduleSpec: DScheduleSpec): B = {
    // Note: transpiler doesn't current support function passing
    //return All(dScheduleSpec.schedule.slots)(s => s.domain <= dScheduleSpec.maxDomain)
    for (s <- dScheduleSpec.schedule.slots if s.domain > dScheduleSpec.maxDomain) {
      return F
    }
    return T
  }

  // Invariant: every domain 0 .. maxDomain is referenced by at least one slot
  def checkNoMissingDomain(dScheduleSpec: DScheduleSpec): B = {
    // NOTE: transpiler doesn't currently support function passing
    //return All(0 until dScheduleSpec.maxDomain)(d =>
    //  Exists(dScheduleSpec.schedule.slots)(s => s.domain == d)
    //)
    for (d <- 0 until dScheduleSpec.maxDomain) {
      var exists: B = F
      for (s <- dScheduleSpec.schedule.slots if !exists) {
        exists = exists || s.domain == d
      }
      if (!exists) {
        return F
      }
    }
    return T
  }

  // Invariant: the total time (in ticks) across all slots matches the specified hyper-period
  def checkHyperPeriodTicks(dScheduleSpec: DScheduleSpec): B = {
    var computedHyperPeriod: Z = 0
    for (s <- dScheduleSpec.schedule.slots) {
      computedHyperPeriod = computedHyperPeriod + s.length
    }
    return (computedHyperPeriod == dScheduleSpec.hyperPeriod)
  }


  // add Clock period

  // This property is not an invariant per se, but rather a consistency property between the model-specified
  // thread periods and the implied periods in the static schedule.  Thus, this property is omitted from the
  // structural invariant on the static schedule.
  //
  // Model-consistency: for a given domain, the period implied by the schedule (calculated period) matches
  // the period (parameter) specified in the model
  /*
   * @param domain identifier of domain to be checked
   * @param period specified period of domain in ticks
   * @param dScheduleSpec static schedule
   */
  def checkPeriodTicks(domain: Z, period: Z, dScheduleSpec: DScheduleSpec): B = {
    var computedPeriod: Z = 0 // computed period in ticks
    var computedTicksBeforeOccurrence: Z = 0
    // number of ticks before first occurrence
    // used to determine period, when periods "wraps around" the schedule
    var occurrence: Z = 0 // how many times has domain occurred so far in schedule

    for (s <- dScheduleSpec.schedule.slots) {
      // println(occurrence, ", ", computedTicksBeforeOccurrence, ", ", computedPeriod)
      if (s.domain == domain) { // if we are at a slot for the domain in the schedule
        // if this is not the first occurrence, then we have computed the time (in ticks)
        // since the last occurrence, so compare computed period to specified period
        if (occurrence > 0) {
          if (computedPeriod != period) {
            return false
          }
        }
        // at all occurrences (first or otherwise), increment the occurrence counter
        occurrence = occurrence + 1
        // re-start the accumulation of time leading to period
        computedPeriod = s.length // "initialize" the computed period with length of domain's time slot
      } else {
        //
        if (occurrence > 0) { // if we have previously encountered the domain in the schedule
          computedPeriod = computedPeriod + s.length // add current time slice
        } else {
          // if we haven't see the domain yet, add the time to the "before occurrence" accumulator
          computedTicksBeforeOccurrence = computedTicksBeforeOccurrence + s.length
        }
      }
    }
    // println(occurrence, ", ", computedTicksBeforeOccurrence, ", ", computedPeriod)
    // at this point, we have reached the end of the schedule.  We need to check for the domain
    // as it wraps around.  Given our other invariants, we know that the domain occurs at least
    // once.  So computedPeriod should hold the time since it was seen, whereas
    // computedTicksBeforeOccurrence should hold the time before it was seen.
    // The sum of these values should equal the period.
    return (computedPeriod + computedTicksBeforeOccurrence == period)
  }

  def computeElaspedRemainingHPTicks(slotNum: Z, dScheduleSpec: DScheduleSpec): (Z, Z) = {
    // pre-condition
    //  TODO: well-formed dScheduleSpec
    //  TODO: valid slotNum (define function for below)
    assert(0 <= slotNum & slotNum < dScheduleSpec.schedule.slots.size)
    // body
    var elaspedHPTicks: Z = 0
    for (s <- 0 until slotNum) {
      elaspedHPTicks = elaspedHPTicks + dScheduleSpec.schedule.slots(0).length
    }
    val remainingHPTicks: Z = dScheduleSpec.hyperPeriod - elaspedHPTicks
    return (elaspedHPTicks, remainingHPTicks)
  }
}

