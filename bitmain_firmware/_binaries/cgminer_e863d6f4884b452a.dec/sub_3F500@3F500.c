int __fastcall sub_3F500(double a1, char *s, size_t maxlen, int a4, char a5)
{
  __int64 v7; // r0
  double v8; // d9
  double v10; // d8
  int v11; // r3
  int v12; // s16
  double v13; // r0
  char v14[8]; // [sp+1Ch] [bp-8h] BYREF

  *(_WORD *)v14 = 0;
  if ( *(_QWORD *)&a1 <= 0x3B9AC9FFu )
  {
    if ( *(_QWORD *)&a1 <= 0xF423Fu )
    {
      v8 = (double)SLODWORD(a1);
      if ( *(_QWORD *)&a1 < 0x3E8u )
      {
        if ( !a4 )
          return snprintf(s, maxlen, "%d%s", LODWORD(a1), v14);
      }
      else
      {
        *(_WORD *)v14 = 75;
        v8 = v8 / 1000.0;
        if ( !a4 )
          return snprintf(s, maxlen, "%.3g%s", v8, v14);
      }
    }
    else
    {
      a1 = COERCE_DOUBLE(sub_4A118(LODWORD(a1), HIDWORD(a1), 1000, 0));
      *(_WORD *)v14 = 77;
      v8 = (double)SLODWORD(a1) / 1000.0;
      if ( !a4 )
        return snprintf(s, maxlen, "%.3g%s", v8, v14);
    }
  }
  else
  {
    v7 = sub_4A118(LODWORD(a1), HIDWORD(a1), 1000000, 0);
    a1 = sub_4A0AC(v7, HIDWORD(v7));
    *(_WORD *)v14 = 71;
    v8 = a1 / 1000.0;
    if ( !a4 )
      return snprintf(s, maxlen, "%.3g%s", v8, v14);
  }
  v10 = (double)(a4 - 1);
  if ( v8 > 0.0 )
  {
    v13 = log10(a1);
    floor(v13);
    v11 = a4 + 1;
    v12 = (int)(v10 - v8);
    if ( !a5 )
      return snprintf(s, maxlen, "%*.*f", v11, v12, v8);
  }
  else
  {
    v11 = a4 + 1;
    v12 = (int)v10;
    if ( !a5 )
      return snprintf(s, maxlen, "%*.*f", v11, v12, v8);
  }
  return snprintf(s, maxlen, "%*.*f%s", v11, v12, v8, v14);
}
