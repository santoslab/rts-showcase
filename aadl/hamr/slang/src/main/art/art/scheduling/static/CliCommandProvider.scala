// #Sireum

package art.scheduling.static

import org.sireum._

@record class CliCommandProvider extends CommandProvider {
  override def nextCommand(): Command = {
    return getCommand()
  }

  def getCommand(): Command = {
    val cmdString: String = StaticSchedulerIO.getCommand("HAMR> ")
    val args: ISZ[String] = ops.StringOps(cmdString).split(c => c == ' ')
    val arg0: String = args(0)
    if (arg0 == "x") {
      return Stop()
    } else if (arg0 == "s") {
      var numSteps: Z = 1
      if (args.size > 1) {
        Z(args(1)) match {
          case Some(numStepsCli) => numSteps = numStepsCli
          case None() => return Unsupported()
        }
      }
      return Sstep(numSteps)
    } else if (arg0 == "help") {
      return Help()
    } else if (arg0 == "h") {
      var numSteps: Z = 1
      if (args.size > 1) {
        Z(args(1)) match {
          case Some(numStepsCli) => numSteps = numStepsCli
          case None() => return Unsupported()
        }
      }
      return Hstep(numSteps)
    } else if (arg0 == "i") {
      if (args.size < 2) {
        println("i requires a second option")
        return Help()
      }
      // need to insert a check for size greater than 1
      if (args(1) == "st") {
        return Infostate()
      } else if (args(1) == "sc") {
        return Infoschedule()
      } else if (args(1) == "out") {
        return InfoOutputs()
      } else if (args(1) == "in") {
        return InfoInputs()
      } else if (args(1) == "cpn") {
        if (args.size > 2) {
          Z(args(2)) match {
            case Some(bridgeId) => return InfoComponentStateId(bridgeId)
            case None() => return Unsupported() // expected bridgeId arg is not an integer
          }
        }
        return Unsupported() // incorrect number of arguments for "i cp" (missing bridge id arg)
      } else if (args(1) == "cp") {
        if (args.size > 2) {
          return InfoComponentState(args(2))
        }
        return Unsupported() // incorrect number of arguments for "i cp" (missing bridge id arg)
      } else if (args(1) == "nn") {
        return InfoThreadNickNames()
      } // incorrect number of arguments for "i cp" (missing bridge id arg)
      else { // ... no other info commands supported
        return Unsupported()
      }
    } else if (arg0 == "rh") {
      Z(args(1)) match {
        case Some(hpTarget) => return RunToHP(hpTarget)
        case None() => return Unsupported()
      }
    } else if (arg0 == "rd") {
      Z(args(1)) match {
        case Some(domainIdTarget) => return RunToDomain(domainIdTarget)
        case None() => return Unsupported()
      }
    } else if (arg0 == "rt") {
      val threadNickName = args(1)
      return RunToThread(threadNickName)
    } else if (arg0 == "rs") {
      if (args.size == 2) { // run to slot
        Z(args(1)) match {
          case Some(slotNumTarget) => return RunToSlot(slotNumTarget)
          case None() => return Unsupported()
        }
      } else if (args.size == 3) { // run to state
        (Z(args(1)), Z(args(2))) match {
          case (Some(hpNum), Some(slotNum)) => return RunToState(hpNum, slotNum)
          case _ => return Unsupported()
        }
      } else {
        return Unsupported()
      }
    } else {
      return Unsupported()
    }
  }
}
