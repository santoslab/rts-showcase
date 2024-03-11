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

val demoBin = Os.slashDir.up.up / "hamr-sel4" / "camkes" / "bin" / "run-camkes.sh"

if (Os.cliArgs.isEmpty || Os.cliArgs.size > 1) {
  eprintln("Expecting exactly one argument that should be the path to your CAmkES installation")
  Os.exit(1)
}

val camkesHome = Os.path(Os.cliArgs(0))

if(!(camkesHome / "init-build.sh").exists) {
  eprintln(s"Didn't find CAmkES's init-build.sh script in ${camkesHome.value}")
  Os.exit(1)
}

println("Building image ...")

val results = proc"${demoBin.value} -n -c ${camkesHome.value}".console.run()

if(!results.ok) {
  eprintln("Building image failed: ${results.exitCode}")
  Os.exit(results.exitCode)
}

val simScript = camkesHome / "build_camkes" / "sim"

assert(simScript.exists, s"Didn't find ${simScript.value}")

val to: Z = 20000

println("------------------------------------------------------------------")
println(s"Attempting to simulate image under QEMU for ${to}ms")
println("------------------------------------------------------------------")

val results2 = proc"${simScript.value}".timeout(to).console.run()

if(!results2.ok && results2.exitCode != -101) {
  println(s"exit code = ${results2.exitCode}")
  Os.exit(results2.exitCode)
}

Os.exit(0)