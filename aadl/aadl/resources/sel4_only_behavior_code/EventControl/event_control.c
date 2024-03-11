#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_EventControlMockThread_i.h>

int counter = 0;
const bool T = true;
const bool F = false;

void send() {
  if(counter % 2 == 0){
    sb_manualActuatorInput1_write(&F);
    sb_manualActuatorInput2_write(&T);
    printf("  sent false, true\n");
  } else {
    sb_manualActuatorInput1_write(&T);
    sb_manualActuatorInput2_write(&F);
    printf("  sent true, false\n");
  }
  counter++;
}

void event_control_init(const int64_t *arg) {
  printf("[%s] init called\n", get_instance_name());
  
  send();
}

void event_control_time_triggered(const int64_t * in_arg){
  printf("[%s] time_triggered called\n", get_instance_name());

  send();  
}
