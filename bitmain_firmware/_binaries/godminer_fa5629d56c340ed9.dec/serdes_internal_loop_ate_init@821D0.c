int __fastcall serdes_internal_loop_ate_init(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v7; // r3
  int v8; // r3
  int v9; // r3
  _DWORD v13[7]; // [sp+50h] [bp-1784h] BYREF
  int v14; // [sp+6Ch] [bp-1768h]
  _DWORD v15[7]; // [sp+70h] [bp-1764h] BYREF
  int v16; // [sp+8Ch] [bp-1748h]
  _DWORD v17[7]; // [sp+90h] [bp-1744h] BYREF
  int v18; // [sp+ACh] [bp-1728h]
  _DWORD v19[7]; // [sp+B0h] [bp-1724h] BYREF
  int v20; // [sp+CCh] [bp-1708h]
  _DWORD v21[7]; // [sp+D0h] [bp-1704h] BYREF
  int v22; // [sp+ECh] [bp-16E8h]
  _DWORD v23[7]; // [sp+F0h] [bp-16E4h] BYREF
  int v24; // [sp+10Ch] [bp-16C8h]
  _DWORD v25[7]; // [sp+110h] [bp-16C4h] BYREF
  int v26; // [sp+12Ch] [bp-16A8h]
  _DWORD v27[7]; // [sp+130h] [bp-16A4h] BYREF
  int v28; // [sp+14Ch] [bp-1688h]
  _DWORD v29[7]; // [sp+150h] [bp-1684h] BYREF
  int v30; // [sp+16Ch] [bp-1668h]
  _DWORD v31[7]; // [sp+170h] [bp-1664h] BYREF
  int v32; // [sp+18Ch] [bp-1648h]
  _DWORD v33[7]; // [sp+190h] [bp-1644h] BYREF
  int v34; // [sp+1ACh] [bp-1628h]
  _DWORD v35[7]; // [sp+1B0h] [bp-1624h] BYREF
  int v36; // [sp+1CCh] [bp-1608h]
  _DWORD v37[7]; // [sp+1D0h] [bp-1604h] BYREF
  int v38; // [sp+1ECh] [bp-15E8h]
  _DWORD v39[7]; // [sp+1F0h] [bp-15E4h] BYREF
  int v40; // [sp+20Ch] [bp-15C8h]
  _DWORD v41[7]; // [sp+210h] [bp-15C4h] BYREF
  int v42; // [sp+22Ch] [bp-15A8h]
  _DWORD v43[7]; // [sp+230h] [bp-15A4h] BYREF
  int v44; // [sp+24Ch] [bp-1588h]
  _DWORD v45[7]; // [sp+250h] [bp-1584h] BYREF
  int v46; // [sp+26Ch] [bp-1568h]
  _DWORD v47[7]; // [sp+270h] [bp-1564h] BYREF
  int v48; // [sp+28Ch] [bp-1548h]
  _DWORD v49[7]; // [sp+290h] [bp-1544h] BYREF
  int v50; // [sp+2ACh] [bp-1528h]
  _DWORD v51[7]; // [sp+2B0h] [bp-1524h] BYREF
  int v52; // [sp+2CCh] [bp-1508h]
  _DWORD v53[7]; // [sp+2D0h] [bp-1504h] BYREF
  int v54; // [sp+2ECh] [bp-14E8h]
  _DWORD v55[7]; // [sp+2F0h] [bp-14E4h] BYREF
  int v56; // [sp+30Ch] [bp-14C8h]
  _DWORD v57[7]; // [sp+310h] [bp-14C4h] BYREF
  int v58; // [sp+32Ch] [bp-14A8h]
  _DWORD v59[7]; // [sp+330h] [bp-14A4h] BYREF
  int v60; // [sp+34Ch] [bp-1488h]
  _DWORD v61[7]; // [sp+350h] [bp-1484h] BYREF
  int v62; // [sp+36Ch] [bp-1468h]
  _DWORD v63[7]; // [sp+370h] [bp-1464h] BYREF
  int v64; // [sp+38Ch] [bp-1448h]
  _DWORD v65[7]; // [sp+390h] [bp-1444h] BYREF
  int v66; // [sp+3ACh] [bp-1428h]
  _DWORD v67[7]; // [sp+3B0h] [bp-1424h] BYREF
  int v68; // [sp+3CCh] [bp-1408h]
  _DWORD v69[7]; // [sp+3D0h] [bp-1404h] BYREF
  int v70; // [sp+3ECh] [bp-13E8h]
  _DWORD v71[7]; // [sp+3F0h] [bp-13E4h] BYREF
  int v72; // [sp+40Ch] [bp-13C8h]
  _DWORD v73[7]; // [sp+410h] [bp-13C4h] BYREF
  int v74; // [sp+42Ch] [bp-13A8h]
  _DWORD v75[7]; // [sp+430h] [bp-13A4h] BYREF
  int v76; // [sp+44Ch] [bp-1388h]
  _DWORD v77[7]; // [sp+450h] [bp-1384h] BYREF
  int v78; // [sp+46Ch] [bp-1368h]
  _DWORD v79[7]; // [sp+470h] [bp-1364h] BYREF
  int v80; // [sp+48Ch] [bp-1348h]
  _DWORD v81[7]; // [sp+490h] [bp-1344h] BYREF
  int v82; // [sp+4ACh] [bp-1328h]
  _DWORD v83[7]; // [sp+4B0h] [bp-1324h] BYREF
  int v84; // [sp+4CCh] [bp-1308h]
  _DWORD v85[7]; // [sp+4D0h] [bp-1304h] BYREF
  int v86; // [sp+4ECh] [bp-12E8h]
  _DWORD v87[7]; // [sp+4F0h] [bp-12E4h] BYREF
  int v88; // [sp+50Ch] [bp-12C8h]
  _DWORD v89[7]; // [sp+510h] [bp-12C4h] BYREF
  int v90; // [sp+52Ch] [bp-12A8h]
  _DWORD v91[7]; // [sp+530h] [bp-12A4h] BYREF
  int v92; // [sp+54Ch] [bp-1288h]
  _DWORD v93[7]; // [sp+550h] [bp-1284h] BYREF
  int v94; // [sp+56Ch] [bp-1268h]
  _DWORD v95[7]; // [sp+570h] [bp-1264h] BYREF
  int v96; // [sp+58Ch] [bp-1248h]
  _DWORD v97[7]; // [sp+590h] [bp-1244h] BYREF
  int v98; // [sp+5ACh] [bp-1228h]
  _DWORD v99[7]; // [sp+5B0h] [bp-1224h] BYREF
  int v100; // [sp+5CCh] [bp-1208h]
  _DWORD v101[7]; // [sp+5D0h] [bp-1204h] BYREF
  int v102; // [sp+5ECh] [bp-11E8h]
  _DWORD v103[7]; // [sp+5F0h] [bp-11E4h] BYREF
  int v104; // [sp+60Ch] [bp-11C8h]
  _DWORD v105[7]; // [sp+610h] [bp-11C4h] BYREF
  int v106; // [sp+62Ch] [bp-11A8h]
  _DWORD v107[7]; // [sp+630h] [bp-11A4h] BYREF
  int v108; // [sp+64Ch] [bp-1188h]
  _DWORD v109[7]; // [sp+650h] [bp-1184h] BYREF
  int v110; // [sp+66Ch] [bp-1168h]
  _DWORD v111[7]; // [sp+670h] [bp-1164h] BYREF
  int v112; // [sp+68Ch] [bp-1148h]
  _DWORD v113[7]; // [sp+690h] [bp-1144h] BYREF
  int v114; // [sp+6ACh] [bp-1128h]
  _DWORD v115[7]; // [sp+6B0h] [bp-1124h] BYREF
  int v116; // [sp+6CCh] [bp-1108h]
  _DWORD v117[7]; // [sp+6D0h] [bp-1104h] BYREF
  int v118; // [sp+6ECh] [bp-10E8h]
  _DWORD v119[7]; // [sp+6F0h] [bp-10E4h] BYREF
  int v120; // [sp+70Ch] [bp-10C8h]
  _DWORD v121[7]; // [sp+710h] [bp-10C4h] BYREF
  int v122; // [sp+72Ch] [bp-10A8h]
  _DWORD v123[7]; // [sp+730h] [bp-10A4h] BYREF
  int v124; // [sp+74Ch] [bp-1088h]
  _DWORD v125[7]; // [sp+750h] [bp-1084h] BYREF
  int v126; // [sp+76Ch] [bp-1068h]
  _DWORD v127[7]; // [sp+770h] [bp-1064h] BYREF
  int v128; // [sp+78Ch] [bp-1048h]
  _DWORD v129[7]; // [sp+790h] [bp-1044h] BYREF
  int v130; // [sp+7ACh] [bp-1028h]
  _DWORD v131[7]; // [sp+7B0h] [bp-1024h] BYREF
  int v132; // [sp+7CCh] [bp-1008h]
  char v133[4100]; // [sp+7D0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v13, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "%s ..., mode: %d",
    "serdes_internal_loop_ate_init",
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    508,
    60,
    v133);
  sub_80904(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_80DD8(a1, a3, 86);
  sub_80904(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_80DD8(a1, a3, 85);
  sub_80904(a1, a3, 101, -268374016);
  usleep(0x258u);
  sub_80DD8(a1, a3, 101);
  sub_80904(a1, a3, 64, 256);
  usleep(0x258u);
  sub_80DD8(a1, a3, 64);
  sub_80904(a1, a3, 80, 33423870);
  usleep(0x258u);
  sub_80DD8(a1, a3, 80);
  sub_80904(a1, a3, 81, 832516511);
  usleep(0x258u);
  sub_80DD8(a1, a3, 81);
  sub_80904(a1, a3, 88, -1);
  usleep(0x258u);
  sub_80DD8(a1, a3, 88);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    V_INT((int)v15, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v133,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "%s PHY core %02x sram boot failed!",
      "serdes_internal_loop_ate_init",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_internal_loop_ate_init",
      29,
      564,
      100,
      v133);
  }
  sub_80904(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s PHY core %02x sram ext load done",
    "serdes_internal_loop_ate_init",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    569,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144272046);
  serdes_apb_read(a1, a2, a3, 338);
  sub_80904(a1, a3, 77, 33554944);
  sub_80904(a1, a3, 78, -2144247742);
  serdes_apb_read(a1, a2, a3, 24642);
  sub_80904(a1, a3, 77, 100664832);
  sub_80904(a1, a3, 78, -2144247742);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144272003);
  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    579,
    60,
    v133);
  sub_80904(a1, a3, 77, 100664832);
  sub_80904(a1, a3, 78, -2144247742);
  sub_810AC(a1, a3, 24643, a4);
  sub_810AC(a1, a3, 24644, a4 << 7);
  sub_80904(a1, a3, 77, 117442304);
  sub_80904(a1, a3, 78, -2144247742);
  sub_810AC(a1, a3, 24643, a4 | 0x100);
  sub_810AC(a1, a3, 24644, (a4 << 7) | 0x8000);
  V_LOCK();
  V_INT((int)v21, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Overriding sup_cntx_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    587,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144251892);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144251892);
  sub_80904(a1, a3, 77, 33489407);
  sub_80904(a1, a3, 78, -2144272086);
  sub_80904(a1, a3, 77, 268374015);
  sub_80904(a1, a3, 78, -2144272085);
  V_LOCK();
  V_INT((int)v23, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v24,
    v23[0],
    v23[1],
    v23[2],
    v23[3],
    v23[4],
    v23[5],
    v23[6],
    v24,
    "%s Overriding lane_cntx_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    592,
    60,
    v133);
  sub_810AC(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_810AC(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247719);
  sub_80904(a1, a3, 77, -8388737);
  sub_80904(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v25, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v26,
    v25[0],
    v25[1],
    v25[2],
    v25[3],
    v25[4],
    v25[5],
    v25[6],
    v26,
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    597,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136964960);
  sub_80904(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v27, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v28,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v28,
    "%s Override rx_width",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    601,
    60,
    v133);
  if ( a4 == 2 )
    LOWORD(v7) = 4160;
  else
    LOWORD(v7) = 4144;
  if ( a4 == 2 )
    HIWORD(v7) = 4160;
  else
    HIWORD(v7) = 4144;
  sub_80904(a1, a3, 77, v7);
  sub_80904(a1, a3, 78, -2144247722);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v29, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    "%s Override rx_lpd, rx_pstate",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    609,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247771);
  sub_80904(a1, a3, 77, (int)&loc_140014);
  sub_80904(a1, a3, 78, -2144247771);
  V_LOCK();
  V_INT((int)v31, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    613,
    60,
    v133);
  sub_80904(a1, a3, 77, 33554944);
  sub_80904(a1, a3, 78, -2144247760);
  sub_80904(a1, a3, 77, 122947412);
  sub_80904(a1, a3, 78, -2144247760);
  V_LOCK();
  V_INT((int)v33, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    "%s  Override tx_lpd, tx_pstate, tx_pll_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    617,
    60,
    v133);
  sub_80904(a1, a3, 77, 1073758208);
  sub_80904(a1, a3, 78, -2144247770);
  sub_80904(a1, a3, 77, -1072381932);
  sub_80904(a1, a3, 78, -2144247770);
  V_LOCK();
  V_INT((int)v35, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    "%s Override tx_width_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    620,
    60,
    v133);
  if ( a4 == 2 )
    LOWORD(v8) = 4;
  else
    LOWORD(v8) = 3;
  if ( a4 == 2 )
    HIWORD(v8) = 4;
  else
    HIWORD(v8) = 3;
  sub_80904(a1, a3, 77, v8);
  sub_80904(a1, a3, 78, -2144247739);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247732);
  V_LOCK();
  V_INT((int)v37, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v38,
    v37[0],
    v37[1],
    v37[2],
    v37[3],
    v37[4],
    v37[5],
    v37[6],
    v38,
    "%s Override tx_master_pll_state_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    628,
    60,
    v133);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144247769);
  sub_80904(a1, a3, 77, 805318656);
  sub_80904(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v39, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v40,
    v39[0],
    v39[1],
    v39[2],
    v39[3],
    v39[4],
    v39[5],
    v39[6],
    v40,
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    632,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247751);
  sub_80904(a1, a3, 77, 5505108);
  sub_80904(a1, a3, 78, -2144247751);
  V_LOCK();
  V_INT((int)v41, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v42,
    v41[0],
    v41[1],
    v41[2],
    v41[3],
    v41[4],
    v41[5],
    v41[6],
    v42,
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    635,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251903);
  sub_80904(a1, a3, 77, 2293795);
  sub_80904(a1, a3, 78, -2144251903);
  V_LOCK();
  V_INT((int)v43, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v44,
    v43[0],
    v43[1],
    v43[2],
    v43[3],
    v43[4],
    v43[5],
    v43[6],
    v44,
    "%s Overriding rx_invert",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    638,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144251872);
  sub_80904(a1, a3, 77, (int)&loc_80008);
  sub_80904(a1, a3, 78, -2144251872);
  V_LOCK();
  V_INT((int)v45, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v46,
    v45[0],
    v45[1],
    v45[2],
    v45[3],
    v45[4],
    v45[5],
    v45[6],
    v46,
    "%s Overriding sup_misc",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    641,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272111);
  sub_80904(a1, a3, 77, 1073692671);
  sub_80904(a1, a3, 78, -2144272088);
  V_LOCK();
  V_INT((int)v47, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Perform refa_clk_div2_en override",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    644,
    60,
    v133);
  sub_80904(a1, a3, 77, 234884608);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272382);
  V_LOCK();
  V_INT((int)v49, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s  Perform refb_clk_div2_en override",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    647,
    60,
    v133);
  sub_80904(a1, a3, 77, 234884608);
  sub_80904(a1, a3, 78, -2144272381);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v51, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Get access to external resistor",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    650,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&unk_180018);
  sub_80904(a1, a3, 78, -2144272353);
  V_LOCK();
  V_INT((int)v53, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    653,
    60,
    v133);
  sub_80904(a1, a3, 77, 22348117);
  sub_80904(a1, a3, 78, -2144272044);
  sub_80904(a1, a3, 77, 67044351);
  sub_80904(a1, a3, 78, -2144272044);
  V_LOCK();
  V_INT((int)v55, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Overriding bg_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    656,
    60,
    v133);
  sub_80904(a1, a3, 77, 61277095);
  sub_80904(a1, a3, 78, -2144272380);
  sub_80904(a1, a3, 77, 65471463);
  sub_80904(a1, a3, 78, -2144272380);
  V_LOCK();
  V_INT((int)v57, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    659,
    60,
    v133);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 252186376);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272381);
  sub_80904(a1, a3, 77, 252186376);
  sub_80904(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v59, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Asserting mplla_word_clk_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    664,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144272379);
  sub_80904(a1, a3, 77, (int)&loc_C000C);
  sub_80904(a1, a3, 78, -2144272379);
  V_LOCK();
  V_INT((int)v61, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v62,
    v61[0],
    v61[1],
    v61[2],
    v61[3],
    v61[4],
    v61[5],
    v61[6],
    v62,
    "%s Asserting mpllb_word_clk_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    667,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144272378);
  sub_80904(a1, a3, 77, (int)&loc_C000C);
  sub_80904(a1, a3, 78, -2144272378);
  V_LOCK();
  V_INT((int)v63, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v64,
    v63[0],
    v63[1],
    v63[2],
    v63[3],
    v63[4],
    v63[5],
    v63[6],
    v64,
    "%s  Overriding mplla_ssc_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    670,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272372);
  sub_80904(a1, a3, 77, (int)&loc_100010);
  sub_80904(a1, a3, 78, -2144272372);
  V_LOCK();
  V_INT((int)v65, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
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
    "%s Overriding mpllb_ssc_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    673,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272360);
  sub_80904(a1, a3, 77, (int)&loc_100010);
  sub_80904(a1, a3, 78, -2144272360);
  V_LOCK();
  V_INT((int)v67, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v68,
    v67[0],
    v67[1],
    v67[2],
    v67[3],
    v67[4],
    v67[5],
    v67[6],
    v68,
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    677,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272114);
  sub_80904(a1, a3, 77, 710158932);
  sub_80904(a1, a3, 78, -2144272114);
  V_LOCK();
  V_INT((int)v69, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v70,
    v69[0],
    v69[1],
    v69[2],
    v69[3],
    v69[4],
    v69[5],
    v69[6],
    v70,
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    680,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272124);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144272124);
  V_LOCK();
  V_INT((int)v71, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v72,
    v71[0],
    v71[1],
    v71[2],
    v71[3],
    v71[4],
    v71[5],
    v71[6],
    v72,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    684,
    60,
    v133);
  V_LOCK();
  V_INT((int)v73, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v74,
    v73[0],
    v73[1],
    v73[2],
    v73[3],
    v73[4],
    v73[5],
    v73[6],
    v74,
    "%s  Overriding tx_clk_sel",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    685,
    60,
    v133);
  if ( a4 == 2 )
    LOWORD(v9) = 498;
  else
    LOWORD(v9) = 501;
  if ( a4 == 2 )
    HIWORD(v9) = 498;
  else
    HIWORD(v9) = 501;
  sub_80904(a1, a3, 77, v9);
  sub_80904(a1, a3, 78, -2144247559);
  V_LOCK();
  V_INT((int)v75, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v76,
    v75[0],
    v75[1],
    v75[2],
    v75[3],
    v75[4],
    v75[5],
    v75[6],
    v76,
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    690,
    60,
    v133);
  sub_80904(a1, a3, 77, 25166208);
  sub_80904(a1, a3, 78, -2144251901);
  sub_80904(a1, a3, 77, 92800392);
  sub_80904(a1, a3, 78, -2144251901);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144251900);
  sub_80904(a1, a3, 77, 541073472);
  sub_80904(a1, a3, 78, -2144251900);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247761);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144247761);
  sub_80904(a1, a3, 77, 537010178);
  sub_80904(a1, a3, 78, -2144247750);
  V_LOCK();
  V_INT((int)v77, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v78,
    v77[0],
    v77[1],
    v77[2],
    v77[3],
    v77[4],
    v77[5],
    v77[6],
    v78,
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    702,
    60,
    v133);
  sub_80904(a1, a3, 77, 537010178);
  sub_80904(a1, a3, 78, -2144247750);
  V_LOCK();
  V_INT((int)v79, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v80,
    v79[0],
    v79[1],
    v79[2],
    v79[3],
    v79[4],
    v79[5],
    v79[6],
    v80,
    "%s Overriding lane_ref_sel_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    704,
    60,
    v133);
  sub_80904(a1, a3, 77, 872428544);
  sub_80904(a1, a3, 78, -2144247769);
  sub_80904(a1, a3, 77, 1006648320);
  sub_80904(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v81, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v82,
    v81[0],
    v81[1],
    v81[2],
    v81[3],
    v81[4],
    v81[5],
    v81[6],
    v82,
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    707,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_80008);
  sub_80904(a1, a3, 78, -2144247745);
  sub_80904(a1, a3, 77, (int)&unk_180018);
  sub_80904(a1, a3, 78, -2144247745);
  V_LOCK();
  V_INT((int)v83, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v84,
    v83[0],
    v83[1],
    v83[2],
    v83[3],
    v83[4],
    v83[5],
    v83[6],
    v84,
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    710,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247798);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144247798);
  V_LOCK();
  V_INT((int)v85, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v86,
    v85[0],
    v85[1],
    v85[2],
    v85[3],
    v85[4],
    v85[5],
    v85[6],
    v86,
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    713,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144247604);
  V_LOCK();
  V_INT((int)v87, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v88,
    v87[0],
    v87[1],
    v87[2],
    v87[3],
    v87[4],
    v87[5],
    v87[6],
    v88,
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    715,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247796);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144247796);
  V_LOCK();
  V_INT((int)v89, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v90,
    v89[0],
    v89[1],
    v89[2],
    v89[3],
    v89[4],
    v89[5],
    v89[6],
    v90,
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    718,
    60,
    v133);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144243666);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144243666);
  sub_80904(a1, a3, 77, 4259905);
  sub_80904(a1, a3, 78, -2144251869);
  sub_80904(a1, a3, 77, 13304011);
  sub_80904(a1, a3, 78, -2144251869);
  V_LOCK();
  V_INT((int)v91, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v92,
    v91[0],
    v91[1],
    v91[2],
    v91[3],
    v91[4],
    v91[5],
    v91[6],
    v92,
    "%s Disable RX CDR PPM detector",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    723,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144243609);
  V_LOCK();
  V_INT((int)v93, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v94,
    v93[0],
    v93[1],
    v93[2],
    v93[3],
    v93[4],
    v93[5],
    v93[6],
    v94,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    725,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_80904(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v95, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v96,
    v95[0],
    v95[1],
    v95[2],
    v95[3],
    v95[4],
    v95[5],
    v95[6],
    v96,
    "%s Overriding TOKEN_DLY",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    727,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&loc_70004 + 3);
  sub_80904(a1, a3, 78, -2144272078);
  V_LOCK();
  V_INT((int)v97, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v98,
    v97[0],
    v97[1],
    v97[2],
    v97[3],
    v97[4],
    v97[5],
    v97[6],
    v98,
    "%s De-assrting per lane resets to 0",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    729,
    60,
    v133);
  serdes_apb_read(a1, a2, a3, 306);
  sub_80904(a1, a3, 77, -2136964960);
  sub_80904(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  serdes_apb_read(a1, a2, a3, 24608);
  V_LOCK();
  V_INT((int)v99, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v100,
    v99[0],
    v99[1],
    v99[2],
    v99[3],
    v99[4],
    v99[5],
    v99[6],
    v100,
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    737,
    60,
    v133);
  V_LOCK();
  V_INT((int)v101, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v102,
    v101[0],
    v101[1],
    v101[2],
    v101[3],
    v101[4],
    v101[5],
    v101[6],
    v102,
    "%s Waiting for PHY power up wait begin...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    738,
    60,
    v133);
  usleep(0x3E8u);
  V_LOCK();
  V_INT((int)v103, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v104,
    v103[0],
    v103[1],
    v103[2],
    v103[3],
    v103[4],
    v103[5],
    v103[6],
    v104,
    &unk_16F538,
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    741,
    60,
    v133);
  V_LOCK();
  V_INT((int)v105, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v106,
    v105[0],
    v105[1],
    v105[2],
    v105[3],
    v105[4],
    v105[5],
    v105[6],
    v106,
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    742,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 12308, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 12820, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 13332, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 13844, (int)&dword_10000 + 1);
  V_LOCK();
  V_INT((int)v107, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v108,
    v107[0],
    v107[1],
    v107[2],
    v107[3],
    v107[4],
    v107[5],
    v107[6],
    v108,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    748,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  V_INT((int)v109, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v110,
    v109[0],
    v109[1],
    v109[2],
    v109[3],
    v109[4],
    v109[5],
    v109[6],
    v110,
    "%s Reading RX ACK at PHY level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    753,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  V_INT((int)v111, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v112,
    v111[0],
    v111[1],
    v111[2],
    v111[3],
    v111[4],
    v111[5],
    v111[6],
    v112,
    "%s Reading TX ACK at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    758,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  V_INT((int)v113, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v114,
    v113[0],
    v113[1],
    v113[2],
    v113[3],
    v113[4],
    v113[5],
    v113[6],
    v114,
    "%s Reading TX ACK at PHY level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    763,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  V_LOCK();
  V_INT((int)v115, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v116,
    v115[0],
    v115[1],
    v115[2],
    v115[3],
    v115[4],
    v115[5],
    v115[6],
    v116,
    "%s Enabling TX LBERT in LFSR31",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    769,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251791);
  sub_80904(a1, a3, 77, (int)&loc_E000C + 2);
  sub_80904(a1, a3, 78, -2144247768);
  sub_80904(a1, a3, 77, (int)&loc_E000C + 2);
  sub_80904(a1, a3, 78, -2144247768);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  sub_80904(a1, a3, 77, (int)&loc_70004 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  V_LOCK();
  V_INT((int)v117, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v118,
    v117[0],
    v117[1],
    v117[2],
    v117[3],
    v117[4],
    v117[5],
    v117[6],
    v118,
    "%s Toggle rx resets",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    776,
    60,
    v133);
  sub_80904(a1, a3, 77, -2136244053);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136244053);
  sub_80904(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)off_1005C + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)off_1005C + 1);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_18698.st_size);
  serdes_wait_status(a1, a2, a3, 4156, 92);
  serdes_wait_status(a1, a2, a3, 4668, 92);
  serdes_wait_status(a1, a2, a3, 5180, 92);
  serdes_wait_status(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  V_LOCK();
  V_INT((int)v119, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v120,
    v119[0],
    v119[1],
    v119[2],
    v119[3],
    v119[4],
    v119[5],
    v119[6],
    v120,
    "%s Enable rxX_data_en",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    795,
    60,
    v133);
  sub_80904(a1, a3, 77, -1062551382);
  sub_80904(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  V_INT((int)v121, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v122,
    v121[0],
    v121[1],
    v121[2],
    v121[3],
    v121[4],
    v121[5],
    v121[6],
    v122,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    799,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK();
  V_INT((int)v123, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v124,
    v123[0],
    v123[1],
    v123[2],
    v123[3],
    v123[4],
    v123[5],
    v123[6],
    v124,
    "%s Overriding rx_adapt_req",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    805,
    60,
    v133);
  if ( a4 == 2 )
  {
    sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
    sub_80904(a1, a3, 78, -2144247798);
    sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
    sub_80904(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status(a1, a2, a3, 8218, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 8730, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 9242, (int)&dword_10000 + 1);
    serdes_wait_status(a1, a2, a3, 9754, (int)&dword_10000 + 1);
    sub_80904(a1, a3, 77, (int)"tput");
    sub_80904(a1, a3, 78, -2144247798);
    sub_80904(a1, a3, 77, (int)"tput");
    sub_80904(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_18698.st_size);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  V_LOCK();
  V_INT((int)v125, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v126,
    v125[0],
    v125[1],
    v125[2],
    v125[3],
    v125[4],
    v125[5],
    v125[6],
    v126,
    "%s Disable rxX_data_en after adaptation done",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    824,
    60,
    v133);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v127, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v128,
    v127[0],
    v127[1],
    v127[2],
    v127[3],
    v127[4],
    v127[5],
    v127[6],
    v128,
    "%s Re-enable rxX_data_en to track receive data",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    826,
    60,
    v133);
  sub_80904(a1, a3, 77, -1062551382);
  sub_80904(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  V_INT((int)v129, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v130,
    v129[0],
    v129[1],
    v129[2],
    v129[3],
    v129[4],
    v129[5],
    v129[6],
    v130,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    830,
    60,
    v133);
  serdes_wait_status(a1, a2, a3, 4156, 94);
  serdes_wait_status(a1, a2, a3, 4668, 94);
  serdes_wait_status(a1, a2, a3, 5180, 94);
  serdes_wait_status(a1, a2, a3, 5692, 94);
  V_LOCK();
  V_INT((int)v131, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v132,
    v131[0],
    v131[1],
    v131[2],
    v131[3],
    v131[4],
    v131[5],
    v131[6],
    v132,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_internal_loop_ate_init",
    29,
    835,
    60,
    v133);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  sub_80904(a1, a3, 77, (int)&loc_110010 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  sub_80904(a1, a3, 77, (int)&loc_110010 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
