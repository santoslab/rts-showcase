// #Sireum
package art.scheduling.static

import org.sireum._

@record class DefaultCommandProvider extends CommandProvider {
  override def nextCommand(): Command = {
    return Hstep(1)
  }
}
