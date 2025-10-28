int __fastcall phy_external_loop_adapt(
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  char *v10; // r1
  int v11; // r10
  int v12; // r11
  _DWORD *v13; // r3
  int v14; // r1
  int v16; // r10
  int v17; // r11
  _DWORD *v18; // r3
  int v19; // r1
  unsigned __int8 v20; // [sp+3Fh] [bp-1025h] BYREF
  int v21; // [sp+40h] [bp-1024h] BYREF
  int v22; // [sp+44h] [bp-1020h]
  int v23; // [sp+48h] [bp-101Ch]
  int v24; // [sp+4Ch] [bp-1018h]
  int v25; // [sp+50h] [bp-1014h]
  int v26; // [sp+54h] [bp-1010h]
  int v27; // [sp+58h] [bp-100Ch]
  int v28; // [sp+5Ch] [bp-1008h]
  char var1004[4128]; // [sp+60h] [bp-1004h] BYREF

  v20 = a3;
  V_LOCK();
  LOWORD(v10) = 27372;
  HIWORD(v10) = (unsigned int)":" >> 16;
  V_INT((int)&v21, v10, *(int *)(a1 + 256));
  if ( a7 )
  {
    LOWORD(v11) = -7228;
    HIWORD(v11) = (unsigned int)" failed!" >> 16;
    LOWORD(v12) = -7236;
    HIWORD(v12) = (unsigned int)"ram init failed!" >> 16;
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v28,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v11,
      "phy_external_loop_adapt",
      v12,
      a4,
      a5,
      a6);
    V_UNLOCK();
    LOWORD(v13) = 20532;
    HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v14) = -11432;
    HIWORD(v14) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v13, v14, 174, "phy_external_loop_adapt", 23, 1905, 60, var1004);
    phy_eq_main_set_by_apb(a1, a2, &v20, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v20, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v20, 1, a6);
    if ( a7 == 1 )
      phy_rx_adapt(a1, a2, v20);
  }
  else
  {
    LOWORD(v16) = -7228;
    HIWORD(v16) = (unsigned int)" failed!" >> 16;
    LOWORD(v17) = -7180;
    HIWORD(v17) = (unsigned int)"!" >> 16;
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v28,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v16,
      "phy_external_loop_adapt",
      v17,
      a4,
      a5,
      a6);
    V_UNLOCK();
    LOWORD(v18) = 20532;
    HIWORD(v18) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v19) = -11432;
    HIWORD(v19) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v18, v19, 174, "phy_external_loop_adapt", 23, 1905, 60, var1004);
    phy_eq_main_set_by_apb(a1, a2, &v20, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, &v20, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, &v20, 1, a6);
  }
  usleep(0x64u);
  return 0;
}
