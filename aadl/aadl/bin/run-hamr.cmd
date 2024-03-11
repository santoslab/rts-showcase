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

val aadlDir = Os.slashDir.up


val sireumBin = Os.path(Os.env("SIREUM_HOME").get) / "bin" 
val sireum = sireumBin / (if(Os.isWin) "sireum.bat" else "sireum")

val osate: Os.Path = Os.env("OSATE_HOME") match {
  case Some(s) => Os.path(s) / (if (Os.isWin) "osate.exe" else if (Os.isLinux) "osate" else "Contents/MacOs/osate")
  case _ if (Os.isWin) => sireumBin / "win" / "fmide" / "fmide.exe"
  case _ if (Os.isMac) => sireumBin / "mac" / "fmide.app" / "Contents" / "MacOs" / "osate"
  case _ if (Os.isLinux) => sireumBin / "linux" / "fmide" / "fmide"
  case _ =>
    println("Unsupported operating system")
    Os.exit(1)
    halt("")
}

if (!osate.exists) {
  eprintln("Please install FMIDE (e.g. '$SIREUM_HOME/bin/install/fmide.cmd') or OSATE (e.g. 'sireum hamr phantom -u')")
  Os.exit(1)
  halt("")
}

val osireum = ISZ(osate.string, "-nosplash", "--launcher.suppressErrors", "-data", "@user.home/.sireum", "-application", "org.sireum.aadl.osate.cli")

if(Os.cliArgs.size > 1) {
  eprintln("Only expecting a single argument")
  Os.exit(1)
}

val platform: String =
  if(Os.cliArgs.nonEmpty) Os.cliArgs(0)
  else "JVM"

val packageName = "RTS"
val excludeComponentImpl = F

var codegenArgs = ISZ("hamr", "codegen",
  "--platform", platform,
  "--package-name", packageName,
  "--output-dir", (aadlDir.up / "hamr" / "slang").string,
  "--output-c-dir", (aadlDir.up / "hamr" / "c").string,
  "--camkes-output-dir", (aadlDir.up / "hamr" / "camkes").string,  
  "--run-transpiler",
  "--bit-width", "32",
  "--max-string-size", "256",
  "--max-array-size", "1",
  "--verbose",
  "--aadl-root-dir", aadlDir.string)

if (platform == "JVM") {
  codegenArgs = codegenArgs :+ "--runtime-monitoring"
} else {
  println("***********************************************************************")
  println(s"Note: runtime-monitoring support is not yet avialable for ${platform}")
  println("***********************************************************************")
}

if (excludeComponentImpl) {
  codegenArgs = codegenArgs :+ "--exclude-component-impl"
}

if ((aadlDir.up / "hamr" / "slang" / ".idea").exists) {
  codegenArgs = codegenArgs :+ "--no-proyek-ive"
}

codegenArgs = codegenArgs :+ (aadlDir / ".system").string

val results = Os.proc(osireum ++ codegenArgs).echo.console.run()

// Running under windows results in 23 which is an indication 
// a platform restart was requested. Codegen completes 
// successfully and the cli app returns 0 so 
// not sure why this is being issued.
if(results.exitCode == 0 || results.exitCode == 23) {
  Os.exit(0)
} else {
  println(results.err)
  Os.exit(results.exitCode)
}
