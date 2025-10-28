int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  char v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r2
  int v18; // r0
  int v19; // [sp+18h] [bp-1010h] BYREF
  int v20; // [sp+1Ch] [bp-100Ch]
  int v21; // [sp+20h] [bp-1008h]
  int v22; // [sp+24h] [bp-1004h]
  char var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(var1000, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_working_mode_ltc",
    29,
    304,
    20,
    var1000);
  if ( a4 )
  {
    v12 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( !a2 )
      v12 = *(_DWORD *)(a1 + 512);
    LOBYTE(v21) = a2;
    v13 = *(_DWORD *)(a1 + 360);
    if ( !a2 )
      LOBYTE(v12) = *(_BYTE *)(v12 + a3);
    LOBYTE(v22) = a5;
    BYTE1(v22) = v13;
    BYTE1(v21) = v12;
    v19 = a6 | 0x400;
    BYTE2(v22) = 1;
    v14 = (*(int (__fastcall **)(int))(a1 + 284))(a1);
    if ( v14 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v21,
        BYTE1(v21),
        HIWORD(v21));
      V_UNLOCK();
      v15 = g_zc;
      v16 = 321;
LABEL_8:
      zlog(
        v15,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        176,
        "chip_setting_working_mode_ltc",
        29,
        v16,
        100,
        var1000);
      return v14;
    }
  }
  else
  {
    if ( a2 )
      v10 = 0;
    else
      v11 = *(_DWORD *)(a1 + 512);
    v19 = 0;
    v20 = 0;
    v22 = 0;
    v21 = (unsigned __int8)a2;
    if ( !a2 )
      v10 = *(_BYTE *)(v11 + a3);
    v18 = *(_DWORD *)(a1 + 360);
    BYTE1(v21) = v10;
    *(_WORD *)((char *)&v22 + 1) = (unsigned __int8)v18;
    LOBYTE(v22) = a5;
    HIWORD(v21) = 0;
    HIBYTE(v22) = 0;
    v19 = a6 | 0x400;
    v14 = (*(int (__fastcall **)(int, int *))(a1 + 284))(a1, &v19);
    if ( v14 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, core_id:%d",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v21,
        BYTE1(v21),
        HIWORD(v21),
        a5);
      V_UNLOCK();
      v15 = g_zc;
      v16 = 344;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v14;
}
