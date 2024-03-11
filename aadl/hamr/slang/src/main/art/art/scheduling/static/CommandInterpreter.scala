// #Sireum
package art.scheduling.static

import org.sireum._
import art.Art.BridgeId

object CommandInterpreter {

  def message(str: String): Unit = {
    CliInfoProvider.message(str)
  }

  def interpretCmd(cmd: Command): B = {
    var done: B = false
    cmd match {
      case _: Help =>
        CliInfoProvider.printHelpMessage()

      case Sstep(n) =>
        assert(n >= 1)
        message(s"...Stepping $n slot(s)")
        Explorer.stepSystemNSlotsIMP(n)

      case Hstep(n) =>
        assert(n >= 1)
        message(s"...Stepping $n hyper-period(s)")
        if (n == 1) {
          Explorer.stepSystemOneHPIMP()
        } else if (Explorer.isHyperPeriodBoundaryH()) {
          Explorer.stepSystemNHPIMP(n)
        } else {
          message("Command not applicable: not on hyper-period boundary")
        }

      case RunToHP(hpNum) =>
        assert(hpNum >= 0 & hpNum <= 1000)
        Explorer.runToHP(hpNum)

      case RunToSlot(slotNum) =>
        assert(slotNum >= 0 & slotNum < Schedule.dScheduleSpec.schedule.slots.size)
        message(s"...Running to slot# $slotNum")
        Explorer.runToSlot(slotNum)

      case RunToThread(threadNickName) =>
        Explorer.runToThread(threadNickName)

      case RunToState(hpNum, slotNum) =>
        assert(hpNum >= 0 & hpNum <= 1000)
        assert(slotNum >= 0 & slotNum < Schedule.dScheduleSpec.schedule.slots.size)
        Explorer.runToState(hpNum, slotNum)

      case RunToDomain(domainId) =>
        assert(0 <= domainId & domainId <= Schedule.dScheduleSpec.maxDomain)
        Explorer.runToDomain(domainId)

      case _: Stop => done = T

      case _: Infostate =>
        val s = Explorer.scheduleState
        CliInfoProvider.showState(s, Schedule.getDomainFromScheduleState(s), Schedule.getBridgeIdFromScheduleState(s), Schedule.threadNickName(Schedule.getBridgeIdFromScheduleState(s)))

      case _: Infoschedule =>
        CliInfoProvider.showSchedule(Explorer.scheduleState, Schedule.dScheduleSpec)

      case _: InfoInputs =>
        StateObserver.printPortContentsInputsCurrent()

      case _: InfoOutputs =>
        StateObserver.printPortContentsOutputsCurrent()

      case InfoComponentStateId(bridgId) =>
        StateObserver.printPortContents(BridgeId.fromZ(bridgId))

      case InfoComponentState(threadNickName) =>
        StateObserver.printPortContentsByNickName(threadNickName)

      case _: InfoThreadNickNames =>
        CliInfoProvider.showNickNames()

      case _: Unrecognized => message("Unrecognized command")

      case _: Unsupported => message("Unsupported command")

      case _ =>
    }
    return done
  }
}
