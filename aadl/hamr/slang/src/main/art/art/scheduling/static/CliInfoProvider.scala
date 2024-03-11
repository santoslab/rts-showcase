// #Sireum
package art.scheduling.static

import org.sireum._
import art.Art.BridgeId
import art.scheduling.static.Schedule.DScheduleSpec

object CliInfoProvider {

  // prototyping APIs that any HAMR debugging interface should support
  def message(m: String): Unit = {
    StaticSchedulerIO.message(m)
  }

  def printHelpMessage(): Unit = {
    println("s <n?>     - step n slots (default 0)")
    println("h <n?>     - step n hyper-periods (default 0)")
    println("rs <n>     - run to slot n (wrap to next hyper-period if needed)")
    println("rs <h> <n> - run to state hyperperiod h and slot n (do nothing if past this state)")
    println("rh <n>     - run to hyper-period n (do nothing if already past the beginning of hyper-period n)")
    println("rt <name>  - run to slot containing thread with nickname <name>")
    println("i st       - show current state")
    println("i sc       - show schedule and current position")
    println("i out      - show output port values of most recently run thread")
    println("i in       - show input  port values of next thread to run")
    println("i cp <nickname> - show port values of component with given nickname")
    println("i nn       - show thread nicknames")
    println("x          - exit")
    println()
  }

  def formatState(scheduleState: Explorer.ScheduleState, domain: Z, bridgeId: BridgeId, threadNickName: String): String = {
    // val outString = "STATE: slot#: " + scheduleState.slotNum.toString + " ; HP#: " + scheduleState.hyperperiodNum.toString
    return s"STATE: HP#: ${scheduleState.hyperperiodNum} slot#: ${scheduleState.slotNum} domain: $domain  thread: $threadNickName ($bridgeId)"
  }

  def formatStateH(scheduleState: Explorer.ScheduleState): String = {
    val domain = Schedule.getDomainFromScheduleState(scheduleState)
    val bridgeId = Schedule.getBridgeIdFromScheduleState(scheduleState)
    val threadNickName = Schedule.getThreadNickNameFromScheduleState(scheduleState)
    return formatState(scheduleState, domain, bridgeId, threadNickName)
  }

  // The "show" methods below need to be refactored to better support MVC

  def showNickNames(): Unit = {
    message(" Thread Nicknames")
    message("-------------------")
    for (e <- StaticScheduler.threadNickNames.keys) {
      message(e)
    }
  }

  def showState(scheduleState: Explorer.ScheduleState, domain: Z, bridgeId: BridgeId, threadNickName: String): Unit = {
    message(formatState(scheduleState, domain, bridgeId, threadNickName))
  }

  def showStateH(scheduleState: Explorer.ScheduleState): Unit = {
    message(formatStateH(scheduleState))
  }

  def showSchedule(scheduleState: Explorer.ScheduleState, dScheduleSpec: Schedule.DScheduleSpec): Unit = {
    val slots = dScheduleSpec.schedule.slots
    val hyperPeriodLength = dScheduleSpec.hyperPeriod
    val hyperPeriodNum = scheduleState.hyperperiodNum
    val stateSlotNum = scheduleState.slotNum
    message(s" Schedule ($hyperPeriodLength tot ticks) HP#: $hyperPeriodNum")
    message("-------------------------------------------------")
    var slotNum: Z = 0
    for (s <- slots) {
      var prefix: String = "  "
      var suffix: String = ""
      if (slotNum == stateSlotNum) {
        val (elaspedHPTicks, remainingHPTicks) = Schedule.computeElaspedRemainingHPTicks(slotNum, dScheduleSpec)
        prefix = " *"
        suffix = s"(elapsed= $elaspedHPTicks, remaining=$remainingHPTicks)"
      }
      message(s"${prefix}$slotNum [domain=${s.domain},length=${s.length}] $suffix")
      slotNum = slotNum + 1
    }
    message("-------------------------------------------------")
  }

  def showStep(preScheduleState: Explorer.ScheduleState,
               postScheduleState: Explorer.ScheduleState,
               dScheduleSpec: DScheduleSpec): Unit = {
    val slotNum = preScheduleState.slotNum
    val slot = dScheduleSpec.schedule.slots(slotNum)
    val domain = slot.domain
    val bridgeId = Schedule.getBridgeIdFromSlotNumber(slotNum)
    val length = slot.length
    message("============= S t e p =============")
    message(s"PRE-${formatState(preScheduleState, Schedule.getDomainFromScheduleState(preScheduleState), Schedule.getBridgeIdFromScheduleState(preScheduleState), Schedule.getThreadNickNameFromScheduleState(preScheduleState))}")
    message(s"   Executing:  Domain#: $domain   Max Duration: $length")
    message(s"POST-${formatState(postScheduleState, Schedule.getDomainFromScheduleState(postScheduleState), Schedule.getBridgeIdFromScheduleState(postScheduleState), Schedule.getThreadNickNameFromScheduleState(postScheduleState))}")
  }

  def showHyperPeriodBoundary(scheduleState: Explorer.ScheduleState): Unit = {
    message(s"********* Hyper-Period ${scheduleState.hyperperiodNum} (beginning) **********")
  }
}
