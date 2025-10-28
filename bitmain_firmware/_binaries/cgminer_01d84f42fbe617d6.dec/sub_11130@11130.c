int __fastcall sub_11130(unsigned __int64 a1, char *a2, size_t a3, int a4)
{
  int v6; // r0
  double v7; // r0
  double v8; // d8
  bool v10; // cf
  int v11; // r0
  double v12; // d0
  double v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  __int16 v17; // [sp+1Ch] [bp-4h] BYREF

  v17 = 0;
  if ( a1 > 0xDE0B6B3A763FFFFLL )
  {
    v6 = sub_4943C(a1, HIDWORD(a1), -1530494976, (char *)&loc_38D7C + 2);
    v7 = sub_493C8(v6);
    v17 = 69;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  v10 = (unsigned int)&loc_38D7C + 2 >= HIDWORD(a1);
  if ( (_UNKNOWN *)((char *)&loc_38D7C + 2) == (_UNKNOWN *)HIDWORD(a1) )
    v10 = (unsigned int)a1 <= 0xA4C67FFF;
  if ( !v10 )
  {
    v11 = sub_4943C(a1, HIDWORD(a1), -727379968, 232);
    v7 = sub_493C8(v11);
    v17 = 80;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0xE8D4A50FFFLL )
  {
    v15 = sub_4943C(a1, HIDWORD(a1), 1000000000, 0);
    v7 = sub_493C8(v15);
    v17 = 84;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0x3B9AC9FF )
  {
    v14 = sub_4943C(a1, HIDWORD(a1), 1000000, 0);
    v7 = sub_493C8(v14);
    v17 = 71;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0xF423F )
  {
    v16 = sub_4943C(a1, HIDWORD(a1), 1000, 0);
    v7 = sub_493C8(v16);
    v17 = 77;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0x3E7 )
  {
    v7 = ((double (*)(void))sub_493C8)();
    v17 = 75;
    v8 = v7 / 1000.0;
LABEL_3:
    if ( !a4 )
      return snprintf(a2, a3, "%.3g%s", v8, (const char *)&v17);
    goto LABEL_9;
  }
  v7 = COERCE_DOUBLE(((__int64 (*)(void))sub_493C8)());
  v8 = v7;
  if ( !a4 )
    return snprintf(a2, a3, "%d%s", (unsigned int)v7, (const char *)&v17);
LABEL_9:
  if ( v8 <= 0.0 )
  {
    v12 = 0.0;
  }
  else
  {
    v12 = v8;
    v13 = log10(v7);
    floor(v13);
  }
  return snprintf(a2, a3, "%*.*f%s", a4 + 1, (int)((double)(a4 - 1) - v12), v8, (const char *)&v17);
}
