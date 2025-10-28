int __fastcall phy_internal_bist(int a1, int a2, unsigned int a3, int a4)
{
  char *v8; // r1
  _DWORD *v9; // r7
  int v10; // r5
  int v11; // r1
  int v12; // r5
  char *v13; // r1
  char *v14; // r1
  int v15; // r7
  int v16; // r5
  int v17; // r1
  int v18; // r2
  __int16 v19; // r2
  _DWORD *v20; // r4
  int v21; // r0
  _DWORD *v22; // r7
  int v23; // r2
  char *v24; // r9
  __int16 v25; // r2
  _DWORD *v26; // r4
  int v27; // r0
  _DWORD *v28; // r7
  char *v30; // r1
  int v31; // r7
  char *v32; // r1
  int v33; // r7
  char *v34; // r1
  char *v35; // r1
  int v36; // r5
  _DWORD *v38; // [sp+5Ch] [bp-1188h]
  _DWORD *v39; // [sp+60h] [bp-1184h]
  int v40; // [sp+64h] [bp-1180h]
  int v41; // [sp+68h] [bp-117Ch]
  int v42; // [sp+68h] [bp-117Ch]
  _DWORD *i; // [sp+6Ch] [bp-1178h]
  _DWORD *j; // [sp+6Ch] [bp-1178h]
  int v45; // [sp+78h] [bp-116Ch] BYREF
  int v46; // [sp+7Ch] [bp-1168h] BYREF
  _DWORD v47[7]; // [sp+80h] [bp-1164h] BYREF
  int v48; // [sp+9Ch] [bp-1148h]
  _DWORD v49[7]; // [sp+A0h] [bp-1144h] BYREF
  int v50; // [sp+BCh] [bp-1128h]
  _DWORD v51[7]; // [sp+C0h] [bp-1124h] BYREF
  int v52; // [sp+DCh] [bp-1108h]
  _DWORD v53[7]; // [sp+E0h] [bp-1104h] BYREF
  int v54; // [sp+FCh] [bp-10E8h]
  _DWORD v55[7]; // [sp+100h] [bp-10E4h] BYREF
  int v56; // [sp+11Ch] [bp-10C8h]
  _DWORD v57[7]; // [sp+120h] [bp-10C4h] BYREF
  int v58; // [sp+13Ch] [bp-10A8h]
  _DWORD v59[7]; // [sp+140h] [bp-10A4h] BYREF
  int v60; // [sp+15Ch] [bp-1088h]
  _DWORD v61[8]; // [sp+160h] [bp-1084h] BYREF
  _DWORD v62[7]; // [sp+180h] [bp-1064h] BYREF
  int v63; // [sp+19Ch] [bp-1048h]
  _DWORD v64[8]; // [sp+1A0h] [bp-1044h] BYREF
  _DWORD v65[7]; // [sp+1C0h] [bp-1024h] BYREF
  int v66; // [sp+1DCh] [bp-1008h]
  char v67[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  LOWORD(v9) = 20532;
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v47, v8, *(int *)(a1 + 256));
  LOWORD(v10) = -14460;
  HIWORD(v10) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  v38 = v9;
  logfmt_raw(
    v67,
    0x1000u,
    0,
    v48,
    v47[0],
    v47[1],
    v47[2],
    v47[3],
    v47[4],
    v47[5],
    v47[6],
    v48,
    v10,
    "phy_internal_bist");
  V_UNLOCK();
  LOWORD(v11) = -11432;
  HIWORD(v11) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v9, v11, 174, "phy_internal_bist", 17, 1787, 0x14u, v67);
  v39 = malloc(0x600u);
  sub_7F86C(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v32) = 27372;
    HIWORD(v32) = (unsigned int)":" >> 16;
    V_INT((int)v49, v32, *(int *)(a1 + 256));
    LOWORD(v33) = -11016;
    HIWORD(v33) = (unsigned int)"%s Asserting mplla_word_clk_en" >> 16;
    logfmt_raw(
      v67,
      0x1000u,
      0,
      v50,
      v49[0],
      v49[1],
      v49[2],
      v49[3],
      v49[4],
      v49[5],
      v49[6],
      v50,
      v33,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      *v38,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1819,
      100,
      v67);
  }
  sub_7F86C(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_7F86C(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v30) = 27372;
    HIWORD(v30) = (unsigned int)":" >> 16;
    V_INT((int)v51, v30, *(int *)(a1 + 256));
    LOWORD(v31) = -8476;
    HIWORD(v31) = (unsigned int)"ip 0x0 core 0x0 reg 0x70 rdata %08x" >> 16;
    logfmt_raw(
      v67,
      0x1000u,
      0,
      v52,
      v51[0],
      v51[1],
      v51[2],
      v51[3],
      v51[4],
      v51[5],
      v51[6],
      v52,
      v31,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      *v38,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1832,
      100,
      v67);
  }
  sub_7F86C(a1, a3, 82, 0);
  LOWORD(v12) = -8440;
  usleep(0x64u);
  V_LOCK();
  LOWORD(v13) = 27372;
  HIWORD(v13) = (unsigned int)":" >> 16;
  V_INT((int)v53, v13, *(int *)(a1 + 256));
  HIWORD(v12) = (unsigned int)"first !!! %s PHY core %02x macro0 rx is invalid!" >> 16;
  logfmt_raw(
    v67,
    0x1000u,
    0,
    v54,
    v53[0],
    v53[1],
    v53[2],
    v53[3],
    v53[4],
    v53[5],
    v53[6],
    v54,
    v12,
    "phy_internal_bist",
    a3);
  V_UNLOCK();
  zlog(
    *v38,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_internal_bist",
    17,
    1838,
    20,
    v67);
  sub_7F86C(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v14) = 27372;
    HIWORD(v14) = (unsigned int)":" >> 16;
    LOWORD(v15) = -8404;
    V_INT((int)v65, v14, *(int *)(a1 + 256));
    LOWORD(v16) = -11472;
    HIWORD(v16) = (unsigned int)"ate_r" >> 16;
    HIWORD(v15) = (unsigned int)" is invalid!" >> 16;
    logfmt_raw(
      v67,
      0x1000u,
      0,
      v66,
      v65[0],
      v65[1],
      v65[2],
      v65[3],
      v65[4],
      v65[5],
      v65[6],
      v66,
      v16,
      "phy_handshake",
      a3,
      v15);
    V_UNLOCK();
    LOWORD(v17) = -11432;
    HIWORD(v17) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v38, v17, 174, "phy_handshake", 13, 1744, 100, v67);
  }
  phy_pll_switch(a1, a2, a3, a4);
  sub_7F86C(a1, a3, 98, -1426085121);
  usleep(0x64u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 64, 0xFF000100) )
  {
    V_LOCK();
    LOWORD(v35) = 27372;
    HIWORD(v35) = (unsigned int)":" >> 16;
    V_INT((int)v55, v35, *(int *)(a1 + 256));
    LOWORD(v36) = -8392;
    HIWORD(v36) = (unsigned int)"" >> 16;
    logfmt_raw(
      v67,
      0x1000u,
      0,
      v56,
      v55[0],
      v55[1],
      v55[2],
      v55[3],
      v55[4],
      v55[5],
      v55[6],
      v56,
      v36,
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      *v38,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1851,
      100,
      v67);
  }
  sub_7F86C(a1, a3, 133, 255);
  usleep(0x64u);
  sub_7F86C(a1, a3, 134, 255);
  usleep(0x64u);
  sub_7F86C(a1, a3, 132, -2147483647);
  sleep(6u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 139, 0xFF0000FF) )
  {
    V_LOCK();
    LOWORD(v34) = 27372;
    HIWORD(v34) = (unsigned int)":" >> 16;
    V_INT((int)v57, v34, *(int *)(a1 + 256));
    logfmt_raw(
      v67,
      0x1000u,
      0,
      v58,
      v57[0],
      v57[1],
      v57[2],
      v57[3],
      v57[4],
      v57[5],
      v57[6],
      v58,
      "%s PHY core %02x mac bist failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      *v38,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1867,
      100,
      v67);
  }
  v40 = (unsigned __int16)a3;
  LOWORD(v18) = -8320;
  HIWORD(v18) = (unsigned int)" rx ack de-assert!" >> 16;
  v41 = v18;
  v45 = -1970698105;
  v19 = 135;
  for ( i = (int *)((char *)&v45 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    v20 = v39;
    v21 = sub_7F8BC(a1, v40, v19, v39);
    if ( v21 )
    {
      v22 = &v39[3 * v21];
      do
      {
        while ( !*v20 )
        {
          v20 += 3;
          if ( v20 == v22 )
            goto LABEL_17;
        }
        V_LOCK();
        v20 += 3;
        V_INT((int)v59, "chain", *(int *)(a1 + 256));
        V_INT((int)v61, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v67,
          0x1000u,
          0,
          v60,
          v59[0],
          v59[1],
          v59[2],
          v59[3],
          v59[4],
          v59[5],
          v59[6],
          v60,
          v61[0],
          v61[1],
          v61[2],
          v61[3],
          v61[4],
          v61[5],
          v61[6],
          v61[7],
          v41,
          a2,
          *((unsigned __int8 *)v20 - 4),
          *((unsigned __int16 *)v20 - 3),
          bswap32(*(v20 - 3)));
        V_UNLOCK();
        zlog(
          *v38,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1880,
          20,
          v67);
      }
      while ( v20 != v22 );
    }
LABEL_17:
    if ( i == (int *)((char *)&v46 + 1) )
      break;
    v19 = *(unsigned __int8 *)i;
  }
  LOWORD(v24) = 27372;
  LOWORD(v23) = -8260;
  HIWORD(v24) = (unsigned int)":" >> 16;
  HIWORD(v23) = (unsigned int)" invalid!" >> 16;
  v42 = v23;
  v46 = -2088599168;
  v25 = 128;
  for ( j = (int *)((char *)&v46 + 1); ; j = (_DWORD *)((char *)j + 1) )
  {
    v26 = v39;
    v27 = sub_7F8BC(a1, v40, v25, v39);
    if ( v27 )
    {
      v28 = &v39[3 * v27];
      do
      {
        while ( !*v26 )
        {
          v26 += 3;
          if ( v26 == v28 )
            goto LABEL_25;
        }
        V_LOCK();
        v26 += 3;
        V_INT((int)v62, v24, *(int *)(a1 + 256));
        V_INT((int)v64, v24, *(int *)(a1 + 256));
        logfmt_raw(
          v67,
          0x1000u,
          0,
          v63,
          v62[0],
          v62[1],
          v62[2],
          v62[3],
          v62[4],
          v62[5],
          v62[6],
          v63,
          v64[0],
          v64[1],
          v64[2],
          v64[3],
          v64[4],
          v64[5],
          v64[6],
          v64[7],
          v42,
          a2,
          *((unsigned __int8 *)v26 - 4),
          *((unsigned __int16 *)v26 - 3),
          bswap32(*(v26 - 3)));
        V_UNLOCK();
        zlog(
          *v38,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1895,
          20,
          v67);
      }
      while ( v26 != v28 );
    }
LABEL_25:
    if ( (_DWORD *)((char *)v47 + 1) == j )
      break;
    v25 = *(unsigned __int8 *)j;
  }
  return 0;
}
