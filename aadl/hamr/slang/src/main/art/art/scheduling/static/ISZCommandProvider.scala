// #Sireum
package art.scheduling.static

import org.sireum._

@record class ISZCommandProvider(commands: ISZ[Command]) extends CommandProvider {

  var index: Z = 0

  override def nextCommand(): Command = {
    assert(commands.nonEmpty, "commands must be non-empty")
    assert(index >= 0 && index < commands.size, s"index must be >= 0 and < ${commands.size}")

    if (index == commands.size - 1 && !commands(index).isInstanceOf[Stop]) {
      assert(F, "Last command must be Stop")
      halt("Last command must be Stop")
    }
    index = index + 1
    return commands(index - 1)
  }
}
