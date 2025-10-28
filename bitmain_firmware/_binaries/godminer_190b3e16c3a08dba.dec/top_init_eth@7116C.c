int __fastcall top_init_eth(int a1)
{
  int v2; // r2
  int v3; // r3
  void (__fastcall *v4)(int, int); // r3
  int v5; // r1
  int v6; // r0
  int v7; // r3
  int result; // r0
  _DWORD v9[7]; // [sp+28h] [bp-1064h] BYREF
  int v10; // [sp+44h] [bp-1048h]
  int v11; // [sp+48h] [bp-1044h] BYREF
  int v12; // [sp+4Ch] [bp-1040h]
  int v13; // [sp+50h] [bp-103Ch]
  int v14; // [sp+54h] [bp-1038h]
  int v15; // [sp+58h] [bp-1034h]
  int v16; // [sp+5Ch] [bp-1030h]
  int v17; // [sp+60h] [bp-102Ch]
  int v18; // [sp+64h] [bp-1028h]
  _DWORD v19[7]; // [sp+68h] [bp-1024h] BYREF
  int v20; // [sp+84h] [bp-1008h]
  char v21[4100]; // [sp+88h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 224));
  logfmt_raw(v21, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "%s start", "top_init_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "top_init_eth",
    12,
    1658,
    60,
    v21);
  if ( sub_6F834((int *)a1) )
  {
    V_LOCK();
    V_INT((int)&v11, "chain", *(int *)(a1 + 224));
    logfmt_raw(v21, 0x1000u, 0, v18, v11, v12, v13, v14, v15, v16, v17, v18, "check asic num failed", "top_init_eth");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "top_init_eth",
      12,
      1662,
      100,
      v21);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 456) - 1;
    do
      *(_BYTE *)++v3 = v2++;
    while ( v2 != 8 );
    v4 = *(void (__fastcall **)(int, int))(a1 + 232);
    v5 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 396) = 1;
    v4(a1, v5);
    sub_6F834((int *)a1);
    set_debug_ctrl(a1, 19);
    v13 = 4718593;
    v14 = 0;
    v12 = 0;
    v11 = 3;
    V_LOCK();
    V_INT((int)v19, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v20,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v20,
      "set analog value %08x",
      v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_analog_mux_ETH",
      26,
      810,
      40,
      v21);
    (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v11);
    v6 = sub_6E184(a1);
    v7 = *(unsigned __int8 *)(a1 + 428);
    if ( !v6 )
      *(_DWORD *)(a1 + 480) = 1;
    result = 0;
    if ( !v7 )
      *(_DWORD *)(a1 + 432) = (int)*(float *)(a1 + 924);
  }
  return result;
}
