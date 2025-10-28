int __fastcall sub_EC14(_DWORD *a1, int a2, int *a3)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int i; // r3
  _DWORD *v7; // r3
  int *v8; // r2
  unsigned int v9; // t1
  int j; // r3
  _DWORD *v11; // r6
  int v12; // r4
  int k; // r3
  int v14; // r9
  int v15; // r10
  int v16; // r8
  int v17; // r0
  int v18; // r4
  int v19; // r6
  int v20; // r2
  int v21; // r1
  int v22; // lr
  int v23; // r5
  int v24; // r12
  int v25; // r11
  int v26; // r0
  int v27; // r8
  int v28; // r10
  int v29; // r9
  int v30; // r2
  int v31; // lr
  int v32; // r6
  int v33; // r1
  int v34; // r4
  int v35; // r5
  int v36; // r7
  int v37; // r3
  int v38; // r9
  int v39; // r10
  int v40; // r8
  int v41; // r0
  int v42; // r4
  int v43; // r6
  int v44; // r2
  int v45; // r1
  int v46; // lr
  int v47; // r5
  int v48; // r12
  int v49; // r11
  int v50; // r0
  int v51; // r8
  int v52; // r10
  int v53; // r9
  int v54; // r2
  int v55; // lr
  int v56; // r6
  int v57; // r1
  int v58; // r4
  int v59; // r5
  int v60; // r7
  int v61; // r3
  int v62; // r9
  int v63; // r10
  int v64; // r8
  int v65; // r0
  int v66; // r4
  int v67; // r6
  int v68; // r2
  int v69; // r1
  int v70; // lr
  int v71; // r5
  int v72; // r12
  int v73; // r11
  int v74; // r0
  int v75; // r8
  int v76; // r10
  int v77; // r9
  int v78; // r2
  int v79; // lr
  int v80; // r6
  int v81; // r1
  int v82; // r4
  int v83; // r5
  int v84; // r7
  int v85; // r3
  int v86; // r9
  int v87; // r0
  int v88; // r1
  int v89; // r8
  int v90; // r2
  int v91; // r10
  int v92; // r3
  int v93; // lr
  int v94; // r11
  int v95; // r4
  int v96; // r6
  int v97; // r5
  int v98; // r7
  int v99; // r0
  int v100; // r8
  int v101; // r10
  int v102; // r9
  int v103; // r3
  int v104; // r2
  int v105; // r11
  int v106; // r6
  int v107; // r1
  int v108; // r5
  int v109; // r4
  int v110; // lr
  int v111; // r12
  int v112; // r0
  char *v113; // r1
  __int64 v114; // t1
  int v115; // r9
  int v116; // r8
  int v117; // r10
  int v118; // r6
  int v119; // r0
  int v120; // r4
  int v121; // r2
  int v122; // r1
  int v123; // lr
  int v124; // r5
  int v125; // r12
  int v126; // r11
  int v127; // r0
  int v128; // r8
  int v129; // r10
  int v130; // r9
  int v131; // r2
  int v132; // lr
  int v133; // r6
  int v134; // r1
  int v135; // r4
  int v136; // r5
  int v137; // r7
  int v138; // r3
  int v139; // r9
  int v140; // r8
  int v141; // r10
  int v142; // r0
  int v143; // r3
  int v144; // lr
  int v145; // r2
  int v146; // r11
  int v147; // r4
  int v148; // r1
  int v149; // r6
  int v150; // r5
  int v151; // r7
  int v152; // r0
  int v153; // r8
  int v154; // r10
  int v155; // r9
  int v156; // r3
  int v157; // r2
  int v158; // r11
  int v159; // r6
  int v160; // r1
  int v161; // r5
  int v162; // r4
  int v163; // lr
  int v164; // r12
  int v165; // r0
  char *v166; // r1
  __int64 v167; // t1
  int v168; // r8
  int v169; // r10
  int v170; // r6
  int v171; // r9
  int v172; // r0
  int v173; // r4
  int v174; // r2
  int v175; // r1
  int v176; // lr
  int v177; // r5
  int v178; // r12
  int v179; // r11
  int v180; // r0
  int v181; // r8
  int v182; // r10
  int v183; // r9
  int v184; // r2
  int v185; // lr
  int v186; // r6
  int v187; // r1
  int v188; // r4
  int v189; // r5
  int v190; // r7
  int v191; // r3
  int v192; // r8
  int v193; // lr
  int v194; // r10
  int v195; // r9
  int v196; // r0
  int v197; // r7
  int v198; // r3
  int v199; // r2
  int v200; // r11
  int v201; // r4
  int v202; // r1
  int v203; // r6
  int v204; // r5
  int v205; // r0
  int v206; // r8
  int v207; // r10
  int v208; // r9
  int v209; // r3
  int v210; // r2
  int v211; // r11
  int v212; // r6
  int v213; // r1
  int v214; // r5
  int v215; // r4
  int v216; // lr
  int v217; // r12
  int v218; // r1
  int v219; // r2
  int v220; // r3
  int m; // r3
  int n; // r3
  int v224; // [sp+0h] [bp-2BCh]
  int v225; // [sp+0h] [bp-2BCh]
  int v226; // [sp+0h] [bp-2BCh]
  int v227; // [sp+0h] [bp-2BCh]
  int v228; // [sp+0h] [bp-2BCh]
  int v229; // [sp+0h] [bp-2BCh]
  int v230; // [sp+0h] [bp-2BCh]
  int v231; // [sp+0h] [bp-2BCh]
  int v232; // [sp+0h] [bp-2BCh]
  int v233; // [sp+0h] [bp-2BCh]
  int v234; // [sp+0h] [bp-2BCh]
  int v235; // [sp+0h] [bp-2BCh]
  int v236; // [sp+4h] [bp-2B8h]
  int v237; // [sp+4h] [bp-2B8h]
  int v238; // [sp+4h] [bp-2B8h]
  int v239; // [sp+4h] [bp-2B8h]
  int v240; // [sp+4h] [bp-2B8h]
  int v241; // [sp+4h] [bp-2B8h]
  int v242; // [sp+4h] [bp-2B8h]
  int v243; // [sp+4h] [bp-2B8h]
  int v244; // [sp+8h] [bp-2B4h]
  int v245; // [sp+8h] [bp-2B4h]
  int v246; // [sp+8h] [bp-2B4h]
  int v247; // [sp+8h] [bp-2B4h]
  int v248; // [sp+8h] [bp-2B4h]
  int v249; // [sp+8h] [bp-2B4h]
  int v250; // [sp+8h] [bp-2B4h]
  int v251; // [sp+8h] [bp-2B4h]
  int v252; // [sp+Ch] [bp-2B0h]
  int v253; // [sp+Ch] [bp-2B0h]
  int v254; // [sp+Ch] [bp-2B0h]
  int v255; // [sp+Ch] [bp-2B0h]
  int v256; // [sp+Ch] [bp-2B0h]
  int v257; // [sp+Ch] [bp-2B0h]
  int v258; // [sp+Ch] [bp-2B0h]
  int v259; // [sp+Ch] [bp-2B0h]
  int v260; // [sp+10h] [bp-2ACh]
  int v261; // [sp+10h] [bp-2ACh]
  int v262; // [sp+10h] [bp-2ACh]
  int v263; // [sp+10h] [bp-2ACh]
  int v264; // [sp+10h] [bp-2ACh]
  int v265; // [sp+10h] [bp-2ACh]
  int v266; // [sp+10h] [bp-2ACh]
  int v267; // [sp+10h] [bp-2ACh]
  int v268; // [sp+14h] [bp-2A8h]
  int v269; // [sp+14h] [bp-2A8h]
  int v270; // [sp+14h] [bp-2A8h]
  int v271; // [sp+14h] [bp-2A8h]
  int v272; // [sp+14h] [bp-2A8h]
  int v273; // [sp+14h] [bp-2A8h]
  int v274; // [sp+14h] [bp-2A8h]
  int v275; // [sp+14h] [bp-2A8h]
  int v276; // [sp+14h] [bp-2A8h]
  int v277; // [sp+18h] [bp-2A4h]
  int v278; // [sp+18h] [bp-2A4h]
  int v279; // [sp+18h] [bp-2A4h]
  int v280; // [sp+18h] [bp-2A4h]
  int v281; // [sp+18h] [bp-2A4h]
  int v282; // [sp+18h] [bp-2A4h]
  int v283; // [sp+18h] [bp-2A4h]
  int v284; // [sp+18h] [bp-2A4h]
  int v285; // [sp+1Ch] [bp-2A0h]
  int v286; // [sp+1Ch] [bp-2A0h]
  int v287; // [sp+1Ch] [bp-2A0h]
  int v288; // [sp+1Ch] [bp-2A0h]
  int v289; // [sp+1Ch] [bp-2A0h]
  int v290; // [sp+1Ch] [bp-2A0h]
  int v291; // [sp+1Ch] [bp-2A0h]
  int v292; // [sp+1Ch] [bp-2A0h]
  int v293; // [sp+20h] [bp-29Ch]
  int v294; // [sp+20h] [bp-29Ch]
  int v295; // [sp+20h] [bp-29Ch]
  int v296; // [sp+20h] [bp-29Ch]
  int v297; // [sp+20h] [bp-29Ch]
  int v298; // [sp+20h] [bp-29Ch]
  int v299; // [sp+24h] [bp-298h]
  int v300; // [sp+24h] [bp-298h]
  int v301; // [sp+24h] [bp-298h]
  int v302; // [sp+24h] [bp-298h]
  int v303; // [sp+24h] [bp-298h]
  int v304; // [sp+24h] [bp-298h]
  int v305; // [sp+28h] [bp-294h]
  int v306; // [sp+28h] [bp-294h]
  int v307; // [sp+28h] [bp-294h]
  int v308; // [sp+28h] [bp-294h]
  int v309; // [sp+28h] [bp-294h]
  int v310; // [sp+28h] [bp-294h]
  int v311; // [sp+2Ch] [bp-290h]
  int v312; // [sp+2Ch] [bp-290h]
  int v313; // [sp+2Ch] [bp-290h]
  int v314; // [sp+2Ch] [bp-290h]
  int v315; // [sp+2Ch] [bp-290h]
  int v316; // [sp+2Ch] [bp-290h]
  int v317; // [sp+30h] [bp-28Ch]
  int v318; // [sp+30h] [bp-28Ch]
  int v319; // [sp+30h] [bp-28Ch]
  int v320; // [sp+30h] [bp-28Ch]
  int v321; // [sp+30h] [bp-28Ch]
  int v322; // [sp+30h] [bp-28Ch]
  int v323; // [sp+34h] [bp-288h]
  int v324; // [sp+34h] [bp-288h]
  int v325; // [sp+34h] [bp-288h]
  int v326; // [sp+34h] [bp-288h]
  int v327; // [sp+34h] [bp-288h]
  int v328; // [sp+34h] [bp-288h]
  int v329; // [sp+38h] [bp-284h]
  int v330; // [sp+38h] [bp-284h]
  int v331; // [sp+38h] [bp-284h]
  int v332; // [sp+38h] [bp-284h]
  int v333; // [sp+38h] [bp-284h]
  int v334; // [sp+38h] [bp-284h]
  int v335; // [sp+3Ch] [bp-280h]
  int v336; // [sp+3Ch] [bp-280h]
  int v337; // [sp+3Ch] [bp-280h]
  int v338; // [sp+3Ch] [bp-280h]
  int v339; // [sp+3Ch] [bp-280h]
  int v340; // [sp+3Ch] [bp-280h]
  int v341; // [sp+40h] [bp-27Ch]
  int v342; // [sp+40h] [bp-27Ch]
  int v343; // [sp+40h] [bp-27Ch]
  int v344; // [sp+40h] [bp-27Ch]
  int v345; // [sp+40h] [bp-27Ch]
  int v346; // [sp+40h] [bp-27Ch]
  int v347; // [sp+44h] [bp-278h]
  int v348; // [sp+44h] [bp-278h]
  int v349; // [sp+44h] [bp-278h]
  int v350; // [sp+44h] [bp-278h]
  int v351; // [sp+44h] [bp-278h]
  int v352; // [sp+44h] [bp-278h]
  int v353; // [sp+48h] [bp-274h]
  int v354; // [sp+48h] [bp-274h]
  int v355; // [sp+48h] [bp-274h]
  int v356; // [sp+48h] [bp-274h]
  int v357; // [sp+48h] [bp-274h]
  int v358; // [sp+48h] [bp-274h]
  int v359; // [sp+4Ch] [bp-270h]
  int v360; // [sp+4Ch] [bp-270h]
  int v361; // [sp+4Ch] [bp-270h]
  int v362; // [sp+4Ch] [bp-270h]
  int v363; // [sp+4Ch] [bp-270h]
  int v364; // [sp+50h] [bp-26Ch]
  int v365; // [sp+50h] [bp-26Ch]
  int v366; // [sp+50h] [bp-26Ch]
  int v367; // [sp+50h] [bp-26Ch]
  int v368; // [sp+50h] [bp-26Ch]
  int v369; // [sp+50h] [bp-26Ch]
  int v370; // [sp+54h] [bp-268h]
  int v371; // [sp+54h] [bp-268h]
  int v372; // [sp+54h] [bp-268h]
  int v373; // [sp+54h] [bp-268h]
  int v374; // [sp+54h] [bp-268h]
  int v375; // [sp+54h] [bp-268h]
  int v376; // [sp+58h] [bp-264h]
  int v377; // [sp+58h] [bp-264h]
  int v378; // [sp+58h] [bp-264h]
  int v379; // [sp+58h] [bp-264h]
  int v380; // [sp+58h] [bp-264h]
  int v381; // [sp+58h] [bp-264h]
  int v382; // [sp+5Ch] [bp-260h]
  int v383; // [sp+5Ch] [bp-260h]
  int v384; // [sp+5Ch] [bp-260h]
  int v385; // [sp+60h] [bp-25Ch]
  int v386; // [sp+60h] [bp-25Ch]
  int v387; // [sp+64h] [bp-258h]
  int v388; // [sp+64h] [bp-258h]
  int v389; // [sp+68h] [bp-254h]
  int v390; // [sp+68h] [bp-254h]
  int v391; // [sp+6Ch] [bp-250h]
  int v392; // [sp+6Ch] [bp-250h]
  int v393; // [sp+70h] [bp-24Ch]
  int v394; // [sp+70h] [bp-24Ch]
  int v395; // [sp+74h] [bp-248h]
  int v396; // [sp+74h] [bp-248h]
  int v397; // [sp+78h] [bp-244h]
  int v398; // [sp+78h] [bp-244h]
  int v399; // [sp+7Ch] [bp-240h]
  int v400; // [sp+7Ch] [bp-240h]
  int v401; // [sp+80h] [bp-23Ch]
  int v402; // [sp+84h] [bp-238h]
  int v403; // [sp+84h] [bp-238h]
  int v404; // [sp+88h] [bp-234h]
  int v405; // [sp+88h] [bp-234h]
  int v406; // [sp+8Ch] [bp-230h]
  int v407; // [sp+8Ch] [bp-230h]
  int v408; // [sp+90h] [bp-22Ch]
  int v409; // [sp+90h] [bp-22Ch]
  int v410; // [sp+94h] [bp-228h]
  int v411; // [sp+94h] [bp-228h]
  int v412; // [sp+98h] [bp-224h]
  int v413; // [sp+98h] [bp-224h]
  int v414; // [sp+9Ch] [bp-220h]
  int v415; // [sp+9Ch] [bp-220h]
  char *dest; // [sp+A0h] [bp-21Ch]
  int desta; // [sp+A0h] [bp-21Ch]
  char *v418; // [sp+A4h] [bp-218h]
  char *v419; // [sp+A8h] [bp-214h]
  int v422; // [sp+B8h] [bp-204h] BYREF
  int v423; // [sp+BCh] [bp-200h]
  int v424; // [sp+C0h] [bp-1FCh]
  int v425; // [sp+C4h] [bp-1F8h]
  int v426; // [sp+C8h] [bp-1F4h]
  int v427; // [sp+CCh] [bp-1F0h]
  int v428; // [sp+D0h] [bp-1ECh]
  int v429; // [sp+D4h] [bp-1E8h]
  _DWORD v430[8]; // [sp+D8h] [bp-1E4h] BYREF
  int v431; // [sp+F8h] [bp-1C4h] BYREF
  int v432; // [sp+FCh] [bp-1C0h]
  int v433; // [sp+100h] [bp-1BCh]
  int v434; // [sp+104h] [bp-1B8h]
  int v435; // [sp+108h] [bp-1B4h]
  int v436; // [sp+10Ch] [bp-1B0h]
  int v437; // [sp+110h] [bp-1ACh]
  int v438; // [sp+114h] [bp-1A8h]
  int v439[8]; // [sp+118h] [bp-1A4h] BYREF
  int v440; // [sp+138h] [bp-184h] BYREF
  int v441; // [sp+13Ch] [bp-180h]
  int v442; // [sp+140h] [bp-17Ch]
  int v443; // [sp+144h] [bp-178h]
  int v444; // [sp+148h] [bp-174h]
  int v445; // [sp+14Ch] [bp-170h]
  int v446; // [sp+150h] [bp-16Ch]
  int v447; // [sp+154h] [bp-168h]
  _DWORD v448[8]; // [sp+158h] [bp-164h] BYREF
  int v449; // [sp+178h] [bp-144h] BYREF
  int v450; // [sp+17Ch] [bp-140h]
  int v451; // [sp+180h] [bp-13Ch]
  int v452; // [sp+184h] [bp-138h]
  int v453; // [sp+188h] [bp-134h]
  int v454; // [sp+18Ch] [bp-130h]
  int v455; // [sp+190h] [bp-12Ch]
  int v456; // [sp+194h] [bp-128h]
  _DWORD v457[4]; // [sp+198h] [bp-124h] BYREF
  int v458; // [sp+1A8h] [bp-114h] BYREF
  int v459; // [sp+1D8h] [bp-E4h] BYREF
  int v460; // [sp+1DCh] [bp-E0h]
  int v461; // [sp+1E0h] [bp-DCh]
  int v462; // [sp+1E4h] [bp-D8h]
  int v463; // [sp+1E8h] [bp-D4h]
  int v464; // [sp+1ECh] [bp-D0h]
  int v465; // [sp+1F0h] [bp-CCh]
  int v466; // [sp+1F4h] [bp-C8h]
  _DWORD v467[16]; // [sp+1F8h] [bp-C4h] BYREF
  _DWORD src[32]; // [sp+238h] [bp-84h] BYREF
  char v469; // [sp+2B8h] [bp-4h] BYREF

  dest = (char *)((a2 + 63) & 0xFFFFFFC0);
  v419 = dest;
  v422 = 1779033703;
  v423 = -1150833019;
  v424 = 1013904242;
  v425 = -1521486534;
  v426 = 1359893119;
  v427 = -1694144372;
  v428 = 528734635;
  v429 = 1541459225;
  sub_C848(&v422, a1, 1);
  v3 = a1[17];
  v4 = a1[18];
  v5 = a1[19];
  v440 = a1[16];
  v441 = v3;
  v442 = v4;
  v443 = v5;
  v444 = 128;
  v445 = 0;
  v446 = 0;
  v447 = 0;
  memset(v448, 0, 28);
  v448[7] = -2147352576;
  sub_C848(&v422, &v440, 1);
  v430[0] = v422;
  v430[1] = v423;
  v430[2] = v424;
  v430[3] = v425;
  v430[4] = v426;
  v430[5] = v427;
  v430[6] = v428;
  v430[7] = v429;
  v449 = 1779033703;
  v450 = -1150833019;
  v451 = 1013904242;
  v452 = -1521486534;
  v453 = 1359893119;
  v454 = -1694144372;
  v455 = 528734635;
  v456 = 1541459225;
  for ( i = 0; i != 8; ++i )
    *(int *)((char *)&v440 + i * 4) = v430[i] ^ 0x36363636;
  memset(v448, 54, sizeof(v448));
  sub_C848(&v449, &v440, 0);
  sub_C848(&v449, a1, 1);
  v457[0] = bswap32(a1[16]);
  v457[1] = bswap32(a1[17]);
  v457[2] = bswap32(a1[18]);
  v457[3] = bswap32(a1[19]);
  v7 = &unk_5F8D0;
  v8 = &v458;
  do
  {
    v9 = v7[1];
    ++v7;
    v8[1] = bswap32(v9);
    ++v8;
  }
  while ( v7 != (_DWORD *)&unk_5F8FC );
  v459 = 1779033703;
  v460 = -1150833019;
  v461 = 1013904242;
  v462 = -1521486534;
  v463 = 1359893119;
  v464 = -1694144372;
  v465 = 528734635;
  v466 = 1541459225;
  for ( j = 0; j != 8; ++j )
    *(int *)((char *)&v440 + j * 4) = v430[j] ^ 0x5C5C5C5C;
  memset(v448, 92, sizeof(v448));
  sub_C848(&v459, &v440, 0);
  v467[8] = 0x80000000;
  memset(&v467[9], 0, 24);
  v467[15] = 768;
  v11 = src;
  v12 = 0;
  do
  {
    v431 = v449;
    v432 = v450;
    v433 = v451;
    v434 = v452;
    v435 = v453;
    v436 = v454;
    v437 = v455;
    v438 = v456;
    v458 = ++v12;
    sub_C848(&v431, v457, 0);
    v467[0] = v431;
    v467[1] = v432;
    v467[2] = v433;
    v467[3] = v434;
    v467[4] = v435;
    v467[5] = v436;
    v467[6] = v437;
    v467[7] = v438;
    v439[0] = v459;
    v439[1] = v460;
    v439[2] = v461;
    v439[3] = v462;
    v439[4] = v463;
    v439[5] = v464;
    v439[6] = v465;
    v439[7] = v466;
    sub_C848(v439, v467, 0);
    for ( k = 0; k != 8; ++k )
      v11[k] = bswap32(v439[k]);
    v11 += 8;
  }
  while ( v12 != 4 );
  v418 = dest + 0x20000;
  do
  {
    memcpy(dest, src, 0x80u);
    v277 = src[23] ^ src[7];
    v14 = src[18] ^ src[2];
    v15 = src[29] ^ src[13];
    v16 = src[24] ^ src[8];
    v17 = src[19] ^ src[3];
    v18 = src[27] ^ src[11];
    v19 = src[30] ^ src[14];
    v236 = src[22] ^ src[6];
    v224 = src[26] ^ src[10];
    v20 = src[25] ^ src[9];
    v268 = src[21] ^ src[5];
    v21 = src[20] ^ src[4];
    v22 = src[28] ^ src[12];
    v23 = src[16] ^ src[0];
    v285 = 4;
    v24 = src[17] ^ src[1];
    v25 = src[31] ^ src[15];
    do
    {
      v252 = v21 ^ __ROR4__(v22 + v23, 25);
      v244 = v20 ^ __ROR4__(v24 + v268, 25);
      v260 = v19 ^ __ROR4__(v236 + v224, 25);
      v26 = v17 ^ __ROR4__(v18 + v25, 25);
      v27 = v16 ^ __ROR4__(v252 + v23, 23);
      v28 = v15 ^ __ROR4__(v244 + v268, 23);
      v29 = v14 ^ __ROR4__(v260 + v224, 23);
      v30 = v277 ^ __ROR4__(v26 + v25, 23);
      v31 = v22 ^ __ROR4__(v27 + v252, 19);
      v32 = v24 ^ __ROR4__(v28 + v244, 19);
      v33 = v236 ^ __ROR4__(v29 + v260, 19);
      v34 = v18 ^ __ROR4__(v30 + v26, 19);
      v35 = v23 ^ __ROR4__(v31 + v27, 14);
      v36 = v268 ^ __ROR4__(v32 + v28, 14);
      v225 = v224 ^ __ROR4__(v33 + v29, 14);
      v37 = v25 ^ __ROR4__(v34 + v30, 14);
      v24 = v32 ^ __ROR4__(v35 + v26, 25);
      v236 = v33 ^ __ROR4__(v36 + v252, 25);
      v18 = v34 ^ __ROR4__(v225 + v244, 25);
      v22 = v31 ^ __ROR4__(v37 + v260, 25);
      v14 = v29 ^ __ROR4__(v24 + v35, 23);
      v277 = v30 ^ __ROR4__(v236 + v36, 23);
      v16 = v27 ^ __ROR4__(v18 + v225, 23);
      v15 = v28 ^ __ROR4__(v22 + v37, 23);
      v17 = v26 ^ __ROR4__(v14 + v24, 19);
      v21 = v252 ^ __ROR4__(v277 + v236, 19);
      v20 = v244 ^ __ROR4__(v16 + v18, 19);
      v19 = v260 ^ __ROR4__(v15 + v22, 19);
      v23 = v35 ^ __ROR4__(v17 + v14, 14);
      v268 = v36 ^ __ROR4__(v21 + v277, 14);
      v224 = v225 ^ __ROR4__(v20 + v16, 14);
      v25 = v37 ^ __ROR4__(v19 + v15, 14);
      --v285;
    }
    while ( v285 );
    v293 = v23 + (src[16] ^ src[0]);
    src[0] = v293;
    v299 = v24 + (src[17] ^ src[1]);
    src[1] = v299;
    v305 = v14 + (src[18] ^ src[2]);
    src[2] = v305;
    v311 = v17 + (src[19] ^ src[3]);
    src[3] = v311;
    v317 = v21 + (src[20] ^ src[4]);
    src[4] = v317;
    v323 = v268 + (src[21] ^ src[5]);
    src[5] = v323;
    v329 = v236 + (src[22] ^ src[6]);
    src[6] = v329;
    v335 = v277 + (src[23] ^ src[7]);
    src[7] = v335;
    v341 = v16 + (src[24] ^ src[8]);
    src[8] = v341;
    v347 = v20 + (src[25] ^ src[9]);
    src[9] = v347;
    v353 = v224 + (src[26] ^ src[10]);
    src[10] = v353;
    v359 = v18 + (src[27] ^ src[11]);
    src[11] = v359;
    v364 = v22 + (src[28] ^ src[12]);
    src[12] = v364;
    v370 = v15 + (src[29] ^ src[13]);
    src[13] = v370;
    v376 = v19 + (src[30] ^ src[14]);
    src[14] = v376;
    v382 = v25 + (src[31] ^ src[15]);
    src[15] = v382;
    v278 = v335 ^ src[23];
    v38 = v305 ^ src[18];
    v39 = v370 ^ src[29];
    v40 = v341 ^ src[24];
    v41 = v311 ^ src[19];
    v42 = v359 ^ src[27];
    v43 = v376 ^ src[30];
    v237 = v329 ^ src[22];
    v226 = v353 ^ src[26];
    v44 = v347 ^ src[25];
    v269 = v323 ^ src[21];
    v45 = v317 ^ src[20];
    v46 = v364 ^ src[28];
    v47 = v293 ^ src[16];
    v286 = 4;
    v48 = v299 ^ src[17];
    v49 = v382 ^ src[31];
    do
    {
      v253 = v45 ^ __ROR4__(v46 + v47, 25);
      v245 = v44 ^ __ROR4__(v48 + v269, 25);
      v261 = v43 ^ __ROR4__(v237 + v226, 25);
      v50 = v41 ^ __ROR4__(v42 + v49, 25);
      v51 = v40 ^ __ROR4__(v253 + v47, 23);
      v52 = v39 ^ __ROR4__(v245 + v269, 23);
      v53 = v38 ^ __ROR4__(v261 + v226, 23);
      v54 = v278 ^ __ROR4__(v50 + v49, 23);
      v55 = v46 ^ __ROR4__(v51 + v253, 19);
      v56 = v48 ^ __ROR4__(v52 + v245, 19);
      v57 = v237 ^ __ROR4__(v53 + v261, 19);
      v58 = v42 ^ __ROR4__(v54 + v50, 19);
      v59 = v47 ^ __ROR4__(v55 + v51, 14);
      v60 = v269 ^ __ROR4__(v56 + v52, 14);
      v227 = v226 ^ __ROR4__(v57 + v53, 14);
      v61 = v49 ^ __ROR4__(v58 + v54, 14);
      v48 = v56 ^ __ROR4__(v59 + v50, 25);
      v237 = v57 ^ __ROR4__(v60 + v253, 25);
      v42 = v58 ^ __ROR4__(v227 + v245, 25);
      v46 = v55 ^ __ROR4__(v61 + v261, 25);
      v38 = v53 ^ __ROR4__(v48 + v59, 23);
      v278 = v54 ^ __ROR4__(v237 + v60, 23);
      v40 = v51 ^ __ROR4__(v42 + v227, 23);
      v39 = v52 ^ __ROR4__(v46 + v61, 23);
      v41 = v50 ^ __ROR4__(v38 + v48, 19);
      v45 = v253 ^ __ROR4__(v278 + v237, 19);
      v44 = v245 ^ __ROR4__(v40 + v42, 19);
      v43 = v261 ^ __ROR4__(v39 + v46, 19);
      v47 = v59 ^ __ROR4__(v41 + v38, 14);
      v269 = v60 ^ __ROR4__(v45 + v278, 14);
      v226 = v227 ^ __ROR4__(v44 + v40, 14);
      v49 = v61 ^ __ROR4__(v43 + v39, 14);
      --v286;
    }
    while ( v286 );
    src[16] = v47 + (v293 ^ src[16]);
    v385 = src[16];
    src[17] = v48 + (v299 ^ src[17]);
    v387 = src[17];
    src[18] = v38 + (v305 ^ src[18]);
    v389 = src[18];
    src[19] = v41 + (v311 ^ src[19]);
    v391 = src[19];
    src[20] = v45 + (v317 ^ src[20]);
    v393 = src[20];
    src[21] = v269 + (v323 ^ src[21]);
    v395 = src[21];
    src[22] = v237 + (v329 ^ src[22]);
    v397 = src[22];
    src[23] = v278 + (v335 ^ src[23]);
    v399 = src[23];
    src[24] = v40 + (v341 ^ src[24]);
    v401 = src[24];
    src[25] = v44 + (v347 ^ src[25]);
    v402 = src[25];
    src[26] = v226 + (v353 ^ src[26]);
    v404 = src[26];
    src[27] = v42 + (v359 ^ src[27]);
    v406 = src[27];
    src[28] = v46 + (v364 ^ src[28]);
    v408 = src[28];
    src[29] = v39 + (v370 ^ src[29]);
    v410 = src[29];
    src[30] = v43 + (v376 ^ src[30]);
    v412 = src[30];
    src[31] = v49 + (v382 ^ src[31]);
    v414 = src[31];
    memcpy(dest + 128, src, 0x80u);
    v294 = v385 ^ v293;
    v300 = v387 ^ v299;
    v306 = v389 ^ v305;
    v312 = v391 ^ v311;
    v318 = v393 ^ v317;
    v324 = v395 ^ v323;
    v330 = v397 ^ v329;
    v336 = v399 ^ v335;
    v342 = v401 ^ v341;
    v348 = v402 ^ v347;
    v354 = v404 ^ v353;
    v360 = v406 ^ v359;
    v365 = v408 ^ v364;
    v371 = v410 ^ v370;
    v377 = v412 ^ v376;
    v383 = v414 ^ v382;
    v279 = v336;
    v62 = v306;
    v63 = v371;
    v64 = v342;
    v65 = v312;
    v66 = v360;
    v67 = v377;
    v238 = v330;
    v228 = v354;
    v68 = v348;
    v270 = v324;
    v69 = v318;
    v70 = v365;
    v71 = v294;
    v287 = 4;
    v72 = v300;
    v73 = v383;
    do
    {
      v254 = v69 ^ __ROR4__(v70 + v71, 25);
      v246 = v68 ^ __ROR4__(v72 + v270, 25);
      v262 = v67 ^ __ROR4__(v238 + v228, 25);
      v74 = v65 ^ __ROR4__(v66 + v73, 25);
      v75 = v64 ^ __ROR4__(v254 + v71, 23);
      v76 = v63 ^ __ROR4__(v246 + v270, 23);
      v77 = v62 ^ __ROR4__(v262 + v228, 23);
      v78 = v279 ^ __ROR4__(v74 + v73, 23);
      v79 = v70 ^ __ROR4__(v75 + v254, 19);
      v80 = v72 ^ __ROR4__(v76 + v246, 19);
      v81 = v238 ^ __ROR4__(v77 + v262, 19);
      v82 = v66 ^ __ROR4__(v78 + v74, 19);
      v83 = v71 ^ __ROR4__(v79 + v75, 14);
      v84 = v270 ^ __ROR4__(v80 + v76, 14);
      v229 = v228 ^ __ROR4__(v81 + v77, 14);
      v85 = v73 ^ __ROR4__(v82 + v78, 14);
      v72 = v80 ^ __ROR4__(v83 + v74, 25);
      v238 = v81 ^ __ROR4__(v84 + v254, 25);
      v66 = v82 ^ __ROR4__(v229 + v246, 25);
      v70 = v79 ^ __ROR4__(v85 + v262, 25);
      v62 = v77 ^ __ROR4__(v72 + v83, 23);
      v279 = v78 ^ __ROR4__(v238 + v84, 23);
      v64 = v75 ^ __ROR4__(v66 + v229, 23);
      v63 = v76 ^ __ROR4__(v70 + v85, 23);
      v65 = v74 ^ __ROR4__(v62 + v72, 19);
      v69 = v254 ^ __ROR4__(v279 + v238, 19);
      v68 = v246 ^ __ROR4__(v64 + v66, 19);
      v67 = v262 ^ __ROR4__(v63 + v70, 19);
      v71 = v83 ^ __ROR4__(v65 + v62, 14);
      v270 = v84 ^ __ROR4__(v69 + v279, 14);
      v228 = v229 ^ __ROR4__(v68 + v64, 14);
      v73 = v85 ^ __ROR4__(v67 + v63, 14);
      --v287;
    }
    while ( v287 );
    src[0] = v71 + v294;
    src[1] = v72 + v300;
    src[2] = v62 + v306;
    src[3] = v65 + v312;
    src[4] = v69 + v318;
    src[5] = v270 + v324;
    src[6] = v238 + v330;
    src[7] = v279 + v336;
    src[8] = v64 + v342;
    src[9] = v68 + v348;
    src[10] = v228 + v354;
    src[11] = v66 + v360;
    src[12] = v70 + v365;
    src[13] = v63 + v371;
    src[14] = v67 + v377;
    src[15] = v73 + v383;
    v288 = (v71 + v294) ^ v385;
    v295 = (v72 + v300) ^ v387;
    v86 = (v62 + v306) ^ v389;
    v301 = v86;
    v87 = (v65 + v312) ^ v391;
    v307 = v87;
    v88 = (v69 + v318) ^ v393;
    v313 = v88;
    v319 = (v270 + v324) ^ v395;
    v325 = (v238 + v330) ^ v397;
    v331 = (v279 + v336) ^ v399;
    v89 = (v64 + v342) ^ v401;
    v337 = v89;
    v90 = (v68 + v348) ^ v402;
    v343 = v90;
    v349 = (v228 + v354) ^ v404;
    v355 = (v66 + v360) ^ v406;
    v361 = (v70 + v365) ^ v408;
    v91 = (v63 + v371) ^ v410;
    v366 = v91;
    v372 = (v67 + v377) ^ v412;
    v378 = (v73 + v383) ^ v414;
    v271 = v331;
    v255 = v355;
    v92 = v372;
    v239 = src[6] ^ v397;
    v93 = v349;
    v94 = v295;
    v95 = v319;
    v96 = v361;
    v97 = v288;
    v230 = 4;
    v98 = v378;
    do
    {
      v247 = v88 ^ __ROR4__(v96 + v97, 25);
      v263 = v90 ^ __ROR4__(v94 + v95, 25);
      v280 = v92 ^ __ROR4__(v239 + v93, 25);
      v99 = v87 ^ __ROR4__(v255 + v98, 25);
      v100 = v89 ^ __ROR4__(v247 + v97, 23);
      v101 = v91 ^ __ROR4__(v263 + v95, 23);
      v102 = v86 ^ __ROR4__(v280 + v93, 23);
      v103 = v271 ^ __ROR4__(v99 + v98, 23);
      v104 = v96 ^ __ROR4__(v100 + v247, 19);
      v105 = v94 ^ __ROR4__(v101 + v263, 19);
      v106 = v239 ^ __ROR4__(v102 + v280, 19);
      v107 = v255 ^ __ROR4__(v103 + v99, 19);
      v108 = v97 ^ __ROR4__(v104 + v100, 14);
      v109 = v95 ^ __ROR4__(v105 + v101, 14);
      v110 = v93 ^ __ROR4__(v106 + v102, 14);
      v111 = v98 ^ __ROR4__(v107 + v103, 14);
      v94 = v105 ^ __ROR4__(v108 + v99, 25);
      v239 = v106 ^ __ROR4__(v109 + v247, 25);
      v255 = v107 ^ __ROR4__(v110 + v263, 25);
      v96 = v104 ^ __ROR4__(v111 + v280, 25);
      v86 = v102 ^ __ROR4__(v94 + v108, 23);
      v271 = v103 ^ __ROR4__(v239 + v109, 23);
      v89 = v100 ^ __ROR4__(v255 + v110, 23);
      v91 = v101 ^ __ROR4__(v96 + v111, 23);
      v87 = v99 ^ __ROR4__(v86 + v94, 19);
      v88 = v247 ^ __ROR4__(v271 + v239, 19);
      v90 = v263 ^ __ROR4__(v89 + v255, 19);
      v92 = v280 ^ __ROR4__(v91 + v96, 19);
      v97 = v108 ^ __ROR4__(v87 + v86, 14);
      v95 = v109 ^ __ROR4__(v88 + v271, 14);
      v93 = v110 ^ __ROR4__(v90 + v89, 14);
      v98 = v111 ^ __ROR4__(v92 + v91, 14);
      --v230;
    }
    while ( v230 );
    src[16] = v97 + v288;
    src[17] = v94 + v295;
    src[18] = v86 + v301;
    src[19] = v87 + v307;
    src[20] = v88 + v313;
    src[21] = v95 + v319;
    src[22] = v239 + v325;
    src[23] = v271 + v331;
    src[24] = v89 + v337;
    src[25] = v90 + v343;
    src[26] = v93 + v349;
    src[27] = v255 + v355;
    src[28] = v96 + v361;
    src[29] = v91 + v366;
    src[30] = v92 + v372;
    src[31] = v98 + v378;
    dest += 256;
  }
  while ( dest != v418 );
  desta = 512;
  do
  {
    v112 = (int)&v419[128 * (src[16] & 0x3FF) - 8];
    v113 = (char *)src;
    do
    {
      v114 = *(_QWORD *)(v112 + 8);
      v112 += 8;
      *(_QWORD *)v113 ^= v114;
      v113 += 8;
    }
    while ( v113 != &v469 );
    v302 = src[16] ^ src[0];
    v314 = src[17] ^ src[1];
    v115 = src[18] ^ src[2];
    v326 = src[18] ^ src[2];
    v338 = src[19] ^ src[3];
    v350 = src[20] ^ src[4];
    v362 = src[21] ^ src[5];
    v373 = src[22] ^ src[6];
    v384 = src[23] ^ src[7];
    v116 = src[24] ^ src[8];
    v388 = src[24] ^ src[8];
    v392 = src[25] ^ src[9];
    v396 = src[26] ^ src[10];
    v400 = src[27] ^ src[11];
    v403 = src[28] ^ src[12];
    v117 = src[29] ^ src[13];
    v407 = src[29] ^ src[13];
    v118 = src[30] ^ src[14];
    v411 = src[30] ^ src[14];
    v415 = src[31] ^ src[15];
    v281 = src[23] ^ src[7];
    v119 = src[19] ^ src[3];
    v120 = src[27] ^ src[11];
    v240 = src[22] ^ src[6];
    v231 = src[26] ^ src[10];
    v121 = src[25] ^ src[9];
    v272 = src[21] ^ src[5];
    v122 = src[20] ^ src[4];
    v123 = src[28] ^ src[12];
    v124 = src[16] ^ src[0];
    v289 = 4;
    v125 = src[17] ^ src[1];
    v126 = src[31] ^ src[15];
    do
    {
      v256 = v122 ^ __ROR4__(v123 + v124, 25);
      v248 = v121 ^ __ROR4__(v125 + v272, 25);
      v264 = v118 ^ __ROR4__(v240 + v231, 25);
      v127 = v119 ^ __ROR4__(v120 + v126, 25);
      v128 = v116 ^ __ROR4__(v256 + v124, 23);
      v129 = v117 ^ __ROR4__(v248 + v272, 23);
      v130 = v115 ^ __ROR4__(v264 + v231, 23);
      v131 = v281 ^ __ROR4__(v127 + v126, 23);
      v132 = v123 ^ __ROR4__(v128 + v256, 19);
      v133 = v125 ^ __ROR4__(v129 + v248, 19);
      v134 = v240 ^ __ROR4__(v130 + v264, 19);
      v135 = v120 ^ __ROR4__(v131 + v127, 19);
      v136 = v124 ^ __ROR4__(v132 + v128, 14);
      v137 = v272 ^ __ROR4__(v133 + v129, 14);
      v232 = v231 ^ __ROR4__(v134 + v130, 14);
      v138 = v126 ^ __ROR4__(v135 + v131, 14);
      v125 = v133 ^ __ROR4__(v136 + v127, 25);
      v240 = v134 ^ __ROR4__(v137 + v256, 25);
      v120 = v135 ^ __ROR4__(v232 + v248, 25);
      v123 = v132 ^ __ROR4__(v138 + v264, 25);
      v115 = v130 ^ __ROR4__(v125 + v136, 23);
      v281 = v131 ^ __ROR4__(v240 + v137, 23);
      v116 = v128 ^ __ROR4__(v120 + v232, 23);
      v117 = v129 ^ __ROR4__(v123 + v138, 23);
      v119 = v127 ^ __ROR4__(v115 + v125, 19);
      v122 = v256 ^ __ROR4__(v281 + v240, 19);
      v121 = v248 ^ __ROR4__(v116 + v120, 19);
      v118 = v264 ^ __ROR4__(v117 + v123, 19);
      v124 = v136 ^ __ROR4__(v119 + v115, 14);
      v272 = v137 ^ __ROR4__(v122 + v281, 14);
      v231 = v232 ^ __ROR4__(v121 + v116, 14);
      v126 = v138 ^ __ROR4__(v118 + v117, 14);
      --v289;
    }
    while ( v289 );
    src[0] = v124 + v302;
    src[1] = v125 + v314;
    src[2] = v115 + v326;
    src[3] = v119 + v338;
    src[4] = v122 + v350;
    src[5] = v272 + v362;
    src[6] = v240 + v373;
    src[7] = v281 + v384;
    src[8] = v116 + v388;
    src[9] = v121 + v392;
    src[10] = v231 + v396;
    src[11] = v120 + v400;
    src[12] = v123 + v403;
    src[13] = v117 + v407;
    src[14] = v118 + v411;
    src[15] = v126 + v415;
    v290 = (v124 + v302) ^ src[16];
    v296 = (v125 + v314) ^ src[17];
    v139 = (v115 + v326) ^ src[18];
    v303 = v139;
    v308 = (v119 + v338) ^ src[19];
    v315 = (v122 + v350) ^ src[20];
    v320 = (v272 + v362) ^ src[21];
    v327 = (v240 + v373) ^ src[22];
    v332 = (v281 + v384) ^ src[23];
    v140 = (v116 + v388) ^ src[24];
    v339 = v140;
    v344 = (v121 + v392) ^ src[25];
    v351 = (v231 + v396) ^ src[26];
    v356 = (v120 + v400) ^ src[27];
    v363 = (v123 + v403) ^ src[28];
    v141 = (v117 + v407) ^ src[29];
    v367 = v141;
    v374 = (v118 + v411) ^ src[30];
    v379 = (v126 + v415) ^ src[31];
    v273 = v332;
    v142 = v308;
    v257 = v356;
    v143 = v374;
    v241 = v327;
    v144 = v351;
    v145 = v344;
    v146 = v296;
    v147 = v320;
    v148 = v315;
    v149 = v363;
    v150 = v290;
    v233 = 4;
    v151 = v379;
    do
    {
      v249 = v148 ^ __ROR4__(v149 + v150, 25);
      v265 = v145 ^ __ROR4__(v146 + v147, 25);
      v282 = v143 ^ __ROR4__(v241 + v144, 25);
      v152 = v142 ^ __ROR4__(v257 + v151, 25);
      v153 = v140 ^ __ROR4__(v249 + v150, 23);
      v154 = v141 ^ __ROR4__(v265 + v147, 23);
      v155 = v139 ^ __ROR4__(v282 + v144, 23);
      v156 = v273 ^ __ROR4__(v152 + v151, 23);
      v157 = v149 ^ __ROR4__(v153 + v249, 19);
      v158 = v146 ^ __ROR4__(v154 + v265, 19);
      v159 = v241 ^ __ROR4__(v155 + v282, 19);
      v160 = v257 ^ __ROR4__(v156 + v152, 19);
      v161 = v150 ^ __ROR4__(v157 + v153, 14);
      v162 = v147 ^ __ROR4__(v158 + v154, 14);
      v163 = v144 ^ __ROR4__(v159 + v155, 14);
      v164 = v151 ^ __ROR4__(v160 + v156, 14);
      v146 = v158 ^ __ROR4__(v161 + v152, 25);
      v241 = v159 ^ __ROR4__(v162 + v249, 25);
      v257 = v160 ^ __ROR4__(v163 + v265, 25);
      v149 = v157 ^ __ROR4__(v164 + v282, 25);
      v139 = v155 ^ __ROR4__(v146 + v161, 23);
      v273 = v156 ^ __ROR4__(v241 + v162, 23);
      v140 = v153 ^ __ROR4__(v257 + v163, 23);
      v141 = v154 ^ __ROR4__(v149 + v164, 23);
      v142 = v152 ^ __ROR4__(v139 + v146, 19);
      v148 = v249 ^ __ROR4__(v273 + v241, 19);
      v145 = v265 ^ __ROR4__(v140 + v257, 19);
      v143 = v282 ^ __ROR4__(v141 + v149, 19);
      v150 = v161 ^ __ROR4__(v142 + v139, 14);
      v147 = v162 ^ __ROR4__(v148 + v273, 14);
      v144 = v163 ^ __ROR4__(v145 + v140, 14);
      v151 = v164 ^ __ROR4__(v143 + v141, 14);
      --v233;
    }
    while ( v233 );
    src[16] = v150 + v290;
    src[17] = v146 + v296;
    src[18] = v139 + v303;
    src[19] = v142 + v308;
    src[20] = v148 + v315;
    src[21] = v147 + v320;
    src[22] = v241 + v327;
    src[23] = v273 + v332;
    src[24] = v140 + v339;
    src[25] = v145 + v344;
    src[26] = v144 + v351;
    src[27] = v257 + v356;
    src[28] = v149 + v363;
    src[29] = v141 + v367;
    src[30] = v143 + v374;
    src[31] = v151 + v379;
    v165 = (int)&v419[128 * ((v150 + v290) & 0x3FF) - 8];
    v166 = (char *)src;
    do
    {
      v167 = *(_QWORD *)(v165 + 8);
      v165 += 8;
      *(_QWORD *)v166 ^= v167;
      v166 += 8;
    }
    while ( &v469 != v166 );
    v297 = src[16] ^ src[0];
    v309 = src[17] ^ src[1];
    v321 = src[18] ^ src[2];
    v333 = src[19] ^ src[3];
    v345 = src[20] ^ src[4];
    v357 = src[21] ^ src[5];
    v368 = src[22] ^ src[6];
    v380 = src[23] ^ src[7];
    v168 = src[24] ^ src[8];
    v386 = src[24] ^ src[8];
    v390 = src[25] ^ src[9];
    v394 = src[26] ^ src[10];
    v398 = src[27] ^ src[11];
    v169 = src[29] ^ src[13];
    v405 = src[29] ^ src[13];
    v170 = src[30] ^ src[14];
    v409 = src[30] ^ src[14];
    v413 = src[31] ^ src[15];
    v234 = src[23] ^ src[7];
    v171 = src[18] ^ src[2];
    v172 = src[19] ^ src[3];
    v173 = src[27] ^ src[11];
    v242 = src[22] ^ src[6];
    v274 = src[26] ^ src[10];
    v174 = src[25] ^ src[9];
    v283 = src[21] ^ src[5];
    v175 = src[20] ^ src[4];
    v176 = src[28] ^ src[12];
    v177 = src[16] ^ src[0];
    v291 = 4;
    v178 = src[17] ^ src[1];
    v179 = src[31] ^ src[15];
    do
    {
      v258 = v175 ^ __ROR4__(v177 + v176, 25);
      v250 = v174 ^ __ROR4__(v178 + v283, 25);
      v266 = v170 ^ __ROR4__(v242 + v274, 25);
      v180 = v172 ^ __ROR4__(v173 + v179, 25);
      v181 = v168 ^ __ROR4__(v258 + v177, 23);
      v182 = v169 ^ __ROR4__(v250 + v283, 23);
      v183 = v171 ^ __ROR4__(v266 + v274, 23);
      v184 = v234 ^ __ROR4__(v180 + v179, 23);
      v185 = v176 ^ __ROR4__(v181 + v258, 19);
      v186 = v178 ^ __ROR4__(v182 + v250, 19);
      v187 = v242 ^ __ROR4__(v183 + v266, 19);
      v188 = v173 ^ __ROR4__(v184 + v180, 19);
      v189 = v177 ^ __ROR4__(v185 + v181, 14);
      v190 = v283 ^ __ROR4__(v186 + v182, 14);
      v275 = v274 ^ __ROR4__(v187 + v183, 14);
      v191 = v179 ^ __ROR4__(v188 + v184, 14);
      v178 = v186 ^ __ROR4__(v189 + v180, 25);
      v242 = v187 ^ __ROR4__(v190 + v258, 25);
      v173 = v188 ^ __ROR4__(v275 + v250, 25);
      v176 = v185 ^ __ROR4__(v191 + v266, 25);
      v171 = v183 ^ __ROR4__(v178 + v189, 23);
      v234 = v184 ^ __ROR4__(v242 + v190, 23);
      v168 = v181 ^ __ROR4__(v173 + v275, 23);
      v169 = v182 ^ __ROR4__(v176 + v191, 23);
      v172 = v180 ^ __ROR4__(v171 + v178, 19);
      v175 = v258 ^ __ROR4__(v234 + v242, 19);
      v174 = v250 ^ __ROR4__(v168 + v173, 19);
      v170 = v266 ^ __ROR4__(v169 + v176, 19);
      v177 = v189 ^ __ROR4__(v172 + v171, 14);
      v283 = v190 ^ __ROR4__(v175 + v234, 14);
      v274 = v275 ^ __ROR4__(v174 + v168, 14);
      v179 = v191 ^ __ROR4__(v170 + v169, 14);
      --v291;
    }
    while ( v291 );
    src[0] = v177 + v297;
    src[1] = v178 + v309;
    src[2] = v171 + v321;
    src[3] = v172 + v333;
    src[4] = v175 + v345;
    src[5] = v283 + v357;
    src[6] = v242 + v368;
    src[7] = v234 + v380;
    src[8] = v168 + v386;
    src[9] = v174 + v390;
    src[10] = v274 + v394;
    src[11] = v173 + v398;
    src[12] = v176 + (src[28] ^ src[12]);
    src[13] = v169 + v405;
    src[14] = v170 + v409;
    src[15] = v179 + v413;
    v292 = (v177 + v297) ^ src[16];
    v298 = (v178 + v309) ^ src[17];
    v304 = (v171 + v321) ^ src[18];
    v310 = (v172 + v333) ^ src[19];
    v316 = (v175 + v345) ^ src[20];
    v322 = (v283 + v357) ^ src[21];
    v328 = (v242 + v368) ^ src[22];
    v334 = (v234 + v380) ^ src[23];
    v192 = (v168 + v386) ^ src[24];
    v340 = v192;
    v346 = (v174 + v390) ^ src[25];
    v193 = (v274 + v394) ^ src[26];
    v352 = v193;
    v358 = (v173 + v398) ^ src[27];
    v194 = (v169 + v405) ^ src[29];
    v369 = v194;
    v375 = (v170 + v409) ^ src[30];
    v381 = (v179 + v413) ^ src[31];
    v276 = v334;
    v195 = v304;
    v196 = v310;
    v243 = v358;
    v197 = v381;
    v198 = v375;
    v259 = v328;
    v199 = v346;
    v200 = v298;
    v201 = v322;
    v202 = v316;
    v203 = src[12] ^ src[28];
    v204 = v292;
    v235 = 4;
    do
    {
      v251 = v202 ^ __ROR4__(v203 + v204, 25);
      v267 = v199 ^ __ROR4__(v200 + v201, 25);
      v284 = v198 ^ __ROR4__(v259 + v193, 25);
      v205 = v196 ^ __ROR4__(v243 + v197, 25);
      v206 = v192 ^ __ROR4__(v251 + v204, 23);
      v207 = v194 ^ __ROR4__(v267 + v201, 23);
      v208 = v195 ^ __ROR4__(v284 + v193, 23);
      v209 = v276 ^ __ROR4__(v205 + v197, 23);
      v210 = v203 ^ __ROR4__(v206 + v251, 19);
      v211 = v200 ^ __ROR4__(v207 + v267, 19);
      v212 = v259 ^ __ROR4__(v208 + v284, 19);
      v213 = v243 ^ __ROR4__(v209 + v205, 19);
      v214 = v204 ^ __ROR4__(v210 + v206, 14);
      v215 = v201 ^ __ROR4__(v211 + v207, 14);
      v216 = v193 ^ __ROR4__(v212 + v208, 14);
      v217 = v197 ^ __ROR4__(v213 + v209, 14);
      v200 = v211 ^ __ROR4__(v214 + v205, 25);
      v259 = v212 ^ __ROR4__(v215 + v251, 25);
      v243 = v213 ^ __ROR4__(v216 + v267, 25);
      v203 = v210 ^ __ROR4__(v217 + v284, 25);
      v195 = v208 ^ __ROR4__(v200 + v214, 23);
      v276 = v209 ^ __ROR4__(v259 + v215, 23);
      v192 = v206 ^ __ROR4__(v243 + v216, 23);
      v194 = v207 ^ __ROR4__(v203 + v217, 23);
      v196 = v205 ^ __ROR4__(v195 + v200, 19);
      v202 = v251 ^ __ROR4__(v276 + v259, 19);
      v199 = v267 ^ __ROR4__(v192 + v243, 19);
      v198 = v284 ^ __ROR4__(v194 + v203, 19);
      v204 = v214 ^ __ROR4__(v196 + v195, 14);
      v201 = v215 ^ __ROR4__(v202 + v276, 14);
      v193 = v216 ^ __ROR4__(v199 + v192, 14);
      v197 = v217 ^ __ROR4__(v198 + v194, 14);
      --v235;
    }
    while ( v235 );
    src[16] = v204 + v292;
    src[17] = v200 + v298;
    src[18] = v195 + v304;
    src[19] = v196 + v310;
    src[20] = v202 + v316;
    src[21] = v201 + v322;
    src[22] = v259 + v328;
    src[23] = v276 + v334;
    src[24] = v192 + v340;
    src[25] = v199 + v346;
    src[26] = v193 + v352;
    src[27] = v243 + v358;
    src[28] = v203 + (src[12] ^ src[28]);
    src[29] = v194 + v369;
    src[30] = v198 + v375;
    src[31] = v197 + v381;
    --desta;
  }
  while ( desta );
  v440 = 1779033703;
  v441 = -1150833019;
  v442 = 1013904242;
  v443 = -1521486534;
  v444 = 1359893119;
  v445 = -1694144372;
  v446 = 528734635;
  v447 = 1541459225;
  sub_C848(&v440, a1, 1);
  v218 = a1[17];
  v219 = a1[18];
  v220 = a1[19];
  v459 = a1[16];
  v460 = v218;
  v461 = v219;
  v462 = v220;
  v463 = 128;
  v464 = 0;
  v465 = 0;
  v466 = 0;
  memset(v467, 0, 28);
  v467[7] = -2147352576;
  sub_C848(&v440, &v459, 1);
  v449 = v440;
  v450 = v441;
  v451 = v442;
  v452 = v443;
  v453 = v444;
  v454 = v445;
  v455 = v446;
  v456 = v447;
  *a3 = 1779033703;
  a3[1] = -1150833019;
  a3[2] = 1013904242;
  a3[3] = -1521486534;
  a3[4] = 1359893119;
  a3[5] = -1694144372;
  a3[6] = 528734635;
  a3[7] = 1541459225;
  for ( m = 0; m != 32; m += 4 )
    *(int *)((char *)&v459 + m) = *(int *)((char *)&v449 + m) ^ 0x5C5C5C5C;
  memset(v467, 92, 32);
  sub_C848(a3, &v459, 0);
  v440 = 1779033703;
  v441 = -1150833019;
  v442 = 1013904242;
  v443 = -1521486534;
  v444 = 1359893119;
  v445 = -1694144372;
  v446 = 528734635;
  v447 = 1541459225;
  for ( n = 0; n != 32; n += 4 )
    *(int *)((char *)&v459 + n) = *(int *)((char *)&v449 + n) ^ 0x36363636;
  memset(v467, 54, 32);
  sub_C848(&v440, &v459, 0);
  sub_C848(&v440, src, 1);
  sub_C848(&v440, &src[16], 1);
  sub_C848(&v440, dword_5F920, 0);
  v459 = v440;
  v460 = v441;
  v461 = v442;
  v462 = v443;
  v463 = v444;
  v464 = v445;
  v465 = v446;
  v466 = v447;
  v467[0] = 0x80000000;
  memset(&v467[1], 0, 24);
  v467[7] = 768;
  return sub_C848(a3, &v459, 0);
}
