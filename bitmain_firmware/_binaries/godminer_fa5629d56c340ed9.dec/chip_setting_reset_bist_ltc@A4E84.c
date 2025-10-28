int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r3
  bool v10; // zf
  int v11; // r2
  int v12; // r5
  int v13; // r10
  int v14; // r2
  int v15; // r0
  char v17; // r2
  int v18; // r1
  char v19; // r3
  char v20; // r3
  int v21; // r3
  int v24; // [sp+20h] [bp-1014h] BYREF
  int v25; // [sp+24h] [bp-1010h]
  int v26; // [sp+28h] [bp-100Ch]
  int v27; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_reset_bist_ltc",
    27,
    242,
    40,
    var1004);
  if ( !a4 )
  {
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v26) = a2;
    LOBYTE(v9) = *(_BYTE *)(a1 + 360);
    if ( a2 )
    {
      BYTE1(v27) = *(_BYTE *)(a1 + 360);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 360);
  v10 = v8 == 0;
  v11 = v8;
  v8 = 0;
  v24 = 0;
  v7 = v9 - 1;
  v25 = 0;
  v27 = 0;
  v26 = (unsigned __int8)v11;
  if ( v10 )
  {
    v8 = v11;
LABEL_13:
    v17 = *(_BYTE *)(*(_DWORD *)(a1 + 512) + a3);
    BYTE1(v27) = v9;
    BYTE1(v26) = v17;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v18 = *(_DWORD *)(a1 + 512);
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v19 = *(_BYTE *)(v18 + a3);
    BYTE1(v27) = *(_DWORD *)(a1 + 360);
    BYTE1(v26) = v19;
    goto LABEL_15;
  }
  BYTE1(v26) = 0;
  BYTE1(v27) = v9;
  if ( v7 >= 0 )
  {
LABEL_4:
    v12 = v8;
    while ( 1 )
    {
      v24 = 1024;
      HIWORD(v26) = 0;
      LOBYTE(v27) = v12;
      HIWORD(v27) = 0;
      v13 = (*(int (__fastcall **)(int, int *))(a1 + 284))(a1, &v24);
      if ( v13 )
        break;
      ++v12;
      usleep(0x3E8u);
      if ( v12 > v7 )
      {
        usleep(0x2710u);
        v24 = 0;
        v25 = 0;
        v27 = 0;
        v26 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v27) = *(_DWORD *)(a1 + 360);
          goto LABEL_21;
        }
        v20 = *(_BYTE *)(*(_DWORD *)(a1 + 512) + a3);
        BYTE1(v27) = *(_DWORD *)(a1 + 360);
        BYTE1(v26) = v20;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v24 = 37888;
          HIWORD(v26) = 0;
          LOBYTE(v27) = v8;
          HIWORD(v27) = 0;
          v13 = (*(int (__fastcall **)(int, int *))(a1 + 284))(a1, &v24);
          if ( v13 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK();
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "%s failed, reg:%02x, core_id:%d",
          "chip_setting_reset_bist_ltc",
          HIWORD(v26),
          v8);
        V_UNLOCK();
        v14 = 290;
        v15 = g_zc;
LABEL_8:
        zlog(
          v15,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          176,
          "chip_setting_reset_bist_ltc",
          27,
          v14,
          100,
          var1004);
        return v13;
      }
    }
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(v26), v12);
    V_UNLOCK();
    v14 = 267;
    v15 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v21 = *(_DWORD *)(a1 + 360);
  v24 = 0;
  v25 = 0;
  v26 = 1;
  v27 = 0;
  BYTE1(v27) = v21;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
