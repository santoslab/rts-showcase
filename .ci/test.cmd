::/*#! 2> /dev/null                                 #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#*/
// #Sireum

import org.sireum._

val rootDir = Os.slashDir.up

val sireumBin = Os.path(Os.env("SIREUM_HOME").get) / "bin"
val sireum = sireumBin / (if(Os.isWin) "sireum.bat" else "sireum")

var result: Z = 0
def findCIs(p: Os.Path): Unit = {
  if(p.isFile && p.name == "ci.cmd") {
    val r = proc"$sireum slang run $p".console.echo.run()
    result = result + r.exitCode
  } else if(p.isDir) {
    p.list.foreach((m: Os.Path) => findCIs(m))
  }
}
findCIs(rootDir)

Os.exit(result)
