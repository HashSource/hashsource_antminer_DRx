int __fastcall sub_39FE8(double a1, int a2)
{
  double v2; // d16
  double v3; // d17
  bool v4; // fzf
  bool v5; // fnf
  int v6; // r5
  double v7; // d17
  double v8; // kr00_8
  int *v9; // r7
  int v10; // r4
  int v11; // r2
  int v12; // r3
  double v13; // d16
  double v14; // d0
  int v15; // r2
  double v16; // d16
  int v17; // r3
  int v18; // r2
  double v19; // d18
  double v20; // d17
  char s[128]; // [sp+28h] [bp-80h] BYREF

  v2 = *(double *)(HIDWORD(a1) + 40);
  v3 = *(double *)(HIDWORD(a1) + 8);
  v4 = v2 == v3;
  v5 = v2 < v3;
  v6 = *(_DWORD *)(LODWORD(a1) + 60);
  v7 = *(double *)(HIDWORD(a1) + 16);
  v8 = a1;
  v9 = *(int **)(v6 + 28);
  v10 = v9[549];
  v11 = v10 - a2;
  v12 = v11 - 6400;
  if ( v11 - 6400 < 0 )
    v12 = v11 + 473600;
  if ( !v5 && !v4 )
    *(double *)(HIDWORD(a1) + 8) = v2;
  v13 = v2 + v7;
  if ( !v5 && !v4 )
    *(_DWORD *)(HIDWORD(a1) + 24) = v12;
  *(double *)(HIDWORD(a1) + 16) = v13;
  if ( !v10 )
  {
    v14 = *(double *)(HIDWORD(a1) + 8);
    *(double *)(HIDWORD(a1) + 56) = v14;
    LODWORD(a1) = sub_39F88(a1);
    v15 = *(_DWORD *)(HIDWORD(v8) + 84);
    HIDWORD(a1) = *(_DWORD *)(HIDWORD(v8) + 24);
    if ( !v15 )
    {
      LODWORD(a1) = 0;
      *(_DWORD *)(HIDWORD(v8) + 28) = HIDWORD(a1);
    }
    *(double *)(HIDWORD(v8) + 64) = v14;
    if ( v15 )
      LODWORD(a1) = (HIDWORD(a1) - *(_DWORD *)(HIDWORD(v8) + 28)) % 480000;
    v16 = *(double *)(HIDWORD(v8) + 56);
    v17 = 2 * *(_DWORD *)(HIDWORD(v8) + 80);
    *(_DWORD *)(HIDWORD(v8) + 80) = v17;
    if ( (v17 & 0x40) != 0 )
      *(_DWORD *)(HIDWORD(v8) + 84) = v15 - 1;
    if ( v16 > 2500.0 && v14 > 20.0 )
    {
      if ( (unsigned int)(LODWORD(a1) + 159) > 0x13E )
      {
        if ( *(_DWORD *)(HIDWORD(v8) + 84) == 1 )
          *(_DWORD *)(HIDWORD(v8) + 28) = HIDWORD(a1);
      }
      else
      {
        v18 = *(_DWORD *)(HIDWORD(v8) + 84);
        *(_DWORD *)(HIDWORD(v8) + 28) = HIDWORD(a1);
        *(_DWORD *)(HIDWORD(v8) + 80) = v17 | 1;
        *(_DWORD *)(HIDWORD(v8) + 32) = HIDWORD(a1);
        *(_DWORD *)(HIDWORD(v8) + 84) = v18 + 1;
      }
    }
    if ( v9[14] > 6 )
    {
      *(_QWORD *)(HIDWORD(v8) + 72) = 0;
      if ( (*(_BYTE *)(v6 + 752) & 8) == 0 )
      {
LABEL_25:
        *(_QWORD *)(HIDWORD(v8) + 16) = 0;
        *(_QWORD *)(HIDWORD(v8) + 8) = 0;
        return LODWORD(a1);
      }
    }
    else
    {
      v19 = (double)*(int *)(HIDWORD(v8) + 84);
      v20 = v19 * 6000.0;
      if ( v16 < 6000.0 )
        v20 = v16 + v20;
      else
        v19 = 5999.0;
      if ( v16 >= 6000.0 )
        v20 = v20 + v19;
      *(double *)(HIDWORD(v8) + 72) = v20 / 42000.0 * 100.0;
      if ( (*(_BYTE *)(v6 + 752) & 8) == 0 )
        goto LABEL_25;
    }
    sprintf(
      s,
      "wwv8 %04x %3d %s %04x %.0f %.0f/%.1f %ld %ld",
      v9[1082],
      v9[529],
      (const char *)(HIDWORD(v8) + 92),
      *(unsigned __int16 *)(HIDWORD(v8) + 80),
      *(double *)(HIDWORD(v8) + 72),
      v16,
      v14,
      SHIDWORD(a1) % 8000,
      LODWORD(a1));
    LODWORD(a1) = sub_2DDBC(LODWORD(v8) + 12, s);
    if ( dword_7CF4C )
      LODWORD(a1) = puts(s);
    goto LABEL_25;
  }
  return LODWORD(a1);
}
