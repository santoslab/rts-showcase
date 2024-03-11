#include <all.h>

Unit RTS_Platform_setup(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Platform.scala", "RTS.Platform", "setup", 0);
}

Unit RTS_Platform_tearDown(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Platform.scala", "RTS.Platform", "tearDown", 0);
}