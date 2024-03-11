#ifndef SIREUM_H_org_sireum_Tuple4_FA9F23
#define SIREUM_H_org_sireum_Tuple4_FA9F23

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)
void Tuple4_FA9F23_apply(STACK_FRAME Tuple4_FA9F23 this, art_scheduling_static_Schedule_DScheduleSpec _1, IS_FDDCB6 _2, Map_EB5A91 _3, art_scheduling_static_CommandProvider _4);
B Tuple4_FA9F23__eq(Tuple4_FA9F23 this, Tuple4_FA9F23 other);
B Tuple4_FA9F23__equiv(Tuple4_FA9F23 this, Tuple4_FA9F23 other);
void Tuple4_FA9F23_cprint(Tuple4_FA9F23 this, B isOut);
void Tuple4_FA9F23_string_(STACK_FRAME String result, Tuple4_FA9F23 this);

inline art_scheduling_static_Schedule_DScheduleSpec Tuple4_FA9F23_1(Tuple4_FA9F23 this) {
  return (art_scheduling_static_Schedule_DScheduleSpec) &this->_1;
}

inline IS_FDDCB6 Tuple4_FA9F23_2(Tuple4_FA9F23 this) {
  return (IS_FDDCB6) &this->_2;
}

inline Map_EB5A91 Tuple4_FA9F23_3(Tuple4_FA9F23 this) {
  return (Map_EB5A91) &this->_3;
}

inline art_scheduling_static_CommandProvider Tuple4_FA9F23_4(Tuple4_FA9F23 this) {
  return (art_scheduling_static_CommandProvider) &this->_4;
};

inline B Tuple4_FA9F23__ne(Tuple4_FA9F23 this, Tuple4_FA9F23 other) {
  return !Tuple4_FA9F23__eq(this, other);
}

inline B Tuple4_FA9F23__inequiv(Tuple4_FA9F23 this, Tuple4_FA9F23 other) {
  return !Tuple4_FA9F23__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif