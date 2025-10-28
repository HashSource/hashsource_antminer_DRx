int __fastcall sub_16DA4(unsigned __int64 a1, char *s, size_t maxlen, int a4)
{
  __int16 v6; // r3
  double v7; // d8
  int v9; // r1
  double v10; // r0
  char v11[8]; // [sp+1Ch] [bp-8h] BYREF

  *(_WORD *)v11 = 0;
  if ( a1 > 0xDE0B6B3A763FFFFLL )
  {
    LODWORD(a1) = sub_4A118(a1, HIDWORD(a1), -1530494976, 232830);
    v6 = 69;
    goto LABEL_3;
  }
  if ( a1 > 0x38D7EA4C67FFFLL )
  {
    LODWORD(a1) = sub_4A118(a1, HIDWORD(a1), -727379968, 232);
    v6 = 80;
    goto LABEL_3;
  }
  if ( a1 > 0xE8D4A50FFFLL )
  {
    LODWORD(a1) = sub_4A118(a1, HIDWORD(a1), 1000000000, 0);
    v6 = 84;
    goto LABEL_3;
  }
  if ( a1 > 0x3B9AC9FF )
  {
    LODWORD(a1) = sub_4A118(a1, HIDWORD(a1), 1000000, 0);
    v6 = 71;
LABEL_3:
    *(_WORD *)v11 = v6;
    v7 = (double)(int)a1 / 1000.0;
    if ( !a4 )
      return snprintf(s, maxlen, "%.3g%s", v7, v11);
    goto LABEL_9;
  }
  if ( a1 > 0xF423F )
  {
    LODWORD(a1) = sub_4A118(a1, HIDWORD(a1), 1000, 0);
    v6 = 77;
    goto LABEL_3;
  }
  v7 = (double)(int)a1;
  if ( a1 < 0x3E8 )
  {
    if ( !a4 )
      return snprintf(s, maxlen, "%d%s", (_DWORD)a1, v11);
  }
  else
  {
    *(_WORD *)v11 = 75;
    v7 = v7 / 1000.0;
    if ( !a4 )
      return snprintf(s, maxlen, "%.3g%s", v7, v11);
  }
LABEL_9:
  if ( v7 > 0.0 )
  {
    v10 = log10(*(double *)&a1);
    floor(v10);
    v9 = (int)(3.0 - v7);
  }
  else
  {
    v9 = 3;
  }
  return snprintf(s, maxlen, "%*.*f%s", a4 + 1, v9, v7, v11);
}
