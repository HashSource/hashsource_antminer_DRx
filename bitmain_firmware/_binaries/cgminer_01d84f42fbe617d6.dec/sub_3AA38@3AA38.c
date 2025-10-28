int __fastcall sub_3AA38(unsigned __int64 a1, char *a2, int a3, char a4)
{
  int v6; // r0
  double v7; // r0
  double v8; // d8
  int v10; // r0
  double v11; // d0
  double v12; // r0
  int v13; // r3
  int v14; // [sp+0h] [bp-20h]
  __int16 v15; // [sp+1Ch] [bp-4h] BYREF

  v15 = 0;
  if ( a1 > 0x3B9AC9FF )
  {
    v6 = sub_4943C(a1, HIDWORD(a1), 1000000, 0);
    v7 = sub_493C8(v6);
    v15 = 71;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0xF423F )
  {
    v10 = sub_4943C(a1, HIDWORD(a1), 1000, 0);
    v7 = sub_493C8(v10);
    v15 = 77;
    v8 = v7 / 1000.0;
    goto LABEL_3;
  }
  if ( a1 > 0x3E7 )
  {
    v7 = sub_493C8(a1);
    v15 = 75;
    v8 = v7 / 1000.0;
LABEL_3:
    if ( !a3 )
      return snprintf(a2, 0x10u, "%.3g%s", v8, (const char *)&v15);
    goto LABEL_7;
  }
  v7 = sub_493C8(a1);
  v8 = v7;
  if ( !a3 )
    return snprintf(a2, 0x10u, "%d%s", (unsigned int)v7, (const char *)&v15);
LABEL_7:
  if ( v8 <= 0.0 )
  {
    v11 = 0.0;
  }
  else
  {
    v11 = v8;
    v12 = log10(v7);
    floor(v12);
  }
  v13 = a3 + 1;
  v14 = (int)((double)(a3 - 1) - v11);
  if ( a4 )
    return snprintf(a2, 0x10u, "%*.*f%s", v13, v14, v8, (const char *)&v15);
  else
    return snprintf(a2, 0x10u, "%*.*f", v13, v14, v8);
}
