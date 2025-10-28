int __fastcall sub_3A258(double a1, double *a2)
{
  double v2; // d17
  int v3; // r8
  int v4; // r7
  int v5; // r5
  int v6; // r6
  double v7; // d1
  double v8; // d0
  int v9; // r10
  double *v10; // lr
  int v11; // r4
  char *v12; // r3
  double v13; // d16
  double v14; // d18
  double v15; // d18
  bool v16; // fzf
  int result; // r0
  double v18; // d16
  int v19; // r3
  int v20; // r3
  bool v21; // cc
  int v22; // r1
  char s[128]; // [sp+30h] [bp-80h] BYREF

  v2 = *a2;
  v3 = LODWORD(a1);
  v4 = *(_DWORD *)(LODWORD(a1) + 60);
  v5 = HIDWORD(a1);
  v6 = *(_DWORD *)(v4 + 28);
  if ( *a2 == 0.0 )
  {
    v9 = 0;
    v8 = -6000.0;
  }
  else
  {
    v7 = -6000.0;
    v8 = -6000.0;
    v9 = 0;
    v10 = a2 + 4;
    LODWORD(a1) = HIDWORD(a1) + 32;
    v11 = 0;
    do
    {
      v12 = &buf[8196];
      v13 = 0.0;
      while ( 1 )
      {
        v14 = *(double *)v12;
        v12 += 8;
        ++a2;
        v13 = v13 + v14 * v2;
        if ( v12 == &buf[8228] )
          break;
        v2 = *a2;
      }
      v15 = *(double *)LODWORD(a1) + (v13 - *(double *)LODWORD(a1)) * 0.0625;
      *(double *)LODWORD(a1) = v15;
      LODWORD(a1) += 8;
      if ( v15 > v8 )
      {
        v7 = v8;
        v9 = v11;
        v8 = v15;
      }
      else if ( v15 > v7 )
      {
        v7 = v15;
      }
      a2 = v10;
      v2 = *v10;
      v16 = *v10 == 0.0;
      v10 += 4;
      ++v11;
    }
    while ( !v16 );
  }
  *(double *)(HIDWORD(a1) + 16) = v8;
  result = sub_39F88(a1);
  v18 = *(double *)(v5 + 16);
  *(double *)(v5 + 24) = v8;
  if ( v18 >= 1000.0 && v8 >= 3.0 )
  {
    v20 = *(_DWORD *)(v5 + 8);
    if ( *(_DWORD *)(v5 + 4) == v9 )
    {
      if ( v20 <= 2 )
        *(_DWORD *)(v5 + 8) = ++v20;
      if ( v20 == 3 )
      {
        v22 = *(_DWORD *)(v6 + 4308);
        result = *(_DWORD *)(v6 + 4328) | 4;
        *(_DWORD *)(v6 + 4328) = result;
        *(_DWORD *)(v6 + 4308) = v22 + 1;
      }
    }
    else
    {
      v21 = v20 <= 0;
      if ( v20 > 0 )
        --v20;
      *(_DWORD *)(v6 + 4332) |= 1u;
      if ( !v21 )
        *(_DWORD *)(v5 + 8) = v20;
      if ( !v20 )
        *(_DWORD *)(v5 + 4) = v9;
    }
  }
  else
  {
    *(_DWORD *)(v6 + 4328) |= 0x40u;
  }
  if ( (*(_BYTE *)(v4 + 752) & 8) != 0 )
  {
    v19 = *(_DWORD *)(v6 + 4328);
    if ( (v19 & 8) == 0 )
    {
      sprintf(
        s,
        "wwv4 %2d %04x %3d %4d %5.0f %2d %d %d %d %5.0f %5.1f",
        *(_DWORD *)(v6 + 4304) - 1,
        v19,
        *(_DWORD *)(v6 + 2116),
        *(_DWORD *)(v6 + 2132),
        *(double *)(v6 + 2144),
        *(_DWORD *)v5,
        *(_DWORD *)(v5 + 4),
        v9,
        *(_DWORD *)(v5 + 8),
        v18,
        *(double *)(v5 + 24));
      result = sub_2DDBC(v3 + 12, s);
      if ( dword_7CF4C )
        return puts(s);
    }
  }
  return result;
}
