void __fastcall sub_40BB0(int a1, size_t a2)
{
  int v2; // r5
  int v4; // r4
  int v5; // r6
  char *v6; // r9
  int v7; // r8
  int v8; // r1
  int v9; // r10
  int v10; // r5
  int v11; // r12
  int i; // r3
  int v13; // r2
  double v14; // d8
  int v15; // r3
  int v16; // r2
  int v17; // r12
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r12
  char *v21; // r2
  int v22; // r5
  int v23; // r3
  int v24; // r1
  int v25; // r6
  int v26; // r3
  int v27; // r12
  int v28; // r1
  int v29; // r3
  int v30; // [sp+44h] [bp-20h]
  unsigned int v31; // [sp+48h] [bp-1Ch]
  int v32; // [sp+4Ch] [bp-18h]
  char v33; // [sp+50h] [bp-14h] BYREF
  char v34; // [sp+53h] [bp-11h] BYREF
  int s; // [sp+54h] [bp-10h] BYREF
  unsigned int v36; // [sp+58h] [bp-Ch]
  char v37; // [sp+5Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(v2 + 28);
  v5 = (*(_DWORD *)(v4 + 912) + 1) % 60;
  *(_DWORD *)(v4 + 912) = v5;
  if ( !v5 )
  {
    v6 = &v34;
    sub_4010C(a2);
    v32 = v2;
    v30 = *(_DWORD *)(a2 + 60);
    v8 = *(_DWORD *)(v30 + 28);
    v7 = v8;
    v31 = (dword_CB548 + 30 - *(_DWORD *)(a2 + 504)) / 0x3Cu;
    v9 = *(_DWORD *)(v8 + 1128);
    do
    {
      v10 = 0;
      v11 = 0;
      for ( i = 0; i != 16; ++i )
      {
        v13 = *(unsigned __int8 *)(v8 + i) + *(unsigned __int8 *)(v8 + 160 + i);
        if ( v13 > v11 )
          v10 = i;
        if ( v13 > v11 )
          v11 = v13;
      }
      v5 += v11;
      if ( v9 >= v11 )
        i = *(_DWORD *)(v7 + 920);
      v8 += 16;
      if ( v9 >= v11 )
        *(_DWORD *)(v7 + 920) = i | 0x40;
      *++v6 = a0123456789abcd_0[v10];
    }
    while ( v6 != &v37 );
    v14 = (double)v5;
    if ( sscanf((const char *)&s, "%1x%3d%2d%2d", &v33, v30 + 176, v30 + 180, v30 + 184) != 4 )
      *(_DWORD *)(v7 + 920) |= 0x40u;
    if ( *(int *)(v7 + 1108) <= 19 )
      *(_DWORD *)(v7 + 920) |= 0x80u;
    v15 = *(_DWORD *)(v4 + 920);
    v16 = (v15 & 0x14) != 0;
    if ( (v15 & 0x28) != 0 )
      v16 = (unsigned __int8)v16 | 2;
    if ( (v15 & 0x40) != 0 )
      v16 |= 4u;
    if ( (v15 & 0x80) != 0 )
      v16 |= 8u;
    if ( (v15 & 0x200) != 0 && v14 >= 50.0 )
    {
      v15 |= 0x400u;
      *(_DWORD *)(v4 + 920) = v15;
    }
    if ( (v15 & 0x400) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 1148) & 2) != 0 )
      {
        v17 = 76;
        *(_BYTE *)(v32 + 32) = 1;
        v18 = 32;
      }
      else
      {
        v29 = *(_DWORD *)(v4 + 1148) & 4;
        if ( v29 )
        {
          v17 = 108;
          *(_BYTE *)(v32 + 32) = 2;
        }
        else
        {
          *(_BYTE *)(v32 + 32) = 0;
          v17 = 32;
        }
        if ( v29 )
          v18 = 32;
        else
          v18 = v17;
      }
    }
    else
    {
      v17 = 32;
      *(_BYTE *)(v32 + 32) = 3;
      v18 = 63;
    }
    snprintf(
      (char *)(v32 + 40),
      0x80u,
      "%c%1X %04d %03d %02d:%02d:%02d %c%x %+d %d %d %s %.0f %d",
      v18,
      v16,
      *(_DWORD *)(v32 + 172),
      *(_DWORD *)(v32 + 176),
      *(_DWORD *)(v32 + 180),
      *(_DWORD *)(v32 + 184),
      *(_DWORD *)(v32 + 188),
      v17,
      *(_DWORD *)(v4 + 1160),
      *(_DWORD *)(v4 + 1152),
      v31,
      *(_DWORD *)(v4 + 1144),
      (const char *)(v4 + 924),
      v14,
      *(_DWORD *)(v4 + 1108));
    *(_DWORD *)(v32 + 168) = strlen((const char *)(v32 + 40));
    if ( (*(_DWORD *)(v4 + 920) & 0x4C0) == 0x400 && v14 > 50.0 )
    {
      v25 = 0;
      if ( sub_4EFC8(
             *(_DWORD *)(v32 + 176),
             *(_DWORD *)(v32 + 180),
             *(_DWORD *)(v32 + 184),
             0,
             0,
             *(_DWORD *)(v4 + 408),
             v32 + 196,
             &s) )
      {
        v36 = 0;
        if ( *(int *)(v4 + 1108) > 0 )
        {
          do
          {
            v26 = v25 + 51;
            v27 = v4 + 8 * (v25 + 51);
            ++v25;
            sub_27430((_DWORD *)v32, s, v36, *(_DWORD *)(v4 + 8 * v26), *(_DWORD *)(v27 + 4));
          }
          while ( *(_DWORD *)(v4 + 1108) > v25 );
        }
        v28 = *(_DWORD *)(v4 + 892);
        *(_DWORD *)(v32 + 208) = *(_DWORD *)(v4 + 888);
        *(_DWORD *)(v32 + 212) = v28;
        sub_276A0(a2);
      }
      else
      {
        *(_DWORD *)(v4 + 916) = 6;
      }
    }
    if ( v14 > 0.0 )
      sub_2DDBC(a2 + 12, (const char *)(v32 + 40));
    if ( dword_7CF4C )
      printf("chu: timecode %d %s\n", *(_DWORD *)(v32 + 168), (const char *)(v32 + 40));
    sub_409D0(a2);
    v19 = 0;
    v20 = *(_DWORD **)(*(_DWORD *)(a2 + 60) + 28);
    v21 = (char *)v20 + 15;
    v22 = v20[230];
    v20[279] = 0;
    v20[278] = 0;
    v20[230] = v22 & 0xC00;
    v20[277] = 0;
    v20[282] = 0;
    do
    {
      v23 = (int)&v20[4 * v19 - 1] + 3;
      do
        *(_BYTE *)++v23 = 0;
      while ( v21 != (char *)v23 );
      ++v19;
      v21 += 16;
    }
    while ( v19 != 20 );
    v24 = *(_DWORD *)(v4 + 916);
    if ( v24 )
      sub_27040(a2, v24);
    *(_DWORD *)(v4 + 916) = 0;
  }
}
