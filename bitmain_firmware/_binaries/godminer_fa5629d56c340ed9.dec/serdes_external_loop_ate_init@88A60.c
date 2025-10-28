int __fastcall serdes_external_loop_ate_init(int a1, unsigned int a2, unsigned int a3)
{
  FILE *v3; // r6
  _DWORD *v4; // r7
  int v7; // r3
  char *v8; // r0
  int v9; // r0
  int v10; // r2
  char *v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r6
  int v16; // r3
  char *v18; // r0
  char *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  char *v29; // r0
  int v31; // [sp+48h] [bp-8h] BYREF
  unsigned __int8 v32; // [sp+4Ch] [bp-4h] BYREF
  _DWORD v33[7]; // [sp+70h] [bp+20h] BYREF
  int v34; // [sp+8Ch] [bp+3Ch]
  _DWORD v35[7]; // [sp+90h] [bp+40h] BYREF
  int v36; // [sp+ACh] [bp+5Ch]
  _DWORD v37[7]; // [sp+B0h] [bp+60h] BYREF
  int v38; // [sp+CCh] [bp+7Ch]
  _DWORD v39[7]; // [sp+D0h] [bp+80h] BYREF
  int v40; // [sp+ECh] [bp+9Ch]
  _DWORD v41[7]; // [sp+F0h] [bp+A0h] BYREF
  int v42; // [sp+10Ch] [bp+BCh]
  _DWORD v43[7]; // [sp+110h] [bp+C0h] BYREF
  int v44; // [sp+12Ch] [bp+DCh]
  _DWORD v45[7]; // [sp+130h] [bp+E0h] BYREF
  int v46; // [sp+14Ch] [bp+FCh]
  _DWORD v47[7]; // [sp+150h] [bp+100h] BYREF
  int v48; // [sp+16Ch] [bp+11Ch]
  _DWORD v49[7]; // [sp+170h] [bp+120h] BYREF
  int v50; // [sp+18Ch] [bp+13Ch]
  _DWORD v51[7]; // [sp+190h] [bp+140h] BYREF
  int v52; // [sp+1ACh] [bp+15Ch]
  _DWORD v53[7]; // [sp+1B0h] [bp+160h] BYREF
  int v54; // [sp+1CCh] [bp+17Ch]
  _DWORD v55[7]; // [sp+1D0h] [bp+180h] BYREF
  int v56; // [sp+1ECh] [bp+19Ch]
  _DWORD v57[7]; // [sp+1F0h] [bp+1A0h] BYREF
  int v58; // [sp+20Ch] [bp+1BCh]
  _DWORD v59[7]; // [sp+210h] [bp+1C0h] BYREF
  int v60; // [sp+22Ch] [bp+1DCh]
  _DWORD v61[7]; // [sp+230h] [bp+1E0h] BYREF
  int v62; // [sp+24Ch] [bp+1FCh]
  _DWORD v63[7]; // [sp+250h] [bp+200h] BYREF
  int v64; // [sp+26Ch] [bp+21Ch]
  _DWORD v65[7]; // [sp+270h] [bp+220h] BYREF
  int v66; // [sp+28Ch] [bp+23Ch]
  _DWORD v67[7]; // [sp+290h] [bp+240h] BYREF
  int v68; // [sp+2ACh] [bp+25Ch]
  _DWORD v69[7]; // [sp+2B0h] [bp+260h] BYREF
  int v70; // [sp+2CCh] [bp+27Ch]
  _DWORD v71[7]; // [sp+2D0h] [bp+280h] BYREF
  int v72; // [sp+2ECh] [bp+29Ch]
  _DWORD v73[7]; // [sp+2F0h] [bp+2A0h] BYREF
  int v74; // [sp+30Ch] [bp+2BCh]
  _DWORD v75[7]; // [sp+310h] [bp+2C0h] BYREF
  int v76; // [sp+32Ch] [bp+2DCh]
  _DWORD v77[7]; // [sp+330h] [bp+2E0h] BYREF
  int v78; // [sp+34Ch] [bp+2FCh]
  _DWORD v79[7]; // [sp+350h] [bp+300h] BYREF
  int v80; // [sp+36Ch] [bp+31Ch]
  _DWORD v81[7]; // [sp+370h] [bp+320h] BYREF
  int v82; // [sp+38Ch] [bp+33Ch]
  _DWORD v83[7]; // [sp+390h] [bp+340h] BYREF
  int v84; // [sp+3ACh] [bp+35Ch]
  _DWORD v85[7]; // [sp+3B0h] [bp+360h] BYREF
  int v86; // [sp+3CCh] [bp+37Ch]
  _DWORD v87[7]; // [sp+3D0h] [bp+380h] BYREF
  int v88; // [sp+3ECh] [bp+39Ch]
  _DWORD v89[7]; // [sp+3F0h] [bp+3A0h] BYREF
  int v90; // [sp+40Ch] [bp+3BCh]
  _DWORD v91[7]; // [sp+410h] [bp+3C0h] BYREF
  int v92; // [sp+42Ch] [bp+3DCh]
  _DWORD v93[7]; // [sp+430h] [bp+3E0h] BYREF
  int v94; // [sp+44Ch] [bp+3FCh]
  _DWORD v95[7]; // [sp+450h] [bp+400h] BYREF
  int v96; // [sp+46Ch] [bp+41Ch]
  _DWORD v97[7]; // [sp+470h] [bp+420h] BYREF
  int v98; // [sp+48Ch] [bp+43Ch]
  _DWORD v99[7]; // [sp+490h] [bp+440h] BYREF
  int v100; // [sp+4ACh] [bp+45Ch]
  _DWORD v101[7]; // [sp+4B0h] [bp+460h] BYREF
  int v102; // [sp+4CCh] [bp+47Ch]
  _DWORD v103[7]; // [sp+4D0h] [bp+480h] BYREF
  int v104; // [sp+4ECh] [bp+49Ch]
  _DWORD v105[7]; // [sp+4F0h] [bp+4A0h] BYREF
  int v106; // [sp+50Ch] [bp+4BCh]
  _DWORD v107[7]; // [sp+510h] [bp+4C0h] BYREF
  int v108; // [sp+52Ch] [bp+4DCh]
  _DWORD v109[7]; // [sp+530h] [bp+4E0h] BYREF
  int v110; // [sp+54Ch] [bp+4FCh]
  _DWORD v111[7]; // [sp+550h] [bp+500h] BYREF
  int v112; // [sp+56Ch] [bp+51Ch]
  _DWORD v113[7]; // [sp+570h] [bp+520h] BYREF
  int v114; // [sp+58Ch] [bp+53Ch]
  _DWORD v115[7]; // [sp+590h] [bp+540h] BYREF
  int v116; // [sp+5ACh] [bp+55Ch]
  _DWORD v117[7]; // [sp+5B0h] [bp+560h] BYREF
  int v118; // [sp+5CCh] [bp+57Ch]
  _DWORD v119[7]; // [sp+5D0h] [bp+580h] BYREF
  int v120; // [sp+5ECh] [bp+59Ch]
  _DWORD v121[7]; // [sp+5F0h] [bp+5A0h] BYREF
  int v122; // [sp+60Ch] [bp+5BCh]
  _DWORD v123[7]; // [sp+610h] [bp+5C0h] BYREF
  int v124; // [sp+62Ch] [bp+5DCh]
  _DWORD v125[7]; // [sp+630h] [bp+5E0h] BYREF
  int v126; // [sp+64Ch] [bp+5FCh]
  _DWORD v127[7]; // [sp+650h] [bp+600h] BYREF
  int v128; // [sp+66Ch] [bp+61Ch]
  _DWORD v129[7]; // [sp+670h] [bp+620h] BYREF
  int v130; // [sp+68Ch] [bp+63Ch]
  _DWORD v131[7]; // [sp+690h] [bp+640h] BYREF
  int v132; // [sp+6ACh] [bp+65Ch]
  _DWORD v133[7]; // [sp+6B0h] [bp+660h] BYREF
  int v134; // [sp+6CCh] [bp+67Ch]
  _DWORD v135[7]; // [sp+6D0h] [bp+680h] BYREF
  int v136; // [sp+6ECh] [bp+69Ch]
  _DWORD v137[7]; // [sp+6F0h] [bp+6A0h] BYREF
  int v138; // [sp+70Ch] [bp+6BCh]
  _DWORD v139[7]; // [sp+710h] [bp+6C0h] BYREF
  int v140; // [sp+72Ch] [bp+6DCh]
  _DWORD v141[7]; // [sp+730h] [bp+6E0h] BYREF
  int v142; // [sp+74Ch] [bp+6FCh]
  _DWORD v143[7]; // [sp+750h] [bp+700h] BYREF
  int v144; // [sp+76Ch] [bp+71Ch]
  _DWORD v145[7]; // [sp+770h] [bp+720h] BYREF
  int v146; // [sp+78Ch] [bp+73Ch]
  _DWORD v147[7]; // [sp+790h] [bp+740h] BYREF
  int v148; // [sp+7ACh] [bp+75Ch]
  _DWORD v149[7]; // [sp+7B0h] [bp+760h] BYREF
  int v150; // [sp+7CCh] [bp+77Ch]
  _DWORD v151[7]; // [sp+7D0h] [bp+780h] BYREF
  int v152; // [sp+7ECh] [bp+79Ch]
  _DWORD s[64]; // [sp+7F0h] [bp+7A0h] BYREF
  char v154[4100]; // [sp+8F0h] [bp+8A0h] BYREF

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1191,
    60,
    v154);
  sub_80904(a1, a3, 240, 0x80000000);
  usleep(0x258u);
  sub_80DD8(a1, a3, 240);
  sub_80904(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_80DD8(a1, a3, 86);
  sub_80904(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_80DD8(a1, a3, 85);
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
  v32 = 0;
  v31 = 0;
  V_LOCK();
  logfmt_raw(v154, 0x1000u, 0, "%s ...P: %d", "phy_read_config_ini", (unsigned __int8)case_select[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_read_config_ini",
    19,
    153,
    40,
    v154);
  v7 = (unsigned __int8)case_select[0];
  if ( case_select[0] )
  {
    if ( case_select[0] != 1 )
      goto LABEL_3;
  }
  else
  {
    v20 = fopen64("/config/phy_adapt_0.ini", "r");
    v7 = (unsigned __int8)case_select[0];
    v3 = (FILE *)v20;
    if ( case_select[0] != 1 )
    {
LABEL_3:
      if ( v7 != 2 )
        goto LABEL_4;
      goto LABEL_55;
    }
  }
  v21 = fopen64("/config/phy_adapt_1.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v21;
  if ( case_select[0] != 2 )
  {
LABEL_4:
    if ( v7 != 3 )
      goto LABEL_5;
    goto LABEL_56;
  }
LABEL_55:
  v22 = fopen64("/config/phy_adapt_2.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v22;
  if ( case_select[0] != 3 )
  {
LABEL_5:
    if ( v7 != 4 )
      goto LABEL_6;
    goto LABEL_57;
  }
LABEL_56:
  v23 = fopen64("/config/phy_adapt_3.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v23;
  if ( case_select[0] != 4 )
  {
LABEL_6:
    if ( v7 != 5 )
      goto LABEL_7;
    goto LABEL_58;
  }
LABEL_57:
  v24 = fopen64("/config/phy_adapt_4.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v24;
  if ( case_select[0] != 5 )
  {
LABEL_7:
    if ( v7 != 6 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_58:
  v25 = fopen64("/config/phy_adapt_5.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v25;
  if ( case_select[0] != 6 )
  {
LABEL_8:
    if ( v7 != 7 )
      goto LABEL_9;
    goto LABEL_60;
  }
LABEL_59:
  v26 = fopen64("/config/phy_adapt_6.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v26;
  if ( case_select[0] != 7 )
  {
LABEL_9:
    if ( v7 != 8 )
      goto LABEL_10;
    goto LABEL_61;
  }
LABEL_60:
  v27 = fopen64("/config/phy_adapt_7.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v27;
  if ( case_select[0] != 8 )
  {
LABEL_10:
    if ( v7 != 9 )
      goto LABEL_11;
LABEL_62:
    v3 = (FILE *)fopen64("/config/phy_adapt_9.ini", "r");
    if ( case_select[0] != 10 )
      goto LABEL_12;
LABEL_63:
    v3 = (FILE *)fopen64("/config/phy_adapt_10.ini", "r");
    goto LABEL_12;
  }
LABEL_61:
  v28 = fopen64("/config/phy_adapt_8.ini", "r");
  v7 = (unsigned __int8)case_select[0];
  v3 = (FILE *)v28;
  if ( case_select[0] == 9 )
    goto LABEL_62;
LABEL_11:
  if ( v7 == 10 )
    goto LABEL_63;
LABEL_12:
  if ( !v3 )
  {
    V_LOCK();
    logfmt_raw(v154, 0x1000u, 0, "open phy test config failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_read_config_ini",
      19,
      180,
      100,
      v154);
    V_LOCK();
    logfmt_raw(v154, 0x1000u, 0, "PHY read config err!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1237,
      100,
      v154);
    return 0;
  }
  memset(s, 0, sizeof(s));
  while ( fgets((char *)s, 255, v3) )
  {
    if ( LOBYTE(s[0]) != 35 && BYTE1(s[0]) != 35 )
    {
      v8 = strstr((const char *)s, aMode_0);
      if ( v8 )
      {
        _isoc99_sscanf(v8 + 5, "%d", &v31);
        V_LOCK();
        logfmt_raw(v154, 0x1000u, 0, "phy test mode: %d", (unsigned __int8)v31);
        V_UNLOCK();
        v9 = g_zc;
        v10 = 193;
        goto LABEL_19;
      }
      v11 = strstr((const char *)s, "main_eq=");
      if ( v11 )
      {
        _isoc99_sscanf(v11 + 8, "%d", (char *)&v31 + 1);
        V_LOCK();
        logfmt_raw(v154, 0x1000u, 0, "phy test main_eq: %d", BYTE1(v31));
        V_UNLOCK();
        v9 = g_zc;
        v10 = 197;
        goto LABEL_19;
      }
      v18 = strstr((const char *)s, "pre_eq=");
      if ( v18 )
      {
        _isoc99_sscanf(v18 + 7, "%d", (char *)&v31 + 2);
        V_LOCK();
        logfmt_raw(v154, 0x1000u, 0, "phy test pre_eq: %d", BYTE2(v31));
        V_UNLOCK();
        v9 = g_zc;
        v10 = 201;
        goto LABEL_19;
      }
      v19 = strstr((const char *)s, "post_eq=");
      if ( v19 )
      {
        _isoc99_sscanf(v19 + 8, "%d", (char *)&v31 + 3);
        V_LOCK();
        logfmt_raw(v154, 0x1000u, 0, "phy test post_eq: %d", HIBYTE(v31));
        V_UNLOCK();
        v9 = g_zc;
        v10 = 205;
        goto LABEL_19;
      }
      v29 = strstr((const char *)s, "adapt_en=");
      if ( v29 )
      {
        _isoc99_sscanf(v29 + 9, "%d", &v32);
        V_LOCK();
        logfmt_raw(v154, 0x1000u, 0, "phy test adapt_en: %d", v32);
        V_UNLOCK();
        v9 = g_zc;
        v10 = 209;
LABEL_19:
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_read_config_ini",
          19,
          v10,
          40,
          v154);
      }
    }
  }
  fclose(v3);
  phy_external_loop_adapt(a1, a2, a3, BYTE1(v31), BYTE2(v31), HIBYTE(v31), v32);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    V_INT((int)v33, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v154,
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
      "%s PHY core %02x sram boot failed!",
      "serdes_external_loop_ate_init",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1246,
      100,
      v154);
  }
  sub_80904(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  V_LOCK();
  V_INT((int)v35, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1252,
    60,
    v154);
  V_LOCK();
  V_INT((int)v37, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override pcs_pwr_stable, pma_pwr_stable",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1253,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144272046);
  sub_80904(a1, a3, 77, 33554944);
  sub_80904(a1, a3, 78, -2144247742);
  sub_80904(a1, a3, 77, 100664832);
  sub_80904(a1, a3, 78, -2144247742);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144272003);
  V_LOCK();
  V_INT((int)v39, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1260,
    60,
    v154);
  sub_80904(a1, a3, 77, 100664832);
  sub_80904(a1, a3, 78, -2144247742);
  sub_810AC(a1, a3, 24643, (unsigned __int8)v31);
  sub_810AC(a1, a3, 24644, (unsigned __int8)v31 << 7);
  sub_80904(a1, a3, 77, 117442304);
  sub_80904(a1, a3, 78, -2144247742);
  sub_810AC(a1, a3, 24643, (unsigned __int8)v31 | 0x100);
  sub_810AC(a1, a3, 24644, ((unsigned __int8)v31 << 7) | 0x8000);
  V_LOCK();
  V_INT((int)v41, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding sup_cntx_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1268,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144251892);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144251892);
  sub_80904(a1, a3, 77, 33489407);
  sub_80904(a1, a3, 78, -2144272086);
  sub_80904(a1, a3, 77, 268374015);
  sub_80904(a1, a3, 78, -2144272085);
  V_LOCK();
  V_INT((int)v43, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1274,
    60,
    v154);
  sub_810AC(a1, a3, 24644, ((unsigned __int8)v31 << 7) | 0x8020);
  sub_810AC(a1, a3, 24644, ((unsigned __int8)v31 << 7) | 0x8060);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247719);
  sub_80904(a1, a3, 77, -8388737);
  sub_80904(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v45, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1280,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136964960);
  sub_80904(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v47, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override rx_width",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1284,
    60,
    v154);
  if ( (unsigned __int8)v31 == 2 )
    LOWORD(v12) = 4160;
  else
    LOWORD(v12) = 4144;
  if ( (unsigned __int8)v31 == 2 )
    HIWORD(v12) = 4160;
  else
    HIWORD(v12) = 4144;
  sub_80904(a1, a3, 77, v12);
  sub_80904(a1, a3, 78, -2144247722);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247718);
  V_LOCK();
  V_INT((int)v49, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override rx_lpd, rx_pstate",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1291,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247771);
  sub_80904(a1, a3, 77, (int)&loc_140014);
  sub_80904(a1, a3, 78, -2144247771);
  V_LOCK();
  V_INT((int)v51, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1295,
    60,
    v154);
  sub_80904(a1, a3, 77, 33554944);
  sub_80904(a1, a3, 78, -2144247760);
  sub_80904(a1, a3, 77, 122947412);
  sub_80904(a1, a3, 78, -2144247760);
  V_LOCK();
  V_INT((int)v53, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s  Override tx_lpd, tx_pstate, tx_pll_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1299,
    60,
    v154);
  sub_80904(a1, a3, 77, 1073758208);
  sub_80904(a1, a3, 78, -2144247770);
  sub_80904(a1, a3, 77, -1072381932);
  sub_80904(a1, a3, 78, -2144247770);
  V_LOCK();
  V_INT((int)v55, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1302,
    60,
    v154);
  if ( (unsigned __int8)v31 == 2 )
    LOWORD(v13) = 4;
  else
    LOWORD(v13) = 3;
  if ( (unsigned __int8)v31 == 2 )
    HIWORD(v13) = 4;
  else
    HIWORD(v13) = 3;
  sub_80904(a1, a3, 77, v13);
  sub_80904(a1, a3, 78, -2144247739);
  sub_80904(a1, a3, 77, -1);
  sub_80904(a1, a3, 78, -2144247732);
  V_LOCK();
  V_INT((int)v57, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override tx_master_pll_state_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1309,
    60,
    v154);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144247769);
  sub_80904(a1, a3, 77, 805318656);
  sub_80904(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v59, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1313,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247751);
  sub_80904(a1, a3, 77, 5505108);
  sub_80904(a1, a3, 78, -2144247751);
  V_LOCK();
  V_INT((int)v61, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1316,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
  sub_80904(a1, a3, 78, -2144251903);
  sub_80904(a1, a3, 77, 2293795);
  sub_80904(a1, a3, 78, -2144251903);
  V_LOCK();
  V_INT((int)v63, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding rx_invert",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1319,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144251872);
  sub_80904(a1, a3, 77, (int)&loc_80008);
  sub_80904(a1, a3, 78, -2144251872);
  V_LOCK();
  V_INT((int)v65, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding sup_misc",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1322,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272111);
  sub_80904(a1, a3, 77, 1073692671);
  sub_80904(a1, a3, 78, -2144272088);
  V_LOCK();
  V_INT((int)v67, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Perform refa_clk_div2_en override",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1325,
    60,
    v154);
  sub_80904(a1, a3, 77, 234884608);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272382);
  V_LOCK();
  V_INT((int)v69, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s  Perform refb_clk_div2_en override",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1328,
    60,
    v154);
  sub_80904(a1, a3, 77, 234884608);
  sub_80904(a1, a3, 78, -2144272381);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v71, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Get access to external resistor",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1331,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&unk_180018);
  sub_80904(a1, a3, 78, -2144272353);
  V_LOCK();
  V_INT((int)v73, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1334,
    60,
    v154);
  sub_80904(a1, a3, 77, 22348117);
  sub_80904(a1, a3, 78, -2144272044);
  sub_80904(a1, a3, 77, 67044351);
  sub_80904(a1, a3, 78, -2144272044);
  V_LOCK();
  V_INT((int)v75, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding bg_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1337,
    60,
    v154);
  sub_80904(a1, a3, 77, 61277095);
  sub_80904(a1, a3, 78, -2144272380);
  sub_80904(a1, a3, 77, 65471463);
  sub_80904(a1, a3, 78, -2144272380);
  V_LOCK();
  V_INT((int)v77, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1340,
    60,
    v154);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 252186376);
  sub_80904(a1, a3, 78, -2144272382);
  sub_80904(a1, a3, 77, 235408904);
  sub_80904(a1, a3, 78, -2144272381);
  sub_80904(a1, a3, 77, 252186376);
  sub_80904(a1, a3, 78, -2144272381);
  V_LOCK();
  V_INT((int)v79, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Asserting mplla_word_clk_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1345,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144272379);
  sub_80904(a1, a3, 77, (int)&loc_C000C);
  sub_80904(a1, a3, 78, -2144272379);
  V_LOCK();
  V_INT((int)v81, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Asserting mpllb_word_clk_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1348,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144272378);
  sub_80904(a1, a3, 77, (int)&loc_C000C);
  sub_80904(a1, a3, 78, -2144272378);
  V_LOCK();
  V_INT((int)v83, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s  Overriding mplla_ssc_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1351,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272372);
  sub_80904(a1, a3, 77, (int)&loc_100010);
  sub_80904(a1, a3, 78, -2144272372);
  V_LOCK();
  V_INT((int)v85, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding mpllb_ssc_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1354,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272360);
  sub_80904(a1, a3, 77, (int)&loc_100010);
  sub_80904(a1, a3, 78, -2144272360);
  V_LOCK();
  V_INT((int)v87, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1358,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272114);
  sub_80904(a1, a3, 77, 710158932);
  sub_80904(a1, a3, 78, -2144272114);
  V_LOCK();
  V_INT((int)v89, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1361,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144272124);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144272124);
  V_LOCK();
  V_INT((int)v91, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1365,
    60,
    v154);
  V_LOCK();
  V_INT((int)v93, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1366,
    60,
    v154);
  if ( (unsigned __int8)v31 == 2 )
    LOWORD(v14) = 498;
  else
    LOWORD(v14) = 501;
  if ( (unsigned __int8)v31 == 2 )
    HIWORD(v14) = 498;
  else
    HIWORD(v14) = 501;
  sub_80904(a1, a3, 77, v14);
  sub_80904(a1, a3, 78, -2144247559);
  V_LOCK();
  V_INT((int)v95, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1371,
    60,
    v154);
  sub_80904(a1, a3, 77, 20971840);
  sub_80904(a1, a3, 78, -2144251901);
  sub_80904(a1, a3, 77, 88606024);
  sub_80904(a1, a3, 78, -2144251901);
  V_LOCK();
  V_INT((int)v97, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding tx_eq_pre and tx_eq_post",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1375,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_100010);
  sub_80904(a1, a3, 78, -2144251900);
  sub_80904(a1, a3, 77, 542122064);
  sub_80904(a1, a3, 78, -2144251900);
  V_LOCK();
  V_INT((int)v99, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1378,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247761);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144247761);
  V_LOCK();
  V_INT((int)v101, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1382,
    60,
    v154);
  sub_80904(a1, a3, 77, 537010178);
  sub_80904(a1, a3, 78, -2144247750);
  V_LOCK();
  V_INT((int)v103, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1384,
    60,
    v154);
  sub_80904(a1, a3, 77, 872428544);
  sub_80904(a1, a3, 78, -2144247769);
  sub_80904(a1, a3, 77, 1006648320);
  sub_80904(a1, a3, 78, -2144247769);
  V_LOCK();
  V_INT((int)v105, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1387,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_80008);
  sub_80904(a1, a3, 78, -2144247745);
  sub_80904(a1, a3, 77, (int)&unk_180018);
  sub_80904(a1, a3, 78, -2144247745);
  V_LOCK();
  V_INT((int)v107, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1390,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247798);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144247798);
  V_LOCK();
  V_INT((int)v109, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1393,
    60,
    v154);
  sub_80904(a1, a3, 77, 65537);
  sub_80904(a1, a3, 78, -2144247604);
  V_LOCK();
  V_INT((int)v111, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1395,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144247796);
  sub_80904(a1, a3, 77, 268439552);
  sub_80904(a1, a3, 78, -2144247796);
  V_LOCK();
  V_INT((int)v113, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1398,
    60,
    v154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144243666);
  sub_80904(a1, a3, 77, (int)"tput");
  sub_80904(a1, a3, 78, -2144243666);
  sub_80904(a1, a3, 77, 4259905);
  sub_80904(a1, a3, 78, -2144251869);
  sub_80904(a1, a3, 77, 13304011);
  sub_80904(a1, a3, 78, -2144251869);
  V_LOCK();
  V_INT((int)v115, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1403,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_40004);
  sub_80904(a1, a3, 78, -2144243609);
  V_LOCK();
  V_INT((int)v117, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1405,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_80904(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v119, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1407,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_70004 + 3);
  sub_80904(a1, a3, 78, -2144272078);
  V_LOCK();
  V_INT((int)v121, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s De-assrting per lane resets to 0",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1409,
    60,
    v154);
  sub_80904(a1, a3, 77, -2136964960);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  V_LOCK();
  V_INT((int)v123, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Waiting for PHY power up...",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1412,
    60,
    v154);
  V_LOCK();
  V_INT((int)v125, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Waiting for PHY power up wait begin...",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1413,
    60,
    v154);
  usleep(0x3E8u);
  V_LOCK();
  V_INT((int)v127, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    &unk_16F538,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1416,
    60,
    v154);
  V_LOCK();
  V_INT((int)v129, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Waiting for PHY power up...",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1417,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 12308, 65537);
  serdes_wait_status(a1, a2, a3, 12820, 65537);
  serdes_wait_status(a1, a2, a3, 13332, 65537);
  serdes_wait_status(a1, a2, a3, 13844, 65537);
  V_LOCK();
  V_INT((int)v131, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
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
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1433,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  V_INT((int)v133, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v134,
    v133[0],
    v133[1],
    v133[2],
    v133[3],
    v133[4],
    v133[5],
    v133[6],
    v134,
    "%s Reading RX ACK at PHY level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1438,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  V_INT((int)v135, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v136,
    v135[0],
    v135[1],
    v135[2],
    v135[3],
    v135[4],
    v135[5],
    v135[6],
    v136,
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1443,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  V_INT((int)v137, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v138,
    v137[0],
    v137[1],
    v137[2],
    v137[3],
    v137[4],
    v137[5],
    v137[6],
    v138,
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1448,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  v15 = (unsigned __int8)LFSR31;
  if ( LFSR31 )
  {
    V_LOCK();
    V_INT((int)v139, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v154,
      0x1000u,
      0,
      v140,
      v139[0],
      v139[1],
      v139[2],
      v139[3],
      v139[4],
      v139[5],
      v139[6],
      v140,
      "%s Enabling TX LBERT in LFSR31",
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1456,
      60,
      v154);
    v16 = (int)&dword_10000 + 1;
  }
  else
  {
    V_LOCK();
    V_INT((int)v141, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v154,
      0x1000u,
      v15,
      v142,
      v141[0],
      v141[1],
      v141[2],
      v141[3],
      v141[4],
      v141[5],
      v141[6],
      v142,
      "%s Enabling TX LBERT in NYQUIST",
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1461,
      60,
      v154);
    sub_80904(a1, a3, 77, 715139744);
    sub_80904(a1, a3, 78, -2144251791);
    usleep(0x12Cu);
    v16 = 715729577;
  }
  sub_80904(a1, a3, 77, v16);
  sub_80904(a1, a3, 78, -2144251791);
  usleep(0x12Cu);
  V_LOCK();
  V_INT((int)v143, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v144,
    v143[0],
    v143[1],
    v143[2],
    v143[3],
    v143[4],
    v143[5],
    v143[6],
    v144,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1469,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_80904(a1, a3, 78, -2144247768);
  sub_80904(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_80904(a1, a3, 78, -2144247768);
  V_LOCK();
  V_INT((int)v145, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v146,
    v145[0],
    v145[1],
    v145[2],
    v145[3],
    v145[4],
    v145[5],
    v145[6],
    v146,
    "%s Overriding the RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1473,
    60,
    v154);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  sub_80904(a1, a3, 77, (int)&loc_70004 + 3);
  sub_80904(a1, a3, 78, -2144243377);
  V_LOCK();
  V_INT((int)v147, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v148,
    v147[0],
    v147[1],
    v147[2],
    v147[3],
    v147[4],
    v147[5],
    v147[6],
    v148,
    "%s Toggle rx resets",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1477,
    60,
    v154);
  sub_80904(a1, a3, 77, -2136244053);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136244053);
  sub_80904(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)&dword_10050 + 1);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  sub_80904(a1, a3, 77, -2136309590);
  sub_80904(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_18698.st_size);
  serdes_wait_status(a1, a2, a3, 4156, 84);
  serdes_wait_status(a1, a2, a3, 4668, 84);
  serdes_wait_status(a1, a2, a3, 5180, 84);
  serdes_wait_status(a1, a2, a3, 5692, 84);
  usleep(0xEA60u);
  V_LOCK();
  V_INT((int)v149, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v150,
    v149[0],
    v149[1],
    v149[2],
    v149[3],
    v149[4],
    v149[5],
    v149[6],
    v150,
    "%s Enable rxX_data_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1496,
    60,
    v154);
  sub_80904(a1, a3, 77, -1062551382);
  sub_80904(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  V_INT((int)v151, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    v152,
    v151[0],
    v151[1],
    v151[2],
    v151[3],
    v151[4],
    v151[5],
    v151[6],
    v152,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1500,
    60,
    v154);
  serdes_wait_status(a1, a2, a3, 4156, 86);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 86);
  serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)s, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v154,
    0x1000u,
    0,
    s[7],
    s[0],
    s[1],
    s[2],
    s[3],
    s[4],
    s[5],
    s[6],
    s[7],
    "%s Overriding rx_adapt_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1506,
    60,
    v154);
  if ( (unsigned __int8)v31 == 2 )
  {
    sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
    sub_80904(a1, a3, 78, -2144247798);
    sub_80904(a1, a3, 77, (int)&loc_30000 + 3);
    sub_80904(a1, a3, 78, -2144247798);
    usleep(0x7D0u);
    serdes_wait_status(a1, a2, a3, 8218, 1);
    serdes_wait_status(a1, a2, a3, 8730, 1);
    serdes_wait_status(a1, a2, a3, 9242, 1);
    serdes_wait_status(a1, a2, a3, 9754, 1);
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
  usleep(0xC350u);
  return 0;
}
