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

val homeBin = Os.slashDir
val home = homeBin.up

val actuationDir = home / "src" / "main" / "component" / "RTS" / "Actuation"

val sireumBin = Os.path(Os.env("SIREUM_HOME").get) / "bin" 
val sireum = sireumBin / (if(Os.isWin) "sireum.bat" else "sireum")

val ignoreStringInterpWarnings: B = T // if T then ignore string interp warnings as the strings only appear in api.logInfo calls and not in contracts

val isCi: B = Os.env("GITLAB_CI").nonEmpty || Os.env("GITHUB_ACTIONS").nonEmpty || Os.env("BUILD_ID").nonEmpty

val initialisePrefix = "initialise"
val timeTriggeredPrefix = "timeTriggered"

@datatype class ExpectedReport(val expectedWarnings: ISZ[String],
                               val expectedErrors: ISZ[String])
val emptyReport = ExpectedReport(ISZ(), ISZ())

val emptyMap = Map.empty[String, ExpectedReport] + (initialisePrefix ~> emptyReport) + (timeTriggeredPrefix ~> emptyReport)

@datatype class LogikaOpt (val timeout: Z,
                           val rlimit: Z)

val defaultOpts = LogikaOpt(timeout = (if(isCi) 20 else 10), rlimit = 2000000)

@datatype class C(val file: Os.Path,
                  val logikaOpts: LogikaOpt,
                  val expectedReports: Map[String, ExpectedReport])

val files = ISZ[C](

  C(actuationDir / "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.scala", defaultOpts, emptyMap),
  C(actuationDir / "Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic.scala", defaultOpts, emptyMap),
  C(actuationDir / "OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic.scala", defaultOpts, emptyMap)
)

println("Initializing runtime library ...\n")
Sireum.initRuntimeLibrary()

var result: Z = 0
for(f <- files;
    entryPoint <- ISZ(initialisePrefix, timeTriggeredPrefix)) {

  val reporter = org.sireum.message.Reporter.create
  val input = ISZ[String]("proyek", "logika",
    "--timeout", f.logikaOpts.timeout.string, //
    "--rlimit", f.logikaOpts.rlimit.string, //
    "--par",
    "--line", findMethod(entryPoint, f.file).string, //
    home.value, f.file.value)

  println(s"Checking $entryPoint method of ${f.file.name}")
  println(st"sireum ${(input, " ")}".render)

  val start = org.sireum.extension.Time.currentMillis
  val results = Sireum.runWithReporter(input, reporter)
  val elapsed = s"in ${(org.sireum.extension.Time.currentMillis - start) / 1000} s"

  var report =  ISZ[String]()

  def compare(typ: String, expected: ISZ[String], actual: ISZ[message.Message]): Unit = {
    if (expected.size != actual.size) {
      report = report :+ s"  Was expecting ${expected.size} ${typ}s but encountered ${actual.size}"
    }
    @strictpure def m2s(m: message.Message): String = s"[${m.posOpt.get.beginLine}, ${m.posOpt.get.beginColumn}] ${m.text}"
    for (m <- actual if !ops.ISZOps(expected).exists(p => p == m2s(m))) {
      report = report :+ s"  Unexpected $typ: ${m2s(m)}"
    }
  }

  compare("warning", f.expectedReports.get(entryPoint).get.expectedWarnings, reporter.warnings.filter(p =>
    !ignoreStringInterpWarnings || !ops.StringOps(p.text).contains("String interpolation is currently over-approximated to produce an unconstrained string")))
  compare("error", f.expectedReports.get(entryPoint).get.expectedErrors, reporter.errors)

  if (report.nonEmpty) {
    println(s"*** Failed ***\n")
    println(st"${(report, "\n")}\n".render)
    result = 1
  } else {
    println(s"  Everything accounted for:")
  }
  println(s"  Verification ${if(results._1 == 0) s"succeeded $elapsed!" else s"failed $elapsed"}\n")
}

Os.exit(result)

def findMethod(key: String, f: Os.Path): Z = {
  assert(f.isFile, s"$f is not a file")
  assert(!ops.StringOps(f.read).contains("\r"), s"$f contains windows style new lines")

  var line = 1
  // add space before newline as split does not preserve empty lines (i.e. those that only contain newline char)
  for(l <- ops.StringOps(ops.StringOps(f.read).replaceAllLiterally("\n", " \n")).split(c => c == '\n')) {
    if (ops.StringOps(l).contains(s"def $key(api: ")) {
      return line
    }
    line = line + 1
  }
  halt(s"Infeasible, didn't find $key in $f")
}
