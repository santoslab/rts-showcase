::/*#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF           #
if [ -z ${SIREUM_HOME} ]; then                        #
  echo "Please set SIREUM_HOME env var"               #
  exit -1                                             #
fi                                                    #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"    #
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

// Example Sireum Proyek build definitions -- the contents of this file will not be overwritten
//
// To install Sireum (Proyek and IVE) see https://sireum.org/getting-started/
//
// The following commands should be executed in the parent of the 'bin' directory.
//
// Command Line:
//   To run the demo from the command line using the default scheduler:
//     sireum proyek run . RTS.Demo
//
//   To see the available CLI options:
//     sireum proyek run . RTS.Demo -h
//
//   To run the example unit tests from the command line:
//     sireum proyek test .
//
//   To build an executable jar:
//     sireum proyek assemble --uber --main RTS.Demo .
//
// Sireum IVE:
//
//   Create the IVE project if Codegen was not run locally or if its no-proyek-ive
//   option was used:
//     sireum proyek ive .
//
//   Then in IVE select 'File > Open ...' and navigate to the parent of the
//   'bin' directory and click 'OK'.
//
//   To run the demo from within Sireum IVE:
//     Right click src/main/architecture/RTS/Demo.scala and choose "Run 'Demo'"
//
//   To run the unit test cases from within Sireum IVE:
//     Right click the src/test/bridge and choose "Run ScalaTests in bridge"

import org.sireum._
import org.sireum.project.{Module, Project, Target}

val home: Os.Path = Os.slashDir.up.canon

val slangModule: Module = Module(
  id = "RTS_i_Instance",
  basePath = (home / "src").string,
  subPathOpt = None(),
  deps = ISZ(),
  targets = ISZ(Target.Jvm),
  ivyDeps = ISZ("org.sireum.kekinian::library:",
                "org.sireum.kekinian::hamr-vision:"),
  sources = for(m <- ISZ("art", "architecture", "bridge", "component", "data", "nix", "seL4Nix", "util")) yield (Os.path("main") / m).string,
  resources = ISZ(),
  testSources = for (m <- ISZ("bridge", "system", "util")) yield (Os.path("test") / m).string,
  testResources = ISZ(),
  publishInfoOpt = None()
)

val inspectorModule: Module = slangModule(
  sources = slangModule.sources :+ (Os.path("main") / "inspector").string,
  ivyDeps = slangModule.ivyDeps ++ ISZ("org.sireum:inspector-capabilities:", "org.sireum:inspector-gui:", "org.sireum:inspector-services-jvm:")
)

val slangProject: Project = Project.empty + slangModule
val inspectorProject: Project = Project.empty + inspectorModule

val prj: Project = slangProject
//val prj: Project = inspectorProject()

println(project.JSON.fromProject(prj, T))
