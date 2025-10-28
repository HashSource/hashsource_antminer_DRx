int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r9
  char *v8; // r1
  int v9; // r1
  int v10; // r3
  unsigned __int8 *v11; // r3
  int v12; // r10
  int v13; // r8
  char *v14; // r1
  int v15; // lr
  int v16; // r9
  int v17; // r1
  int v18; // r8
  char *v19; // r1
  int v20; // r1
  int v21; // r9
  char *v22; // r1
  int v23; // r0
  int v24; // r2
  int v25; // r1
  char *v26; // r1
  int v27; // lr
  int v28; // r1
  int v29; // r7
  char *v30; // r1
  int v31; // r10
  int v32; // lr
  int v33; // r1
  int v35; // r1
  int v37; // [sp+3Ch] [bp-1118h]
  int v38; // [sp+40h] [bp-1114h]
  int v39; // [sp+44h] [bp-1110h]
  unsigned __int8 v40; // [sp+48h] [bp-110Ch]
  unsigned __int8 v41; // [sp+4Fh] [bp-1105h] BYREF
  _DWORD v42[7]; // [sp+50h] [bp-1104h] BYREF
  int v43; // [sp+6Ch] [bp-10E8h]
  _DWORD v44[7]; // [sp+70h] [bp-10E4h] BYREF
  int v45; // [sp+8Ch] [bp-10C8h]
  _DWORD v46[7]; // [sp+90h] [bp-10C4h] BYREF
  int v47; // [sp+ACh] [bp-10A8h]
  _DWORD v48[7]; // [sp+B0h] [bp-10A4h] BYREF
  int v49; // [sp+CCh] [bp-1088h]
  _DWORD v50[7]; // [sp+D0h] [bp-1084h] BYREF
  int v51; // [sp+ECh] [bp-1068h]
  _DWORD v52[7]; // [sp+F0h] [bp-1064h] BYREF
  int v53; // [sp+10Ch] [bp-1048h]
  _DWORD v54[7]; // [sp+110h] [bp-1044h] BYREF
  int v55; // [sp+12Ch] [bp-1028h]
  _DWORD v56[7]; // [sp+130h] [bp-1024h] BYREF
  int v57; // [sp+14Ch] [bp-1008h]
  char v58[4080]; // [sp+150h] [bp-1004h] BYREF

  LOWORD(v7) = -6360;
  v41 = a3;
  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  V_INT((int)v42, v8, *(int *)(a1 + 256));
  HIWORD(v7) = (unsigned int)"Setting_read_sensor_temp_local_on_ctrlboard_HNS_2130" >> 16;
  logfmt_raw(
    v58,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    v7,
    "phy_external_bist_init",
    v41);
  V_UNLOCK();
  LOWORD(v9) = -11432;
  HIWORD(v9) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v9, 174, "phy_external_bist_init", 22, 1920, 60, v58);
  LOWORD(v10) = 14584;
  HIWORD(v10) = (unsigned int)&eth_2280_phy_eq >> 16;
  v11 = (unsigned __int8 *)(v10 + 16 * a5);
  v12 = v11[16];
  v13 = v11[8];
  v40 = v11[8];
  v37 = v11[4];
  v39 = v12;
  v38 = v11[12];
  V_LOCK();
  LOWORD(v14) = 27372;
  HIWORD(v14) = (unsigned int)":" >> 16;
  V_INT((int)v44, v14, *(int *)(a1 + 256));
  LOWORD(v15) = -7180;
  LOWORD(v16) = -7236;
  HIWORD(v16) = (unsigned int)"ram init failed!" >> 16;
  if ( !v12 )
  {
    HIWORD(v15) = (unsigned int)"!" >> 16;
    v16 = v15;
  }
  logfmt_raw(
    v58,
    0x1000u,
    0,
    v45,
    v44[0],
    v44[1],
    v44[2],
    v44[3],
    v44[4],
    v44[5],
    v44[6],
    v45,
    "rx adapt %s, mode=%02d, main=%02d, pre=%02d, post=%02d",
    v16,
    a4,
    v37,
    v13,
    v38);
  V_UNLOCK();
  LOWORD(v17) = -11432;
  HIWORD(v17) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v17, 174, "phy_external_bist_init", 22, 1942, 60, v58);
  sub_7F86C(a1, v41, 86, 3670024);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 85, 109905420);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 101, -268374016);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 64, 256);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 80, 33423870);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 81, 832516511);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 88, -1);
  usleep(0x12Cu);
  v18 = check_core_reg_with_expect_data_eth(a1, a2, v41, 125, 0x70007000u);
  V_LOCK();
  LOWORD(v19) = 27372;
  HIWORD(v19) = (unsigned int)":" >> 16;
  if ( v18 )
  {
    V_INT((int)v46, v19, *(int *)(a1 + 256));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v47,
      v46[0],
      v46[1],
      v46[2],
      v46[3],
      v46[4],
      v46[5],
      v46[6],
      v47,
      "%s sram init failed!",
      "phy_external_bist_init");
    V_UNLOCK();
    LOWORD(v20) = -11432;
    HIWORD(v20) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(g_zc, v20, 174, "phy_external_bist_init", 22, 1975, 100, v58);
  }
  else
  {
    V_INT((int)v48, v19, *(int *)(a1 + 256));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v49,
      v48[0],
      v48[1],
      v48[2],
      v48[3],
      v48[4],
      v48[5],
      v48[6],
      v49,
      "%s PHY core-%02x sram init successed!",
      "phy_external_bist_init",
      v41);
    V_UNLOCK();
    LOWORD(v35) = -11432;
    HIWORD(v35) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(g_zc, v35, 174, "phy_external_bist_init", 22, 1977, 100, v58);
  }
  phy_eq_main_set_by_apb(a1, a2, &v41, 1, v37);
  phy_eq_pre_set_by_apb(a1, a2, &v41, 1, v40);
  phy_eq_post_set_by_apb(a1, a2, &v41, 1, v38);
  sub_7F86C(a1, v41, 86, 137889800);
  usleep(0x12Cu);
  sub_7F86C(a1, v41, 80, 0);
  usleep(0x12Cu);
  v21 = check_core_reg_with_expect_data(a1, a2, v41, 119, 0);
  V_LOCK();
  LOWORD(v22) = 27372;
  HIWORD(v22) = (unsigned int)":" >> 16;
  if ( v21 )
  {
    V_INT((int)v50, v22, *(int *)(a1 + 256));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v51,
      v50[0],
      v50[1],
      v50[2],
      v50[3],
      v50[4],
      v50[5],
      v50[6],
      v51,
      "%s PHY core-%02x wait ack failed!",
      "phy_external_bist_init",
      v41);
    V_UNLOCK();
    v23 = g_zc;
    v24 = 2003;
  }
  else
  {
    V_INT((int)v52, v22, *(int *)(a1 + 256));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v53,
      v52[0],
      v52[1],
      v52[2],
      v52[3],
      v52[4],
      v52[5],
      v52[6],
      v53,
      "%s PHY core-%02x wait ack successed!",
      "phy_external_bist_init",
      v41);
    V_UNLOCK();
    v23 = g_zc;
    v24 = 2005;
  }
  LOWORD(v25) = -11432;
  HIWORD(v25) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(v23, v25, 174, "phy_external_bist_init", 22, v24, 100, v58);
  sub_7F86C(a1, v41, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v26) = 27372;
  HIWORD(v26) = (unsigned int)":" >> 16;
  V_INT((int)v54, v26, *(int *)(a1 + 256));
  LOWORD(v27) = -8440;
  HIWORD(v27) = (unsigned int)"first !!! %s PHY core %02x macro0 rx is invalid!" >> 16;
  logfmt_raw(
    v58,
    0x1000u,
    0,
    v55,
    v54[0],
    v54[1],
    v54[2],
    v54[3],
    v54[4],
    v54[5],
    v54[6],
    v55,
    v27,
    "phy_external_bist_init",
    v41);
  V_UNLOCK();
  LOWORD(v28) = -11432;
  HIWORD(v28) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v28, 174, "phy_external_bist_init", 22, 2010, 100, v58);
  v29 = v41;
  sub_7F86C(a1, v41, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v29, 83, 0) )
  {
    V_LOCK();
    LOWORD(v30) = 27372;
    HIWORD(v30) = (unsigned int)":" >> 16;
    V_INT((int)v56, v30, *(int *)(a1 + 256));
    LOWORD(v31) = -8404;
    HIWORD(v31) = (unsigned int)" is invalid!" >> 16;
    LOWORD(v32) = -11472;
    HIWORD(v32) = (unsigned int)"ate_r" >> 16;
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v57,
      v56[0],
      v56[1],
      v56[2],
      v56[3],
      v56[4],
      v56[5],
      v56[6],
      v57,
      v32,
      "phy_handshake",
      v29,
      v31);
    V_UNLOCK();
    LOWORD(v33) = -11432;
    HIWORD(v33) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(g_zc, v33, 174, "phy_handshake", 13, 1744, 100, v58);
  }
  phy_pll_switch(a1, a2, v41, a4);
  if ( v39 )
    phy_rx_adapt(a1, a2, v41);
  return usleep(0x64u);
}
