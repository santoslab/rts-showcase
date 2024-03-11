#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_OrLogic_i.h>

int counter = 0;
const bool T = true;
const bool F = false;

void send() {
  sb_actuate_write(counter % 2 == 0 ? &T : &F);
  printf("  sent %i\n", (counter % 2 == 0));
  counter++;
}

void OrLogic_init(const int64_t *arg){
  printf("[%s] init called", get_instance_name());
  
  send();
}

void OrLogic_time_triggered(const int64_t * in_arg) {
  printf("[%s] time_triggered called\n", get_instance_name());
  
  bool c1;
  if(sb_channel1_read(&c1)) {
    printf("  received %i on channel1\n", c1);
  } else {
    printf("  ERROR: nothing received on channel1\n");
  }

  bool c2;
  if(sb_channel2_read(&c2)) {
    printf("  received %i on channel2\n", c2);
  } else {
    printf("  ERROR: nothing received on channel2\n");
  }
  
  send();
}

