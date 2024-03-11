package art.scheduling.static

import org.sireum._

import scala.io.StdIn.readLine

object StaticSchedulerIO_Ext {
  var logStream: java.io.PrintStream = System.out

  def getCommand(prompt: String): String = {
    print(prompt)
    val command = readLine()
    return command
  }

  def message(m: String): Unit = {
    logStream.println(m)
    logStream.flush()
  }
}
