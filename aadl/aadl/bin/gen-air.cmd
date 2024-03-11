::#! 2> /dev/null                                   #
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
::!#
// #Sireum

import org.sireum._

val aadlDir = Os.slashDir.up


val sireumBin = Os.path(Os.env("SIREUM_HOME").get) / "bin" 
val sireum = sireumBin / (if(Os.isWin) "sireum.bat" else "sireum")

val fmide : Os.Path = 
  if(Os.isWin) sireumBin / "win" / "fmide" / "fmide.exe"
  else if(Os.isLinux) sireumBin / "linux" / "fmide" / "fmide"
  else if(Os.isMac) sireumBin / "mac" / "fmide.app" / "Contents" / "MacOS" / "osate"
  else sireum / "unsupported-OS"

if(!fmide.exists) {
  println(s"Please install FMIDE by running ${ (sireumBin / "install" / "fmide.cmd").canon.string }");
  Os.exit(-1);
}
  
val osireum = ISZ(fmide.string, "-nosplash", "-console", "-consoleLog", "-data", "@user.home/.sireum", "-application", "org.sireum.aadl.osate.cli")

val codegenArgs = ISZ("hamr", "phantom", aadlDir.string)

val results = Os.proc(osireum ++ codegenArgs).console.runCheck()

Os.exit(results.exitCode)