int __fastcall serdes_external_loop_ate_init_rvn(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r7
  int v7; // r3
  int v8; // r3
  int v9; // r3
  _DWORD v13[7]; // [sp+58h] [bp+20h] BYREF
  int v14; // [sp+74h] [bp+3Ch]
  _DWORD v15[7]; // [sp+78h] [bp+40h] BYREF
  int v16; // [sp+94h] [bp+5Ch]
  _DWORD v17[7]; // [sp+98h] [bp+60h] BYREF
  int v18; // [sp+B4h] [bp+7Ch]
  _DWORD v19[7]; // [sp+B8h] [bp+80h] BYREF
  int v20; // [sp+D4h] [bp+9Ch]
  _DWORD v21[7]; // [sp+D8h] [bp+A0h] BYREF
  int v22; // [sp+F4h] [bp+BCh]
  _DWORD v23[7]; // [sp+F8h] [bp+C0h] BYREF
  int v24; // [sp+114h] [bp+DCh]
  _DWORD v25[7]; // [sp+118h] [bp+E0h] BYREF
  int v26; // [sp+134h] [bp+FCh]
  _DWORD v27[7]; // [sp+138h] [bp+100h] BYREF
  int v28; // [sp+154h] [bp+11Ch]
  _DWORD v29[7]; // [sp+158h] [bp+120h] BYREF
  int v30; // [sp+174h] [bp+13Ch]
  _DWORD v31[7]; // [sp+178h] [bp+140h] BYREF
  int v32; // [sp+194h] [bp+15Ch]
  _DWORD v33[7]; // [sp+198h] [bp+160h] BYREF
  int v34; // [sp+1B4h] [bp+17Ch]
  _DWORD v35[7]; // [sp+1B8h] [bp+180h] BYREF
  int v36; // [sp+1D4h] [bp+19Ch]
  _DWORD v37[7]; // [sp+1D8h] [bp+1A0h] BYREF
  int v38; // [sp+1F4h] [bp+1BCh]
  _DWORD v39[7]; // [sp+1F8h] [bp+1C0h] BYREF
  int v40; // [sp+214h] [bp+1DCh]
  _DWORD v41[7]; // [sp+218h] [bp+1E0h] BYREF
  int v42; // [sp+234h] [bp+1FCh]
  _DWORD v43[7]; // [sp+238h] [bp+200h] BYREF
  int v44; // [sp+254h] [bp+21Ch]
  _DWORD v45[7]; // [sp+258h] [bp+220h] BYREF
  int v46; // [sp+274h] [bp+23Ch]
  _DWORD v47[7]; // [sp+278h] [bp+240h] BYREF
  int v48; // [sp+294h] [bp+25Ch]
  _DWORD v49[7]; // [sp+298h] [bp+260h] BYREF
  int v50; // [sp+2B4h] [bp+27Ch]
  _DWORD v51[7]; // [sp+2B8h] [bp+280h] BYREF
  int v52; // [sp+2D4h] [bp+29Ch]
  _DWORD v53[7]; // [sp+2D8h] [bp+2A0h] BYREF
  int v54; // [sp+2F4h] [bp+2BCh]
  _DWORD v55[7]; // [sp+2F8h] [bp+2C0h] BYREF
  int v56; // [sp+314h] [bp+2DCh]
  _DWORD v57[7]; // [sp+318h] [bp+2E0h] BYREF
  int v58; // [sp+334h] [bp+2FCh]
  _DWORD v59[7]; // [sp+338h] [bp+300h] BYREF
  int v60; // [sp+354h] [bp+31Ch]
  _DWORD v61[7]; // [sp+358h] [bp+320h] BYREF
  int v62; // [sp+374h] [bp+33Ch]
  _DWORD v63[7]; // [sp+378h] [bp+340h] BYREF
  int v64; // [sp+394h] [bp+35Ch]
  _DWORD v65[7]; // [sp+398h] [bp+360h] BYREF
  int v66; // [sp+3B4h] [bp+37Ch]
  _DWORD v67[7]; // [sp+3B8h] [bp+380h] BYREF
  int v68; // [sp+3D4h] [bp+39Ch]
  _DWORD v69[7]; // [sp+3D8h] [bp+3A0h] BYREF
  int v70; // [sp+3F4h] [bp+3BCh]
  _DWORD v71[7]; // [sp+3F8h] [bp+3C0h] BYREF
  int v72; // [sp+414h] [bp+3DCh]
  _DWORD v73[7]; // [sp+418h] [bp+3E0h] BYREF
  int v74; // [sp+434h] [bp+3FCh]
  _DWORD v75[7]; // [sp+438h] [bp+400h] BYREF
  int v76; // [sp+454h] [bp+41Ch]
  _DWORD v77[7]; // [sp+458h] [bp+420h] BYREF
  int v78; // [sp+474h] [bp+43Ch]
  _DWORD v79[7]; // [sp+478h] [bp+440h] BYREF
  int v80; // [sp+494h] [bp+45Ch]
  _DWORD v81[7]; // [sp+498h] [bp+460h] BYREF
  int v82; // [sp+4B4h] [bp+47Ch]
  _DWORD v83[7]; // [sp+4B8h] [bp+480h] BYREF
  int v84; // [sp+4D4h] [bp+49Ch]
  _DWORD v85[7]; // [sp+4D8h] [bp+4A0h] BYREF
  int v86; // [sp+4F4h] [bp+4BCh]
  _DWORD v87[7]; // [sp+4F8h] [bp+4C0h] BYREF
  int v88; // [sp+514h] [bp+4DCh]
  _DWORD v89[7]; // [sp+518h] [bp+4E0h] BYREF
  int v90; // [sp+534h] [bp+4FCh]
  _DWORD v91[7]; // [sp+538h] [bp+500h] BYREF
  int v92; // [sp+554h] [bp+51Ch]
  _DWORD v93[7]; // [sp+558h] [bp+520h] BYREF
  int v94; // [sp+574h] [bp+53Ch]
  _DWORD v95[7]; // [sp+578h] [bp+540h] BYREF
  int v96; // [sp+594h] [bp+55Ch]
  _DWORD v97[7]; // [sp+598h] [bp+560h] BYREF
  int v98; // [sp+5B4h] [bp+57Ch]
  _DWORD v99[7]; // [sp+5B8h] [bp+580h] BYREF
  int v100; // [sp+5D4h] [bp+59Ch]
  _DWORD v101[7]; // [sp+5D8h] [bp+5A0h] BYREF
  int v102; // [sp+5F4h] [bp+5BCh]
  _DWORD v103[7]; // [sp+5F8h] [bp+5C0h] BYREF
  int v104; // [sp+614h] [bp+5DCh]
  _DWORD v105[7]; // [sp+618h] [bp+5E0h] BYREF
  int v106; // [sp+634h] [bp+5FCh]
  _DWORD v107[7]; // [sp+638h] [bp+600h] BYREF
  int v108; // [sp+654h] [bp+61Ch]
  _DWORD v109[7]; // [sp+658h] [bp+620h] BYREF
  int v110; // [sp+674h] [bp+63Ch]
  _DWORD v111[7]; // [sp+678h] [bp+640h] BYREF
  int v112; // [sp+694h] [bp+65Ch]
  _DWORD v113[7]; // [sp+698h] [bp+660h] BYREF
  int v114; // [sp+6B4h] [bp+67Ch]
  _DWORD v115[7]; // [sp+6B8h] [bp+680h] BYREF
  int v116; // [sp+6D4h] [bp+69Ch]
  _DWORD v117[7]; // [sp+6D8h] [bp+6A0h] BYREF
  int v118; // [sp+6F4h] [bp+6BCh]
  _DWORD v119[7]; // [sp+6F8h] [bp+6C0h] BYREF
  int v120; // [sp+714h] [bp+6DCh]
  _DWORD v121[7]; // [sp+718h] [bp+6E0h] BYREF
  int v122; // [sp+734h] [bp+6FCh]
  _DWORD v123[7]; // [sp+738h] [bp+700h] BYREF
  int v124; // [sp+754h] [bp+71Ch]
  _DWORD v125[7]; // [sp+758h] [bp+720h] BYREF
  int v126; // [sp+774h] [bp+73Ch]
  _DWORD v127[7]; // [sp+778h] [bp+740h] BYREF
  int v128; // [sp+794h] [bp+75Ch]
  _DWORD v129[7]; // [sp+798h] [bp+760h] BYREF
  int v130; // [sp+7B4h] [bp+77Ch]
  _DWORD v131[7]; // [sp+7B8h] [bp+780h] BYREF
  int v132; // [sp+7D4h] [bp+79Ch]
  char v133[4100]; // [sp+7D8h] [bp+7A0h] BYREF

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v133,
    0x1000u,
    0,
    v4[7],
    *v4,
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v4[7],
    "%s ...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    422,
    60,
    v133);
  sub_99948(a1, a3, 240, 0x80000000);
  sub_99948(a1, a3, 86, 67634184);
  sub_99948(a1, a3, 64, 256);
  sub_99948(a1, a3, 80, 33423870);
  sub_99948(a1, a3, 81, 832516511);
  sub_99948(a1, a3, 88, -1);
  sub_99948(a1, a3, 86, 201853960);
  V_LOCK();
  V_INT((int)v13, "chain", *(int *)(a1 + 224));
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
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    437,
    60,
    v133);
  V_LOCK();
  V_INT((int)v15, "chain", *(int *)(a1 + 224));
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
    "%s Override pcs_pwr_stable, pma_pwr_stable",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    438,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99948(a1, a3, 78, -2144272046);
  sub_99948(a1, a3, 77, 33554944);
  sub_99948(a1, a3, 78, -2144247742);
  sub_99948(a1, a3, 77, 100664832);
  sub_99948(a1, a3, 78, -2144247742);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144272003);
  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 224));
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
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    445,
    60,
    v133);
  sub_99EC0(a1, a3, 24642, a4 | 0x600);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247741);
  sub_99EC0(a1, a3, 24644, a4 << 7);
  sub_99EC0(a1, a3, 24642, a4 | 0x700);
  sub_99948(a1, a3, 77, 16777472);
  sub_99948(a1, a3, 78, -2144247741);
  sub_99EC0(a1, a3, 24644, a4 << 7);
  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 224));
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
    "%s Overriding sup_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    460,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144251892);
  sub_99948(a1, a3, 77, 268439552);
  sub_99948(a1, a3, 78, -2144251892);
  sub_99948(a1, a3, 77, 33489407);
  sub_99948(a1, a3, 78, -2144272086);
  sub_99948(a1, a3, 77, 268374015);
  sub_99948(a1, a3, 78, -2144272085);
  V_LOCK();
  V_INT((int)v21, "chain", *(int *)(a1 + 224));
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
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    466,
    60,
    v133);
  sub_99EC0(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_99EC0(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_99948(a1, a3, 77, -1);
  sub_99948(a1, a3, 78, -2144247719);
  sub_99948(a1, a3, 77, -8388737);
  sub_99948(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v23, "chain", *(int *)(a1 + 224));
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
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    472,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247776);
  sub_99948(a1, a3, 77, -2136964960);
  sub_99948(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v25, "chain", *(int *)(a1 + 224));
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
    "%s Override rx_width",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    476,
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
  sub_99948(a1, a3, 77, v7);
  sub_99948(a1, a3, 78, -2144247722);
  sub_99948(a1, a3, 77, -1);
  sub_99948(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v27, "chain", *(int *)(a1 + 224));
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
    "%s Override rx_lpd, rx_pstate",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    483,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247771);
  sub_99948(a1, a3, 77, (int)&unk_140014);
  sub_99948(a1, a3, 78, -2144247771);
  V_LOCK();
  V_INT((int)v29, "chain", *(int *)(a1 + 224));
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
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    487,
    60,
    v133);
  sub_99948(a1, a3, 77, 33554944);
  sub_99948(a1, a3, 78, -2144247760);
  sub_99948(a1, a3, 77, 122947412);
  sub_99948(a1, a3, 78, -2144247760);
  V_LOCK();
  V_INT((int)v31, "chain", *(int *)(a1 + 224));
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
    "%s  Override tx_lpd, tx_pstate, tx_pll_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    491,
    60,
    v133);
  sub_99948(a1, a3, 77, 1073758208);
  sub_99948(a1, a3, 78, -2144247770);
  sub_99948(a1, a3, 77, -1072381932);
  sub_99948(a1, a3, 78, -2144247770);
  V_LOCK();
  V_INT((int)v33, "chain", *(int *)(a1 + 224));
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
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    494,
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
  sub_99948(a1, a3, 77, v8);
  sub_99948(a1, a3, 78, -2144247739);
  sub_99948(a1, a3, 77, -1);
  sub_99948(a1, a3, 78, -2144247732);
  V_LOCK();
  V_INT((int)v35, "chain", *(int *)(a1 + 224));
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
    "%s Override tx_master_pll_state_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    501,
    60,
    v133);
  sub_99948(a1, a3, 77, 268439552);
  sub_99948(a1, a3, 78, -2144247769);
  sub_99948(a1, a3, 77, 805318656);
  sub_99948(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v37, "chain", *(int *)(a1 + 224));
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
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    505,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247751);
  sub_99948(a1, a3, 77, 5505108);
  sub_99948(a1, a3, 78, -2144247751);
  V_LOCK();
  V_INT((int)v39, "chain", *(int *)(a1 + 224));
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
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    508,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251903);
  sub_99948(a1, a3, 77, 2293795);
  sub_99948(a1, a3, 78, -2144251903);
  V_LOCK();
  V_INT((int)v41, "chain", *(int *)(a1 + 224));
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
    "%s Overriding rx_invert",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    511,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144251872);
  sub_99948(a1, a3, 77, (int)&loc_80008);
  sub_99948(a1, a3, 78, -2144251872);
  V_LOCK();
  V_INT((int)v43, "chain", *(int *)(a1 + 224));
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
    "%s Overriding sup_misc",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    514,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144272111);
  sub_99948(a1, a3, 77, 1073692671);
  sub_99948(a1, a3, 78, -2144272088);
  V_LOCK();
  V_INT((int)v45, "chain", *(int *)(a1 + 224));
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
    "%s Perform refa_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    517,
    60,
    v133);
  sub_99948(a1, a3, 77, 234884608);
  sub_99948(a1, a3, 78, -2144272382);
  sub_99948(a1, a3, 77, 235408904);
  sub_99948(a1, a3, 78, -2144272382);
  V_LOCK();
  V_INT((int)v47, "chain", *(int *)(a1 + 224));
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
    "%s  Perform refb_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    520,
    60,
    v133);
  sub_99948(a1, a3, 77, 234884608);
  sub_99948(a1, a3, 78, -2144272381);
  sub_99948(a1, a3, 77, 235408904);
  sub_99948(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v49, "chain", *(int *)(a1 + 224));
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
    "%s Get access to external resistor",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    523,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&unk_180018);
  sub_99948(a1, a3, 78, -2144272353);
  V_LOCK();
  V_INT((int)v51, "chain", *(int *)(a1 + 224));
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
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    526,
    60,
    v133);
  sub_99948(a1, a3, 77, 22348117);
  sub_99948(a1, a3, 78, -2144272044);
  sub_99948(a1, a3, 77, 67044351);
  sub_99948(a1, a3, 78, -2144272044);
  V_LOCK();
  V_INT((int)v53, "chain", *(int *)(a1 + 224));
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
    "%s Overriding bg_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    529,
    60,
    v133);
  sub_99948(a1, a3, 77, 61277095);
  sub_99948(a1, a3, 78, -2144272380);
  sub_99948(a1, a3, 77, 65471463);
  sub_99948(a1, a3, 78, -2144272380);
  V_LOCK();
  V_INT((int)v55, "chain", *(int *)(a1 + 224));
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
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    532,
    60,
    v133);
  sub_99948(a1, a3, 77, 235408904);
  sub_99948(a1, a3, 78, -2144272382);
  sub_99948(a1, a3, 77, 252186376);
  sub_99948(a1, a3, 78, -2144272382);
  sub_99948(a1, a3, 77, 235408904);
  sub_99948(a1, a3, 78, -2144272381);
  sub_99948(a1, a3, 77, 252186376);
  sub_99948(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v57, "chain", *(int *)(a1 + 224));
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
    "%s Asserting mplla_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    537,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_40004);
  sub_99948(a1, a3, 78, -2144272379);
  sub_99948(a1, a3, 77, (int)&loc_C000C);
  sub_99948(a1, a3, 78, -2144272379);
  V_LOCK();
  V_INT((int)v59, "chain", *(int *)(a1 + 224));
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
    "%s Asserting mpllb_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    540,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_40004);
  sub_99948(a1, a3, 78, -2144272378);
  sub_99948(a1, a3, 77, (int)&loc_C000C);
  sub_99948(a1, a3, 78, -2144272378);
  V_LOCK();
  V_INT((int)v61, "chain", *(int *)(a1 + 224));
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
    "%s  Overriding mplla_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    543,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144272372);
  sub_99948(a1, a3, 77, (int)&loc_100010);
  sub_99948(a1, a3, 78, -2144272372);
  V_LOCK();
  V_INT((int)v63, "chain", *(int *)(a1 + 224));
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
    "%s Overriding mpllb_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    546,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144272360);
  sub_99948(a1, a3, 77, (int)&loc_100010);
  sub_99948(a1, a3, 78, -2144272360);
  V_LOCK();
  V_INT((int)v65, "chain", *(int *)(a1 + 224));
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
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    550,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144272114);
  sub_99948(a1, a3, 77, 710158932);
  sub_99948(a1, a3, 78, -2144272114);
  V_LOCK();
  V_INT((int)v67, "chain", *(int *)(a1 + 224));
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
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    553,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144272124);
  sub_99948(a1, a3, 77, (int)"");
  sub_99948(a1, a3, 78, -2144272124);
  V_LOCK();
  V_INT((int)v69, "chain", *(int *)(a1 + 224));
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
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    557,
    60,
    v133);
  V_LOCK();
  V_INT((int)v71, "chain", *(int *)(a1 + 224));
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
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    558,
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
  sub_99948(a1, a3, 77, v9);
  sub_99948(a1, a3, 78, -2144247559);
  V_LOCK();
  V_INT((int)v73, "chain", *(int *)(a1 + 224));
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
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    563,
    60,
    v133);
  sub_99948(a1, a3, 77, 20971840);
  sub_99948(a1, a3, 78, -2144251901);
  sub_99948(a1, a3, 77, 88606024);
  sub_99948(a1, a3, 78, -2144251901);
  V_LOCK();
  V_INT((int)v75, "chain", *(int *)(a1 + 224));
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
    "%s Overriding tx_eq_pre and tx_eq_post",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    567,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_100010);
  sub_99948(a1, a3, 78, -2144251900);
  sub_99948(a1, a3, 77, 542122064);
  sub_99948(a1, a3, 78, -2144251900);
  V_LOCK();
  V_INT((int)v77, "chain", *(int *)(a1 + 224));
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
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    570,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247761);
  sub_99948(a1, a3, 77, (int)"");
  sub_99948(a1, a3, 78, -2144247761);
  V_LOCK();
  V_INT((int)v79, "chain", *(int *)(a1 + 224));
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
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    574,
    60,
    v133);
  sub_99948(a1, a3, 77, 537010178);
  sub_99948(a1, a3, 78, -2144247750);
  V_LOCK();
  V_INT((int)v81, "chain", *(int *)(a1 + 224));
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
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    576,
    60,
    v133);
  sub_99948(a1, a3, 77, 872428544);
  sub_99948(a1, a3, 78, -2144247769);
  sub_99948(a1, a3, 77, 1006648320);
  sub_99948(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v83, "chain", *(int *)(a1 + 224));
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
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    579,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_80008);
  sub_99948(a1, a3, 78, -2144247745);
  sub_99948(a1, a3, 77, (int)&unk_180018);
  sub_99948(a1, a3, 78, -2144247745);
  V_LOCK();
  V_INT((int)v85, "chain", *(int *)(a1 + 224));
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
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    582,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247798);
  sub_99948(a1, a3, 77, (int)"");
  sub_99948(a1, a3, 78, -2144247798);
  V_LOCK();
  V_INT((int)v87, "chain", *(int *)(a1 + 224));
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
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    585,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144247604);
  V_LOCK();
  V_INT((int)v89, "chain", *(int *)(a1 + 224));
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
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    587,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144247796);
  sub_99948(a1, a3, 77, 268439552);
  sub_99948(a1, a3, 78, -2144247796);
  V_LOCK();
  V_INT((int)v91, "chain", *(int *)(a1 + 224));
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
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    591,
    60,
    v133);
  sub_99948(a1, a3, 77, 0);
  sub_99948(a1, a3, 78, -2144243666);
  sub_99948(a1, a3, 77, (int)"");
  sub_99948(a1, a3, 78, -2144243666);
  sub_99948(a1, a3, 77, 4259905);
  sub_99948(a1, a3, 78, -2144251869);
  sub_99948(a1, a3, 77, 13304011);
  sub_99948(a1, a3, 78, -2144251869);
  V_LOCK();
  V_INT((int)v93, "chain", *(int *)(a1 + 224));
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
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    596,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_40004);
  sub_99948(a1, a3, 78, -2144243609);
  V_LOCK();
  V_INT((int)v95, "chain", *(int *)(a1 + 224));
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
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    598,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_99948(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v97, "chain", *(int *)(a1 + 224));
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
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    600,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99948(a1, a3, 78, -2144272078);
  V_LOCK();
  V_INT((int)v99, "chain", *(int *)(a1 + 224));
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
    "%s De-assrting per lane resets to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    602,
    60,
    v133);
  sub_99948(a1, a3, 77, -2136964960);
  sub_99948(a1, a3, 78, -2144247776);
  sub_99948(a1, a3, 77, -2136309590);
  sub_99948(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v101, "chain", *(int *)(a1 + 224));
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
    "%s Waiting for PHY power up...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    605,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 12308, 1);
  serdes_wait_status_rvn(a1, a2, a3, 12820, 1);
  serdes_wait_status_rvn(a1, a2, a3, 13332, 1);
  serdes_wait_status_rvn(a1, a2, a3, 13844, 1);
  V_LOCK();
  V_INT((int)v103, "chain", *(int *)(a1 + 224));
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
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    611,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  V_LOCK();
  V_INT((int)v105, "chain", *(int *)(a1 + 224));
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
    "%s Reading RX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    616,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  V_LOCK();
  V_INT((int)v107, "chain", *(int *)(a1 + 224));
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
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    621,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  V_LOCK();
  V_INT((int)v109, "chain", *(int *)(a1 + 224));
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
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    626,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  V_LOCK();
  V_INT((int)v111, "chain", *(int *)(a1 + 224));
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
    "%s Enabling TX LBERT in LFSR31",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    631,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251791);
  V_LOCK();
  V_INT((int)v113, "chain", *(int *)(a1 + 224));
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
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    633,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_99948(a1, a3, 78, -2144247768);
  sub_99948(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_99948(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v115, "chain", *(int *)(a1 + 224));
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
    "%s Overriding the RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    637,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99948(a1, a3, 78, -2144243377);
  sub_99948(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99948(a1, a3, 78, -2144243377);
  sub_99948(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99948(a1, a3, 78, -2144243377);
  V_LOCK();
  V_INT((int)v117, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    641,
    60,
    v133);
  sub_99948(a1, a3, 77, -2136244053);
  sub_99948(a1, a3, 78, -2144247776);
  sub_99948(a1, a3, 77, -2136244053);
  sub_99948(a1, a3, 78, -2144247776);
  usleep(0xAu);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 81);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 81);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 81);
  sub_99948(a1, a3, 77, -2136309590);
  sub_99948(a1, a3, 78, -2144247776);
  sub_99948(a1, a3, 77, -2136309590);
  sub_99948(a1, a3, 78, -2144247776);
  usleep(0x64u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 84);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 84);
  usleep(0x3Cu);
  V_LOCK();
  V_INT((int)v119, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    657,
    60,
    v133);
  sub_99948(a1, a3, 77, -1062551382);
  sub_99948(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  V_INT((int)v121, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    660,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 86);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)v123, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    666,
    60,
    v133);
  if ( a4 == 2 )
  {
    sub_99948(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99948(a1, a3, 78, -2144247798);
    sub_99948(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99948(a1, a3, 78, -2144247798);
    usleep(1u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 1);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 1);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 1);
    sub_99948(a1, a3, 77, (int)"");
    sub_99948(a1, a3, 78, -2144247798);
    sub_99948(a1, a3, 77, (int)"");
    sub_99948(a1, a3, 78, -2144247798);
    usleep(0x64u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  V_LOCK();
  V_INT((int)v125, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    685,
    60,
    v133);
  sub_99948(a1, a3, 77, -2136309590);
  sub_99948(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v127, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    687,
    60,
    v133);
  sub_99948(a1, a3, 77, -1062551382);
  sub_99948(a1, a3, 78, -2144247776);
  usleep(0x32u);
  V_LOCK();
  V_INT((int)v129, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    691,
    60,
    v133);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 82);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 86);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 82);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)v131, "chain", *(int *)(a1 + 224));
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
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    697,
    60,
    v133);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  sub_99948(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  sub_99948(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  sub_99948(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99948(a1, a3, 78, -2144251757);
  usleep(0xAu);
  return 0;
}
