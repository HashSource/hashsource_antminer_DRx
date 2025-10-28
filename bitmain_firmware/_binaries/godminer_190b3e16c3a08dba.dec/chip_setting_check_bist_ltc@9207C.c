int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int *v8; // r6
  int v9; // r3
  int v11; // r3
  int v12; // lr
  char *v13; // r4
  char *v14; // r11
  int v15; // r9
  int v16; // r8
  int v18; // r4
  int v20; // r3
  int v21; // [sp+4h] [bp-1080h]
  int v23; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v26; // [sp+44h] [bp-1040h]
  int v27; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v28[2]; // [sp+50h] [bp-1034h] BYREF
  int v29; // [sp+58h] [bp-102Ch]
  int v30; // [sp+5Ch] [bp-1028h]
  _DWORD v31[7]; // [sp+60h] [bp-1024h] BYREF
  int v32; // [sp+7Ch] [bp-1008h]
  char v33[4096]; // [sp+80h] [bp-1004h] BYREF

  v8 = a5;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a1 + 304);
  }
  else
  {
    v9 = 1;
    v5 = 4;
    v6 = 12;
    v23 = 1;
  }
  if ( a2 )
  {
    v23 = v9;
    v6 = 3 * v9;
    v5 = 4 * v9;
  }
  if ( a2 )
    v6 *= 4;
  v27 = 0;
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_check_bist_ltc",
    27,
    188,
    20,
    v33);
  ptr = (char *)calloc(v6, 1u);
  memset(a5, 0, v5);
  v11 = 0;
  v29 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v30 = 0;
  if ( !a2 )
    v11 = *(_DWORD *)(a1 + 456);
  LOBYTE(v29) = a2;
  v12 = *(_DWORD *)(a1 + 308);
  if ( !a2 )
    LOBYTE(v11) = *(_BYTE *)(v11 + a3);
  BYTE1(v29) = v11;
  HIBYTE(v30) = a4;
  LOBYTE(v30) = a4;
  HIWORD(v29) = 6;
  BYTE1(v30) = v12;
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v28,
    v23,
    ptr,
    &v27,
    v21,
    2000,
    0);
  v26 = v27;
  if ( v27 > 0 )
  {
    v13 = ptr;
    v14 = &ptr[12 * v27];
    do
    {
      v15 = 0;
      if ( *((_WORD *)v13 + 3) == 6 )
        v15 = v13[3] & 1;
      if ( a2 )
        a5[(unsigned int)(unsigned __int8)v13[4] / *(_DWORD *)(a1 + 396)] = v15;
      else
        *a5 = v15;
      v13 += 12;
    }
    while ( v13 != v14 );
  }
  if ( v23 <= v26
    || (V_LOCK(),
        V_INT((int)v31, "chain", *(int *)(a1 + 224)),
        logfmt_raw(
          v33,
          0x1000u,
          0,
          v32,
          v31[0],
          v31[1],
          v31[2],
          v31[3],
          v31[4],
          v31[5],
          v31[6],
          v32,
          "detected core %d get check bist results less than expect num(%d < %d)",
          a4,
          v27,
          v23),
        V_UNLOCK(),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          176,
          "chip_setting_check_bist_ltc",
          27,
          223,
          80,
          v33),
        v23 <= 0) )
  {
    v16 = 0;
  }
  else
  {
    v16 = 0;
    v18 = 0;
    do
    {
      if ( !*v8++ )
      {
        V_LOCK();
        v20 = a3;
        v16 = -1;
        if ( a2 )
          v20 = v18;
        logfmt_raw(v33, 0x1000u, 0, "chip %d core %d check bist failed", v20, a4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          176,
          "chip_setting_check_bist_ltc",
          27,
          228,
          80,
          v33);
      }
      ++v18;
    }
    while ( &a5[v23] != v8 );
  }
  free(ptr);
  return v16;
}
