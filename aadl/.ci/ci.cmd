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

val homeDir = Os.slashDir.up

val sireumBin = Os.path(Os.env("SIREUM_HOME").get) / "bin"
val sireum = sireumBin / (if (Os.isWin) "sireum.bat" else "sireum")
var result: Z = 0

def run(title: String, verbose: B, proc: OsProto.Proc): Z = {
  println(s"$title ...")
  val r = (if (verbose) proc.console.echo else proc).run()
  if (!r.ok) {
    println(s"$title failed!")
    cprintln(F, r.out)
    cprintln(T, r.err)
  }
  return r.exitCode
}

def clean(d: Os.Path): Unit = {
  // TODO check if CI
  if (d.exists) {
    d.removeAll()
    println(s"Removed $d")
  } else {
    println(s"$d does not exist")
  }
}

println(
  st"""**************************************************************************
      |*                                RTS AADL                                *
      |**************************************************************************""".render
)

if (result == 0) {
  result = run("Cleaning", F, proc"$sireum slang run ${homeDir / "aadl" / "bin" / "clean.cmd"}")
}

if (result == 0) {
  result = run("Running codegen via OSATE targeting JVM with runtime monitoring", F, proc"$sireum slang run ${homeDir / "aadl" / "bin" / "run-hamr.cmd"} JVM")
}

// need to run both Linux and seL4 to ensure results contain both the c and camkes codegen artifacts
if (result == 0) {
  result = run("Running codegen via OSATE targeting Linux", F, proc"$sireum slang run ${homeDir / "aadl" / "bin" / "run-hamr.cmd"} Linux")
}

if (result == 0) {
  result = run("Running customized transpiler script", F, proc"${homeDir / "hamr" / "slang" / "bin" / "transpile-cust.cmd"}")
}

if (result == 0) {
  result = run("Compiling transpiled project", F, proc"${homeDir / "hamr" / "c" / "bin" / "compile.cmd"}")
}

if (result == 0) {
  result = run("Running codegen via OSATE targeting seL4", F, proc"$sireum slang run ${homeDir / "aadl" / "bin" / "run-hamr.cmd"} seL4")
}

if (result == 0) {
  result = run("Compiling Proyek project", F, proc"$sireum proyek compile .".at(homeDir / "hamr" / "slang"))
}

// TODO: add run-demo-jvm, run-demo-linux and perhaps run-demo-sel4 scripts
//if(result == 0) {
//    result = proc"$sireum slang run ${homeDir / "hamr" / "slang" / "bin" / "run-demo-linux.cmd"}".console.echo.run().exitCode
//}

if (result == 0) {
  result = run("Running unit tests via proyek", F, proc"$sireum proyek test .".at(homeDir / "hamr" / "slang"))
}

if (result == 0) {
  result = run("Verifying via Logika", F, proc"$sireum slang run ${homeDir / "hamr" / "slang" / "bin" / "run-logika.cmd"}")
}

if (result == 0) {
  
  result = run("Size before cleaning", T, proc"df -h")

  clean(sireumBin.up / "out")
  clean(homeDir / "hamr" / "c" / "nix")
  clean(homeDir / "hamr" / "slang" / "out")
  clean(Os.path("/root") / "Downloads" / "sireum")

  result = run("Size after cleaning", T, proc"df -h")

  result = run("Running customized sel4 transpiler script", F, proc"${homeDir / "hamr" / "slang" / "bin" / "transpile-sel4-cust.cmd"}")
}

if (result == 0) {
  Os.env("GITHUB_WORKFLOW") match {
    case Some(n) if (ops.StringOps(ops.StringOps(n).toLower).contains("camkes")) =>
      
      result = run("Size before running camkes build", T, proc"df -f")

      result = run("Running camkes build", T, proc"${homeDir / "hamr" / "camkes" / "bin" / "run-camkes.sh"}")
    case _ =>
  }
}

Os.exit(result)