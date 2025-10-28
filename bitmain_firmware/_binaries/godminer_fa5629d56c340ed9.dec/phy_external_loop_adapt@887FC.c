int __fastcall phy_external_loop_adapt(
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned __int8 v11; // [sp+3Fh] [bp-1025h] BYREF
  int v12; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1020h]
  int v14; // [sp+48h] [bp-101Ch]
  int v15; // [sp+4Ch] [bp-1018h]
  int v16; // [sp+50h] [bp-1014h]
  int v17; // [sp+54h] [bp-1010h]
  int v18; // [sp+58h] [bp-100Ch]
  int v19; // [sp+5Ch] [bp-1008h]
  char var1004[4128]; // [sp+60h] [bp-1004h] BYREF

  v11 = a3;
  V_LOCK();
  V_INT((int)&v12, "chain", *(int *)(a1 + 260));
  if ( a7 )
  {
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v19,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      "%s rx adapt %s, main=%02d, pre=%02d, post=%02d",
      "phy_external_loop_adapt",
      "enabled",
      a4,
      a5,
      a6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_loop_adapt",
      23,
      1905,
      60,
      var1004);
    phy_eq_main_set_by_apb(a1, a2, &v11, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v11, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v11, 1, a6);
    if ( a7 == 1 )
      phy_rx_adapt(a1, a2, v11);
  }
  else
  {
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v19,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      "%s rx adapt %s, main=%02d, pre=%02d, post=%02d",
      "phy_external_loop_adapt",
      "disabled",
      a4,
      a5,
      a6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_loop_adapt",
      23,
      1905,
      60,
      var1004);
    phy_eq_main_set_by_apb(a1, a2, &v11, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v11, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v11, 1, a6);
  }
  usleep(0x64u);
  return 0;
}
