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
  unsigned __int8 *v16; // r11
  unsigned __int8 *v17; // r4
  double *v18; // r8
  int v19; // r5
  double v20; // d7
  int v21; // t1
  size_t v22; // r1
  char *v23; // r0
  FILE *v24; // r5
  __int64 v25; // r2
  int v28; // [sp+4h] [bp-B78h]
  _DWORD v29[5]; // [sp+18h] [bp-B64h] BYREF
  _DWORD v30[4]; // [sp+2Ch] [bp-B50h] BYREF
  _BYTE s[92]; // [sp+3Ch] [bp-B40h] BYREF
  _DWORD v32[697]; // [sp+98h] [bp-AE4h] BYREF

  memset(s, 0, sizeof(s));
  v29[4] = 0;
  v29[2] = 0;
  v29[1] = -2147424757;
  v29[3] = 7077889;
  (*(void (__fastcall **)(int))(a1 + 280))(a1);
  v2 = *(_DWORD *)(a1 + 356);
  v3 = (char *)malloc(12 * v2);
  v30[0] = 0;
  v30[1] = 0;
  v30[3] = 0;
  v30[2] = 7340033;
  (*(void (__fastcall **)(int, _DWORD *, int, char *, _DWORD *))(a1 + 300))(a1, v30, v2, v3, v29);
  usleep((__useconds_t)&stru_18698.st_size);
  (*(void (__fastcall **)(int, _DWORD *, int, char *, _DWORD *, int, int, _DWORD))(a1 + 300))(
    a1,
    v30,
    v2,
    v3,
    v29,
    v28,
    2000,
    0);
  if ( v29[0] > 0 )
  {
    v4 = v3;
    v5 = &v3[12 * v29[0]];
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
      v12 = (double *)&v32[2 * v8];
      v13 = (char *)&v32[696] + v8;
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
    v24 = (FILE *)fopen64("/tmp/temp.txt", "a+");
  }
  else
  {
    v14 = s;
    v15 = (__int64 *)v32;
    v16 = &s[v2];
    v17 = s;
    v18 = (double *)v32;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v21 = *v17++;
        v22 = 2048 - v19;
        v23 = (char *)&v32[184] + v19;
        if ( !v21 )
          break;
        v20 = *v18++;
        v19 += snprintf(v23, v22, "%5.2f", v20);
        if ( v17 == v16 )
          goto LABEL_13;
      }
      v19 += 5;
      snprintf(v23, v22, "  XXX");
      ++v18;
    }
    while ( v17 != v16 );
LABEL_13:
    v24 = (FILE *)fopen64("/tmp/temp.txt", "a+");
    do
    {
      while ( *v14++ )
      {
        v25 = *v15++;
        fprintf(v24, "%5.2f ", v25);
        if ( v17 == v14 )
          goto LABEL_17;
      }
      fwrite("XXX  ", 1u, 5u, v24);
      ++v15;
    }
    while ( v17 != v14 );
  }
LABEL_17:
  fputc(10, v24);
  fflush(v24);
  return 0;
}
