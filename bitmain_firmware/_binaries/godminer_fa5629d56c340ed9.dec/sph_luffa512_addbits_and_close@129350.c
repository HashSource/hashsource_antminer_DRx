unsigned int *__fastcall sph_luffa512_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v5; // lr
  unsigned int v6; // r6
  unsigned int v7; // r9
  int v8; // r12
  int v9; // lr
  int v10; // r0
  int v11; // r5
  int v12; // r11
  int v13; // r2
  int v14; // r10
  int v15; // r7
  int v16; // r11
  int v17; // r4
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // lr
  int v22; // r6
  int v23; // r8
  int v24; // r1
  int v25; // r12
  int v26; // r8
  int v27; // r6
  int v28; // r8
  int v29; // r1
  int v30; // r4
  int v31; // lr
  int v32; // r5
  int v33; // r3
  int v34; // r10
  int v35; // r8
  unsigned int v36; // r4
  int v37; // r12
  int v38; // r6
  int v39; // lr
  int v40; // r11
  int v41; // r1
  int v42; // r2
  int v43; // r8
  int v44; // r0
  int v45; // r5
  int v46; // r10
  int v47; // r2
  int v48; // r7
  int v49; // lr
  int v50; // r11
  int v51; // r8
  int v52; // r3
  int v53; // lr
  int v54; // r12
  int v55; // r8
  int v56; // r5
  int v57; // r0
  int v58; // r2
  unsigned int v59; // lr
  int v60; // r11
  int v61; // r3
  int v62; // r10
  int v63; // r12
  int v64; // r4
  int v65; // r8
  int v66; // r1
  int v67; // r2
  int v68; // r11
  int v69; // r9
  int v70; // r5
  int v71; // r6
  int v72; // r1
  int v73; // r7
  int v74; // r3
  int v75; // r0
  int v76; // r4
  int v77; // r12
  int v78; // r1
  int v79; // r2
  int v80; // r6
  int v81; // r1
  int v82; // r9
  int v83; // r0
  int v84; // r2
  int v85; // r4
  int v86; // lr
  int v87; // r3
  int v88; // r11
  int v89; // r0
  int v90; // r2
  int v91; // r1
  int v92; // r12
  int v93; // lr
  int v94; // r3
  int v95; // r4
  int v96; // r11
  int v97; // r9
  int v98; // r8
  int v99; // r0
  unsigned int v100; // lr
  int v101; // r2
  unsigned int v102; // r3
  int v103; // r12
  unsigned int v104; // r11
  int v105; // r4
  int v106; // r1
  int v107; // r2
  int v108; // r11
  int v109; // r10
  int v110; // r5
  int v111; // r6
  int v112; // r1
  int v113; // r7
  int v114; // r3
  int v115; // r0
  int v116; // r4
  int v117; // r12
  int v118; // r1
  int v119; // r2
  int v120; // r6
  int v121; // r1
  int v122; // r10
  int v123; // r0
  int v124; // r2
  int v125; // r4
  int v126; // lr
  int v127; // r3
  int v128; // r11
  int v129; // r0
  int v130; // r2
  int v131; // r1
  int v132; // r12
  int v133; // lr
  int v134; // r3
  int v135; // r4
  int v136; // r11
  int v137; // r8
  int v138; // r10
  int v139; // r0
  unsigned int v140; // lr
  int v141; // r2
  unsigned int v142; // r3
  int v143; // r12
  unsigned int v144; // r11
  int v145; // r4
  int v146; // r1
  int v147; // r2
  int v148; // r11
  int v149; // r9
  int v150; // r5
  int v151; // r6
  int v152; // r1
  int v153; // r7
  int v154; // r3
  int v155; // r0
  int v156; // r4
  int v157; // r12
  int v158; // r1
  int v159; // r2
  int v160; // r6
  int v161; // r1
  int v162; // r9
  int v163; // r0
  int v164; // r2
  int v165; // r4
  int v166; // lr
  int v167; // r3
  int v168; // r11
  int v169; // r0
  int v170; // r2
  int v171; // r1
  int v172; // r12
  int v173; // lr
  int v174; // r3
  int v175; // r4
  int v176; // r11
  int v177; // r9
  int v178; // r8
  int v179; // r0
  unsigned int v180; // lr
  int v181; // r2
  unsigned int v182; // r3
  int v183; // r12
  unsigned int v184; // r11
  int v185; // r4
  int v186; // r1
  int v187; // r2
  int v188; // r11
  int v189; // r10
  int v190; // r5
  int v191; // r6
  int v192; // r1
  int v193; // r7
  int v194; // r3
  int v195; // r0
  int v196; // r4
  int v197; // r12
  int v198; // r1
  int v199; // r2
  int v200; // r6
  int v201; // r1
  int v202; // r10
  int v203; // r0
  int v204; // r2
  int v205; // r4
  int v206; // lr
  int v207; // r3
  int v208; // r11
  int v209; // r0
  int v210; // r2
  int v211; // r1
  int v212; // r12
  int v213; // lr
  int v214; // r3
  int v215; // r4
  int v216; // r11
  int v217; // r10
  int v218; // r8
  int v219; // r0
  unsigned int v220; // lr
  int v221; // r2
  unsigned int v222; // r3
  int v223; // r12
  unsigned int v224; // r11
  int v225; // r4
  int v226; // r1
  int v227; // r2
  int v228; // r11
  int v229; // r9
  int v230; // r5
  int v231; // r6
  int v232; // r1
  int v233; // r7
  int v234; // r3
  int v235; // r0
  int v236; // r4
  int v237; // r12
  int v238; // r1
  int v239; // r2
  int v240; // r6
  int v241; // r1
  int v242; // r9
  int v243; // r0
  int v244; // r2
  int v245; // r4
  int v246; // lr
  int v247; // r3
  int v248; // r11
  int v249; // r0
  int v250; // r2
  int v251; // r1
  int v252; // r12
  int v253; // lr
  int v254; // r3
  int v255; // r4
  int v256; // r11
  int v257; // r11
  int v258; // r2
  int v259; // lr
  int v260; // r4
  int v261; // r1
  int v262; // r6
  int v263; // r5
  int v264; // r12
  int v266; // r3
  int v267; // r1
  int v268; // r2
  int v269; // r4
  int v270; // r5
  int v271; // r0
  int v272; // r3
  int v273; // r1
  unsigned int v274; // [sp+4h] [bp-120h]
  int v275; // [sp+4h] [bp-120h]
  int v276; // [sp+4h] [bp-120h]
  int v277; // [sp+4h] [bp-120h]
  int v278; // [sp+4h] [bp-120h]
  int v279; // [sp+4h] [bp-120h]
  int v280; // [sp+4h] [bp-120h]
  int v281; // [sp+8h] [bp-11Ch]
  int v282; // [sp+8h] [bp-11Ch]
  unsigned int v283; // [sp+Ch] [bp-118h]
  unsigned int v284; // [sp+Ch] [bp-118h]
  int v285; // [sp+Ch] [bp-118h]
  unsigned int v286; // [sp+10h] [bp-114h]
  unsigned int v287; // [sp+14h] [bp-110h]
  int v288; // [sp+14h] [bp-110h]
  int v289; // [sp+14h] [bp-110h]
  int v290; // [sp+14h] [bp-110h]
  unsigned int v291; // [sp+18h] [bp-10Ch]
  int v292; // [sp+18h] [bp-10Ch]
  unsigned int v293; // [sp+1Ch] [bp-108h]
  int v294; // [sp+1Ch] [bp-108h]
  unsigned int v295; // [sp+20h] [bp-104h]
  int v296; // [sp+20h] [bp-104h]
  int v297; // [sp+20h] [bp-104h]
  int v298; // [sp+20h] [bp-104h]
  unsigned int v299; // [sp+24h] [bp-100h]
  int v300; // [sp+24h] [bp-100h]
  int v301; // [sp+24h] [bp-100h]
  unsigned int v302; // [sp+28h] [bp-FCh]
  int v303; // [sp+28h] [bp-FCh]
  unsigned int v304; // [sp+28h] [bp-FCh]
  unsigned int v305; // [sp+2Ch] [bp-F8h]
  int v306; // [sp+2Ch] [bp-F8h]
  int v307; // [sp+2Ch] [bp-F8h]
  unsigned int v308; // [sp+30h] [bp-F4h]
  unsigned int v309; // [sp+30h] [bp-F4h]
  unsigned int v310; // [sp+30h] [bp-F4h]
  unsigned int v311; // [sp+34h] [bp-F0h]
  int v312; // [sp+34h] [bp-F0h]
  int v313; // [sp+34h] [bp-F0h]
  unsigned int v314; // [sp+38h] [bp-ECh]
  int v315; // [sp+38h] [bp-ECh]
  int v316; // [sp+38h] [bp-ECh]
  unsigned int v317; // [sp+38h] [bp-ECh]
  unsigned int v318; // [sp+3Ch] [bp-E8h]
  int v319; // [sp+3Ch] [bp-E8h]
  int v320; // [sp+3Ch] [bp-E8h]
  int v321; // [sp+3Ch] [bp-E8h]
  unsigned int v322; // [sp+40h] [bp-E4h]
  int v323; // [sp+40h] [bp-E4h]
  int v324; // [sp+40h] [bp-E4h]
  unsigned int v325; // [sp+44h] [bp-E0h]
  int v326; // [sp+44h] [bp-E0h]
  unsigned int v327; // [sp+44h] [bp-E0h]
  unsigned int v328; // [sp+48h] [bp-DCh]
  int v329; // [sp+48h] [bp-DCh]
  int v330; // [sp+48h] [bp-DCh]
  unsigned int v331; // [sp+4Ch] [bp-D8h]
  int v332; // [sp+4Ch] [bp-D8h]
  unsigned int v333; // [sp+4Ch] [bp-D8h]
  unsigned int v334; // [sp+50h] [bp-D4h]
  int v335; // [sp+50h] [bp-D4h]
  int v336; // [sp+50h] [bp-D4h]
  int v337; // [sp+50h] [bp-D4h]
  unsigned int v338; // [sp+54h] [bp-D0h]
  int v339; // [sp+54h] [bp-D0h]
  int v340; // [sp+54h] [bp-D0h]
  unsigned int v341; // [sp+54h] [bp-D0h]
  unsigned int v342; // [sp+58h] [bp-CCh]
  int v343; // [sp+58h] [bp-CCh]
  int v344; // [sp+58h] [bp-CCh]
  int v345; // [sp+58h] [bp-CCh]
  unsigned int v346; // [sp+5Ch] [bp-C8h]
  int v347; // [sp+5Ch] [bp-C8h]
  int v348; // [sp+5Ch] [bp-C8h]
  unsigned int v349; // [sp+60h] [bp-C4h]
  int v350; // [sp+60h] [bp-C4h]
  int v351; // [sp+60h] [bp-C4h]
  unsigned int v352; // [sp+64h] [bp-C0h]
  int v353; // [sp+64h] [bp-C0h]
  unsigned int v354; // [sp+64h] [bp-C0h]
  unsigned int v355; // [sp+68h] [bp-BCh]
  int v356; // [sp+68h] [bp-BCh]
  int v357; // [sp+68h] [bp-BCh]
  int v358; // [sp+68h] [bp-BCh]
  unsigned int v359; // [sp+6Ch] [bp-B8h]
  int v360; // [sp+6Ch] [bp-B8h]
  unsigned int v361; // [sp+6Ch] [bp-B8h]
  unsigned int v362; // [sp+70h] [bp-B4h]
  int v363; // [sp+70h] [bp-B4h]
  unsigned int v364; // [sp+74h] [bp-B0h]
  int v365; // [sp+74h] [bp-B0h]
  int v366; // [sp+74h] [bp-B0h]
  unsigned int v367; // [sp+74h] [bp-B0h]
  unsigned int v368; // [sp+78h] [bp-ACh]
  int v369; // [sp+78h] [bp-ACh]
  int v370; // [sp+78h] [bp-ACh]
  int v371; // [sp+78h] [bp-ACh]
  unsigned int v372; // [sp+7Ch] [bp-A8h]
  int v373; // [sp+7Ch] [bp-A8h]
  int v374; // [sp+7Ch] [bp-A8h]
  unsigned int v375; // [sp+80h] [bp-A4h]
  int v376; // [sp+80h] [bp-A4h]
  int v377; // [sp+80h] [bp-A4h]
  unsigned int v378; // [sp+84h] [bp-A0h]
  int v379; // [sp+84h] [bp-A0h]
  unsigned int v380; // [sp+84h] [bp-A0h]
  unsigned int v381; // [sp+88h] [bp-9Ch]
  int v382; // [sp+88h] [bp-9Ch]
  int v383; // [sp+88h] [bp-9Ch]
  unsigned int v384; // [sp+88h] [bp-9Ch]
  unsigned int v385; // [sp+8Ch] [bp-98h]
  int v386; // [sp+8Ch] [bp-98h]
  unsigned int v387; // [sp+90h] [bp-94h]
  unsigned int v388; // [sp+90h] [bp-94h]
  unsigned int v389; // [sp+94h] [bp-90h]
  int v390; // [sp+94h] [bp-90h]
  int v391; // [sp+94h] [bp-90h]
  int v392; // [sp+94h] [bp-90h]
  unsigned int v393; // [sp+98h] [bp-8Ch]
  int v394; // [sp+98h] [bp-8Ch]
  int v395; // [sp+98h] [bp-8Ch]
  unsigned int v396; // [sp+9Ch] [bp-88h]
  int v397; // [sp+9Ch] [bp-88h]
  int v398; // [sp+9Ch] [bp-88h]
  unsigned int v399; // [sp+A0h] [bp-84h]
  int v400; // [sp+A0h] [bp-84h]
  int v401; // [sp+A0h] [bp-84h]
  int v402; // [sp+A0h] [bp-84h]
  unsigned int v403; // [sp+A4h] [bp-80h]
  unsigned int v404; // [sp+A8h] [bp-7Ch]
  int v405; // [sp+A8h] [bp-7Ch]
  unsigned int v406; // [sp+ACh] [bp-78h]
  int v407; // [sp+ACh] [bp-78h]
  unsigned int v408; // [sp+B0h] [bp-74h]
  int v409; // [sp+B0h] [bp-74h]
  int v410; // [sp+B0h] [bp-74h]
  unsigned int v411; // [sp+B4h] [bp-70h]
  int v412; // [sp+B8h] [bp-6Ch]
  int v413; // [sp+B8h] [bp-6Ch]
  int v414; // [sp+B8h] [bp-6Ch]
  int v415; // [sp+BCh] [bp-68h]
  int v416; // [sp+BCh] [bp-68h]
  int v417; // [sp+C0h] [bp-64h]
  int v418; // [sp+C0h] [bp-64h]
  int v419; // [sp+C0h] [bp-64h]
  int v420; // [sp+C8h] [bp-5Ch]
  int v421; // [sp+C8h] [bp-5Ch]
  int v422; // [sp+CCh] [bp-58h]
  unsigned int v424; // [sp+D4h] [bp-50h]
  int v425; // [sp+D8h] [bp-4Ch]
  int v426; // [sp+D8h] [bp-4Ch]
  int v427; // [sp+DCh] [bp-48h]
  int v428; // [sp+DCh] [bp-48h]
  int v429; // [sp+E0h] [bp-44h]
  int v430; // [sp+E0h] [bp-44h]
  int v431; // [sp+E4h] [bp-40h]
  int v432; // [sp+E4h] [bp-40h]
  int v433; // [sp+E8h] [bp-3Ch]
  int v434; // [sp+E8h] [bp-3Ch]
  int v435; // [sp+ECh] [bp-38h]
  int v436; // [sp+ECh] [bp-38h]
  int v437; // [sp+F0h] [bp-34h]
  int v438; // [sp+F4h] [bp-30h]
  int v439; // [sp+F4h] [bp-30h]
  int v440; // [sp+FCh] [bp-28h]
  int v441; // [sp+100h] [bp-24h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v396 = a1[9];
  v404 = a1[10];
  v6 = v396 ^ a1[17];
  v291 = a1[12];
  v399 = a1[17];
  v406 = a1[11];
  v295 = a1[13];
  v287 = a1[14];
  v408 = a1[15];
  v293 = a1[16];
  v299 = a1[18];
  v422 = 0;
  v305 = a1[19];
  v311 = a1[20];
  v318 = a1[21];
  v302 = a1[22];
  v308 = a1[23];
  v314 = a1[24];
  v342 = a1[25];
  v322 = a1[26];
  v328 = a1[27];
  v334 = a1[28];
  v346 = a1[29];
  v325 = a1[30];
  v331 = a1[31];
  v338 = a1[32];
  v368 = a1[33];
  v349 = a1[34];
  v355 = a1[35];
  v362 = a1[36];
  v372 = a1[37];
  v352 = a1[38];
  v359 = a1[39];
  v364 = a1[40];
  v389 = a1[41];
  v375 = a1[42];
  v283 = a1[43];
  v385 = a1[44];
  v393 = a1[45];
  v378 = a1[46];
  v381 = a1[47];
  v387 = a1[48];
  while ( 1 )
  {
    v424 = bswap32(*a1);
    v7 = bswap32(a1[4]);
    v403 = bswap32(a1[1]);
    v286 = bswap32(a1[7]);
    v8 = v338 ^ v364 ^ v387 ^ v293 ^ v314;
    v9 = v328 ^ v355 ^ v406 ^ v305 ^ v283 ^ v8;
    v10 = v334 ^ v362 ^ v291 ^ v311 ^ v385 ^ v8;
    v11 = v349 ^ v404 ^ v299 ^ v375 ^ v322;
    v12 = v331 ^ v359 ^ v381 ^ v408 ^ v308;
    v13 = v325 ^ v352 ^ v378 ^ v287 ^ v302;
    v411 = bswap32(a1[2]);
    v274 = bswap32(a1[6]);
    v417 = v11 ^ v283;
    v412 = v11 ^ v305;
    v415 = v11 ^ v328;
    v356 = v11 ^ v355;
    v284 = bswap32(a1[5]);
    v306 = v12 ^ v387;
    v281 = v12 ^ v338;
    v14 = v12 ^ v314;
    v15 = v12 ^ v293;
    v16 = v12 ^ v364;
    v339 = v13 ^ v308;
    v17 = v13 ^ v331;
    v365 = v13 ^ v359;
    v382 = v13 ^ v381;
    v309 = bswap32(a1[3]);
    v18 = v346 ^ v372 ^ v295 ^ v318 ^ v393;
    v420 = v284 ^ v424 ^ v286;
    v19 = v6 ^ v389 ^ v342 ^ v368 ^ v8;
    v315 = v9 ^ v291;
    v332 = v9 ^ v311;
    v425 = v9 ^ v334;
    v360 = v9 ^ v362;
    v427 = v9 ^ v385;
    v335 = v10 ^ v318;
    v20 = v13 ^ v408;
    v292 = v339 ^ v281;
    v429 = v10 ^ v393;
    v319 = v18 ^ v287;
    v394 = v10 ^ v295;
    v21 = v10 ^ v346;
    v288 = v10 ^ v372;
    v294 = v309 ^ v286;
    v296 = v18 ^ v325;
    v22 = v18 ^ v302;
    v23 = v18 ^ v352;
    v24 = v18 ^ v378;
    v312 = v365 ^ v306;
    v373 = v396 ^ v8;
    v379 = v399 ^ v8;
    v400 = v8 ^ v342;
    v409 = v8 ^ v389;
    v369 = v8 ^ v368;
    v347 = v403 ^ v274;
    v390 = v315 ^ v335;
    v25 = v315;
    v316 = v11 ^ v406;
    v329 = v15 ^ v382;
    v386 = v25 ^ v417 ^ v306;
    v326 = v425 ^ v412 ^ v14;
    v438 = v425 ^ v288;
    v343 = v319 ^ v339;
    v431 = v335 ^ v296;
    v435 = v296 ^ v365;
    v353 = v288 ^ v24;
    v397 = v20 ^ v24;
    v297 = v20 ^ v14;
    v437 = v23 ^ v382;
    v433 = v21 ^ v23;
    v363 = v427 ^ v356 ^ v16;
    v26 = v22 ^ v17;
    v407 = v394 ^ v22;
    v289 = v17 ^ v16;
    v27 = v19 ^ v322;
    v383 = v26;
    v28 = v19 ^ v349;
    v303 = v19 ^ v404;
    v29 = v19 ^ v299;
    v300 = v19 ^ v375;
    v336 = v390 ^ v15;
    v30 = v14;
    v426 = v14 ^ v400;
    v31 = v21 ^ v332 ^ v14;
    v405 = v19 ^ v349 ^ v400 ^ v281;
    v32 = v339 ^ v281 ^ v309 ^ v286 ^ v326;
    v33 = v319;
    v34 = v438 ^ v281;
    v320 = v31;
    v366 = v33 ^ v429;
    v340 = v360 ^ v429 ^ v16;
    v391 = v394 ^ v427 ^ v306;
    v401 = v15 ^ v379;
    v350 = v27 ^ v379 ^ v30;
    v428 = v28 ^ v417;
    v357 = v27 ^ v356;
    v35 = v303 ^ v412;
    v36 = v274;
    v37 = v274 ^ v411 ^ v286;
    v38 = v415 ^ v281 ^ v360;
    v413 = v281 ^ v369;
    v275 = v369 ^ v16;
    v418 = v16 ^ v409;
    v39 = v409 ^ v306;
    v307 = v373 ^ v306;
    v323 = v29 ^ v373 ^ v15;
    v370 = v303 ^ v39;
    v410 = v29 ^ v415;
    v376 = v275 ^ v300;
    v416 = v316 ^ v300;
    v282 = v332 ^ v316 ^ v15;
    v395 = __ROR4__(v7 ^ v420 ^ v329 ^ v386 ^ v340, 28);
    v40 = v312 ^ v284 ^ v347 ^ v363 ^ v34;
    v41 = v320;
    v42 = v289 ^ v347;
    v321 = __ROR4__(v32 ^ v336, 31);
    v441 = v312 ^ v420 ^ v38;
    v380 = __ROR4__(v353 ^ v284 ^ v347 ^ v391, 28);
    v430 = v35 ^ v350;
    v348 = __ROR4__(v289 ^ v37 ^ v38 ^ v41, 30);
    v440 = v42 ^ v326;
    v374 = __ROR4__(v40, 29);
    v439 = v309 ^ v297 ^ v35;
    v43 = v7 ^ v383 ^ v433;
    v44 = v297 ^ v383 ^ v36;
    v45 = v431 ^ v309 ^ v286 ^ v34;
    v46 = v284 ^ v343 ^ v431;
    v384 = __ROR4__(v37 ^ v437 ^ v366, 28);
    v47 = v292 ^ v435 ^ v284;
    v48 = v435 ^ v309 ^ v286 ^ v353;
    v49 = v366;
    v367 = __ROR4__(v437 ^ v289 ^ v7, 29);
    v436 = v7 ^ v36 ^ v286 ^ v329 ^ v363;
    v432 = v284 ^ v49;
    v304 = __ROR4__(v7 ^ v407 ^ v41, 31);
    v333 = __ROR4__(v43, 30);
    v317 = __ROR4__(v44, 31);
    v354 = __ROR4__(v433 ^ v37 ^ v340, 29);
    v327 = __ROR4__(v45, 30);
    v310 = __ROR4__(v46, 31);
    v361 = __ROR4__(v48, 29);
    v341 = __ROR4__(v47, 30);
    v50 = v343 ^ v329;
    v344 = v297 ^ v307;
    v434 = v7 ^ v284 ^ v307 ^ v329;
    v51 = v418 ^ v312;
    v419 = v418 ^ v329;
    v421 = v289 ^ v426;
    v52 = v413 ^ v289 ^ v36 ^ v286;
    v414 = v413 ^ v312;
    v388 = __ROR4__(v312 ^ v397 ^ v294, 28);
    v53 = v401 ^ v297 ^ v403;
    v290 = v432 ^ v336;
    v54 = v36 ^ v397;
    v55 = v51 ^ v284 ^ v36;
    v56 = v428 ^ v370;
    v313 = v292 ^ v411 ^ v286 ^ v282 ^ v410;
    v330 = v410 ^ v405 ^ v424 ^ v286;
    v298 = v7 ^ v297 ^ v282 ^ v391;
    v337 = v440 ^ v357;
    v358 = v357 ^ v275 ^ v300 ^ v36 ^ v286;
    v57 = v370 ^ v53;
    v301 = v426 ^ v292 ^ v424 ^ v286 ^ v323;
    v398 = v424 ^ v344;
    v58 = v411 ^ v323 ^ v416;
    v402 = v286 ^ v401 ^ v292;
    v324 = v52 ^ v350;
    v345 = v421 ^ v36;
    v59 = v290;
    v60 = v286 ^ v50;
    v371 = v284 ^ v414;
    v61 = v54 ^ v407;
    v377 = v434 ^ v376;
    v62 = -533497832;
    v392 = v7 ^ v419;
    v285 = v56 ^ v284 ^ v36;
    v63 = v439 ^ v386;
    v64 = v398;
    v351 = v55 ^ v405;
    v65 = 0;
    v66 = v298;
    v276 = 809079974;
    while ( 1 )
    {
      v67 = v58 ^ v63;
      v68 = v60 ^ v66;
      v69 = v67 ^ v64 & v63;
      v70 = (v59 | v61) ^ v66;
      v71 = v64 & v63 ^ ~v57;
      v72 = v66 & v59;
      v73 = v71 | v69;
      v74 = ~v61 ^ v72;
      v75 = (v64 | v57) ^ v63;
      v76 = v64 ^ (v71 | v69);
      v77 = v68 & v70 ^ v74;
      v78 = v72 ^ v68;
      v79 = v67 & v75 ^ v71;
      v80 = v74 | v78;
      v81 = v78 ^ v76 ^ v77;
      v82 = v69 ^ v79;
      v83 = ~v75 ^ v73;
      v84 = v79 & v73;
      v85 = v81 ^ __ROR4__(v76, 30);
      v86 = v59 ^ v80 ^ v83;
      v87 = ~v70 ^ v80 ^ v84;
      v88 = v77 & v80 ^ v82;
      v89 = v86 ^ __ROR4__(v83, 30);
      v90 = v87 ^ __ROR4__(v84, 30);
      v91 = v85 ^ __ROR4__(v81, 18);
      v92 = v88 ^ __ROR4__(v82, 30);
      v93 = v89 ^ __ROR4__(v86, 18);
      v94 = v90 ^ __ROR4__(v87, 18);
      v95 = v91 ^ __ROR4__(v85, 22);
      v96 = v92 ^ __ROR4__(v88, 18);
      v57 = v93 ^ __ROR4__(v89, 22);
      v58 = v94 ^ __ROR4__(v90, 22);
      v63 = v96 ^ __ROR4__(v92, 22);
      v59 = __ROR4__(v93, 31);
      v61 = __ROR4__(v94, 31);
      v66 = v62 ^ __ROR4__(v91, 31);
      v60 = __ROR4__(v96, 31);
      ++v65;
      v64 = v95 ^ v276;
      if ( v65 == 8 )
        break;
      v276 = dword_181AA8[v65];
      v62 = dword_181AC8[v65];
    }
    v97 = 23617341;
    v404 = v57;
    v287 = v59;
    v98 = 0;
    v406 = v58;
    v408 = v61;
    v291 = v63;
    v293 = v60;
    v396 = v64;
    v295 = v66;
    v99 = v301;
    v100 = v304;
    v101 = v403 ^ v430;
    v102 = v310;
    v103 = v313;
    v104 = v317;
    v105 = v402;
    v106 = v321;
    v277 = -1226960659;
    while ( 1 )
    {
      v107 = v101 ^ v103;
      v108 = v104 ^ v106;
      v109 = v107 ^ v105 & v103;
      v110 = (v100 | v102) ^ v106;
      v111 = v105 & v103 ^ ~v99;
      v112 = v106 & v100;
      v113 = v111 | v109;
      v114 = ~v102 ^ v112;
      v115 = (v105 | v99) ^ v103;
      v116 = v105 ^ (v111 | v109);
      v117 = v108 & v110 ^ v114;
      v118 = v112 ^ v108;
      v119 = v107 & v115 ^ v111;
      v120 = v114 | v118;
      v121 = v118 ^ v116 ^ v117;
      v122 = v109 ^ v119;
      v123 = ~v115 ^ v113;
      v124 = v119 & v113;
      v125 = v121 ^ __ROR4__(v116, 30);
      v126 = v100 ^ v120 ^ v123;
      v127 = ~v110 ^ v120 ^ v124;
      v128 = v117 & v120 ^ v122;
      v129 = v126 ^ __ROR4__(v123, 30);
      v130 = v127 ^ __ROR4__(v124, 30);
      v131 = v125 ^ __ROR4__(v121, 18);
      v132 = v128 ^ __ROR4__(v122, 30);
      v133 = v129 ^ __ROR4__(v126, 18);
      v134 = v130 ^ __ROR4__(v127, 18);
      v135 = v131 ^ __ROR4__(v125, 22);
      v136 = v132 ^ __ROR4__(v128, 18);
      v99 = v133 ^ __ROR4__(v129, 22);
      v101 = v134 ^ __ROR4__(v130, 22);
      v103 = v136 ^ __ROR4__(v132, 22);
      v100 = __ROR4__(v133, 31);
      v102 = __ROR4__(v134, 31);
      v106 = v97 ^ __ROR4__(v131, 31);
      v104 = __ROR4__(v136, 31);
      ++v98;
      v105 = v135 ^ v277;
      if ( v98 == 8 )
        break;
      v277 = dword_181AE8[v98];
      v97 = dword_181B08[v98];
    }
    v137 = 0;
    v299 = v99;
    v302 = v100;
    v305 = v101;
    v308 = v102;
    v311 = v103;
    v314 = v104;
    v399 = v105;
    v318 = v106;
    v138 = -497126719;
    v139 = v324;
    v140 = v327;
    v141 = v330;
    v142 = v333;
    v143 = v337;
    v144 = v341;
    v145 = v345;
    v146 = v348;
    v278 = -64955950;
    while ( 1 )
    {
      v147 = v141 ^ v143;
      v148 = v144 ^ v146;
      v149 = v147 ^ v145 & v143;
      v150 = (v140 | v142) ^ v146;
      v151 = v145 & v143 ^ ~v139;
      v152 = v146 & v140;
      v153 = v151 | v149;
      v154 = ~v142 ^ v152;
      v155 = (v145 | v139) ^ v143;
      v156 = v145 ^ (v151 | v149);
      v157 = v148 & v150 ^ v154;
      v158 = v152 ^ v148;
      v159 = v147 & v155 ^ v151;
      v160 = v154 | v158;
      v161 = v158 ^ v156 ^ v157;
      v162 = v149 ^ v159;
      v163 = ~v155 ^ v153;
      v164 = v159 & v153;
      v165 = v161 ^ __ROR4__(v156, 30);
      v166 = v140 ^ v160 ^ v163;
      v167 = ~v150 ^ v160 ^ v164;
      v168 = v157 & v160 ^ v162;
      v169 = v166 ^ __ROR4__(v163, 30);
      v170 = v167 ^ __ROR4__(v164, 30);
      v171 = v165 ^ __ROR4__(v161, 18);
      v172 = v168 ^ __ROR4__(v162, 30);
      v173 = v169 ^ __ROR4__(v166, 18);
      v174 = v170 ^ __ROR4__(v167, 18);
      v175 = v171 ^ __ROR4__(v165, 22);
      v176 = v172 ^ __ROR4__(v168, 18);
      v139 = v173 ^ __ROR4__(v169, 22);
      v141 = v174 ^ __ROR4__(v170, 22);
      v143 = v176 ^ __ROR4__(v172, 22);
      v140 = __ROR4__(v173, 31);
      v142 = __ROR4__(v174, 31);
      v146 = v138 ^ __ROR4__(v171, 31);
      v144 = __ROR4__(v176, 31);
      ++v137;
      v145 = v175 ^ v278;
      if ( v137 == 8 )
        break;
      v278 = dword_181B28[v137];
      v138 = dword_181B48[v137];
    }
    v177 = -534197825;
    v322 = v139;
    v325 = v140;
    v178 = 0;
    v328 = v141;
    v331 = v142;
    v334 = v143;
    v338 = v144;
    v342 = v145;
    v346 = v146;
    v179 = v351;
    v180 = v354;
    v181 = v358;
    v182 = v361;
    v183 = v441 ^ v428;
    v184 = v367;
    v185 = v371;
    v186 = v374;
    v279 = -1307332699;
    while ( 1 )
    {
      v187 = v181 ^ v183;
      v188 = v184 ^ v186;
      v189 = v187 ^ v185 & v183;
      v190 = (v180 | v182) ^ v186;
      v191 = v185 & v183 ^ ~v179;
      v192 = v186 & v180;
      v193 = v191 | v189;
      v194 = ~v182 ^ v192;
      v195 = (v185 | v179) ^ v183;
      v196 = v185 ^ (v191 | v189);
      v197 = v188 & v190 ^ v194;
      v198 = v192 ^ v188;
      v199 = v187 & v195 ^ v191;
      v200 = v194 | v198;
      v201 = v198 ^ v196 ^ v197;
      v202 = v189 ^ v199;
      v203 = ~v195 ^ v193;
      v204 = v199 & v193;
      v205 = v201 ^ __ROR4__(v196, 30);
      v206 = v180 ^ v200 ^ v203;
      v207 = ~v190 ^ v200 ^ v204;
      v208 = v197 & v200 ^ v202;
      v209 = v206 ^ __ROR4__(v203, 30);
      v210 = v207 ^ __ROR4__(v204, 30);
      v211 = v205 ^ __ROR4__(v201, 18);
      v212 = v208 ^ __ROR4__(v202, 30);
      v213 = v209 ^ __ROR4__(v206, 18);
      v214 = v210 ^ __ROR4__(v207, 18);
      v215 = v211 ^ __ROR4__(v205, 22);
      v216 = v212 ^ __ROR4__(v208, 18);
      v179 = v213 ^ __ROR4__(v209, 22);
      v181 = v214 ^ __ROR4__(v210, 22);
      v183 = v216 ^ __ROR4__(v212, 22);
      v180 = __ROR4__(v213, 31);
      v182 = __ROR4__(v214, 31);
      v186 = v177 ^ __ROR4__(v211, 31);
      v184 = __ROR4__(v216, 31);
      ++v178;
      v185 = v215 ^ v279;
      if ( v178 == 8 )
        break;
      v279 = dword_181C08[v178];
      v177 = dword_181C28[v178];
    }
    v217 = 1351669111;
    v355 = v181;
    v359 = v182;
    v349 = v179;
    v352 = v180;
    v218 = 0;
    v362 = v183;
    v364 = v184;
    v368 = v185;
    v372 = v186;
    v219 = v377;
    v220 = v380;
    v221 = v285;
    v222 = v384;
    v223 = v436 ^ v416;
    v224 = v388;
    v225 = v392;
    v226 = v395;
    v280 = -254613021;
    while ( 1 )
    {
      v227 = v221 ^ v223;
      v228 = v224 ^ v226;
      v229 = v227 ^ v225 & v223;
      v230 = (v220 | v222) ^ v226;
      v231 = v225 & v223 ^ ~v219;
      v232 = v226 & v220;
      v233 = v231 | v229;
      v234 = ~v222 ^ v232;
      v235 = (v225 | v219) ^ v223;
      v236 = v225 ^ (v231 | v229);
      v237 = v228 & v230 ^ v234;
      v238 = v232 ^ v228;
      v239 = v227 & v235 ^ v231;
      v240 = v234 | v238;
      v241 = v238 ^ v236 ^ v237;
      v242 = v229 ^ v239;
      v243 = ~v235 ^ v233;
      v244 = v239 & v233;
      v245 = v241 ^ __ROR4__(v236, 30);
      v246 = v220 ^ v240 ^ v243;
      v247 = ~v230 ^ v240 ^ v244;
      v248 = v237 & v240 ^ v242;
      v249 = v246 ^ __ROR4__(v243, 30);
      v250 = v247 ^ __ROR4__(v244, 30);
      v251 = v245 ^ __ROR4__(v241, 18);
      v252 = v248 ^ __ROR4__(v242, 30);
      v253 = v249 ^ __ROR4__(v246, 18);
      v254 = v250 ^ __ROR4__(v247, 18);
      v255 = v251 ^ __ROR4__(v245, 22);
      v256 = v252 ^ __ROR4__(v248, 18);
      v219 = v253 ^ __ROR4__(v249, 22);
      v221 = v254 ^ __ROR4__(v250, 22);
      v223 = v256 ^ __ROR4__(v252, 22);
      v220 = __ROR4__(v253, 31);
      v222 = __ROR4__(v254, 31);
      v226 = v217 ^ __ROR4__(v251, 31);
      v224 = __ROR4__(v256, 31);
      ++v218;
      v225 = v255 ^ v280;
      if ( v218 == 8 )
        break;
      v280 = dword_181C48[v218];
      v217 = dword_181C68[v218];
    }
    v381 = v222;
    v375 = v219;
    v378 = v220;
    v283 = v221;
    v385 = v223;
    v387 = v224;
    v389 = v225;
    v393 = v226;
    if ( v422 != 1 )
      break;
    v6 = v399 ^ v396;
    v266 = v399 ^ v396 ^ v342 ^ v368 ^ v225;
    v267 = v404 ^ v299 ^ v322 ^ v349 ^ v219;
    v268 = v406 ^ v305 ^ v328 ^ v355 ^ v221;
    v269 = v291 ^ v311 ^ v334 ^ v362 ^ v223;
    *a4 = (v399 ^ v396 ^ v342 ^ v368 ^ v389) >> 24;
    a4[3] = v266;
    v270 = v295 ^ v318 ^ v346 ^ v372 ^ v393;
    a4[1] = BYTE2(v266);
    a4[2] = BYTE1(v266);
    a4[7] = v267;
    v271 = v287 ^ v302 ^ v325 ^ v352 ^ v220;
    a4[4] = HIBYTE(v267);
    a4[11] = v268;
    a4[15] = v269;
    v272 = v408 ^ v308 ^ v331 ^ v359 ^ v381;
    a4[5] = BYTE2(v267);
    a4[6] = (unsigned __int16)(v404 ^ v299 ^ v322 ^ v349 ^ v375) >> 8;
    a4[19] = v270;
    a4[23] = v271;
    a4[27] = v272;
    v273 = v293 ^ v314 ^ v338 ^ v364 ^ v224;
    a4[8] = HIBYTE(v268);
    a4[31] = v273;
    a4[9] = BYTE2(v268);
    a4[10] = BYTE1(v268);
    a4[21] = BYTE2(v271);
    a4[12] = HIBYTE(v269);
    a4[13] = BYTE2(v269);
    a4[14] = BYTE1(v269);
    a4[16] = HIBYTE(v270);
    a4[17] = BYTE2(v270);
    a4[18] = BYTE1(v270);
    a4[20] = HIBYTE(v271);
    a4[22] = BYTE1(v271);
    a4[24] = HIBYTE(v272);
    a4[25] = BYTE2(v272);
    a4[26] = BYTE1(v272);
    a4[28] = HIBYTE(v273);
    a4[29] = BYTE2(v273);
    a4[30] = BYTE1(v273);
LABEL_21:
    ++v422;
  }
  if ( v422 != 2 )
  {
    memset(a1, 0, 0x20u);
    v6 = v399 ^ v396;
    goto LABEL_21;
  }
  v257 = v293 ^ v314 ^ v224 ^ v364;
  v258 = v342 ^ v368 ^ v396 ^ v399 ^ v225;
  v259 = v355 ^ v406 ^ v305 ^ v328 ^ v283;
  v260 = v404 ^ v299 ^ v322 ^ v219 ^ v349;
  v261 = v346 ^ v295 ^ v318 ^ v226 ^ v372;
  v262 = v291 ^ v311 ^ v223 ^ v362 ^ v334;
  v263 = v287 ^ v302 ^ v325 ^ v378 ^ v352;
  v264 = v408 ^ v308 ^ v331 ^ v222 ^ v359;
  a4[39] = v260;
  a4[43] = v259;
  a4[35] = v258;
  a4[47] = v262;
  a4[51] = v261;
  a4[63] = v338 ^ v257;
  a4[59] = v264;
  a4[37] = BYTE2(v260);
  a4[55] = v263;
  a4[32] = HIBYTE(v258);
  a4[38] = BYTE1(v260);
  a4[33] = BYTE2(v258);
  a4[34] = BYTE1(v258);
  a4[40] = HIBYTE(v259);
  a4[36] = HIBYTE(v260);
  a4[50] = BYTE1(v261);
  a4[41] = BYTE2(v259);
  a4[42] = BYTE1(v259);
  a4[44] = HIBYTE(v262);
  a4[45] = BYTE2(v262);
  a4[46] = BYTE1(v262);
  a4[48] = HIBYTE(v261);
  a4[49] = BYTE2(v261);
  a4[52] = HIBYTE(v263);
  a4[53] = BYTE2(v263);
  a4[54] = BYTE1(v263);
  a4[56] = HIBYTE(v264);
  a4[57] = BYTE2(v264);
  a4[58] = BYTE1(v264);
  a4[60] = (v338 ^ v257) >> 24;
  a4[61] = (v338 ^ v257) >> 16;
  a4[62] = (unsigned __int16)(v338 ^ v257) >> 8;
  memcpy(a1 + 9, &unk_181B68, 0xA0u);
  a1[8] = 0;
  return a1;
}
