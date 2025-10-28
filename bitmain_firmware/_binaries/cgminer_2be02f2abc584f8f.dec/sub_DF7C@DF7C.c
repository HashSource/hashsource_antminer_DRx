int __fastcall sub_DF7C(unsigned __int64 a1, char *a2, size_t a3, int a4)
{
  __int64 v6; // r0
  double v7; // r0
  double v8; // d8
  __int64 v9; // r0
  __int64 v10; // r0
  __int64 v11; // r0
  __int64 v12; // r0
  double v14; // d0
  double v15; // r0
  __int16 v16; // [sp+1Ch] [bp-4h] BYREF

  v16 = 0;
  if ( a1 > 0xDE0B6B3A763FFFFLL )
  {
    v6 = sub_5A464(a1, HIDWORD(a1), -1530494976, 232830);
    v7 = sub_5A3F0(v6, HIDWORD(v6));
    v8 = v7 / 1000.0;
    v16 = 69;
    goto LABEL_21;
  }
  if ( a1 > 0x38D7EA4C67FFFLL )
  {
    v9 = sub_5A464(a1, HIDWORD(a1), -727379968, 232);
    v7 = sub_5A3F0(v9, HIDWORD(v9));
    v8 = v7 / 1000.0;
    v16 = 80;
    goto LABEL_21;
  }
  if ( a1 > 0xE8D4A50FFFLL )
  {
    v10 = sub_5A464(a1, HIDWORD(a1), 1000000000, 0);
    v7 = sub_5A3F0(v10, HIDWORD(v10));
    v8 = v7 / 1000.0;
    v16 = 84;
    goto LABEL_21;
  }
  if ( a1 > 0x3B9AC9FF )
  {
    v11 = sub_5A464(a1, HIDWORD(a1), 1000000, 0);
    v7 = sub_5A3F0(v11, HIDWORD(v11));
    v8 = v7 / 1000.0;
    v16 = 71;
    goto LABEL_21;
  }
  if ( a1 > 0xF423F )
  {
    v12 = sub_5A464(a1, HIDWORD(a1), 1000, 0);
    v7 = sub_5A3F0(v12, HIDWORD(v12));
    v8 = v7 / 1000.0;
    v16 = 77;
    goto LABEL_21;
  }
  if ( a1 > 0x3E7 )
  {
    v7 = sub_5A3F0(a1, HIDWORD(a1));
    v8 = v7 / 1000.0;
    v16 = 75;
LABEL_21:
    if ( !a4 )
      return snprintf(a2, a3, "%.3g%s", v8, (const char *)&v16);
    goto LABEL_17;
  }
  v7 = sub_5A3F0(a1, HIDWORD(a1));
  v8 = v7;
  if ( !a4 )
    return snprintf(a2, a3, "%d%s", (unsigned int)v7, (const char *)&v16);
LABEL_17:
  if ( v8 <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v14 = v8;
    v15 = log10(v7);
    floor(v15);
  }
  return snprintf(a2, a3, "%*.*f%s", a4 + 1, (int)((double)(a4 - 1) - v14), v8, (const char *)&v16);
}
