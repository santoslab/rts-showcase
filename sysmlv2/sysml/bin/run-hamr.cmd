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

val home: Os.Path = Os.slashDir.up

val sysmlDir: Os.Path = home
val hamrDir: Os.Path = sysmlDir.up / "hamr"

val sireumBin: Os.Path = Os.path(Os.env("SIREUM_HOME").get) / "bin"
val sireum: Os.Path = sireumBin / (if(Os.isWin) "sireum.bat" else "sireum")

val packageName: String = "RTS"

var sourcePath: String = sysmlDir.string
if (!(sysmlDir / "sysml-aadl-libraries").exists && Os.envs.contains("SYSML_AADL_LIBRARIES")) {
  sourcePath = s"$sourcePath:${Os.env("SYSML_AADL_LIBRARIES").get}"
}

var codegenArgs: ISZ[String] = ISZ(
  sireum.value, "hamr", "sysml", "codegen",
  "--package-name", packageName,
  "--output-dir", hamrDir.value,
  "--verbose",
  "--no-proyek-ive",
  "--workspace-root-dir", sysmlDir.string,
  "--sourcepath", sourcePath,
  "--system-name", "RTS::RTS",
)

codegenArgs = codegenArgs ++ Os.cliArgs

codegenArgs = codegenArgs :+ (sysmlDir / "rts.sysml").value

val results = Os.proc(codegenArgs).at(home).echo.console.run()

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
