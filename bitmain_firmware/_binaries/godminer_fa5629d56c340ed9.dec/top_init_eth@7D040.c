int __fastcall top_init_eth(int a1)
{
  int v2; // r2
  int v3; // r3
  void (__fastcall *v4)(int, int); // r3
  int v5; // r1
  int v6; // r0
  int v7; // r3
  int result; // r0
  _DWORD v9[7]; // [sp+28h] [bp-1080h] BYREF
  int v10; // [sp+44h] [bp-1064h]
  _DWORD v11[7]; // [sp+48h] [bp-1060h] BYREF
  int v12; // [sp+64h] [bp-1044h]
  int v13; // [sp+68h] [bp-1040h] BYREF
  int v14; // [sp+6Ch] [bp-103Ch]
  int v15; // [sp+70h] [bp-1038h]
  int v16; // [sp+74h] [bp-1034h]
  int v17; // [sp+78h] [bp-1030h]
  int v18; // [sp+7Ch] [bp-102Ch]
  int v19; // [sp+80h] [bp-1028h]
  int v20; // [sp+84h] [bp-1024h]
  _DWORD v21[7]; // [sp+88h] [bp-1020h] BYREF
  int v22; // [sp+A4h] [bp-1004h]
  char v23[4096]; // [sp+A8h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 260));
  logfmt_raw(v23, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "%s start", "top_init_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "top_init_eth",
    12,
    2035,
    60,
    v23);
  if ( sub_7B7F0((int *)a1) )
  {
    V_LOCK();
    V_INT((int)v11, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v23,
      0x1000u,
      0,
      v12,
      v11[0],
      v11[1],
      v11[2],
      v11[3],
      v11[4],
      v11[5],
      v11[6],
      v12,
      "check asic num failed",
      "top_init_eth");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "top_init_eth",
      12,
      2039,
      100,
      v23);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 512) - 1;
    do
      *(_BYTE *)++v3 = v2++;
    while ( v2 != 8 );
    v4 = *(void (__fastcall **)(int, int))(a1 + 272);
    v5 = *(_DWORD *)(a1 + 512);
    *(_DWORD *)(a1 + 452) = 1;
    v4(a1, v5);
    if ( sub_7B7F0((int *)a1) )
    {
      V_LOCK();
      V_INT((int)&v13, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v23,
        0x1000u,
        0,
        v20,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        "check asic num failed after set addr",
        "top_init_eth");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        171,
        "top_init_eth",
        12,
        2053,
        100,
        v23);
      return 12;
    }
    else
    {
      set_debug_ctrl(a1, 19);
      v14 = 0;
      v16 = 0;
      v13 = 3;
      v15 = 4718593;
      V_LOCK();
      V_INT((int)v21, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v23,
        0x1000u,
        0,
        v22,
        v21[0],
        v21[1],
        v21[2],
        v21[3],
        v21[4],
        v21[5],
        v21[6],
        v22,
        "set analog value %08x",
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_analog_mux_ETH",
        26,
        1059,
        40,
        v23);
      (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v13);
      v6 = sub_798CC(a1);
      v7 = *(unsigned __int8 *)(a1 + 484);
      if ( !v6 )
        *(_DWORD *)(a1 + 536) = 1;
      result = 0;
      if ( !v7 )
        *(_DWORD *)(a1 + 488) = (int)*(float *)(a1 + 1004);
    }
  }
  return result;
}
