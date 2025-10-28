int __fastcall sub_4C75C(unsigned __int64 a1, char *a2, size_t a3, int a4, char a5)
{
  __int64 v7; // r0
  double v8; // r0
  double v9; // d8
  __int64 v10; // r0
  double v12; // d0
  double v13; // r0
  __int16 v14; // [sp+1Ch] [bp-4h] BYREF

  v14 = 0;
  if ( a1 > 0x3B9AC9FF )
  {
    v7 = sub_5A464(a1, HIDWORD(a1), 1000000, 0);
    v8 = sub_5A3F0(v7, HIDWORD(v7));
    v9 = v8 / 1000.0;
    v14 = 71;
    goto LABEL_17;
  }
  if ( a1 > 0xF423F )
  {
    v10 = sub_5A464(a1, HIDWORD(a1), 1000, 0);
    v8 = sub_5A3F0(v10, HIDWORD(v10));
    v9 = v8 / 1000.0;
    v14 = 77;
    goto LABEL_17;
  }
  if ( a1 > 0x3E7 )
  {
    v8 = sub_5A3F0(a1, HIDWORD(a1));
    v9 = v8 / 1000.0;
    v14 = 75;
LABEL_17:
    if ( !a4 )
      return snprintf(a2, a3, "%.3g%s", v9, (const char *)&v14);
    goto LABEL_11;
  }
  v8 = sub_5A3F0(a1, HIDWORD(a1));
  v9 = v8;
  if ( !a4 )
    return snprintf(a2, a3, "%d%s", (unsigned int)v8, (const char *)&v14);
LABEL_11:
  if ( v9 <= 0.0 )
  {
    v12 = 0.0;
  }
  else
  {
    v12 = v9;
    v13 = log10(v8);
    floor(v13);
  }
  if ( a5 )
    return snprintf(a2, a3, "%*.*f%s", a4 + 1, (int)((double)(a4 - 1) - v12), v9, (const char *)&v14);
  else
    return snprintf(a2, a3, "%*.*f", a4 + 1, (int)((double)(a4 - 1) - v12), v9);
}
