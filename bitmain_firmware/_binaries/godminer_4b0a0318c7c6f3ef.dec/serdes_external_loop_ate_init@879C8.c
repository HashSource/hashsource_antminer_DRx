int __fastcall serdes_external_loop_ate_init(int a1, unsigned int a2, unsigned int a3)
{
  FILE *v3; // r6
  int v4; // r7
  char *v7; // r1
  _DWORD *v8; // r12
  int v9; // r7
  unsigned __int8 *v10; // r8
  int v11; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r3
  const char *v15; // r7
  const char *v16; // r9
  char *v17; // r3
  char *v18; // r0
  const char *v19; // r1
  int v20; // r3
  int v21; // r0
  int v22; // r2
  int v23; // r1
  char *v24; // r0
  const char *v25; // r1
  int v26; // r3
  char *v27; // r1
  int v28; // r1
  char *v29; // r1
  int v30; // lr
  int v31; // r1
  char *v32; // r1
  int v33; // r1
  char *v34; // r1
  int v35; // lr
  int v36; // r1
  char *v37; // r1
  int v38; // r1
  __int16 v39; // r6
  char *v40; // r1
  int v41; // r1
  char *v42; // r1
  int v43; // r1
  int v44; // r6
  int v45; // r3
  char *v46; // r1
  char *v47; // r1
  int v48; // r1
  int v49; // r7
  char *v50; // r1
  int v51; // r1
  char *v52; // r1
  int v53; // r1
  int v54; // r8
  int v55; // r3
  char *v56; // r1
  char *v57; // r1
  char *v58; // r1
  int v59; // lr
  char *v60; // r1
  char *v61; // r1
  int v62; // lr
  char *v63; // r1
  char *v64; // r1
  int v65; // lr
  char *v66; // r1
  char *v67; // r1
  int v68; // lr
  char *v69; // r1
  char *v70; // r1
  int v71; // lr
  char *v72; // r1
  char *v73; // r1
  int v74; // lr
  char *v75; // r1
  char *v76; // r1
  int v77; // lr
  char *v78; // r1
  char *v79; // r1
  int v80; // lr
  int v81; // r1
  char *v82; // r1
  int v83; // r1
  char *v84; // r1
  int v85; // r1
  int v86; // r3
  char *v87; // r1
  char *v88; // r1
  int v89; // lr
  char *v90; // r1
  int v91; // r1
  char *v92; // r1
  int v93; // lr
  int v94; // r1
  char *v95; // r1
  int v96; // r1
  char *v97; // r1
  int v98; // lr
  int v99; // r1
  char *v100; // r1
  int v101; // r1
  char *v102; // r1
  int v103; // lr
  int v104; // r1
  char *v105; // r1
  int v106; // r1
  int v107; // r6
  char *v108; // r1
  int v109; // lr
  int v110; // r1
  char *v111; // r1
  _DWORD *v112; // lr
  int v113; // r1
  char *v114; // r1
  int v115; // lr
  int v116; // r1
  char *v117; // r1
  int v118; // r1
  char *v119; // r1
  int v120; // lr
  int v121; // r1
  char *v122; // r1
  int v123; // r1
  char *v124; // r1
  int v125; // lr
  int v126; // r7
  int v127; // r1
  char *v128; // r1
  int v129; // r1
  char *v130; // r1
  char *v131; // r1
  char *v132; // r1
  int v133; // lr
  char *v134; // r1
  char *v135; // r1
  int v136; // r6
  char *v137; // r1
  int v138; // r3
  char *v139; // r1
  char *v140; // r1
  int v141; // lr
  char *v142; // r1
  int v143; // r8
  char *v144; // r1
  char *v145; // r1
  char *v147; // r0
  const char *v148; // r1
  int v149; // r3
  const char *v150; // r1
  char *v151; // r0
  const char *v152; // r1
  int v153; // r3
  char *v154; // r1
  int v155; // r6
  int v156; // r1
  int v157; // r3
  int v158; // r3
  int v159; // r1
  int v160; // r1
  int v161; // r0
  int v162; // r0
  int v163; // r1
  int v164; // r0
  int v165; // r0
  int v166; // r1
  int v167; // r0
  int v168; // r0
  int v169; // r1
  int v170; // r0
  int v171; // r0
  int v172; // r1
  int v173; // r0
  int v174; // r0
  int v175; // r1
  int v176; // r0
  int v177; // r0
  int v178; // r1
  int v179; // r0
  int v180; // r0
  int v181; // r1
  int v182; // r0
  int v183; // r0
  int v184; // r1
  int v185; // r0
  int v186; // r0
  int v187; // r1
  int v188; // r0
  int v189; // r1
  int v190; // r0
  const char *v191; // r1
  char *v192; // r0
  const char *v193; // r1
  int v194; // r3
  char *v195; // r1
  _DWORD *v197; // [sp+38h] [bp-18h]
  char *needle; // [sp+3Ch] [bp-14h]
  int v199; // [sp+48h] [bp-8h] BYREF
  char v200[4]; // [sp+4Ch] [bp-4h] BYREF
  _DWORD v201[7]; // [sp+70h] [bp+20h] BYREF
  int v202; // [sp+8Ch] [bp+3Ch]
  _DWORD v203[7]; // [sp+90h] [bp+40h] BYREF
  int v204; // [sp+ACh] [bp+5Ch]
  _DWORD v205[7]; // [sp+B0h] [bp+60h] BYREF
  int v206; // [sp+CCh] [bp+7Ch]
  _DWORD v207[7]; // [sp+D0h] [bp+80h] BYREF
  int v208; // [sp+ECh] [bp+9Ch]
  _DWORD v209[7]; // [sp+F0h] [bp+A0h] BYREF
  int v210; // [sp+10Ch] [bp+BCh]
  _DWORD v211[7]; // [sp+110h] [bp+C0h] BYREF
  int v212; // [sp+12Ch] [bp+DCh]
  _DWORD v213[7]; // [sp+130h] [bp+E0h] BYREF
  int v214; // [sp+14Ch] [bp+FCh]
  _DWORD v215[7]; // [sp+150h] [bp+100h] BYREF
  int v216; // [sp+16Ch] [bp+11Ch]
  _DWORD v217[7]; // [sp+170h] [bp+120h] BYREF
  int v218; // [sp+18Ch] [bp+13Ch]
  _DWORD v219[7]; // [sp+190h] [bp+140h] BYREF
  int v220; // [sp+1ACh] [bp+15Ch]
  _DWORD v221[7]; // [sp+1B0h] [bp+160h] BYREF
  int v222; // [sp+1CCh] [bp+17Ch]
  _DWORD v223[7]; // [sp+1D0h] [bp+180h] BYREF
  int v224; // [sp+1ECh] [bp+19Ch]
  _DWORD v225[7]; // [sp+1F0h] [bp+1A0h] BYREF
  int v226; // [sp+20Ch] [bp+1BCh]
  _DWORD v227[7]; // [sp+210h] [bp+1C0h] BYREF
  int v228; // [sp+22Ch] [bp+1DCh]
  _DWORD v229[7]; // [sp+230h] [bp+1E0h] BYREF
  int v230; // [sp+24Ch] [bp+1FCh]
  _DWORD v231[7]; // [sp+250h] [bp+200h] BYREF
  int v232; // [sp+26Ch] [bp+21Ch]
  _DWORD v233[7]; // [sp+270h] [bp+220h] BYREF
  int v234; // [sp+28Ch] [bp+23Ch]
  _DWORD v235[7]; // [sp+290h] [bp+240h] BYREF
  int v236; // [sp+2ACh] [bp+25Ch]
  _DWORD v237[7]; // [sp+2B0h] [bp+260h] BYREF
  int v238; // [sp+2CCh] [bp+27Ch]
  _DWORD v239[7]; // [sp+2D0h] [bp+280h] BYREF
  int v240; // [sp+2ECh] [bp+29Ch]
  _DWORD v241[7]; // [sp+2F0h] [bp+2A0h] BYREF
  int v242; // [sp+30Ch] [bp+2BCh]
  _DWORD v243[7]; // [sp+310h] [bp+2C0h] BYREF
  int v244; // [sp+32Ch] [bp+2DCh]
  _DWORD v245[7]; // [sp+330h] [bp+2E0h] BYREF
  int v246; // [sp+34Ch] [bp+2FCh]
  _DWORD v247[7]; // [sp+350h] [bp+300h] BYREF
  int v248; // [sp+36Ch] [bp+31Ch]
  _DWORD v249[7]; // [sp+370h] [bp+320h] BYREF
  int v250; // [sp+38Ch] [bp+33Ch]
  _DWORD v251[7]; // [sp+390h] [bp+340h] BYREF
  int v252; // [sp+3ACh] [bp+35Ch]
  _DWORD v253[7]; // [sp+3B0h] [bp+360h] BYREF
  int v254; // [sp+3CCh] [bp+37Ch]
  _DWORD v255[7]; // [sp+3D0h] [bp+380h] BYREF
  int v256; // [sp+3ECh] [bp+39Ch]
  _DWORD v257[7]; // [sp+3F0h] [bp+3A0h] BYREF
  int v258; // [sp+40Ch] [bp+3BCh]
  _DWORD v259[7]; // [sp+410h] [bp+3C0h] BYREF
  int v260; // [sp+42Ch] [bp+3DCh]
  _DWORD v261[7]; // [sp+430h] [bp+3E0h] BYREF
  int v262; // [sp+44Ch] [bp+3FCh]
  _DWORD v263[7]; // [sp+450h] [bp+400h] BYREF
  int v264; // [sp+46Ch] [bp+41Ch]
  _DWORD v265[7]; // [sp+470h] [bp+420h] BYREF
  int v266; // [sp+48Ch] [bp+43Ch]
  _DWORD v267[7]; // [sp+490h] [bp+440h] BYREF
  int v268; // [sp+4ACh] [bp+45Ch]
  _DWORD v269[7]; // [sp+4B0h] [bp+460h] BYREF
  int v270; // [sp+4CCh] [bp+47Ch]
  _DWORD v271[7]; // [sp+4D0h] [bp+480h] BYREF
  int v272; // [sp+4ECh] [bp+49Ch]
  _DWORD v273[7]; // [sp+4F0h] [bp+4A0h] BYREF
  int v274; // [sp+50Ch] [bp+4BCh]
  _DWORD v275[7]; // [sp+510h] [bp+4C0h] BYREF
  int v276; // [sp+52Ch] [bp+4DCh]
  _DWORD v277[7]; // [sp+530h] [bp+4E0h] BYREF
  int v278; // [sp+54Ch] [bp+4FCh]
  _DWORD v279[7]; // [sp+550h] [bp+500h] BYREF
  int v280; // [sp+56Ch] [bp+51Ch]
  _DWORD v281[7]; // [sp+570h] [bp+520h] BYREF
  int v282; // [sp+58Ch] [bp+53Ch]
  _DWORD v283[7]; // [sp+590h] [bp+540h] BYREF
  int v284; // [sp+5ACh] [bp+55Ch]
  _DWORD v285[7]; // [sp+5B0h] [bp+560h] BYREF
  int v286; // [sp+5CCh] [bp+57Ch]
  _DWORD v287[7]; // [sp+5D0h] [bp+580h] BYREF
  int v288; // [sp+5ECh] [bp+59Ch]
  _DWORD v289[7]; // [sp+5F0h] [bp+5A0h] BYREF
  int v290; // [sp+60Ch] [bp+5BCh]
  _DWORD v291[7]; // [sp+610h] [bp+5C0h] BYREF
  int v292; // [sp+62Ch] [bp+5DCh]
  _DWORD v293[7]; // [sp+630h] [bp+5E0h] BYREF
  int v294; // [sp+64Ch] [bp+5FCh]
  _DWORD v295[7]; // [sp+650h] [bp+600h] BYREF
  int v296; // [sp+66Ch] [bp+61Ch]
  _DWORD v297[7]; // [sp+670h] [bp+620h] BYREF
  int v298; // [sp+68Ch] [bp+63Ch]
  _DWORD v299[7]; // [sp+690h] [bp+640h] BYREF
  int v300; // [sp+6ACh] [bp+65Ch]
  _DWORD v301[7]; // [sp+6B0h] [bp+660h] BYREF
  int v302; // [sp+6CCh] [bp+67Ch]
  _DWORD v303[7]; // [sp+6D0h] [bp+680h] BYREF
  int v304; // [sp+6ECh] [bp+69Ch]
  _DWORD v305[7]; // [sp+6F0h] [bp+6A0h] BYREF
  int v306; // [sp+70Ch] [bp+6BCh]
  _DWORD v307[7]; // [sp+710h] [bp+6C0h] BYREF
  int v308; // [sp+72Ch] [bp+6DCh]
  _DWORD v309[7]; // [sp+730h] [bp+6E0h] BYREF
  int v310; // [sp+74Ch] [bp+6FCh]
  _DWORD v311[7]; // [sp+750h] [bp+700h] BYREF
  int v312; // [sp+76Ch] [bp+71Ch]
  _DWORD v313[7]; // [sp+770h] [bp+720h] BYREF
  int v314; // [sp+78Ch] [bp+73Ch]
  _DWORD v315[7]; // [sp+790h] [bp+740h] BYREF
  int v316; // [sp+7ACh] [bp+75Ch]
  _DWORD v317[7]; // [sp+7B0h] [bp+760h] BYREF
  int v318; // [sp+7CCh] [bp+77Ch]
  _DWORD v319[7]; // [sp+7D0h] [bp+780h] BYREF
  int v320; // [sp+7ECh] [bp+79Ch]
  _DWORD s[64]; // [sp+7F0h] [bp+7A0h] BYREF
  char v322[4100]; // [sp+8F0h] [bp+8A0h] BYREF

  V_LOCK();
  LOWORD(v7) = 27372;
  HIWORD(v7) = (unsigned int)":" >> 16;
  V_INT(v4, v7, *(int *)(a1 + 256));
  v8 = (_DWORD *)v4;
  LOWORD(v9) = -13840;
  HIWORD(v9) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  LOWORD(v10) = 14584;
  HIWORD(v10) = (unsigned int)&eth_2280_phy_eq >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v8[7],
    *v8,
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v8[7],
    v9,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v11) = -11432;
  HIWORD(v11) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v11, 174, "serdes_external_loop_ate_init", 29, 1191, 60, v322);
  sub_7F86C(a1, a3, 240, 0x80000000);
  usleep(0x258u);
  sub_7FD40(a1, a3, 240);
  sub_7F86C(a1, a3, 86, 3670024);
  usleep(0x258u);
  sub_7FD40(a1, a3, 86);
  sub_7F86C(a1, a3, 85, 109905420);
  usleep(0x258u);
  sub_7FD40(a1, a3, 85);
  sub_7F86C(a1, a3, 64, 256);
  usleep(0x258u);
  sub_7FD40(a1, a3, 64);
  sub_7F86C(a1, a3, 80, 33423870);
  usleep(0x258u);
  sub_7FD40(a1, a3, 80);
  sub_7F86C(a1, a3, 81, 832516511);
  usleep(0x258u);
  sub_7FD40(a1, a3, 81);
  sub_7F86C(a1, a3, 88, -1);
  usleep(0x258u);
  sub_7FD40(a1, a3, 88);
  v200[0] = 0;
  v199 = 0;
  V_LOCK();
  LOWORD(v12) = -7168;
  HIWORD(v12) = (unsigned int)"ore-%02x wait ack failed!" >> 16;
  logfmt_raw(v322, 0x1000u, 0, v12, "phy_read_config_ini", *v10);
  V_UNLOCK();
  LOWORD(v13) = -11432;
  HIWORD(v13) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v13, 174, "phy_read_config_ini", 19, 153, 40, v322);
  v14 = *v10;
  if ( *v10 )
  {
    if ( v14 != 1 )
      goto LABEL_3;
  }
  else
  {
    LOWORD(v160) = -10508;
    LOWORD(v161) = -7156;
    HIWORD(v160) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
    HIWORD(v161) = (unsigned int)"t ack failed!" >> 16;
    v162 = fopen64(v161, v160);
    v14 = *v10;
    v3 = (FILE *)v162;
    if ( v14 != 1 )
    {
LABEL_3:
      if ( v14 != 2 )
        goto LABEL_4;
      goto LABEL_55;
    }
  }
  LOWORD(v163) = -10508;
  LOWORD(v164) = -7132;
  HIWORD(v163) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v164) = (unsigned int)"ore-%02x wait ack successed!" >> 16;
  v165 = fopen64(v164, v163);
  v14 = *v10;
  v3 = (FILE *)v165;
  if ( v14 != 2 )
  {
LABEL_4:
    if ( v14 != 3 )
      goto LABEL_5;
    goto LABEL_56;
  }
LABEL_55:
  LOWORD(v166) = -10508;
  LOWORD(v167) = -7108;
  HIWORD(v166) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v167) = (unsigned int)"sed!" >> 16;
  v168 = fopen64(v167, v166);
  v14 = *v10;
  v3 = (FILE *)v168;
  if ( v14 != 3 )
  {
LABEL_5:
    if ( v14 != 4 )
      goto LABEL_6;
    goto LABEL_57;
  }
LABEL_56:
  LOWORD(v169) = -10508;
  LOWORD(v170) = -7084;
  HIWORD(v169) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v170) = (unsigned int)"der" >> 16;
  v171 = fopen64(v170, v169);
  v14 = *v10;
  v3 = (FILE *)v171;
  if ( v14 != 4 )
  {
LABEL_6:
    if ( v14 != 5 )
      goto LABEL_7;
    goto LABEL_58;
  }
LABEL_57:
  LOWORD(v172) = -10508;
  LOWORD(v173) = -7060;
  HIWORD(v172) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v173) = (unsigned int)"_reset_HNS_2130" >> 16;
  v174 = fopen64(v173, v172);
  v14 = *v10;
  v3 = (FILE *)v174;
  if ( v14 != 5 )
  {
LABEL_7:
    if ( v14 != 6 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_58:
  LOWORD(v175) = -10508;
  LOWORD(v176) = -7036;
  HIWORD(v175) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v176) = (unsigned int)"ing_software_reset_HNS_2130" >> 16;
  v177 = fopen64(v176, v175);
  v14 = *v10;
  v3 = (FILE *)v177;
  if ( v14 != 6 )
  {
LABEL_8:
    if ( v14 != 7 )
      goto LABEL_9;
    goto LABEL_60;
  }
LABEL_59:
  LOWORD(v178) = -10508;
  LOWORD(v179) = -7012;
  HIWORD(v178) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v179) = (unsigned int)"130" >> 16;
  v180 = fopen64(v179, v178);
  v14 = *v10;
  v3 = (FILE *)v180;
  if ( v14 != 7 )
  {
LABEL_9:
    if ( v14 != 8 )
      goto LABEL_10;
    goto LABEL_61;
  }
LABEL_60:
  LOWORD(v181) = -10508;
  LOWORD(v182) = -6988;
  HIWORD(v181) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v182) = (unsigned int)"ket_mask_HNS_2130" >> 16;
  v183 = fopen64(v182, v181);
  v14 = *v10;
  v3 = (FILE *)v183;
  if ( v14 != 8 )
  {
LABEL_10:
    if ( v14 != 9 )
      goto LABEL_11;
LABEL_62:
    LOWORD(v187) = -10508;
    LOWORD(v188) = -6940;
    HIWORD(v187) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
    HIWORD(v188) = (unsigned int)"ing_bridge_reset_HNS_2130" >> 16;
    v3 = (FILE *)fopen64(v188, v187);
    if ( *v10 != 10 )
      goto LABEL_12;
LABEL_63:
    LOWORD(v189) = -10508;
    LOWORD(v190) = -6916;
    HIWORD(v189) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
    HIWORD(v190) = (unsigned int)"0" >> 16;
    v3 = (FILE *)fopen64(v190, v189);
    goto LABEL_12;
  }
LABEL_61:
  LOWORD(v184) = -10508;
  LOWORD(v185) = -6964;
  HIWORD(v184) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v185) = (unsigned int)"_2_packet_hns" >> 16;
  v186 = fopen64(v185, v184);
  v14 = *v10;
  v3 = (FILE *)v186;
  if ( v14 == 9 )
    goto LABEL_62;
LABEL_11:
  if ( v14 == 10 )
    goto LABEL_63;
LABEL_12:
  if ( !v3 )
  {
    V_LOCK();
    LOWORD(v157) = -6888;
    HIWORD(v157) = (unsigned int)"_HNS_2130" >> 16;
    logfmt_raw(v322, 0x1000u, 0, v157);
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
      v322);
    V_LOCK();
    LOWORD(v158) = -6860;
    HIWORD(v158) = (unsigned int)"_HNS_2130" >> 16;
    logfmt_raw(v322, 0x1000u, 0, v158);
    V_UNLOCK();
    LOWORD(v159) = -11432;
    HIWORD(v159) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(g_zc, v159, 174, "serdes_external_loop_ate_init", 29, 1237, 100, v322);
    return 0;
  }
  LOWORD(v15) = -6836;
  memset(s, 0, sizeof(s));
  LOWORD(v16) = -6808;
  LOWORD(v17) = -6772;
  HIWORD(v17) = (unsigned int)"Setting_clock_delay_HNS_2130" >> 16;
  needle = v17;
  while ( fgets((char *)s, 255, v3) )
  {
    if ( LOBYTE(s[0]) != 35 && BYTE1(s[0]) != 35 )
    {
      HIWORD(v15) = (unsigned int)"analog_mux_HNS_2130" >> 16;
      v18 = strstr((const char *)s, v15);
      if ( v18 )
      {
        LOWORD(v19) = 27572;
        HIWORD(v19) = (unsigned int)" to port %d, failed (%s)" >> 16;
        _isoc99_sscanf(v18 + 5, v19, &v199);
        V_LOCK();
        LOWORD(v20) = -6828;
        HIWORD(v20) = (unsigned int)"ux_HNS_2130" >> 16;
        logfmt_raw(v322, 0x1000u, 0, v20, (unsigned __int8)v199);
        V_UNLOCK();
        v21 = g_zc;
        v22 = 193;
        goto LABEL_19;
      }
      HIWORD(v16) = (unsigned int)"art_hns" >> 16;
      v24 = strstr((const char *)s, v16);
      if ( v24 )
      {
        LOWORD(v25) = 27572;
        HIWORD(v25) = (unsigned int)" to port %d, failed (%s)" >> 16;
        _isoc99_sscanf(v24 + 8, v25, (char *)&v199 + 1);
        V_LOCK();
        LOWORD(v26) = -6796;
        HIWORD(v26) = (unsigned int)"_temperature_hns" >> 16;
        logfmt_raw(v322, 0x1000u, 0, v26, BYTE1(v199));
        V_UNLOCK();
        v21 = g_zc;
        v22 = 197;
        goto LABEL_19;
      }
      v147 = strstr((const char *)s, needle);
      if ( v147 )
      {
        LOWORD(v148) = 27572;
        HIWORD(v148) = (unsigned int)" to port %d, failed (%s)" >> 16;
        _isoc99_sscanf(v147 + 7, v148, (char *)&v199 + 2);
        V_LOCK();
        LOWORD(v149) = -6764;
        HIWORD(v149) = (unsigned int)"clock_delay_HNS_2130" >> 16;
        logfmt_raw(v322, 0x1000u, 0, v149, BYTE2(v199));
        V_UNLOCK();
        v21 = g_zc;
        v22 = 201;
        goto LABEL_19;
      }
      LOWORD(v150) = -6744;
      HIWORD(v150) = (unsigned int)"" >> 16;
      v151 = strstr((const char *)s, v150);
      if ( v151 )
      {
        LOWORD(v152) = 27572;
        HIWORD(v152) = (unsigned int)" to port %d, failed (%s)" >> 16;
        _isoc99_sscanf(v151 + 8, v152, (char *)&v199 + 3);
        V_LOCK();
        LOWORD(v153) = -6732;
        HIWORD(v153) = (unsigned int)"ing_same_nonce_HNS_2130" >> 16;
        logfmt_raw(v322, 0x1000u, 0, v153, HIBYTE(v199));
        V_UNLOCK();
        v21 = g_zc;
        v22 = 205;
        goto LABEL_19;
      }
      LOWORD(v191) = -6708;
      HIWORD(v191) = (unsigned int)"ChipSetting_nonce_counter_HNS_2130" >> 16;
      v192 = strstr((const char *)s, v191);
      if ( v192 )
      {
        LOWORD(v193) = 27572;
        HIWORD(v193) = (unsigned int)" to port %d, failed (%s)" >> 16;
        _isoc99_sscanf(v192 + 9, v193, v200);
        V_LOCK();
        LOWORD(v194) = -6696;
        HIWORD(v194) = (unsigned int)"nonce_counter_HNS_2130" >> 16;
        logfmt_raw(v322, 0x1000u, 0, v194, (unsigned __int8)v200[0]);
        V_UNLOCK();
        v21 = g_zc;
        v22 = 209;
LABEL_19:
        LOWORD(v23) = -11432;
        HIWORD(v23) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
        zlog(v21, v23, 174, "phy_read_config_ini", 19, v22, 40, v322);
      }
    }
  }
  fclose(v3);
  phy_external_loop_adapt(a1, a2, a3, BYTE1(v199), BYTE2(v199), HIBYTE(v199), v200[0]);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v195) = 27372;
    HIWORD(v195) = (unsigned int)":" >> 16;
    V_INT((int)v201, v195, *(int *)(a1 + 256));
    logfmt_raw(
      v322,
      0x1000u,
      0,
      v202,
      v201[0],
      v201[1],
      v201[2],
      v201[3],
      v201[4],
      v201[5],
      v201[6],
      v202,
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
      v322);
  }
  sub_7F86C(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  V_LOCK();
  LOWORD(v27) = 27372;
  HIWORD(v27) = (unsigned int)":" >> 16;
  V_INT((int)v203, v27, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v204,
    v203[0],
    v203[1],
    v203[2],
    v203[3],
    v203[4],
    v203[5],
    v203[6],
    v204,
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v28) = -11432;
  HIWORD(v28) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v28, 174, "serdes_external_loop_ate_init", 29, 1252, 60, v322);
  V_LOCK();
  LOWORD(v29) = 27372;
  HIWORD(v29) = (unsigned int)":" >> 16;
  V_INT((int)v205, v29, *(int *)(a1 + 256));
  LOWORD(v30) = -6652;
  HIWORD(v30) = (unsigned int)"ck_count_HNS_2130" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v206,
    v205[0],
    v205[1],
    v205[2],
    v205[3],
    v205[4],
    v205[5],
    v205[6],
    v206,
    v30,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v31) = -11432;
  HIWORD(v31) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v31, 174, "serdes_external_loop_ate_init", 29, 1253, 60, v322);
  sub_7F86C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7F86C(a1, a3, 78, -2144272046);
  sub_7F86C(a1, a3, 77, 33554944);
  sub_7F86C(a1, a3, 78, -2144247742);
  sub_7F86C(a1, a3, 77, 100664832);
  sub_7F86C(a1, a3, 78, -2144247742);
  sub_7F86C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7F86C(a1, a3, 78, -2144272003);
  V_LOCK();
  LOWORD(v32) = 27372;
  HIWORD(v32) = (unsigned int)":" >> 16;
  V_INT((int)v207, v32, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v208,
    v207[0],
    v207[1],
    v207[2],
    v207[3],
    v207[4],
    v207[5],
    v207[6],
    v208,
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v33) = -11432;
  HIWORD(v33) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v33, 174, "serdes_external_loop_ate_init", 29, 1260, 60, v322);
  sub_7F86C(a1, a3, 77, 100664832);
  sub_7F86C(a1, a3, 78, -2144247742);
  sub_80014(a1, a3, 24643, (unsigned __int8)v199);
  sub_80014(a1, a3, 24644, (unsigned __int8)v199 << 7);
  sub_7F86C(a1, a3, 77, 117442304);
  sub_7F86C(a1, a3, 78, -2144247742);
  sub_80014(a1, a3, 24643, (unsigned __int8)v199 | 0x100);
  sub_80014(a1, a3, 24644, ((unsigned __int8)v199 << 7) | 0x8000);
  V_LOCK();
  LOWORD(v34) = 27372;
  HIWORD(v34) = (unsigned int)":" >> 16;
  V_INT((int)v209, v34, *(int *)(a1 + 256));
  LOWORD(v35) = -10892;
  HIWORD(v35) = (unsigned int)"" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v210,
    v209[0],
    v209[1],
    v209[2],
    v209[3],
    v209[4],
    v209[5],
    v209[6],
    v210,
    v35,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v36) = -11432;
  HIWORD(v36) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v36, 174, "serdes_external_loop_ate_init", 29, 1268, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144251892);
  sub_7F86C(a1, a3, 77, 268439552);
  sub_7F86C(a1, a3, 78, -2144251892);
  sub_7F86C(a1, a3, 77, 33489407);
  sub_7F86C(a1, a3, 78, -2144272086);
  sub_7F86C(a1, a3, 77, 268374015);
  sub_7F86C(a1, a3, 78, -2144272085);
  V_LOCK();
  LOWORD(v37) = 27372;
  HIWORD(v37) = (unsigned int)":" >> 16;
  V_INT((int)v211, v37, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v212,
    v211[0],
    v211[1],
    v211[2],
    v211[3],
    v211[4],
    v211[5],
    v211[6],
    v212,
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v38) = -11432;
  HIWORD(v38) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  v39 = -10836;
  zlog(g_zc, v38, 174, "serdes_external_loop_ate_init", 29, 1274, 60, v322);
  sub_80014(a1, a3, 24644, ((unsigned __int8)v199 << 7) | 0x8020);
  sub_80014(a1, a3, 24644, ((unsigned __int8)v199 << 7) | 0x8060);
  sub_7F86C(a1, a3, 77, -1);
  sub_7F86C(a1, a3, 78, -2144247719);
  sub_7F86C(a1, a3, 77, -8388737);
  sub_7F86C(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v40) = 27372;
  HIWORD(v40) = (unsigned int)":" >> 16;
  V_INT((int)v213, v40, *(int *)(a1 + 256));
  HIWORD(v44) = (unsigned int)"orce_en, mplla/b_cal_bank_sel" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v214,
    v213[0],
    v213[1],
    v213[2],
    v213[3],
    v213[4],
    v213[5],
    v213[6],
    v214,
    v44,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v41) = -11432;
  HIWORD(v41) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v41, 174, "serdes_external_loop_ate_init", 29, 1280, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247776);
  sub_7F86C(a1, a3, 77, -2136964960);
  sub_7F86C(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v42) = 27372;
  HIWORD(v42) = (unsigned int)":" >> 16;
  V_INT((int)v215, v42, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v216,
    v215[0],
    v215[1],
    v215[2],
    v215[3],
    v215[4],
    v215[5],
    v215[6],
    v216,
    "%s Override rx_width",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v43) = -11432;
  HIWORD(v43) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  LOWORD(v44) = -10756;
  zlog(g_zc, v43, 174, "serdes_external_loop_ate_init", 29, 1284, 60, v322);
  if ( (unsigned __int8)v199 == 2 )
    LOWORD(v45) = 4160;
  else
    LOWORD(v45) = 4144;
  if ( (unsigned __int8)v199 == 2 )
    HIWORD(v45) = 4160;
  else
    HIWORD(v45) = 4144;
  sub_7F86C(a1, a3, 77, v45);
  sub_7F86C(a1, a3, 78, -2144247722);
  sub_7F86C(a1, a3, 77, -1);
  sub_7F86C(a1, a3, 78, -2144247718);
  V_LOCK();
  LOWORD(v46) = 27372;
  HIWORD(v46) = (unsigned int)":" >> 16;
  V_INT((int)v217, v46, *(int *)(a1 + 256));
  HIWORD(v44) = (unsigned int)"_cal_disable, rtune_req" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v218,
    v217[0],
    v217[1],
    v217[2],
    v217[3],
    v217[4],
    v217[5],
    v217[6],
    v218,
    v44,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247771);
  sub_7F86C(a1, a3, 77, (int)&loc_140014);
  sub_7F86C(a1, a3, 78, -2144247771);
  V_LOCK();
  LOWORD(v47) = 27372;
  HIWORD(v47) = (unsigned int)":" >> 16;
  V_INT((int)v219, v47, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v220,
    v219[0],
    v219[1],
    v219[2],
    v219[3],
    v219[4],
    v219[5],
    v219[6],
    v220,
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v48) = -11432;
  HIWORD(v48) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  LOWORD(v49) = -10608;
  zlog(g_zc, v48, 174, "serdes_external_loop_ate_init", 29, 1295, 60, v322);
  sub_7F86C(a1, a3, 77, 33554944);
  sub_7F86C(a1, a3, 78, -2144247760);
  sub_7F86C(a1, a3, 77, 122947412);
  sub_7F86C(a1, a3, 78, -2144247760);
  V_LOCK();
  LOWORD(v50) = 27372;
  HIWORD(v50) = (unsigned int)":" >> 16;
  V_INT((int)v221, v50, *(int *)(a1 + 256));
  HIWORD(v49) = (unsigned int)"verriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v222,
    v221[0],
    v221[1],
    v221[2],
    v221[3],
    v221[4],
    v221[5],
    v221[6],
    v222,
    v49,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v51) = -11432;
  HIWORD(v51) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v51, 174, "serdes_external_loop_ate_init", 29, 1299, 60, v322);
  sub_7F86C(a1, a3, 77, 1073758208);
  sub_7F86C(a1, a3, 78, -2144247770);
  sub_7F86C(a1, a3, 77, -1072381932);
  sub_7F86C(a1, a3, 78, -2144247770);
  V_LOCK();
  LOWORD(v52) = 27372;
  HIWORD(v52) = (unsigned int)":" >> 16;
  V_INT((int)v223, v52, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v224,
    v223[0],
    v223[1],
    v223[2],
    v223[3],
    v223[4],
    v223[5],
    v223[6],
    v224,
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v53) = -11432;
  HIWORD(v53) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  LOWORD(v54) = -10540;
  zlog(g_zc, v53, 174, "serdes_external_loop_ate_init", 29, 1302, 60, v322);
  if ( (unsigned __int8)v199 == 2 )
    LOWORD(v55) = 4;
  else
    LOWORD(v55) = 3;
  if ( (unsigned __int8)v199 == 2 )
    HIWORD(v55) = 4;
  else
    HIWORD(v55) = 3;
  sub_7F86C(a1, a3, 77, v55);
  sub_7F86C(a1, a3, 78, -2144247739);
  sub_7F86C(a1, a3, 77, -1);
  sub_7F86C(a1, a3, 78, -2144247732);
  V_LOCK();
  LOWORD(v56) = 27372;
  HIWORD(v56) = (unsigned int)":" >> 16;
  V_INT((int)v225, v56, *(int *)(a1 + 256));
  HIWORD(v54) = (unsigned int)"g the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v226,
    v225[0],
    v225[1],
    v225[2],
    v225[3],
    v225[4],
    v225[5],
    v225[6],
    v226,
    v54,
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
    v322);
  sub_7F86C(a1, a3, 77, 268439552);
  sub_7F86C(a1, a3, 78, -2144247769);
  sub_7F86C(a1, a3, 77, 805318656);
  sub_7F86C(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v57) = 27372;
  HIWORD(v57) = (unsigned int)":" >> 16;
  V_INT((int)v227, v57, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v228,
    v227[0],
    v227[1],
    v227[2],
    v227[3],
    v227[4],
    v227[5],
    v227[6],
    v228,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247751);
  sub_7F86C(a1, a3, 77, 5505108);
  sub_7F86C(a1, a3, 78, -2144247751);
  V_LOCK();
  LOWORD(v58) = 27372;
  HIWORD(v58) = (unsigned int)":" >> 16;
  V_INT((int)v229, v58, *(int *)(a1 + 256));
  LOWORD(v59) = -10428;
  HIWORD(v59) = (unsigned int)"ng tx_ropll_word_clk_en_r" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v230,
    v229[0],
    v229[1],
    v229[2],
    v229[3],
    v229[4],
    v229[5],
    v229[6],
    v230,
    v59,
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
    v322);
  sub_7F86C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_7F86C(a1, a3, 78, -2144251903);
  sub_7F86C(a1, a3, 77, 2293795);
  sub_7F86C(a1, a3, 78, -2144251903);
  V_LOCK();
  LOWORD(v60) = 27372;
  HIWORD(v60) = (unsigned int)":" >> 16;
  V_INT((int)v231, v60, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v232,
    v231[0],
    v231[1],
    v231[2],
    v231[3],
    v231[4],
    v231[5],
    v231[6],
    v232,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144251872);
  sub_7F86C(a1, a3, 77, (int)&loc_80008);
  sub_7F86C(a1, a3, 78, -2144251872);
  V_LOCK();
  LOWORD(v61) = 27372;
  HIWORD(v61) = (unsigned int)":" >> 16;
  V_INT((int)v233, v61, *(int *)(a1 + 256));
  LOWORD(v62) = -10364;
  HIWORD(v62) = (unsigned int)"dapt_cont_r, rx_adapt_req_r" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v234,
    v233[0],
    v233[1],
    v233[2],
    v233[3],
    v233[4],
    v233[5],
    v233[6],
    v234,
    v62,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144272111);
  sub_7F86C(a1, a3, 77, 1073692671);
  sub_7F86C(a1, a3, 78, -2144272088);
  V_LOCK();
  LOWORD(v63) = 27372;
  HIWORD(v63) = (unsigned int)":" >> 16;
  V_INT((int)v235, v63, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v236,
    v235[0],
    v235[1],
    v235[2],
    v235[3],
    v235[4],
    v235[5],
    v235[6],
    v236,
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
    v322);
  sub_7F86C(a1, a3, 77, 234884608);
  sub_7F86C(a1, a3, 78, -2144272382);
  sub_7F86C(a1, a3, 77, 235408904);
  sub_7F86C(a1, a3, 78, -2144272382);
  V_LOCK();
  LOWORD(v64) = 27372;
  HIWORD(v64) = (unsigned int)":" >> 16;
  V_INT((int)v237, v64, *(int *)(a1 + 256));
  LOWORD(v65) = -10300;
  HIWORD(v65) = (unsigned int)"vent rx_ack assertion after initial powerup sequence completed" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v238,
    v237[0],
    v237[1],
    v237[2],
    v237[3],
    v237[4],
    v237[5],
    v237[6],
    v238,
    v65,
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
    v322);
  sub_7F86C(a1, a3, 77, 234884608);
  sub_7F86C(a1, a3, 78, -2144272381);
  sub_7F86C(a1, a3, 77, 235408904);
  sub_7F86C(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v66) = 27372;
  HIWORD(v66) = (unsigned int)":" >> 16;
  V_INT((int)v239, v66, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v240,
    v239[0],
    v239[1],
    v239[2],
    v239[3],
    v239[4],
    v239[5],
    v239[6],
    v240,
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
    v322);
  sub_7F86C(a1, a3, 77, (int)&unk_180018);
  sub_7F86C(a1, a3, 78, -2144272353);
  V_LOCK();
  LOWORD(v67) = 27372;
  HIWORD(v67) = (unsigned int)":" >> 16;
  V_INT((int)v241, v67, *(int *)(a1 + 256));
  LOWORD(v68) = -10224;
  HIWORD(v68) = (unsigned int)"g rx_margin_iq and rx_delta_iq" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v242,
    v241[0],
    v241[1],
    v241[2],
    v241[3],
    v241[4],
    v241[5],
    v241[6],
    v242,
    v68,
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
    v322);
  sub_7F86C(a1, a3, 77, 22348117);
  sub_7F86C(a1, a3, 78, -2144272044);
  sub_7F86C(a1, a3, 77, 67044351);
  sub_7F86C(a1, a3, 78, -2144272044);
  V_LOCK();
  LOWORD(v69) = 27372;
  HIWORD(v69) = (unsigned int)":" >> 16;
  V_INT((int)v243, v69, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v244,
    v243[0],
    v243[1],
    v243[2],
    v243[3],
    v243[4],
    v243[5],
    v243[6],
    v244,
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
    v322);
  sub_7F86C(a1, a3, 77, 61277095);
  sub_7F86C(a1, a3, 78, -2144272380);
  sub_7F86C(a1, a3, 77, 65471463);
  sub_7F86C(a1, a3, 78, -2144272380);
  V_LOCK();
  LOWORD(v70) = 27372;
  HIWORD(v70) = (unsigned int)":" >> 16;
  V_INT((int)v245, v70, *(int *)(a1 + 256));
  LOWORD(v71) = -10108;
  HIWORD(v71) = (unsigned int)"isable RX CDR PPM detector" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v246,
    v245[0],
    v245[1],
    v245[2],
    v245[3],
    v245[4],
    v245[5],
    v245[6],
    v246,
    v71,
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
    v322);
  sub_7F86C(a1, a3, 77, 235408904);
  sub_7F86C(a1, a3, 78, -2144272382);
  sub_7F86C(a1, a3, 77, 252186376);
  sub_7F86C(a1, a3, 78, -2144272382);
  sub_7F86C(a1, a3, 77, 235408904);
  sub_7F86C(a1, a3, 78, -2144272381);
  sub_7F86C(a1, a3, 77, 252186376);
  sub_7F86C(a1, a3, 78, -2144272381);
  V_LOCK();
  LOWORD(v72) = 27372;
  HIWORD(v72) = (unsigned int)":" >> 16;
  V_INT((int)v247, v72, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v248,
    v247[0],
    v247[1],
    v247[2],
    v247[3],
    v247[4],
    v247[5],
    v247[6],
    v248,
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
    v322);
  sub_7F86C(a1, a3, 77, (int)&loc_40004);
  sub_7F86C(a1, a3, 78, -2144272379);
  sub_7F86C(a1, a3, 77, (int)&off_C000C);
  sub_7F86C(a1, a3, 78, -2144272379);
  V_LOCK();
  LOWORD(v73) = 27372;
  HIWORD(v73) = (unsigned int)":" >> 16;
  V_INT((int)v249, v73, *(int *)(a1 + 256));
  LOWORD(v74) = -10024;
  HIWORD(v74) = (unsigned int)"_en to 0" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v250,
    v249[0],
    v249[1],
    v249[2],
    v249[3],
    v249[4],
    v249[5],
    v249[6],
    v250,
    v74,
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
    v322);
  sub_7F86C(a1, a3, 77, (int)&loc_40004);
  sub_7F86C(a1, a3, 78, -2144272378);
  sub_7F86C(a1, a3, 77, (int)&off_C000C);
  sub_7F86C(a1, a3, 78, -2144272378);
  V_LOCK();
  LOWORD(v75) = 27372;
  HIWORD(v75) = (unsigned int)":" >> 16;
  V_INT((int)v251, v75, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v252,
    v251[0],
    v251[1],
    v251[2],
    v251[3],
    v251[4],
    v251[5],
    v251[6],
    v252,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144272372);
  sub_7F86C(a1, a3, 77, (int)&loc_100010);
  sub_7F86C(a1, a3, 78, -2144272372);
  V_LOCK();
  LOWORD(v76) = 27372;
  HIWORD(v76) = (unsigned int)":" >> 16;
  V_INT((int)v253, v76, *(int *)(a1 + 256));
  LOWORD(v77) = -9960;
  HIWORD(v77) = (unsigned int)"ts to 0" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v254,
    v253[0],
    v253[1],
    v253[2],
    v253[3],
    v253[4],
    v253[5],
    v253[6],
    v254,
    v77,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144272360);
  sub_7F86C(a1, a3, 77, (int)&loc_100010);
  sub_7F86C(a1, a3, 78, -2144272360);
  V_LOCK();
  LOWORD(v78) = 27372;
  HIWORD(v78) = (unsigned int)":" >> 16;
  V_INT((int)v255, v78, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v256,
    v255[0],
    v255[1],
    v255[2],
    v255[3],
    v255[4],
    v255[5],
    v255[6],
    v256,
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
    v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144272114);
  sub_7F86C(a1, a3, 77, 710158932);
  sub_7F86C(a1, a3, 78, -2144272114);
  V_LOCK();
  LOWORD(v79) = 27372;
  HIWORD(v79) = (unsigned int)":" >> 16;
  V_INT((int)v257, v79, *(int *)(a1 + 256));
  LOWORD(v80) = -9844;
  HIWORD(v80) = (unsigned int)&unk_16DD4C >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v258,
    v257[0],
    v257[1],
    v257[2],
    v257[3],
    v257[4],
    v257[5],
    v257[6],
    v258,
    v80,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v81) = -11432;
  HIWORD(v81) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v81, 174, "serdes_external_loop_ate_init", 29, 1361, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144272124);
  sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7F86C(a1, a3, 78, -2144272124);
  V_LOCK();
  LOWORD(v82) = 27372;
  HIWORD(v82) = (unsigned int)":" >> 16;
  V_INT((int)v259, v82, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v260,
    v259[0],
    v259[1],
    v259[2],
    v259[3],
    v259[4],
    v259[5],
    v259[6],
    v260,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v83) = -11432;
  HIWORD(v83) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v83, 174, "serdes_external_loop_ate_init", 29, 1365, 60, v322);
  V_LOCK();
  LOWORD(v84) = 27372;
  HIWORD(v84) = (unsigned int)":" >> 16;
  V_INT((int)v261, v84, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v262,
    v261[0],
    v261[1],
    v261[2],
    v261[3],
    v261[4],
    v261[5],
    v261[6],
    v262,
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v85) = -11432;
  HIWORD(v85) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v85, 174, "serdes_external_loop_ate_init", 29, 1366, 60, v322);
  if ( (unsigned __int8)v199 == 2 )
    LOWORD(v86) = 498;
  else
    LOWORD(v86) = 501;
  if ( (unsigned __int8)v199 == 2 )
    HIWORD(v86) = 498;
  else
    HIWORD(v86) = 501;
  sub_7F86C(a1, a3, 77, v86);
  sub_7F86C(a1, a3, 78, -2144247559);
  V_LOCK();
  LOWORD(v87) = 27372;
  HIWORD(v87) = (unsigned int)":" >> 16;
  V_INT((int)v263, v87, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v264,
    v263[0],
    v263[1],
    v263[2],
    v263[3],
    v263[4],
    v263[5],
    v263[6],
    v264,
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
    v322);
  sub_7F86C(a1, a3, 77, 20971840);
  sub_7F86C(a1, a3, 78, -2144251901);
  sub_7F86C(a1, a3, 77, 88606024);
  sub_7F86C(a1, a3, 78, -2144251901);
  V_LOCK();
  LOWORD(v88) = 27372;
  HIWORD(v88) = (unsigned int)":" >> 16;
  V_INT((int)v265, v88, *(int *)(a1 + 256));
  LOWORD(v89) = -6608;
  HIWORD(v89) = (unsigned int)"130" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v266,
    v265[0],
    v265[1],
    v265[2],
    v265[3],
    v265[4],
    v265[5],
    v265[6],
    v266,
    v89,
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
    v322);
  sub_7F86C(a1, a3, 77, (int)&loc_100010);
  sub_7F86C(a1, a3, 78, -2144251900);
  sub_7F86C(a1, a3, 77, 542122064);
  sub_7F86C(a1, a3, 78, -2144251900);
  V_LOCK();
  LOWORD(v90) = 27372;
  HIWORD(v90) = (unsigned int)":" >> 16;
  V_INT((int)v267, v90, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v268,
    v267[0],
    v267[1],
    v267[2],
    v267[3],
    v267[4],
    v267[5],
    v267[6],
    v268,
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v91) = -11432;
  HIWORD(v91) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v91, 174, "serdes_external_loop_ate_init", 29, 1378, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247761);
  sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7F86C(a1, a3, 78, -2144247761);
  V_LOCK();
  LOWORD(v92) = 27372;
  HIWORD(v92) = (unsigned int)":" >> 16;
  V_INT((int)v269, v92, *(int *)(a1 + 256));
  LOWORD(v93) = -9592;
  HIWORD(v93) = (unsigned int)"%s Disable rxX_data_en after adaptation done" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v270,
    v269[0],
    v269[1],
    v269[2],
    v269[3],
    v269[4],
    v269[5],
    v269[6],
    v270,
    v93,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v94) = -11432;
  HIWORD(v94) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v94, 174, "serdes_external_loop_ate_init", 29, 1382, 60, v322);
  sub_7F86C(a1, a3, 77, 537010178);
  sub_7F86C(a1, a3, 78, -2144247750);
  V_LOCK();
  LOWORD(v95) = 27372;
  HIWORD(v95) = (unsigned int)":" >> 16;
  V_INT((int)v271, v95, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v272,
    v271[0],
    v271[1],
    v271[2],
    v271[3],
    v271[4],
    v271[5],
    v271[6],
    v272,
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v96) = -11432;
  HIWORD(v96) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v96, 174, "serdes_external_loop_ate_init", 29, 1384, 60, v322);
  sub_7F86C(a1, a3, 77, 872428544);
  sub_7F86C(a1, a3, 78, -2144247769);
  sub_7F86C(a1, a3, 77, 1006648320);
  sub_7F86C(a1, a3, 78, -2144247769);
  V_LOCK();
  LOWORD(v97) = 27372;
  HIWORD(v97) = (unsigned int)":" >> 16;
  V_INT((int)v273, v97, *(int *)(a1 + 256));
  LOWORD(v98) = -9480;
  HIWORD(v98) = (unsigned int)" 01" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v274,
    v273[0],
    v273[1],
    v273[2],
    v273[3],
    v273[4],
    v273[5],
    v273[6],
    v274,
    v98,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v99) = -11432;
  HIWORD(v99) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v99, 174, "serdes_external_loop_ate_init", 29, 1387, 60, v322);
  sub_7F86C(a1, a3, 77, (int)&loc_80008);
  sub_7F86C(a1, a3, 78, -2144247745);
  sub_7F86C(a1, a3, 77, (int)&unk_180018);
  sub_7F86C(a1, a3, 78, -2144247745);
  V_LOCK();
  LOWORD(v100) = 27372;
  HIWORD(v100) = (unsigned int)":" >> 16;
  V_INT((int)v275, v100, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v276,
    v275[0],
    v275[1],
    v275[2],
    v275[3],
    v275[4],
    v275[5],
    v275[6],
    v276,
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v101) = -11432;
  HIWORD(v101) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v101, 174, "serdes_external_loop_ate_init", 29, 1390, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247798);
  sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7F86C(a1, a3, 78, -2144247798);
  V_LOCK();
  LOWORD(v102) = 27372;
  HIWORD(v102) = (unsigned int)":" >> 16;
  V_INT((int)v277, v102, *(int *)(a1 + 256));
  LOWORD(v103) = -9376;
  HIWORD(v103) = (unsigned int)"ot success!" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v278,
    v277[0],
    v277[1],
    v277[2],
    v277[3],
    v277[4],
    v277[5],
    v277[6],
    v278,
    v103,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v104) = -11432;
  HIWORD(v104) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v104, 174, "serdes_external_loop_ate_init", 29, 1393, 60, v322);
  sub_7F86C(a1, a3, 77, 65537);
  sub_7F86C(a1, a3, 78, -2144247604);
  V_LOCK();
  LOWORD(v105) = 27372;
  HIWORD(v105) = (unsigned int)":" >> 16;
  V_INT((int)v279, v105, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v280,
    v279[0],
    v279[1],
    v279[2],
    v279[3],
    v279[4],
    v279[5],
    v279[6],
    v280,
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v106) = -11432;
  HIWORD(v106) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  LOWORD(v107) = -8992;
  zlog(g_zc, v106, 174, "serdes_external_loop_ate_init", 29, 1395, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144247796);
  sub_7F86C(a1, a3, 77, 268439552);
  sub_7F86C(a1, a3, 78, -2144247796);
  V_LOCK();
  LOWORD(v108) = 27372;
  HIWORD(v108) = (unsigned int)":" >> 16;
  V_INT((int)v281, v108, *(int *)(a1 + 256));
  LOWORD(v109) = -9232;
  HIWORD(v109) = (unsigned int)"rdata %08x" >> 16;
  HIWORD(v107) = (unsigned int)" %02x core %02x reg %04x rdata %04x" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v282,
    v281[0],
    v281[1],
    v281[2],
    v281[3],
    v281[4],
    v281[5],
    v281[6],
    v282,
    v109,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v110) = -11432;
  HIWORD(v110) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v110, 174, "serdes_external_loop_ate_init", 29, 1398, 60, v322);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144243666);
  sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
  sub_7F86C(a1, a3, 78, -2144243666);
  sub_7F86C(a1, a3, 77, 4259905);
  sub_7F86C(a1, a3, 78, -2144251869);
  sub_7F86C(a1, a3, 77, 13304011);
  sub_7F86C(a1, a3, 78, -2144251869);
  V_LOCK();
  LOWORD(v111) = 27372;
  HIWORD(v111) = (unsigned int)":" >> 16;
  V_INT((int)v283, v111, *(int *)(a1 + 256));
  LOWORD(v112) = 20532;
  HIWORD(v112) = (unsigned int)&g_fan_zc >> 16;
  v197 = v112;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v284,
    v283[0],
    v283[1],
    v283[2],
    v283[3],
    v283[4],
    v283[5],
    v283[6],
    v284,
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v113) = -11432;
  HIWORD(v113) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v113, 174, "serdes_external_loop_ate_init", 29, 1403, 60, v322);
  sub_7F86C(a1, a3, 77, (int)&loc_40004);
  sub_7F86C(a1, a3, 78, -2144243609);
  V_LOCK();
  LOWORD(v114) = 27372;
  HIWORD(v114) = (unsigned int)":" >> 16;
  V_INT((int)v285, v114, *(int *)(a1 + 256));
  LOWORD(v115) = -9120;
  HIWORD(v115) = (unsigned int)" lock successed!" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v286,
    v285[0],
    v285[1],
    v285[2],
    v285[3],
    v285[4],
    v285[5],
    v285[6],
    v286,
    v115,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v116) = -11432;
  HIWORD(v116) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v116, 174, "serdes_external_loop_ate_init", 29, 1405, 60, v322);
  sub_7F86C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7F86C(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v117) = 27372;
  HIWORD(v117) = (unsigned int)":" >> 16;
  V_INT((int)v287, v117, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v288,
    v287[0],
    v287[1],
    v287[2],
    v287[3],
    v287[4],
    v287[5],
    v287[6],
    v288,
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v118) = -11432;
  HIWORD(v118) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v118, 174, "serdes_external_loop_ate_init", 29, 1407, 60, v322);
  sub_7F86C(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7F86C(a1, a3, 78, -2144272078);
  V_LOCK();
  LOWORD(v119) = 27372;
  HIWORD(v119) = (unsigned int)":" >> 16;
  V_INT((int)v289, v119, *(int *)(a1 + 256));
  LOWORD(v120) = -9028;
  HIWORD(v120) = (unsigned int)"data %04x" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v290,
    v289[0],
    v289[1],
    v289[2],
    v289[3],
    v289[4],
    v289[5],
    v289[6],
    v290,
    v120,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v121) = -11432;
  HIWORD(v121) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(g_zc, v121, 174, "serdes_external_loop_ate_init", 29, 1409, 60, v322);
  sub_7F86C(a1, a3, 77, -2136964960);
  sub_7F86C(a1, a3, 78, -2144247776);
  sub_7F86C(a1, a3, 77, -2136309590);
  sub_7F86C(a1, a3, 78, -2144247776);
  V_LOCK();
  LOWORD(v122) = 27372;
  HIWORD(v122) = (unsigned int)":" >> 16;
  V_INT((int)v291, v122, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v292,
    v291[0],
    v291[1],
    v291[2],
    v291[3],
    v291[4],
    v291[5],
    v291[6],
    v292,
    v107,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v123) = -11432;
  HIWORD(v123) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v197, v123, 174, "serdes_external_loop_ate_init", 29, 1412, 60, v322);
  V_LOCK();
  LOWORD(v124) = 27372;
  HIWORD(v124) = (unsigned int)":" >> 16;
  V_INT((int)v293, v124, *(int *)(a1 + 256));
  LOWORD(v125) = -8960;
  HIWORD(v125) = (unsigned int)"04x" >> 16;
  LOWORD(v126) = -8876;
  HIWORD(v126) = (unsigned int)"P-%d] phy_err: 0x%x, phy_lost: 0x%x, phy_unlock: 0x%x" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v294,
    v293[0],
    v293[1],
    v293[2],
    v293[3],
    v293[4],
    v293[5],
    v293[6],
    v294,
    v125,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v127) = -11432;
  HIWORD(v127) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v197, v127, 174, "serdes_external_loop_ate_init", 29, 1413, 60, v322);
  usleep(0x3E8u);
  V_LOCK();
  LOWORD(v128) = 27372;
  HIWORD(v128) = (unsigned int)":" >> 16;
  V_INT((int)v295, v128, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v296,
    v295[0],
    v295[1],
    v295[2],
    v295[3],
    v295[4],
    v295[5],
    v295[6],
    v296,
    &unk_16DD2C,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  LOWORD(v129) = -11432;
  HIWORD(v129) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v197, v129, 174, "serdes_external_loop_ate_init", 29, 1416, 60, v322);
  V_LOCK();
  LOWORD(v130) = 27372;
  HIWORD(v130) = (unsigned int)":" >> 16;
  V_INT((int)v297, v130, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v298,
    v297[0],
    v297[1],
    v297[2],
    v297[3],
    v297[4],
    v297[5],
    v297[6],
    v298,
    v107,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1417,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 12308, 65537);
  serdes_wait_status(a1, a2, a3, 12820, 65537);
  serdes_wait_status(a1, a2, a3, 13332, 65537);
  serdes_wait_status(a1, a2, a3, 13844, 65537);
  V_LOCK();
  LOWORD(v131) = 27372;
  HIWORD(v131) = (unsigned int)":" >> 16;
  V_INT((int)v299, v131, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v300,
    v299[0],
    v299[1],
    v299[2],
    v299[3],
    v299[4],
    v299[5],
    v299[6],
    v300,
    v126,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1433,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK();
  LOWORD(v132) = 27372;
  HIWORD(v132) = (unsigned int)":" >> 16;
  V_INT((int)v301, v132, *(int *)(a1 + 256));
  LOWORD(v133) = -8832;
  HIWORD(v133) = (unsigned int)"ock: 0x%x" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v302,
    v301[0],
    v301[1],
    v301[2],
    v301[3],
    v301[4],
    v301[5],
    v301[6],
    v302,
    v133,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1438,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK();
  LOWORD(v134) = 27372;
  HIWORD(v134) = (unsigned int)":" >> 16;
  V_INT((int)v303, v134, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v304,
    v303[0],
    v303[1],
    v303[2],
    v303[3],
    v303[4],
    v303[5],
    v303[6],
    v304,
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1443,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK();
  LOWORD(v135) = 27372;
  HIWORD(v135) = (unsigned int)":" >> 16;
  V_INT((int)v305, v135, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v306,
    v305[0],
    v305[1],
    v305[2],
    v305[3],
    v305[4],
    v305[5],
    v305[6],
    v306,
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1448,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  serdes_wait_status(a1, a2, a3, 9732, 0);
  v136 = (unsigned __int8)LFSR31;
  if ( LFSR31 )
  {
    V_LOCK();
    LOWORD(v154) = 27372;
    HIWORD(v154) = (unsigned int)":" >> 16;
    V_INT((int)v307, v154, *(int *)(a1 + 256));
    LOWORD(v155) = -8736;
    HIWORD(v155) = (unsigned int)"y_lost: 0x%llx, lane_lost: %u" >> 16;
    logfmt_raw(
      v322,
      0x1000u,
      0,
      v308,
      v307[0],
      v307[1],
      v307[2],
      v307[3],
      v307[4],
      v307[5],
      v307[6],
      v308,
      v155,
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    LOWORD(v156) = -11432;
    HIWORD(v156) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v197, v156, 174, "serdes_external_loop_ate_init", 29, 1456, 60, v322);
    v138 = (int)&dword_10000 + 1;
  }
  else
  {
    V_LOCK();
    LOWORD(v137) = 27372;
    HIWORD(v137) = (unsigned int)":" >> 16;
    V_INT((int)v309, v137, *(int *)(a1 + 256));
    logfmt_raw(
      v322,
      0x1000u,
      v136,
      v310,
      v309[0],
      v309[1],
      v309[2],
      v309[3],
      v309[4],
      v309[5],
      v309[6],
      v310,
      "%s Enabling TX LBERT in NYQUIST",
      "serdes_external_loop_ate_init");
    V_UNLOCK();
    zlog(
      *v197,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_external_loop_ate_init",
      29,
      1461,
      60,
      v322);
    sub_7F86C(a1, a3, 77, 715139744);
    sub_7F86C(a1, a3, 78, -2144251791);
    usleep(0x12Cu);
    v138 = 715729577;
  }
  sub_7F86C(a1, a3, 77, v138);
  sub_7F86C(a1, a3, 78, -2144251791);
  usleep(0x12Cu);
  V_LOCK();
  LOWORD(v139) = 27372;
  HIWORD(v139) = (unsigned int)":" >> 16;
  V_INT((int)v311, v139, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v312,
    v311[0],
    v311[1],
    v311[2],
    v311[3],
    v311[4],
    v311[5],
    v311[6],
    v312,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1469,
    60,
    v322);
  sub_7F86C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7F86C(a1, a3, 78, -2144247768);
  sub_7F86C(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_7F86C(a1, a3, 78, -2144247768);
  V_LOCK();
  LOWORD(v140) = 27372;
  HIWORD(v140) = (unsigned int)":" >> 16;
  V_INT((int)v313, v140, *(int *)(a1 + 256));
  LOWORD(v141) = -6448;
  HIWORD(v141) = (unsigned int)"_remote_on_pic_HNS_2130" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v314,
    v313[0],
    v313[1],
    v313[2],
    v313[3],
    v313[4],
    v313[5],
    v313[6],
    v314,
    v141,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1473,
    60,
    v322);
  sub_7F86C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7F86C(a1, a3, 78, -2144243377);
  sub_7F86C(a1, a3, 77, (int)&loc_30000 + 3);
  sub_7F86C(a1, a3, 78, -2144243377);
  sub_7F86C(a1, a3, 77, (int)&loc_70004 + 3);
  sub_7F86C(a1, a3, 78, -2144243377);
  V_LOCK();
  LOWORD(v142) = 27372;
  HIWORD(v142) = (unsigned int)":" >> 16;
  V_INT((int)v315, v142, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v316,
    v315[0],
    v315[1],
    v315[2],
    v315[3],
    v315[4],
    v315[5],
    v315[6],
    v316,
    "%s Toggle rx resets",
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1477,
    60,
    v322);
  sub_7F86C(a1, a3, 77, -2136244053);
  sub_7F86C(a1, a3, 78, -2144247776);
  sub_7F86C(a1, a3, 77, -2136244053);
  sub_7F86C(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status(a1, a2, a3, 4156, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 4668, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5180, (int)&dword_10050 + 1);
  serdes_wait_status(a1, a2, a3, 5692, (int)&dword_10050 + 1);
  sub_7F86C(a1, a3, 77, -2136309590);
  sub_7F86C(a1, a3, 78, -2144247776);
  sub_7F86C(a1, a3, 77, -2136309590);
  sub_7F86C(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_186A0);
  serdes_wait_status(a1, a2, a3, 4156, 84);
  serdes_wait_status(a1, a2, a3, 4668, 84);
  serdes_wait_status(a1, a2, a3, 5180, 84);
  LOWORD(v143) = -8684;
  serdes_wait_status(a1, a2, a3, 5692, 84);
  usleep(0xEA60u);
  V_LOCK();
  LOWORD(v144) = 27372;
  HIWORD(v144) = (unsigned int)":" >> 16;
  V_INT((int)v317, v144, *(int *)(a1 + 256));
  HIWORD(v143) = (unsigned int)" TOTAL] phy_unlock: 0x%llx, lane_unlock: %u" >> 16;
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v318,
    v317[0],
    v317[1],
    v317[2],
    v317[3],
    v317[4],
    v317[5],
    v317[6],
    v318,
    v143,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1496,
    60,
    v322);
  sub_7F86C(a1, a3, 77, -1062551382);
  sub_7F86C(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  LOWORD(v145) = 27372;
  HIWORD(v145) = (unsigned int)":" >> 16;
  V_INT((int)v319, v145, *(int *)(a1 + 256));
  logfmt_raw(
    v322,
    0x1000u,
    0,
    v320,
    v319[0],
    v319[1],
    v319[2],
    v319[3],
    v319[4],
    v319[5],
    v319[6],
    v320,
    v126,
    "serdes_external_loop_ate_init");
  V_UNLOCK();
  zlog(
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1500,
    60,
    v322);
  serdes_wait_status(a1, a2, a3, 4156, 86);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 86);
  serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK();
  V_INT((int)s, "chain", *(int *)(a1 + 256));
  logfmt_raw(
    v322,
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
    *v197,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_init",
    29,
    1506,
    60,
    v322);
  if ( (unsigned __int8)v199 == 2 )
  {
    sub_7F86C(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7F86C(a1, a3, 78, -2144247798);
    sub_7F86C(a1, a3, 77, (int)&loc_30000 + 3);
    sub_7F86C(a1, a3, 78, -2144247798);
    usleep(0x7D0u);
    serdes_wait_status(a1, a2, a3, 8218, 1);
    serdes_wait_status(a1, a2, a3, 8730, 1);
    serdes_wait_status(a1, a2, a3, 9242, 1);
    serdes_wait_status(a1, a2, a3, 9754, 1);
    sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
    sub_7F86C(a1, a3, 78, -2144247798);
    sub_7F86C(a1, a3, 77, (int)"equihash_blake2b_update");
    sub_7F86C(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_186A0);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  usleep(0xC350u);
  return 0;
}
