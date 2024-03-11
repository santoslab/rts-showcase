// #Sireum

package art.scheduling.static

import org.sireum._

@msig trait CommandProvider {
  def nextCommand(): Command
}

@msig trait InfoCommandProvider extends CommandProvider {
  def threadNickNames: Map[String, art.Art.BridgeId]
  def numSlots: Z
  def displayOrder: ISZ[art.Art.BridgeId]

  def init(threadNickNames: Map[String, art.Art.BridgeId], numSlots: Z, displayOrder: ISZ[art.Art.BridgeId]): CommandProvider
}

@datatype trait Command

@datatype class Unrecognized extends Command

@datatype class Unsupported extends Command

// end debugging session
@datatype class Stop extends Command

// display support commands
@datatype class Help extends Command

// step numSteps of slots
@datatype class Sstep(numSteps: Z) extends Command

// step numSteps of hyper-periods
@datatype class Hstep(numSteps: Z) extends Command

// run to hp#
@datatype class RunToHP(hpNum: Z) extends Command

// run to scheduler state (hp#,slot#)
@datatype class RunToState(hpNum: Z, slotNum: Z) extends Command

// run to domain
@datatype class RunToDomain(domainId: Z) extends Command

// run to thread
@datatype class RunToSlot(slotNum: Z) extends Command

// run to thread
@datatype class RunToThread(ThreadId: String) extends Command

// get info current state (hyper-period number, slot number)
@datatype class Infostate extends Command

// get info of domain schedule with next slot to be executed marked
@datatype class Infoschedule extends Command

// get values of input ports of component to be executed in the next slot
@datatype class InfoInputs extends Command

// get values of output ports of component that was executed in the previous slot
@datatype class InfoOutputs extends Command

// get values of input and outputs ports for the given component the last time that it was executed
@datatype class InfoComponentStateId(bridgeId: Z) extends Command

@datatype class InfoComponentState(threadNickName: String) extends Command

// show thread nicknames
@datatype class InfoThreadNickNames extends Command
