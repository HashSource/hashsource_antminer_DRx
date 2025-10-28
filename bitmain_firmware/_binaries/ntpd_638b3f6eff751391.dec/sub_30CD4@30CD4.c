int __fastcall sub_30CD4(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r7
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r3
  char v12; // r12
  char v13; // r2
  int v14; // r7
  int v16; // r0
  int v17; // r11
  int v18; // r3
  int v19; // r7
  int v20; // r8
  int v21; // r12
  double v22; // d8
  double v23; // d11
  double v24; // d10
  double v25; // d9
  const char *v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // [sp+54h] [bp-28h]
  int v33; // [sp+58h] [bp-24h]
  int v34; // [sp+5Ch] [bp-20h]
  int v35; // [sp+60h] [bp-1Ch]
  int v36; // [sp+64h] [bp-18h]
  char v37; // [sp+68h] [bp-14h] BYREF
  int v38; // [sp+6Ch] [bp-10h] BYREF
  char v39; // [sp+70h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 60);
  v4 = *(_DWORD *)(v2 + 28);
  v5 = *(int *)(v4 + 3224) >> 1;
  *(_DWORD *)(v4 + 3224) = v5;
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(v4 + 3216);
    *(_DWORD *)(v4 + 3224) = v5 | 0x200;
LABEL_22:
    v7 = v6 % 10;
    goto LABEL_4;
  }
  if ( a2 != 2 )
  {
    v6 = *(_DWORD *)(v4 + 3216);
    v7 = v6 % 10;
LABEL_4:
    *(_DWORD *)(v4 + 3204) = a2;
    if ( v7 )
      goto LABEL_10;
    v8 = *(_DWORD *)(v4 + 3224);
    v9 = *(_DWORD *)(v4 + 3220);
    if ( v6 == 10 )
      v8 >>= 1;
    if ( v9 > 1 )
    {
      v10 = v4 + v9;
      v11 = v9 - 2;
      *(_DWORD *)(v4 + 3220) = v11;
      v12 = a0123456789abcd_2[v8 & 0xF];
      v13 = a0123456789abcd_2[((unsigned int)v8 >> 5) & 0xF];
      *(_BYTE *)(v10 - 1) = v12;
      *(_BYTE *)(v4 + v11) = v13;
    }
    if ( v6 )
      goto LABEL_10;
    *(_DWORD *)(v4 + 3220) = 20;
    v16 = sscanf(
            (const char *)v4,
            "%6s%2d%1d%2s%3d%2d%2d%2d",
            &v39,
            v2 + 172,
            &v38,
            &v37,
            v2 + 176,
            v2 + 180,
            v2 + 184,
            v2 + 188);
    v17 = *(_DWORD *)(v2 + 176);
    if ( v16 == 8 )
      *(_BYTE *)(v2 + 32) = 0;
    else
      *(_BYTE *)(v2 + 32) = 3;
    v18 = (*(_DWORD *)(v4 + 3208) + *(_DWORD *)(v4 + 3160)) % 60;
    *(_DWORD *)(v4 + 3208) = v18;
    if ( v17 && (!*(_DWORD *)(v2 + 172) || v38) )
    {
      v19 = *(_DWORD *)(v4 + 768);
    }
    else
    {
      v19 = *(_DWORD *)(v4 + 768) | 0x80;
      *(_DWORD *)(v4 + 768) = v19;
    }
    v20 = *(_DWORD *)(v2 + 188);
    if ( v18 == v20 )
    {
      *(_DWORD *)(v4 + 3208) = v20;
      if ( !v19 )
      {
        v21 = *(_DWORD *)(v4 + 3180);
        if ( v21 == 10 )
        {
          v30 = *(_DWORD *)(v2 + 220);
          *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
          *(_DWORD *)(v2 + 212) = v30;
          v31 = *(_DWORD *)(v4 + 44);
          *(_DWORD *)(v2 + 216) = *(_DWORD *)(v4 + 40);
          *(_DWORD *)(v2 + 220) = v31;
          if ( !sub_27698((_DWORD *)v2) )
            sub_27040(a1, 6);
          v19 = *(_DWORD *)(v4 + 768);
          v21 = *(_DWORD *)(v4 + 3180);
          v17 = *(_DWORD *)(v2 + 176);
          v20 = *(_DWORD *)(v2 + 188);
        }
        goto LABEL_19;
      }
    }
    else
    {
      v19 |= 0x20u;
      *(_DWORD *)(v4 + 3208) = v20;
      *(_DWORD *)(v4 + 768) = v19;
    }
    v21 = *(_DWORD *)(v4 + 3180);
LABEL_19:
    v22 = *(double *)(v4 + 712);
    v23 = *(double *)(v4 + 736) * 1000000.0;
    v24 = *(double *)(v4 + 3000);
    v33 = *(_DWORD *)(v2 + 172);
    v25 = *(double *)(v4 + 744);
    v34 = *(_DWORD *)(v2 + 180);
    v35 = *(_DWORD *)(v2 + 184);
    v36 = *(_DWORD *)(v4 + 2836);
    v32 = v21;
    v26 = (const char *)sub_4F124(*(_DWORD *)(v2 + 216), *(_DWORD *)(v2 + 220), 0, 6, 0);
    snprintf(
      (char *)(v2 + 40),
      0x80u,
      "%02x %02d %03d %02d:%02d:%02d %4.0f %3d %6.3f %2d %6.2f %6.1f %s",
      v19,
      v33,
      v17,
      v34,
      v35,
      v20,
      v24,
      v36,
      v25,
      v32,
      v23 / 8000.0,
      v22 * 1000000.0 / 8000.0,
      v26);
    *(_DWORD *)(v2 + 168) = strlen((const char *)(v2 + 40));
    *(_DWORD *)(v4 + 768) = 0;
    if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
    {
      sub_2DDBC(a1 + 12, (const char *)(v2 + 40));
      if ( dword_7CF4C )
        printf("irig %s\n", (const char *)(v2 + 40));
    }
    v6 = *(_DWORD *)(v4 + 3216);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v4 + 3204) != 2 )
  {
    v6 = *(_DWORD *)(v4 + 3216);
    goto LABEL_22;
  }
  v27 = *(_DWORD *)(v4 + 3216);
  v6 = 1;
  v28 = *(_DWORD *)(v4 + 56);
  v29 = *(_DWORD *)(v4 + 60);
  *(_DWORD *)(v4 + 3204) = 2;
  if ( v27 != 1 )
    *(_DWORD *)(v4 + 768) |= 8u;
  *(_DWORD *)(v4 + 40) = v28;
  *(_DWORD *)(v4 + 44) = v29;
LABEL_10:
  v14 = v6 + 1;
  *(_DWORD *)(v4 + 3216) = v14 % 100;
  return 1374389535 * v14;
}
