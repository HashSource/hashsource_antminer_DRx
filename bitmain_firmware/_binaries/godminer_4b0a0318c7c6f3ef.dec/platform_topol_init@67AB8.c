int platform_topol_init()
{
  char *v0; // r0
  double *file; // r0
  double *v2; // r11
  _DWORD *v3; // r0
  _DWORD *v4; // r9
  _DWORD *v5; // r0
  int v6; // r3
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r10
  const char *v10; // r9
  size_t v11; // r0
  char *v12; // r0
  int v13; // r1
  char *v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r9
  _DWORD *v17; // r0
  int v18; // r3
  int v19; // r1
  char *v20; // r1
  _DWORD *v21; // r0
  _DWORD *v22; // r9
  _DWORD *v23; // r0
  int v24; // r3
  int v25; // r1
  char *v26; // r1
  _DWORD *v27; // r0
  _DWORD *v28; // r8
  int v29; // r3
  int v30; // r1
  char *v31; // r1
  _DWORD *v32; // r0
  _DWORD *v33; // r8
  _DWORD *v34; // r0
  int v35; // r3
  int v36; // r1
  int v37; // r3
  int v38; // r0
  int v39; // r2
  int v40; // r1
  unsigned int *v41; // r3
  unsigned int v42; // r2
  unsigned int v43; // r2
  int v45; // r3
  int v46; // r3
  int v47; // r0
  int v48; // r2
  int v49; // r1
  int v50; // r3
  int v51; // r3
  int v52; // r3
  char *v53; // r1
  _DWORD *v54; // r0
  int v55; // r3
  int v56; // r1
  char *v57; // r1
  _DWORD *v58; // r0
  int v59; // r9
  int v60; // r0
  int v61; // r3
  int v62; // r1
  size_t v63; // r9
  int v64; // r3
  int v65; // r1
  void *v66; // r0
  char *v67; // r1
  _DWORD *v68; // r0
  int v69; // r6
  int v70; // r0
  int v71; // r3
  int v72; // r1
  int v73; // r0
  char *v74; // r1
  _DWORD *v75; // r0
  int v76; // r6
  int v77; // r0
  int v78; // r3
  int v79; // r1
  int v80; // r0
  char *v81; // r1
  _DWORD *v82; // r0
  int v83; // r6
  int v84; // r0
  int v85; // r3
  int v86; // r1
  int v87; // r0
  char *v88; // r1
  _DWORD *v89; // r0
  int v90; // r6
  int v91; // r0
  int v92; // r3
  int v93; // r1
  int v94; // r0
  char *v95; // r1
  _DWORD *v96; // r0
  int v97; // r8
  int v98; // r0
  int v99; // r3
  int v100; // r1
  int v101; // r0
  char *v102; // r1
  _DWORD *v103; // r0
  _DWORD *v104; // r8
  char *v105; // r2
  int v106; // r3
  int v107; // r1
  _DWORD *v108; // r0
  int v109; // r8
  int v110; // r0
  int v111; // r3
  int v112; // r1
  _DWORD *v113; // r0
  int v114; // r8
  int v115; // r0
  int v116; // r3
  int v117; // r1
  size_t v118; // r0
  int v119; // r6
  void *v120; // r0
  char *v121; // r1
  _DWORD *v122; // r0
  int v123; // r6
  int v124; // r0
  int v125; // r3
  int v126; // r1
  _DWORD *v127; // r0
  int v128; // r6
  int v129; // r0
  int v130; // r3
  int v131; // r1
  _DWORD *v132; // r0
  int v133; // r6
  int v134; // r0
  int v135; // r3
  int v136; // r1
  _DWORD *v137; // r0
  int v138; // r6
  int v139; // r0
  int v140; // r3
  int v141; // r1
  int v142; // r3
  char *v143; // r1
  _DWORD *v144; // r0
  int v145; // r3
  int v146; // r1
  char *v147; // r12
  _DWORD *v148; // r0
  _DWORD *v149; // r10
  int v150; // r6
  _DWORD *v151; // r0
  int v152; // r7
  int v153; // r0
  int v154; // r3
  int v155; // r1
  int v156; // r0
  int v157; // r9
  _DWORD *v158; // r9
  _DWORD *v159; // r0
  _DWORD *v160; // r7
  _DWORD *v161; // r0
  int v162; // r3
  int v163; // r1
  const char *v164; // r0
  const char *v165; // r1
  const char *v166; // r7
  char *v167; // r1
  _DWORD *v168; // r0
  int v169; // r6
  int v170; // r0
  int v171; // r3
  int v172; // r1
  int v173; // r0
  char *v174; // r1
  _DWORD *v175; // r0
  _DWORD *v176; // r6
  _DWORD *v177; // r0
  int v178; // r3
  int v179; // r1
  int v180; // r7
  char **v181; // r8
  const char *v182; // r0
  const char *v183; // r11
  const char *v184; // r1
  const char *v185; // t1
  char *v186; // r1
  int v187; // r6
  _DWORD *v188; // r0
  _DWORD *v189; // r7
  _DWORD *v190; // r0
  int v191; // r3
  int v192; // r1
  _DWORD *v193; // r0
  char **v194; // r7
  const char *v195; // r0
  const char *v196; // r8
  const char *v197; // r1
  const char *v198; // t1
  int v199; // r3
  int v200; // r0
  int v201; // r2
  int v202; // r1
  int v203; // r3
  int v204; // r3
  int v205; // r0
  int v206; // r2
  int v207; // r1
  int v208; // r3
  int v209; // r2
  int v210; // r3
  _DWORD *v211; // r3
  int v212; // r1
  int v213; // r3
  int v214; // r3
  int v215; // r1
  int v216; // r3
  int v217; // r3
  char *v218; // r1
  _DWORD *v219; // r0
  _DWORD *v220; // r0
  int v221; // r8
  int v222; // r3
  int v223; // r1
  char *v224; // r1
  _DWORD *v225; // r0
  _DWORD *v226; // r0
  int v227; // r3
  int v228; // r1
  const char *v229; // r3
  int v230; // r9
  const char *v231; // r11
  char **v232; // r6
  int v233; // r4
  const char *v234; // r7
  const char *v235; // r1
  const char *v236; // t1
  int v237; // r2
  char *v238; // r1
  _DWORD *v239; // r0
  int v240; // r6
  int v241; // r0
  int v242; // r3
  int v243; // r1
  int v244; // r4
  int v245; // r5
  int v246; // r0
  int v247; // r3
  int v248; // r6
  int v249; // r5
  int v250; // r4
  char *v251; // r1
  char *v252; // r0
  unsigned int *v253; // r3
  unsigned int v254; // r2
  unsigned int v255; // r2
  int v256; // r3
  int v257; // r3
  int v258; // r3
  int v259; // r3
  int v260; // r3
  int v261; // r0
  int v262; // r1
  int v263; // r3
  int v264; // r3
  int v265; // r3
  int v266; // r3
  int v267; // r1
  char *v268; // r1
  _DWORD *v269; // r0
  int v270; // r3
  int v271; // r1
  char *v272; // r12
  _DWORD *v273; // r0
  _DWORD *v274; // r11
  int v275; // r6
  _DWORD *v276; // r0
  int v277; // r7
  int v278; // r0
  int v279; // r3
  int v280; // r1
  int v281; // r0
  int v282; // r10
  _DWORD *v283; // r10
  _DWORD *v284; // r0
  _DWORD *v285; // r7
  _DWORD *v286; // r0
  int v287; // r3
  int v288; // r1
  const char *v289; // r0
  const char *v290; // r1
  const char *v291; // r7
  char *v292; // r1
  _DWORD *v293; // r0
  int v294; // r6
  int v295; // r0
  int v296; // r3
  int v297; // r1
  int v298; // r0
  char *v299; // r1
  _DWORD *v300; // r0
  _DWORD *v301; // r6
  _DWORD *v302; // r0
  int v303; // r3
  int v304; // r1
  int v305; // r7
  char **v306; // r8
  const char *v307; // r0
  const char *v308; // r9
  const char *v309; // r1
  const char *v310; // t1
  char *v311; // r1
  int v312; // r6
  _DWORD *v313; // r0
  _DWORD *v314; // r7
  _DWORD *v315; // r0
  int v316; // r3
  int v317; // r1
  _DWORD *v318; // r0
  char **v319; // r7
  const char *v320; // r0
  const char *v321; // r8
  const char *v322; // r1
  const char *v323; // t1
  int v324; // r3
  int v325; // r3
  int v326; // r3
  int v327; // r1
  int v328; // r2
  int v329; // r3
  int v330; // r1
  int v331; // r3
  int v332; // r3
  int v333; // r3
  int v334; // r0
  int v335; // r3
  int v336; // r3
  int v337; // r3
  int v338; // r0
  int v339; // r3
  int v340; // r3
  int v341; // r3
  int v342; // r3
  int v343; // r3
  int v344; // r3
  int v345; // r3
  int v346; // r3
  int v347; // r3
  int v348; // r0
  int v349; // r3
  int v350; // r3
  int v351; // r3
  int v352; // r3
  int v353; // r3
  int v354; // r3
  int v355; // r1
  int v356; // r3
  int v357; // r3
  int v358; // [sp+14h] [bp-1120h]
  _DWORD *v359; // [sp+18h] [bp-111Ch]
  int v360; // [sp+18h] [bp-111Ch]
  unsigned int v361; // [sp+1Ch] [bp-1118h]
  _DWORD *v362; // [sp+1Ch] [bp-1118h]
  unsigned int v363; // [sp+1Ch] [bp-1118h]
  _DWORD *v364; // [sp+20h] [bp-1114h]
  _DWORD *v365; // [sp+20h] [bp-1114h]
  double *v366; // [sp+20h] [bp-1114h]
  double *v367; // [sp+24h] [bp-1110h]
  double *v368; // [sp+24h] [bp-1110h]
  _DWORD *v369; // [sp+24h] [bp-1110h]
  int v370; // [sp+28h] [bp-110Ch]
  char *v371; // [sp+28h] [bp-110Ch]
  char *v372; // [sp+2Ch] [bp-1108h]
  int v373; // [sp+2Ch] [bp-1108h]
  char v374[252]; // [sp+34h] [bp-1100h] BYREF
  char v375[4100]; // [sp+130h] [bp-1004h] BYREF

  LOWORD(v0) = -26860;
  HIWORD(v0) = (unsigned int)"or num failed" >> 16;
  file = json_load_file(v0, 0, v374);
  v2 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    LOWORD(v209) = -26860;
    HIWORD(v209) = (unsigned int)"or num failed" >> 16;
    LOWORD(v210) = -26844;
    HIWORD(v210) = (unsigned int)"sensor num : %d" >> 16;
    v358 = -1;
    logfmt_raw(v375, 0x1000u, 0, v210, v209);
    V_UNLOCK();
    LOWORD(v211) = 20532;
    HIWORD(v211) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v212) = -29352;
    HIWORD(v212) = (unsigned int)"type failed!" >> 16;
    zlog(*v211, v212, 149, "platform_topol_init", 19, 1489, 20, v375);
    return v358;
  }
  v3 = (_DWORD *)json_object_get(file, "machine");
  v4 = v3;
  if ( !v3 || *v3 != 2 )
  {
    V_LOCK();
    LOWORD(v46) = -26800;
    LOWORD(v7) = 20532;
    HIWORD(v46) = (unsigned int)"chip_temp" >> 16;
    HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
    logfmt_raw(v375, 0x1000u, 0, v46);
    V_UNLOCK();
    v47 = *v7;
    v48 = 140;
LABEL_26:
    LOWORD(v49) = -29352;
    HIWORD(v49) = (unsigned int)"type failed!" >> 16;
    zlog(v47, v49, 149, "_parse_machine", 14, v48, 100, v375);
LABEL_27:
    V_LOCK();
    LOWORD(v50) = -26580;
    HIWORD(v50) = (unsigned int)"ive_count failed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v50);
    V_UNLOCK();
    v38 = *v7;
    v39 = 1496;
    goto LABEL_16;
  }
  V_LOCK();
  v5 = json_string_value(v4);
  LOWORD(v6) = -26780;
  HIWORD(v6) = (unsigned int)"chip_temp failed" >> 16;
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v375, 0x1000u, 0, v6, v5);
  V_UNLOCK();
  LOWORD(v8) = -29352;
  HIWORD(v8) = (unsigned int)"type failed!" >> 16;
  LOWORD(v9) = 22796;
  HIWORD(v9) = (unsigned int)&dword_1B5914 >> 16;
  zlog(*v7, v8, 149, "_parse_machine", 14, 143, 20, v375);
  v10 = (const char *)json_string_value(v4);
  v11 = strlen(v10);
  v12 = (char *)calloc(v11 + 1, 1u);
  *(_DWORD *)v9 = v12;
  if ( !v12 )
  {
    V_LOCK();
    LOWORD(v214) = -26756;
    HIWORD(v214) = (unsigned int)"chip_temp : %d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v214);
    V_UNLOCK();
    LOWORD(v215) = -29352;
    HIWORD(v215) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v215, 149, "_parse_machine", 14, 149, 100, v375);
    goto LABEL_27;
  }
  strcpy(v12, v10);
  V_LOCK();
  logfmt_raw(v375, 0x1000u, 0, "machine : %s ", *(_DWORD *)v9);
  V_UNLOCK();
  LOWORD(v13) = -29352;
  HIWORD(v13) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v13, 149, "_parse_machine", 14, 154, 20, v375);
  LOWORD(v14) = -26696;
  HIWORD(v14) = (unsigned int)"pcb_temp : %d" >> 16;
  v15 = (_DWORD *)json_object_get(v2, v14);
  v16 = v15;
  if ( !v15 || *v15 != 2 )
  {
    V_LOCK();
    LOWORD(v51) = -26684;
    HIWORD(v51) = (unsigned int)"d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v51);
    V_UNLOCK();
    v47 = *v7;
    v48 = 159;
    goto LABEL_26;
  }
  V_LOCK();
  v17 = json_string_value(v16);
  LOWORD(v18) = -26660;
  HIWORD(v18) = (unsigned int)"min_pcb_temp failed" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v18, v17);
  V_UNLOCK();
  LOWORD(v19) = -29352;
  HIWORD(v19) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v19, 149, "_parse_machine", 14, 162, 20, v375);
  LOWORD(v20) = -26644;
  HIWORD(v20) = (unsigned int)"led" >> 16;
  v21 = (_DWORD *)json_object_get(v2, v20);
  v22 = v21;
  if ( !v21 || *v21 != 2 )
  {
    V_LOCK();
    LOWORD(v52) = -26632;
    HIWORD(v52) = (unsigned int)"temp : %d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v52);
    V_UNLOCK();
    v47 = *v7;
    v48 = 167;
    goto LABEL_26;
  }
  V_LOCK();
  v23 = json_string_value(v22);
  LOWORD(v24) = -26608;
  HIWORD(v24) = (unsigned int)"ive_count" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v24, v23);
  V_UNLOCK();
  LOWORD(v25) = -29352;
  HIWORD(v25) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v25, 149, "_parse_machine", 14, 170, 20, v375);
  LOWORD(v26) = -26592;
  HIWORD(v26) = (unsigned int)"max_uneffective_count failed" >> 16;
  v27 = (_DWORD *)json_object_get(v2, v26);
  v28 = v27;
  if ( !v27 || *v27 )
  {
    V_LOCK();
    LOWORD(v199) = -26556;
    HIWORD(v199) = (unsigned int)"uneffective_count : %d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v199);
    V_UNLOCK();
    v200 = *v7;
    v201 = 182;
LABEL_93:
    LOWORD(v202) = -29352;
    HIWORD(v202) = (unsigned int)"type failed!" >> 16;
    zlog(v200, v202, 149, "_parse_processor", 16, v201, 100, v375);
    V_LOCK();
    LOWORD(v203) = -26520;
    HIWORD(v203) = (unsigned int)"ailed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v203);
    V_UNLOCK();
    v38 = *v7;
    v39 = 1503;
    goto LABEL_16;
  }
  V_LOCK();
  LOWORD(v29) = -26532;
  HIWORD(v29) = (unsigned int)"parse asic failed" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v29);
  V_UNLOCK();
  LOWORD(v30) = -29352;
  HIWORD(v30) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v30, 149, "_parse_processor", 16, 185, 20, v375);
  LOWORD(v31) = -28564;
  HIWORD(v31) = (unsigned int)"iled" >> 16;
  v32 = (_DWORD *)json_object_get(v28, v31);
  v33 = v32;
  if ( !v32 || *v32 != 2 )
  {
    V_LOCK();
    LOWORD(v213) = -29192;
    HIWORD(v213) = (unsigned int)": %d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v213);
    V_UNLOCK();
    v200 = *v7;
    v201 = 190;
    goto LABEL_93;
  }
  V_LOCK();
  v34 = json_string_value(v33);
  LOWORD(v35) = -29176;
  HIWORD(v35) = (unsigned int)"rval failed!" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v35, v34);
  V_UNLOCK();
  LOWORD(v36) = -29352;
  HIWORD(v36) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v36, 149, "_parse_processor", 16, 193, 20, v375);
  if ( sub_650D8(v2) )
  {
    V_LOCK();
    LOWORD(v37) = -26496;
    HIWORD(v37) = (unsigned int)"failed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v37);
    V_UNLOCK();
    v38 = *v7;
    v39 = 1510;
    goto LABEL_16;
  }
  if ( sub_657D4(v2) )
  {
    V_LOCK();
    LOWORD(v45) = -26476;
    HIWORD(v45) = (unsigned int)"nsor" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v45);
    V_UNLOCK();
    v38 = *v7;
    v39 = 1517;
    goto LABEL_16;
  }
  LOWORD(v53) = 27372;
  HIWORD(v53) = (unsigned int)":" >> 16;
  v54 = (_DWORD *)json_object_get(v2, v53);
  v359 = v54;
  if ( !v54 || *v54 )
  {
    V_LOCK();
    LOWORD(v217) = -26456;
    HIWORD(v217) = (unsigned int)"d_sensor sensor failed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v217);
    V_UNLOCK();
    v205 = *v7;
    v206 = 909;
    goto LABEL_95;
  }
  V_LOCK();
  LOWORD(v55) = -26436;
  HIWORD(v55) = (unsigned int)"ed" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v55);
  V_UNLOCK();
  LOWORD(v56) = -29352;
  HIWORD(v56) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v56, 149, "_parse_chain", 12, 912, 20, v375);
  LOWORD(v57) = 27256;
  HIWORD(v57) = (unsigned int)"blocks detected on network: %d" >> 16;
  v58 = (_DWORD *)json_object_get(v359, v57);
  v59 = (int)v58;
  if ( !v58 || *v58 != 3 )
  {
    V_LOCK();
    LOWORD(v216) = -26428;
    HIWORD(v216) = (unsigned int)"board_sensor:" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v216);
    V_UNLOCK();
    v205 = *v7;
    v206 = 917;
    goto LABEL_95;
  }
  V_LOCK();
  v60 = json_integer_value(v59);
  LOWORD(v61) = -26404;
  HIWORD(v61) = (unsigned int)"ain ctrlboard failed" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v61, v60);
  V_UNLOCK();
  LOWORD(v62) = -29352;
  HIWORD(v62) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v62, 149, "_parse_chain", 12, 920, 20, v375);
  v63 = json_integer_value(v59);
  *(_DWORD *)(v9 + 4) = v63;
  V_LOCK();
  LOWORD(v64) = -26388;
  HIWORD(v64) = (unsigned int)"iled" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v64, v63);
  V_UNLOCK();
  LOWORD(v65) = -29352;
  HIWORD(v65) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v65, 149, "_alloc_chain", 12, 81, 20, v375);
  v66 = calloc(v63, 0x78u);
  *(_DWORD *)(v9 + 0x24) = v66;
  if ( !v66 )
  {
    V_LOCK();
    LOWORD(v326) = -26372;
    HIWORD(v326) = (unsigned int)"sor" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v326, v63);
    V_UNLOCK();
    LOWORD(v327) = -29352;
    HIWORD(v327) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v327, 149, "_alloc_chain", 12, 86, 100, v375);
    V_LOCK();
    LOWORD(v328) = -32252;
    LOWORD(v329) = 31232;
    HIWORD(v328) = (unsigned int)"[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s" >> 16;
    HIWORD(v329) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v375, 0x1000u, 0, v329, v328);
    V_UNLOCK();
    LOWORD(v330) = -29352;
    HIWORD(v330) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v330, 149, "_alloc_chain", 12, 87, 100, v375);
    goto LABEL_96;
  }
  LOWORD(v67) = -26344;
  HIWORD(v67) = (unsigned int)"_sensor:" >> 16;
  v68 = (_DWORD *)json_object_get(v359, v67);
  v69 = (int)v68;
  if ( !v68 || *v68 != 3 )
  {
    V_LOCK();
    LOWORD(v204) = -26332;
    HIWORD(v204) = (unsigned int)"bind_asic" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v204);
    V_UNLOCK();
    v205 = *v7;
    v206 = 928;
LABEL_95:
    LOWORD(v207) = -29352;
    HIWORD(v207) = (unsigned int)"type failed!" >> 16;
    zlog(v205, v207, 149, "_parse_chain", 12, v206, 100, v375);
LABEL_96:
    V_LOCK();
    LOWORD(v208) = -25252;
    HIWORD(v208) = (unsigned int)"ing_get_addr_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v208);
    V_UNLOCK();
    v38 = *v7;
    v39 = 1525;
LABEL_16:
    LOWORD(v40) = -29352;
    HIWORD(v40) = (unsigned int)"type failed!" >> 16;
    zlog(v38, v40, 149, "platform_topol_init", 19, v39, 20, v375);
    if ( *((_DWORD *)v2 + 1) != -1 )
    {
      v41 = (unsigned int *)v2 + 1;
      __dmb(0xBu);
      do
      {
        v42 = __ldrex(v41);
        v43 = v42 - 1;
      }
      while ( __strex(v43, v41) );
      if ( !v43 )
        json_delete(v2);
    }
    return 34;
  }
  V_LOCK();
  v70 = json_integer_value(v69);
  LOWORD(v71) = -26308;
  HIWORD(v71) = (unsigned int)"d" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v71, v70);
  V_UNLOCK();
  LOWORD(v72) = -29352;
  HIWORD(v72) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v72, 149, "_parse_chain", 12, 931, 20, v375);
  v73 = json_integer_value(v69);
  LOWORD(v74) = -26292;
  *(_DWORD *)(v9 + 8) = v73;
  HIWORD(v74) = (unsigned int)"sensor failed" >> 16;
  v75 = (_DWORD *)json_object_get(v359, v74);
  v76 = (int)v75;
  if ( !v75 || *v75 != 3 )
  {
    V_LOCK();
    LOWORD(v256) = -26276;
    HIWORD(v256) = (unsigned int)"eeprom" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v256);
    V_UNLOCK();
    v205 = *v7;
    v206 = 937;
    goto LABEL_95;
  }
  V_LOCK();
  v77 = json_integer_value(v76);
  LOWORD(v78) = -26252;
  HIWORD(v78) = (unsigned int)"d" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v78, v77);
  V_UNLOCK();
  LOWORD(v79) = -29352;
  HIWORD(v79) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v79, 149, "_parse_chain", 12, 940, 20, v375);
  v80 = json_integer_value(v76);
  LOWORD(v81) = -26232;
  *(_DWORD *)(v9 + 0xC) = v80;
  HIWORD(v81) = (unsigned int)"ain eeprom failed" >> 16;
  v82 = (_DWORD *)json_object_get(v359, v81);
  v83 = (int)v82;
  if ( !v82 || *v82 != 3 )
  {
    V_LOCK();
    LOWORD(v257) = -26212;
    HIWORD(v257) = (unsigned int)"parse chain failed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v257);
    V_UNLOCK();
    v205 = *v7;
    v206 = 946;
    goto LABEL_95;
  }
  V_LOCK();
  v84 = json_integer_value(v83);
  LOWORD(v85) = -26184;
  HIWORD(v85) = (unsigned int)"air_out" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v85, v84);
  V_UNLOCK();
  LOWORD(v86) = -29352;
  HIWORD(v86) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v86, 149, "_parse_chain", 12, 949, 20, v375);
  v87 = json_integer_value(v83);
  LOWORD(v88) = -26160;
  *(_DWORD *)(v9 + 0x10) = v87;
  HIWORD(v88) = (unsigned int)"AT24C512C" >> 16;
  v89 = (_DWORD *)json_object_get(v359, v88);
  v90 = (int)v89;
  if ( !v89 || *v89 != 3 )
  {
    V_LOCK();
    LOWORD(v258) = -26144;
    HIWORD(v258) = (unsigned int)"rred_plldivider" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v258);
    V_UNLOCK();
    v205 = *v7;
    v206 = 955;
    goto LABEL_95;
  }
  V_LOCK();
  v91 = json_integer_value(v90);
  LOWORD(v92) = -26116;
  HIWORD(v92) = (unsigned int)"software_reset_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v92, v91);
  V_UNLOCK();
  LOWORD(v93) = -29352;
  HIWORD(v93) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v93, 149, "_parse_chain", 12, 958, 20, v375);
  v94 = json_integer_value(v90);
  LOWORD(v95) = -26096;
  *(_DWORD *)(v9 + 0x14) = v94;
  HIWORD(v95) = (unsigned int)"042" >> 16;
  v96 = (_DWORD *)json_object_get(v359, v95);
  v97 = (int)v96;
  if ( !v96 || *v96 != 3 )
  {
    V_LOCK();
    LOWORD(v259) = -26080;
    HIWORD(v259) = (unsigned int)"software_reset_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v259);
    V_UNLOCK();
    v205 = *v7;
    v206 = 964;
    goto LABEL_95;
  }
  V_LOCK();
  v98 = json_integer_value(v97);
  LOWORD(v99) = -26052;
  HIWORD(v99) = (unsigned int)"Setting_core_ticket_mask_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v99, v98);
  V_UNLOCK();
  LOWORD(v100) = -29352;
  HIWORD(v100) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v100, 149, "_parse_chain", 12, 967, 20, v375);
  v101 = json_integer_value(v97);
  LOWORD(v102) = -26028;
  *(_DWORD *)(v9 + 0x18) = v101;
  HIWORD(v102) = (unsigned int)"_CKB_2042" >> 16;
  v103 = (_DWORD *)json_object_get(v359, v102);
  v104 = v103;
  if ( !v103 || (unsigned int)(*v103 - 5) > 1 )
  {
    V_LOCK();
    LOWORD(v264) = -26016;
    HIWORD(v264) = (unsigned int)"work_2_packet_ckb" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v264);
    V_UNLOCK();
    v261 = 973;
    goto LABEL_133;
  }
  V_LOCK();
  v105 = "false";
  LOWORD(v106) = -25992;
  if ( *v104 == 5 )
    v105 = "true";
  HIWORD(v106) = (unsigned int)"_work_ckb" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v106, v105);
  V_UNLOCK();
  LOWORD(v107) = -29352;
  HIWORD(v107) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v107, 149, "_parse_chain", 12, 976, 20, v375);
  *(_BYTE *)(v9 + 0x1C) = *v104 == 5;
  v108 = (_DWORD *)json_object_get(v359, "sensor_mode");
  v109 = (int)v108;
  if ( !v108 || *v108 != 3 )
  {
    V_LOCK();
    LOWORD(v263) = -25964;
    HIWORD(v263) = (unsigned int)"ge_reset_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v263);
    V_UNLOCK();
    v261 = 982;
    goto LABEL_133;
  }
  V_LOCK();
  v110 = json_integer_value(v109);
  LOWORD(v111) = -25940;
  HIWORD(v111) = (unsigned int)"Setting_bridge_reset_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v111, v110);
  V_UNLOCK();
  LOWORD(v112) = -29352;
  HIWORD(v112) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v112, 149, "_parse_chain", 12, 985, 20, v375);
  *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 88) = json_integer_value(v109);
  v113 = (_DWORD *)json_object_get(v359, "sensor_num");
  v114 = (int)v113;
  if ( !v113 || *v113 != 3 )
  {
    V_LOCK();
    LOWORD(v260) = -25908;
    HIWORD(v260) = (unsigned int)"ChipSetting_freq_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v260);
    V_UNLOCK();
    v261 = 991;
LABEL_133:
    LOWORD(v262) = -29352;
    HIWORD(v262) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v262, 149, "_parse_chain", 12, v261, 100, v375);
    goto LABEL_96;
  }
  V_LOCK();
  v115 = json_integer_value(v114);
  LOWORD(v116) = -25884;
  HIWORD(v116) = (unsigned int)"2" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v116, v115);
  V_UNLOCK();
  LOWORD(v117) = -29352;
  HIWORD(v117) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v117, 149, "_parse_chain", 12, 994, 20, v375);
  v118 = json_integer_value(v114);
  v119 = *(_DWORD *)(v9 + 0x24);
  *(_DWORD *)(v119 + 92) = v118;
  v120 = calloc(v118, 0x18u);
  *(_DWORD *)(v119 + 84) = v120;
  if ( !v120 )
  {
    V_LOCK();
    logfmt_raw(v375, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    LOWORD(v355) = -29352;
    HIWORD(v355) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v355, 149, "_alloc_sensor", 13, 98, 100, v375);
    goto LABEL_96;
  }
  LOWORD(v121) = -25844;
  HIWORD(v121) = (unsigned int)"_temperature_ckb" >> 16;
  v122 = (_DWORD *)json_object_get(v359, v121);
  v123 = (int)v122;
  if ( !v122 || *v122 != 3 )
  {
    V_LOCK();
    LOWORD(v325) = -25828;
    HIWORD(v325) = (unsigned int)"" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v325);
    V_UNLOCK();
    v261 = 1002;
    goto LABEL_133;
  }
  V_LOCK();
  v124 = json_integer_value(v123);
  LOWORD(v125) = -25800;
  HIWORD(v125) = (unsigned int)"CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v125, v124);
  V_UNLOCK();
  LOWORD(v126) = -29352;
  HIWORD(v126) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v126, 149, "_parse_chain", 12, 1005, 20, v375);
  *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 96) = json_integer_value(v123);
  v127 = (_DWORD *)json_object_get(v359, "max_pcb_temp");
  v128 = (int)v127;
  if ( !v127 || *v127 != 3 )
  {
    V_LOCK();
    LOWORD(v324) = -25764;
    HIWORD(v324) = (unsigned int)"KB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v324);
    V_UNLOCK();
    v261 = 1011;
    goto LABEL_133;
  }
  V_LOCK();
  v129 = json_integer_value(v128);
  LOWORD(v130) = -25740;
  HIWORD(v130) = (unsigned int)"e_counter_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v130, v129);
  V_UNLOCK();
  LOWORD(v131) = -29352;
  HIWORD(v131) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v131, 149, "_parse_chain", 12, 1014, 20, v375);
  *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 100) = json_integer_value(v128);
  v132 = (_DWORD *)json_object_get(v359, "min_pcb_temp");
  v133 = (int)v132;
  if ( !v132 || *v132 != 3 )
  {
    V_LOCK();
    LOWORD(v332) = -25704;
    HIWORD(v332) = (unsigned int)"_clock_count_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v332);
    V_UNLOCK();
    v261 = 1020;
    goto LABEL_133;
  }
  V_LOCK();
  v134 = json_integer_value(v133);
  LOWORD(v135) = -25680;
  HIWORD(v135) = (unsigned int)"ChipSetting_pmdata_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v135, v134);
  V_UNLOCK();
  LOWORD(v136) = -29352;
  HIWORD(v136) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v136, 149, "_parse_chain", 12, 1023, 20, v375);
  *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 104) = json_integer_value(v133);
  v137 = (_DWORD *)json_object_get(v359, "max_uneffective_count");
  v138 = (int)v137;
  if ( !v137 || *v137 != 3 )
  {
    V_LOCK();
    LOWORD(v331) = -25636;
    HIWORD(v331) = (unsigned int)"sel_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v331);
    V_UNLOCK();
    v261 = 1029;
    goto LABEL_133;
  }
  V_LOCK();
  v139 = json_integer_value(v138);
  LOWORD(v140) = -25600;
  HIWORD(v140) = (unsigned int)"KB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v140, v139);
  V_UNLOCK();
  LOWORD(v141) = -29352;
  HIWORD(v141) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v141, 149, "_parse_chain", 12, 1032, 20, v375);
  *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 108) = json_integer_value(v138);
  v358 = sub_66674(v359);
  if ( v358 )
  {
    V_LOCK();
    LOWORD(v356) = -25572;
    HIWORD(v356) = (unsigned int)"Setting_read_sensor_temp_local_on_pic_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v356);
    V_UNLOCK();
    v266 = 1038;
    goto LABEL_138;
  }
  if ( *(_BYTE *)(v9 + 0x1C) && sub_66E44(v359) )
  {
    V_LOCK();
    LOWORD(v265) = -25552;
    HIWORD(v265) = (unsigned int)"temp_local_on_pic_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v265);
    V_UNLOCK();
    v266 = 1046;
LABEL_138:
    LOWORD(v267) = -29352;
    HIWORD(v267) = (unsigned int)"type failed!" >> 16;
    zlog(*v7, v267, 149, "_parse_chain", 12, v266, 100, v375);
    goto LABEL_96;
  }
  v142 = *(_DWORD *)(*(_DWORD *)(v9 + 0x24) + 88);
  if ( v142 == 3 )
  {
    LOWORD(v268) = -25528;
    HIWORD(v268) = (unsigned int)"42" >> 16;
    v269 = (_DWORD *)json_object_get(v359, v268);
    v369 = v269;
    if ( !v269 || *v269 != 1 )
    {
      V_LOCK();
      LOWORD(v357) = -25508;
      HIWORD(v357) = (unsigned int)"_sensor_temp_remote_on_pic_CKB_2042" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v357);
      V_UNLOCK();
      v348 = 641;
LABEL_183:
      zlog(
        *v7,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        v348,
        100,
        v375);
      V_LOCK();
      LOWORD(v349) = -25452;
      HIWORD(v349) = (unsigned int)"sor_temp_local_on_ctrlboard_CKB_2042" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v349);
      V_UNLOCK();
      v261 = 1055;
      goto LABEL_133;
    }
    V_LOCK();
    LOWORD(v270) = -25472;
    HIWORD(v270) = (unsigned int)"ChipSetting_read_sensor_temp_local_on_ctrlboard_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v270);
    V_UNLOCK();
    LOWORD(v271) = -29352;
    LOWORD(v272) = 26492;
    HIWORD(v272) = (unsigned int)"total" >> 16;
    HIWORD(v271) = (unsigned int)"type failed!" >> 16;
    v371 = v272;
    zlog(*v7, v271, 149, "_parse_chain_ctrlboard_sensor", 29, 644, 20, v375);
    v366 = v2;
    v363 = 0;
    v373 = v9;
    while ( v363 < (unsigned int)json_array_size(v369) )
    {
      v273 = json_array_get(v369, v363);
      v274 = v273;
      if ( !v273 || (v275 = *v273) != 0 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v352) = -27964;
        HIWORD(v352) = (unsigned int)"array %d type failed" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v352, v363);
        V_UNLOCK();
        v348 = 651;
        goto LABEL_183;
      }
      v276 = (_DWORD *)json_object_get(v273, v371);
      v277 = (int)v276;
      if ( !v276 || *v276 != 3 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v351) = -27048;
        HIWORD(v351) = (unsigned int)"sic_num" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v351, v363);
        V_UNLOCK();
        v348 = 658;
        goto LABEL_183;
      }
      V_LOCK();
      v278 = json_integer_value(v277);
      LOWORD(v279) = -27020;
      HIWORD(v279) = (unsigned int)"failed" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v279, v278);
      V_UNLOCK();
      LOWORD(v280) = -29352;
      HIWORD(v280) = (unsigned int)"type failed!" >> 16;
      zlog(*v7, v280, 149, "_parse_chain_ctrlboard_sensor", 29, 661, 20, v375);
      v281 = json_integer_value(v277);
      v282 = *(_DWORD *)(*(_DWORD *)(v373 + 0x24) + 84);
      *(_DWORD *)(v282 + 24 * v281) = v281;
      v283 = (_DWORD *)(v282 + 24 * v281);
      v283[2] = 2;
      v284 = (_DWORD *)json_object_get(v274, "type");
      v285 = v284;
      if ( !v284 || *v284 != 2 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v350) = -27008;
        HIWORD(v350) = (unsigned int)"in_asic_num : %d" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v350, v363);
        V_UNLOCK();
        v348 = 670;
        goto LABEL_183;
      }
      V_LOCK();
      v286 = json_string_value(v285);
      LOWORD(v287) = -29176;
      HIWORD(v287) = (unsigned int)"rval failed!" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v287, v286);
      V_UNLOCK();
      LOWORD(v288) = -29352;
      HIWORD(v288) = (unsigned int)"type failed!" >> 16;
      zlog(*v7, v288, 149, "_parse_chain_ctrlboard_sensor", 29, 673, 20, v375);
      v289 = (const char *)json_string_value(v285);
      LOWORD(v290) = -27196;
      v291 = v289;
      HIWORD(v290) = (unsigned int)"" >> 16;
      if ( strcmp(v289, v290) )
      {
        do
          ++v275;
        while ( v275 != 5 && strcmp(v291, off_168BD4[v275]) );
      }
      LOWORD(v292) = -26980;
      v283[1] = v275;
      HIWORD(v292) = (unsigned int)"en" >> 16;
      v293 = (_DWORD *)json_object_get(v274, v292);
      v294 = (int)v293;
      if ( !v293 || *v293 != 3 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v347) = -26976;
        HIWORD(v347) = (unsigned int)"get pic_mcu_en failed!" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v347, v363);
        V_UNLOCK();
        v348 = 679;
        goto LABEL_183;
      }
      V_LOCK();
      v295 = json_integer_value(v294);
      LOWORD(v296) = -26944;
      HIWORD(v296) = (unsigned int)"en: %s" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v296, v295);
      V_UNLOCK();
      LOWORD(v297) = -29352;
      HIWORD(v297) = (unsigned int)"type failed!" >> 16;
      zlog(*v7, v297, 149, "_parse_chain_ctrlboard_sensor", 29, 682, 20, v375);
      v298 = json_integer_value(v294);
      LOWORD(v299) = 21864;
      v283[5] = v298;
      HIWORD(v299) = (unsigned int)"_direction" >> 16;
      v300 = (_DWORD *)json_object_get(v274, v299);
      v301 = v300;
      if ( !v300 || *v300 != 2 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v353) = -26936;
        HIWORD(v353) = (unsigned int)"sensor_mode" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v353, v363);
        V_UNLOCK();
        v348 = 688;
        goto LABEL_183;
      }
      V_LOCK();
      v302 = json_string_value(v301);
      LOWORD(v303) = -26912;
      HIWORD(v303) = (unsigned int)"ode failed" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v303, v302);
      V_UNLOCK();
      LOWORD(v304) = -29352;
      HIWORD(v304) = (unsigned int)"type failed!" >> 16;
      v305 = 0;
      zlog(*v7, v304, 149, "_parse_chain_ctrlboard_sensor", 29, 691, 20, v375);
      v306 = off_168C18;
      v307 = (const char *)json_string_value(v301);
      LOWORD(v309) = -27188;
      v308 = v307;
      HIWORD(v309) = (unsigned int)"n_domain_num" >> 16;
      while ( strcmp(v308, v309) )
      {
        v310 = *v306++;
        v309 = v310;
        ++v305;
      }
      LOWORD(v311) = -24600;
      v283[3] = v305;
      v312 = 0;
      HIWORD(v311) = (unsigned int)"t" >> 16;
      v313 = (_DWORD *)json_object_get(v274, v311);
      v314 = v313;
      if ( !v313 || *v313 != 2 )
      {
        v2 = v366;
        V_LOCK();
        LOWORD(v354) = -26904;
        HIWORD(v354) = (unsigned int)"ed" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v354, v363);
        V_UNLOCK();
        v348 = 697;
        goto LABEL_183;
      }
      V_LOCK();
      v315 = json_string_value(v314);
      LOWORD(v316) = -26880;
      HIWORD(v316) = (unsigned int)"sensor_num" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v316, v315);
      V_UNLOCK();
      LOWORD(v317) = -29352;
      HIWORD(v317) = (unsigned int)"type failed!" >> 16;
      zlog(*v7, v317, 149, "_parse_chain_ctrlboard_sensor", 29, 700, 20, v375);
      v318 = v314;
      v319 = off_168C38;
      v320 = (const char *)json_string_value(v318);
      LOWORD(v322) = -27180;
      v321 = v320;
      HIWORD(v322) = (unsigned int)"_num" >> 16;
      while ( strcmp(v321, v322) )
      {
        v323 = *v319++;
        v322 = v323;
        ++v312;
      }
      v283[4] = v312;
      ++v363;
    }
    v9 = v373;
    v2 = v366;
    v142 = *(_DWORD *)(*(_DWORD *)(v373 + 0x24) + 88);
  }
  if ( (v142 & 0xFFFFFFFD) == 0 )
  {
    LOWORD(v143) = -25420;
    HIWORD(v143) = (unsigned int)"2042" >> 16;
    v144 = (_DWORD *)json_object_get(v359, v143);
    v364 = v144;
    if ( v144 && *v144 == 1 )
    {
      V_LOCK();
      LOWORD(v145) = -25388;
      HIWORD(v145) = (unsigned int)"temp_local_on_ctrlboard_CKB_2042" >> 16;
      v361 = 0;
      logfmt_raw(v375, 0x1000u, 0, v145);
      V_UNLOCK();
      LOWORD(v146) = -29352;
      HIWORD(v146) = (unsigned int)"type failed!" >> 16;
      zlog(*v7, v146, 149, "_parse_chain_sensor", 19, 803, 20, v375);
      LOWORD(v147) = 26492;
      v367 = v2;
      HIWORD(v147) = (unsigned int)"total" >> 16;
      v370 = v9;
      v372 = v147;
      while ( 1 )
      {
        if ( v361 >= (unsigned int)json_array_size(v364) )
        {
          v2 = v367;
          v9 = v370;
          goto LABEL_103;
        }
        v148 = json_array_get(v364, v361);
        v149 = v148;
        if ( !v148 )
          break;
        v150 = *v148;
        if ( *v148 )
          break;
        v151 = (_DWORD *)json_object_get(v148, v372);
        v152 = (int)v151;
        if ( !v151 || *v151 != 3 )
        {
          v2 = v367;
          V_LOCK();
          LOWORD(v343) = -27048;
          HIWORD(v343) = (unsigned int)"sic_num" >> 16;
          logfmt_raw(v375, 0x1000u, 0, v343, v361);
          V_UNLOCK();
          v338 = 818;
          goto LABEL_174;
        }
        V_LOCK();
        v153 = json_integer_value(v152);
        LOWORD(v154) = -27020;
        HIWORD(v154) = (unsigned int)"failed" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v154, v153);
        V_UNLOCK();
        LOWORD(v155) = -29352;
        HIWORD(v155) = (unsigned int)"type failed!" >> 16;
        zlog(*v7, v155, 149, "_parse_chain_sensor", 19, 821, 20, v375);
        v156 = json_integer_value(v152);
        v157 = *(_DWORD *)(*(_DWORD *)(v370 + 0x24) + 84);
        *(_DWORD *)(v157 + 24 * v156) = v156;
        v158 = (_DWORD *)(v157 + 24 * v156);
        v158[2] = 1;
        v159 = (_DWORD *)json_object_get(v149, "type");
        v160 = v159;
        if ( !v159 || *v159 != 2 )
        {
          v2 = v367;
          V_LOCK();
          LOWORD(v342) = -27008;
          HIWORD(v342) = (unsigned int)"in_asic_num : %d" >> 16;
          logfmt_raw(v375, 0x1000u, 0, v342, v361);
          V_UNLOCK();
          v338 = 830;
          goto LABEL_174;
        }
        V_LOCK();
        v161 = json_string_value(v160);
        LOWORD(v162) = -29176;
        HIWORD(v162) = (unsigned int)"rval failed!" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v162, v161);
        V_UNLOCK();
        LOWORD(v163) = -29352;
        HIWORD(v163) = (unsigned int)"type failed!" >> 16;
        zlog(*v7, v163, 149, "_parse_chain_sensor", 19, 833, 20, v375);
        v164 = (const char *)json_string_value(v160);
        LOWORD(v165) = -27196;
        v166 = v164;
        HIWORD(v165) = (unsigned int)"" >> 16;
        if ( strcmp(v164, v165) )
        {
          do
            ++v150;
          while ( v150 != 5 && strcmp(v166, off_168BD4[v150]) );
        }
        LOWORD(v167) = -25372;
        v158[1] = v150;
        HIWORD(v167) = (unsigned int)"rlboard_CKB_2042" >> 16;
        v168 = (_DWORD *)json_object_get(v149, v167);
        v169 = (int)v168;
        if ( !v168 || *v168 != 3 )
        {
          v2 = v367;
          V_LOCK();
          LOWORD(v341) = -26976;
          HIWORD(v341) = (unsigned int)"get pic_mcu_en failed!" >> 16;
          logfmt_raw(v375, 0x1000u, 0, v341, v361);
          V_UNLOCK();
          v338 = 839;
          goto LABEL_174;
        }
        V_LOCK();
        v170 = json_integer_value(v169);
        LOWORD(v171) = -25360;
        HIWORD(v171) = (unsigned int)"2042" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v171, v170);
        V_UNLOCK();
        LOWORD(v172) = -29352;
        HIWORD(v172) = (unsigned int)"type failed!" >> 16;
        zlog(*v7, v172, 149, "_parse_chain_sensor", 19, 842, 20, v375);
        v173 = json_integer_value(v169);
        LOWORD(v174) = 21864;
        v158[5] = v173;
        HIWORD(v174) = (unsigned int)"_direction" >> 16;
        v175 = (_DWORD *)json_object_get(v149, v174);
        v176 = v175;
        if ( !v175 || *v175 != 2 )
        {
          v2 = v367;
          V_LOCK();
          LOWORD(v340) = -26936;
          HIWORD(v340) = (unsigned int)"sensor_mode" >> 16;
          logfmt_raw(v375, 0x1000u, 0, v340, v361);
          V_UNLOCK();
          v338 = 848;
          goto LABEL_174;
        }
        V_LOCK();
        v177 = json_string_value(v176);
        LOWORD(v178) = -26912;
        HIWORD(v178) = (unsigned int)"ode failed" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v178, v177);
        V_UNLOCK();
        LOWORD(v179) = -29352;
        HIWORD(v179) = (unsigned int)"type failed!" >> 16;
        v180 = 0;
        zlog(*v7, v179, 149, "_parse_chain_sensor", 19, 851, 20, v375);
        v181 = off_168C18;
        v182 = (const char *)json_string_value(v176);
        LOWORD(v184) = -27188;
        v183 = v182;
        HIWORD(v184) = (unsigned int)"n_domain_num" >> 16;
        while ( strcmp(v183, v184) )
        {
          v185 = *v181++;
          v184 = v185;
          ++v180;
        }
        LOWORD(v186) = -24600;
        v158[3] = v180;
        v187 = 0;
        HIWORD(v186) = (unsigned int)"t" >> 16;
        v188 = (_DWORD *)json_object_get(v149, v186);
        v189 = v188;
        if ( !v188 || *v188 != 2 )
        {
          v2 = v367;
          V_LOCK();
          LOWORD(v337) = -26904;
          HIWORD(v337) = (unsigned int)"ed" >> 16;
          logfmt_raw(v375, 0x1000u, 0, v337, v361);
          V_UNLOCK();
          v338 = 857;
          goto LABEL_174;
        }
        V_LOCK();
        v190 = json_string_value(v189);
        LOWORD(v191) = -26880;
        HIWORD(v191) = (unsigned int)"sensor_num" >> 16;
        logfmt_raw(v375, 0x1000u, 0, v191, v190);
        V_UNLOCK();
        LOWORD(v192) = -29352;
        HIWORD(v192) = (unsigned int)"type failed!" >> 16;
        zlog(*v7, v192, 149, "_parse_chain_sensor", 19, 860, 20, v375);
        v193 = v189;
        v194 = off_168C38;
        v195 = (const char *)json_string_value(v193);
        LOWORD(v197) = -27180;
        v196 = v195;
        HIWORD(v197) = (unsigned int)"_num" >> 16;
        while ( strcmp(v196, v197) )
        {
          v198 = *v194++;
          v197 = v198;
          ++v187;
        }
        v158[4] = v187;
        ++v361;
      }
      v2 = v367;
      V_LOCK();
      LOWORD(v344) = -27964;
      HIWORD(v344) = (unsigned int)"array %d type failed" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v344, v361);
      V_UNLOCK();
      v338 = 811;
    }
    else
    {
      V_LOCK();
      LOWORD(v346) = -25408;
      HIWORD(v346) = (unsigned int)"Setting_read_sensor_temp_local_on_ctrlboard_CKB_2042" >> 16;
      logfmt_raw(v375, 0x1000u, 0, v346);
      V_UNLOCK();
      v338 = 800;
    }
LABEL_174:
    zlog(
      *v7,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_sensor",
      19,
      v338,
      100,
      v375);
    V_LOCK();
    LOWORD(v339) = -25344;
    HIWORD(v339) = (unsigned int)"ing_read_sensor_temp_remote_on_ctrlboard_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v339);
    V_UNLOCK();
    v261 = 1065;
    goto LABEL_133;
  }
LABEL_103:
  LOWORD(v218) = -25316;
  v219 = v359;
  HIWORD(v218) = (unsigned int)"on_ctrlboard_CKB_2042" >> 16;
  v360 = *(_DWORD *)(v9 + 4);
  v220 = (_DWORD *)json_object_get(v219, v218);
  v362 = v220;
  if ( !v220 || (v221 = *v220) != 0 )
  {
    V_LOCK();
    LOWORD(v345) = -25308;
    HIWORD(v345) = (unsigned int)"oard_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v345);
    V_UNLOCK();
    v334 = 761;
    goto LABEL_171;
  }
  V_LOCK();
  LOWORD(v222) = -25288;
  HIWORD(v222) = (unsigned int)"Setting_get_addr_CKB_2042" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v222);
  V_UNLOCK();
  LOWORD(v223) = -29352;
  HIWORD(v223) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v223, 149, "_parse_chain_eeprom", 19, 764, 20, v375);
  LOWORD(v224) = -28564;
  HIWORD(v224) = (unsigned int)"iled" >> 16;
  v225 = (_DWORD *)json_object_get(v362, v224);
  v365 = v225;
  if ( !v225 || *v225 != 2 )
  {
    V_LOCK();
    LOWORD(v333) = -29192;
    HIWORD(v333) = (unsigned int)": %d" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v333);
    V_UNLOCK();
    v334 = 769;
LABEL_171:
    zlog(
      *v7,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      v334,
      100,
      v375);
    V_LOCK();
    LOWORD(v335) = -25280;
    HIWORD(v335) = (unsigned int)"get_addr_CKB_2042" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v335);
    V_UNLOCK();
    v261 = 1073;
    goto LABEL_133;
  }
  V_LOCK();
  v226 = json_string_value(v365);
  LOWORD(v227) = -29176;
  HIWORD(v227) = (unsigned int)"rval failed!" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v227, v226);
  V_UNLOCK();
  LOWORD(v228) = -29352;
  HIWORD(v228) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v228, 149, "_parse_chain_eeprom", 19, 772, 20, v375);
  if ( v360 > 0 )
  {
    LOWORD(v229) = -26872;
    HIWORD(v229) = (unsigned int)"um" >> 16;
    v368 = v2;
    v230 = 0;
    v231 = v229;
    do
    {
      v232 = off_168D04;
      v233 = 0;
      v234 = (const char *)json_string_value(v365);
      v235 = v231;
      while ( strcmp(v234, v235) )
      {
        v236 = v232[1];
        ++v232;
        v235 = v236;
        ++v233;
      }
      ++v221;
      v237 = *(_DWORD *)(v9 + 0x24) + v230;
      v230 += 120;
      *(_DWORD *)(v237 + 112) = v233;
    }
    while ( v360 != v221 );
    v2 = v368;
  }
  LOWORD(v238) = -28884;
  HIWORD(v238) = (unsigned int)"ed" >> 16;
  v239 = (_DWORD *)json_object_get(v362, v238);
  v240 = (int)v239;
  if ( !v239 || *v239 != 3 )
  {
    V_LOCK();
    LOWORD(v336) = -28872;
    HIWORD(v336) = (unsigned int)"max_speed" >> 16;
    logfmt_raw(v375, 0x1000u, 0, v336);
    V_UNLOCK();
    v334 = 781;
    goto LABEL_171;
  }
  V_LOCK();
  v241 = json_integer_value(v240);
  LOWORD(v242) = -28852;
  HIWORD(v242) = (unsigned int)"y %d max_speed failed" >> 16;
  logfmt_raw(v375, 0x1000u, 0, v242, v241);
  V_UNLOCK();
  LOWORD(v243) = -29352;
  HIWORD(v243) = (unsigned int)"type failed!" >> 16;
  zlog(*v7, v243, 149, "_parse_chain_eeprom", 19, 784, 20, v375);
  if ( v360 > 0 )
  {
    v244 = 0;
    v245 = 0;
    do
    {
      ++v244;
      v246 = json_integer_value(v240);
      v247 = *(_DWORD *)(v9 + 0x24) + v245;
      v245 += 120;
      *(_DWORD *)(v247 + 116) = v246;
    }
    while ( v360 != v244 );
  }
  v248 = *(_DWORD *)(v9 + 4);
  if ( v248 > 1 )
  {
    v249 = 120;
    v250 = 1;
    do
    {
      v251 = *(char **)(v9 + 0x24);
      ++v250;
      v252 = &v251[v249];
      v249 += 120;
      memcpy(v252, v251, 0x78u);
    }
    while ( v248 != v250 );
  }
  if ( *((_DWORD *)v2 + 1) != -1 )
  {
    v253 = (unsigned int *)v2 + 1;
    __dmb(0xBu);
    do
    {
      v254 = __ldrex(v253);
      v255 = v254 - 1;
    }
    while ( __strex(v255, v253) );
    if ( !v255 )
      json_delete(v2);
  }
  return v358;
}
