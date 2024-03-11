#include <all.h>

inline B AssocS_Entries_add_extract_142_11_4DFC06(STACK_FRAME_SF Tuple2_4DFC06 t_0, Z *_key, art_ArtSlangMessage *_value) {
  *_key = Tuple2_4DFC06_1(t_0);
  *_value = (art_ArtSlangMessage) Tuple2_4DFC06_2(t_0);
  return T;
}

void AssocS_Entries_add_57396F(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 entries, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "AssocS.scala", "org.sireum.AssocS.Entries", "add", 0);

  sfUpdateLoc(142);
  Tuple2_4DFC06 t_0;
  t_0 = (Tuple2_4DFC06) p;
  Z key;
  art_ArtSlangMessage value;
  sfAssert(AssocS_Entries_add_extract_142_11_4DFC06(SF t_0, &key, &value), "Error during var pattern matching.");

  sfUpdateLoc(143);
  Z index;
  {
    Z t_1 = AssocS_Entries_indexOf_C5D402(SF (IS_4D6DA5) entries, key);
    index = t_1;
  }

  sfUpdateLoc(144);
  IS_4D6DA5 newEntries;
  B t_2;
  {
    t_2 = Z__lt(index, Z_C(0));
  }
  if (t_2) {

    sfUpdateLoc(145);
    IS_4D6DA5 r;
    DeclNewTuple2_4DFC06(t_3);
    Tuple2_4DFC06_apply(SF &t_3, key, value);
    DeclNewIS_4D6DA5(t_4);
    IS_4D6DA5__append(SF (IS_4D6DA5) &t_4, entries, (Tuple2_4DFC06) (&t_3));
    r = (IS_4D6DA5) ((IS_4D6DA5) &t_4);
    newEntries = (IS_4D6DA5) r;
  } else {

    sfUpdateLoc(157);
    IS_4D6DA5 r;
    DeclNewIS_4D6DA5(t_5);
    Type_assign(&t_5, entries, sizeof(struct IS_4D6DA5));
    DeclNewTuple2_A29DBA(t_6);
    Tuple2_A29DBA_apply(SF &t_6, index, p);
    IS_4D6DA5_up(&t_5, Tuple2_A29DBA_1((&t_6)), (Tuple2_4DFC06) Tuple2_A29DBA_2((&t_6)));
    r = (IS_4D6DA5) (&t_5);
    newEntries = (IS_4D6DA5) r;
  }
  Type_assign(result, newEntries, sizeof(struct IS_4D6DA5));
  return;
}

Z AssocS_Entries_indexOf_C5D402(STACK_FRAME IS_4D6DA5 entries, Z key) {
  DeclNewStackFrame(caller, "AssocS.scala", "org.sireum.AssocS.Entries", "indexOf", 0);

  sfUpdateLoc(195);
  Z index;
  {
    index = Z_C(-1);
  }

  sfUpdateLoc(196);
  Z i;
  {
    i = Z_C(0);
  }

  sfUpdateLoc(197);
  B t_197_7;
  {
    Z t_0 = IS_4D6DA5_size(SF entries);
    t_197_7 = Z__lt(i, t_0);
  }
  while(t_197_7) {

    sfUpdateLoc(205);
    B t_1;
    {
      t_1 = Z__eq(Tuple2_4DFC06_1(IS_4D6DA5_at(entries, i)), key);
    }
    if (t_1) {

      sfUpdateLoc(206);
      {
        index = i;
      }

      sfUpdateLoc(207);
      {
        Z t_2 = IS_4D6DA5_size(SF entries);
        i = Z__sub(t_2, Z_C(1));
      }
    }

    sfUpdateLoc(209);
    {
      i = Z__add(i, Z_C(1));
    }

    sfUpdateLoc(197);
    Z t_3 = IS_4D6DA5_size(SF entries);
    t_197_7 = Z__lt(i, t_3);
  }
  return index;
}

void AssocS_Entries_keys_2CCAEB(STACK_FRAME IS_948B60 result, IS_588B23 entries) {
  DeclNewStackFrame(caller, "AssocS.scala", "org.sireum.AssocS.Entries", "keys", 0);

  sfUpdateLoc(85);
  DeclNewIS_948B60(_r);
  IS_948B60 r = (IS_948B60) &_r;
  {
    STATIC_ASSERT(0 <= MaxIS_948B60, "Insufficient maximum for IS[Z, String] elements.");
    DeclNewIS_948B60(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_948B60));
  }

  sfUpdateLoc(86);
  Z i;
  {
    i = Z_C(0);
  }

  sfUpdateLoc(87);
  B t_87_7;
  {
    Z t_1 = IS_588B23_size(SF entries);
    t_87_7 = Z__lt(i, t_1);
  }
  while(t_87_7) {

    sfUpdateLoc(95);
    {
      DeclNewIS_948B60(t_2);
      IS_948B60__append(SF (IS_948B60) &t_2, r, (String) Tuple2_E0098E_1(IS_588B23_at(entries, i)));
      Type_assign(r, ((IS_948B60) &t_2), sizeof(struct IS_948B60));
    }

    sfUpdateLoc(96);
    {
      i = Z__add(i, Z_C(1));
    }

    sfUpdateLoc(87);
    Z t_3 = IS_588B23_size(SF entries);
    t_87_7 = Z__lt(i, t_3);
  }
  Type_assign(result, r, sizeof(struct IS_948B60));
  return;
}

Z AssocS_Entries_indexOf_A3E3C6(STACK_FRAME IS_588B23 entries, String key) {
  DeclNewStackFrame(caller, "AssocS.scala", "org.sireum.AssocS.Entries", "indexOf", 0);

  sfUpdateLoc(195);
  Z index;
  {
    index = Z_C(-1);
  }

  sfUpdateLoc(196);
  Z i;
  {
    i = Z_C(0);
  }

  sfUpdateLoc(197);
  B t_197_7;
  {
    Z t_0 = IS_588B23_size(SF entries);
    t_197_7 = Z__lt(i, t_0);
  }
  while(t_197_7) {

    sfUpdateLoc(205);
    B t_1;
    {
      t_1 = String__eq(Tuple2_E0098E_1(IS_588B23_at(entries, i)), key);
    }
    if (t_1) {

      sfUpdateLoc(206);
      {
        index = i;
      }

      sfUpdateLoc(207);
      {
        Z t_2 = IS_588B23_size(SF entries);
        i = Z__sub(t_2, Z_C(1));
      }
    }

    sfUpdateLoc(209);
    {
      i = Z__add(i, Z_C(1));
    }

    sfUpdateLoc(197);
    Z t_3 = IS_588B23_size(SF entries);
    t_197_7 = Z__lt(i, t_3);
  }
  return index;
}

void AssocS_Entries_remove_57396F(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 entries, Tuple2_4DFC06 p) {
  DeclNewStackFrame(caller, "AssocS.scala", "org.sireum.AssocS.Entries", "remove", 0);

  sfUpdateLoc(226);
  DeclNewIS_4D6DA5(_newEntries);
  IS_4D6DA5 newEntries = (IS_4D6DA5) &_newEntries;
  {
    STATIC_ASSERT(0 <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
    DeclNewIS_4D6DA5(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(newEntries, (&t_0), sizeof(struct IS_4D6DA5));
  }

  sfUpdateLoc(227);
  Z i;
  {
    i = Z_C(0);
  }

  sfUpdateLoc(228);
  B t_228_7;
  {
    Z t_1 = IS_4D6DA5_size(SF entries);
    t_228_7 = Z__lt(i, t_1);
  }
  while(t_228_7) {

    sfUpdateLoc(240);
    Tuple2_4DFC06 kv;
    kv = (Tuple2_4DFC06) IS_4D6DA5_at(entries, i);

    sfUpdateLoc(241);
    {
      i = Z__add(i, Z_C(1));
    }

    sfUpdateLoc(242);
    B t_2;
    {
      t_2 = Tuple2_4DFC06__ne(kv, p);
    }
    if (t_2) {

      sfUpdateLoc(243);
      {
        DeclNewIS_4D6DA5(t_3);
        IS_4D6DA5__append(SF (IS_4D6DA5) &t_3, newEntries, (Tuple2_4DFC06) kv);
        Type_assign(newEntries, ((IS_4D6DA5) &t_3), sizeof(struct IS_4D6DA5));
      }
    } else {
    }

    sfUpdateLoc(228);
    Z t_4 = IS_4D6DA5_size(SF entries);
    t_228_7 = Z__lt(i, t_4);
  }
  Type_assign(result, newEntries, sizeof(struct IS_4D6DA5));
  return;
}