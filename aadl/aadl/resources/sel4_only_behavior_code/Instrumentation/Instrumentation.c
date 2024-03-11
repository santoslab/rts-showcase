#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_InstrumentationMockThread_i.h>

const bool T = true;
const bool F = false;

int counter = 0;
bool values[][24] = {
      {T, F, F, F,    T, F, F, T,    F, F, F, F,   F, F, T, F,    F, F, F, F,    F, F, F, T},
      {F, T, T, F,    F, T, F, T,    F, T, F, F,   F, F, F, F,    F, T, T, F,    F, F, F, T},
      {F, F, F, T,    F, F, F, F,    F, T, T, F,   F, F, F, T,    F, F, F, F,    F, F, F, F},
      {F, F, T, T,    F, F, T, F,    T, F, F, T,   F, F, F, F,    F, F, T, F,    F, F, F, T},
      {F, F, F, F,    T, F, F, F,    F, F, F, F,   F, F, T, F,    F, T, T, F,    F, F, F, F},
      {F, F, F, F,    T, F, F, F,    F, F, F, F,   F, F, T, F,    F, F, F, F,    F, T, F, T},
      {T, F, F, F,    F, F, F, F,    F, F, F, F,   F, F, F, F,    F, F, F, F,    T, F, F, F},
      {F, F, F, F,    T, F, F, T,    F, F, T, F,   F, F, T, F,    F, F, F, F,    T, F, F, T},
      {F, F, F, F,    T, F, F, T,    F, F, T, F,   F, F, T, F,    F, F, F, F,    T, F, F, T}
};


void send() {
  bool* entry = values[counter++];
  
  sb_unit1_temperatureLogic_channel1_write((const bool *) entry + 0);
  sb_unit1_temperatureLogic_channel2_write((const bool *) entry + 1);
  sb_unit1_temperatureLogic_channel3_write((const bool *) entry + 2);
  sb_unit1_temperatureLogic_channel4_write((const bool *) entry + 3);
  sb_unit1_pressureLogic_channel1_write((const bool *) entry + 4);
  sb_unit1_pressureLogic_channel2_write((const bool *) entry + 5);
  sb_unit1_pressureLogic_channel3_write((const bool *) entry + 6);
  sb_unit1_pressureLogic_channel4_write((const bool *) entry + 7);
  sb_unit1_saturationLogic_channel1_write((const bool *) entry + 8);
  sb_unit1_saturationLogic_channel2_write((const bool *) entry + 9);
  sb_unit1_saturationLogic_channel3_write((const bool *) entry + 10);
  sb_unit1_saturationLogic_channel4_write((const bool *) entry + 11);

  sb_unit2_temperatureLogic_channel1_write((const bool *) entry + 12);
  sb_unit2_temperatureLogic_channel2_write((const bool *) entry + 13);
  sb_unit2_temperatureLogic_channel3_write((const bool *) entry + 14);
  sb_unit2_temperatureLogic_channel4_write((const bool *) entry + 15);
  sb_unit2_pressureLogic_channel1_write((const bool *) entry + 16);
  sb_unit2_pressureLogic_channel2_write((const bool *) entry + 17);
  sb_unit2_pressureLogic_channel3_write((const bool *) entry + 18);
  sb_unit2_pressureLogic_channel4_write((const bool *) entry + 19);
  sb_unit2_saturationLogic_channel1_write((const bool *) entry + 20);
  sb_unit2_saturationLogic_channel2_write((const bool *) entry + 21);
  sb_unit2_saturationLogic_channel3_write((const bool *) entry + 22);
  sb_unit2_saturationLogic_channel4_write((const bool *) entry + 23);

  if(counter % 9 == 0) {
    counter = 0;
  }
}

void init(const int64_t *arg) {
  printf("[%s] init called\n", get_instance_name());
  
  send();
}

void time_triggered(const int64_t * in_arg){
  printf("[%s] time_triggered called\n", get_instance_name());

  send();  
}
