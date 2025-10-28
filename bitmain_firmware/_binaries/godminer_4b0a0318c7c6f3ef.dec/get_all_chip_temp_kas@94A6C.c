int __fastcall get_all_chip_temp_kas(int a1)
{
  int v2; // r5
  char *v3; // r4
  char *v4; // r3
  char *v5; // r12
  unsigned int v6; // r2
  unsigned int v7; // r1
  int v8; // r2
  __int16 v9; // r1
  int v10; // r0
  bool v11; // zf
  double *v12; // r1
  char *v13; // r2
  unsigned __int8 *v14; // r6
  __int64 *v15; // r7
  const char *v16; // r10
  const char *v17; // r9
  unsigned __int8 *v18; // r11
  unsigned __int8 *v19; // r4
  __int64 *v20; // r8
  int v21; // r5
  __int64 v22; // d7
  int v23; // t1
  size_t v24; // r1
  char *v25; // r0
  int v26; // r1
  int v27; // r0
  const void *v28; // r9
  const char *v29; // r8
  FILE *v30; // r5
  __int64 v31; // r2
  int v34; // r1
  int v35; // r0
  int v36; // [sp+4h] [bp-B78h]
  _DWORD v37[5]; // [sp+18h] [bp-B64h] BYREF
  _DWORD v38[4]; // [sp+2Ch] [bp-B50h] BYREF
  _BYTE s[92]; // [sp+3Ch] [bp-B40h] BYREF
  _DWORD v40[697]; // [sp+98h] [bp-AE4h] BYREF

  memset(s, 0, sizeof(s));
  v37[4] = 0;
  v37[2] = 0;
  v37[1] = -2147424757;
  v37[3] = 7077889;
  (*(void (__fastcall **)(int))(a1 + 276))(a1);
  v2 = *(_DWORD *)(a1 + 352);
  v3 = (char *)malloc(12 * v2);
  v38[0] = 0;
  v38[1] = 0;
  v38[3] = 0;
  v38[2] = 7340033;
  (*(void (__fastcall **)(int, _DWORD *, int, char *, _DWORD *))(a1 + 296))(a1, v38, v2, v3, v37);
  usleep((__useconds_t)&stru_186A0);
  (*(void (__fastcall **)(int, _DWORD *, int, char *, _DWORD *, int, int, _DWORD))(a1 + 296))(
    a1,
    v38,
    v2,
    v3,
    v37,
    v36,
    2000,
    0);
  if ( v37[0] > 0 )
  {
    v4 = v3;
    v5 = &v3[12 * v37[0]];
    do
    {
      v6 = (unsigned __int8)v4[4];
      v7 = *(_DWORD *)v4;
      v4 += 12;
      v8 = v6 >> 1;
      v9 = bswap32(v7);
      v10 = v9 & 0x1FFF;
      if ( v2 <= v8 )
        v8 = 0;
      v11 = (v9 & 0x4000) == 0;
      v12 = (double *)&v40[2 * v8];
      v13 = (char *)&v40[696] + v8;
      if ( !v11 )
      {
        *(v13 - 2876) = 1;
        *v12 = ((double)v10 - 369.43) / 1.3506;
      }
    }
    while ( v5 != v4 );
  }
  if ( v2 <= 0 )
  {
    LOWORD(v34) = -2140;
    LOWORD(v35) = -2136;
    HIWORD(v34) = (unsigned int)"0" >> 16;
    HIWORD(v35) = (unsigned int)"ChipSetting_pmdata_KDA_2110" >> 16;
    v30 = (FILE *)fopen64(v35, v34);
  }
  else
  {
    v14 = s;
    v15 = (__int64 *)v40;
    LOWORD(v16) = -2164;
    LOWORD(v17) = -2172;
    v18 = &s[v2];
    v19 = s;
    v20 = (__int64 *)v40;
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *v19++;
        v24 = 2048 - v21;
        v25 = (char *)&v40[184] + v21;
        if ( !v23 )
          break;
        v22 = *v20++;
        HIWORD(v17) = (unsigned int)"Setting_hash_clock_count_KDA_2110" >> 16;
        v21 += snprintf(v25, v24, v17, (char *)&v40[184] + v21, v22);
        if ( v19 == v18 )
          goto LABEL_13;
      }
      HIWORD(v16) = (unsigned int)"hash_clock_count_KDA_2110" >> 16;
      v21 += 5;
      snprintf(v25, v24, v16);
      ++v20;
    }
    while ( v19 != v18 );
LABEL_13:
    LOWORD(v26) = -2140;
    LOWORD(v27) = -2136;
    HIWORD(v26) = (unsigned int)"0" >> 16;
    HIWORD(v27) = (unsigned int)"ChipSetting_pmdata_KDA_2110" >> 16;
    LOWORD(v28) = -2148;
    LOWORD(v29) = -2156;
    v30 = (FILE *)fopen64(v27, v26);
    do
    {
      while ( *v14++ )
      {
        v31 = *v15++;
        HIWORD(v29) = (unsigned int)"ck_count_KDA_2110" >> 16;
        fprintf(v30, v29, v31);
        if ( v19 == v14 )
          goto LABEL_17;
      }
      HIWORD(v28) = (unsigned int)"_KDA_2110" >> 16;
      fwrite(v28, 1u, 5u, v30);
      ++v15;
    }
    while ( v19 != v14 );
  }
LABEL_17:
  fputc(10, v30);
  fflush(v30);
  return 0;
}
