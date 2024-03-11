#include <all.h>

B Map_EB5A91_isEmpty_(STACK_FRAME Map_EB5A91 this) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "isEmpty", 0);
  Z t_0 = Map_EB5A91_size_(SF this);
  return Z__eq(t_0, Z_C(0));
}

Z Map_EB5A91_size_(STACK_FRAME Map_EB5A91 this) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "size", 0);
  Z t_0 = IS_588B23_size(SF Map_EB5A91_entries_(this));
  return t_0;
}

void Map_empty_E4CC14(STACK_FRAME Map_EB5A91 result) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "empty", 0);

  sfUpdateLoc(31);
  Map_EB5A91 _r_;
  STATIC_ASSERT(0 <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  DeclNewIS_588B23(t_1);
  t_1.size = (int8_t) 0;
  DeclNewMap_EB5A91(t_0);
  Map_EB5A91_apply(SF &t_0, (IS_588B23) (&t_1));
  _r_ = (Map_EB5A91) (&t_0);
  Type_assign(result, _r_, sizeof(struct Map_EB5A91));
  return;
}

void Map_empty_595DD7(STACK_FRAME Map_9C6840 result) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "empty", 0);

  sfUpdateLoc(31);
  Map_9C6840 _r_;
  STATIC_ASSERT(0 <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  DeclNewIS_4D6DA5(t_1);
  t_1.size = (int8_t) 0;
  DeclNewMap_9C6840(t_0);
  Map_9C6840_apply(SF &t_0, (IS_4D6DA5) (&t_1));
  _r_ = (Map_9C6840) (&t_0);
  Type_assign(result, _r_, sizeof(struct Map_9C6840));
  return;
}

void Map_9C6840__add_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "+", 0);
  DeclNewIS_4D6DA5(t_1);
  AssocS_Entries_add_57396F(SF (IS_4D6DA5) &t_1, (IS_4D6DA5) Map_9C6840_entries_(this), (Tuple2_4DFC06) p);
  DeclNewMap_9C6840(t_0);
  Map_9C6840_apply(SF &t_0, (IS_4D6DA5) ((IS_4D6DA5) &t_1));
  Type_assign(result, (&t_0), sizeof(struct Map_9C6840));
  return;
}

B Map_9C6840_contains_(STACK_FRAME Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "contains", 0);
  Z t_0 = Map_9C6840_indexOf_(SF this, key);
  return Z__ge(t_0, Z_C(0));
}

void Map_9C6840_get_(STACK_FRAME Option_376396 result, Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "get", 0);

  sfUpdateLoc(117);
  Z index;
  {
    Z t_0 = Map_9C6840_indexOf_(SF this, key);
    index = t_0;
  }

  sfUpdateLoc(118);
  Option_376396 r;
  DeclNewOption_376396(t_1);
  if (Z__lt(index, Z_C(0))) {
    DeclNewNone_50AF88(t_2);
    None_50AF88_apply(SF &t_2);
    Type_assign(&t_1, (&t_2), sizeof(union Option_376396));
  } else {
    DeclNewSome_24B656(t_3);
    Some_24B656_apply(SF &t_3, (art_ArtSlangMessage) Tuple2_4DFC06_2(IS_4D6DA5_at(Map_9C6840_entries_(this), index)));
    Type_assign(&t_1, (&t_3), sizeof(union Option_376396));
  }
  r = (Option_376396) &t_1;
  Type_assign(result, r, sizeof(union Option_376396));
  return;
}

Z Map_9C6840_indexOf_(STACK_FRAME Map_9C6840 this, Z key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "indexOf", 0);
  Z t_0 = AssocS_Entries_indexOf_C5D402(SF (IS_4D6DA5) Map_9C6840_entries_(this), key);
  return t_0;
}

void Map_EB5A91_get_(STACK_FRAME Option_0E107D result, Map_EB5A91 this, String key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "get", 0);

  sfUpdateLoc(117);
  Z index;
  {
    Z t_0 = Map_EB5A91_indexOf_(SF this, (String) key);
    index = t_0;
  }

  sfUpdateLoc(118);
  Option_0E107D r;
  DeclNewOption_0E107D(t_1);
  if (Z__lt(index, Z_C(0))) {
    DeclNewNone_D34309(t_2);
    None_D34309_apply(SF &t_2);
    Type_assign(&t_1, (&t_2), sizeof(union Option_0E107D));
  } else {
    DeclNewSome_9D1CD4(t_3);
    Some_9D1CD4_apply(SF &t_3, Tuple2_E0098E_2(IS_588B23_at(Map_EB5A91_entries_(this), index)));
    Type_assign(&t_1, (&t_3), sizeof(union Option_0E107D));
  }
  r = (Option_0E107D) &t_1;
  Type_assign(result, r, sizeof(union Option_0E107D));
  return;
}

void Map_EB5A91_keys_(STACK_FRAME IS_948B60 result, Map_EB5A91 this) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "keys", 0);
  DeclNewIS_948B60(t_0);
  AssocS_Entries_keys_2CCAEB(SF (IS_948B60) &t_0, (IS_588B23) Map_EB5A91_entries_(this));
  Type_assign(result, ((IS_948B60) &t_0), sizeof(struct IS_948B60));
  return;
}

Z Map_EB5A91_indexOf_(STACK_FRAME Map_EB5A91 this, String key) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "indexOf", 0);
  Z t_0 = AssocS_Entries_indexOf_A3E3C6(SF (IS_588B23) Map_EB5A91_entries_(this), (String) key);
  return t_0;
}

void Map_9C6840__sub_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "-", 0);
  DeclNewIS_4D6DA5(t_1);
  AssocS_Entries_remove_57396F(SF (IS_4D6DA5) &t_1, (IS_4D6DA5) Map_9C6840_entries_(this), (Tuple2_4DFC06) p);
  DeclNewMap_9C6840(t_0);
  Map_9C6840_apply(SF &t_0, (IS_4D6DA5) ((IS_4D6DA5) &t_1));
  Type_assign(result, (&t_0), sizeof(struct Map_9C6840));
  return;
}