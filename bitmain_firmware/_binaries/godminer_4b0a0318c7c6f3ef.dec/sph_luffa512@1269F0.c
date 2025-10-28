unsigned int __fastcall sph_luffa512(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  char *v5; // r0
  int v6; // r9
  int v7; // r2
  int v8; // r12
  int v9; // r11
  int v10; // r7
  int v11; // r6
  int v12; // lr
  int v13; // r4
  int v14; // r10
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r11
  int v18; // r8
  int v19; // r1
  int v20; // r3
  int v21; // r10
  int v22; // r12
  int v23; // r4
  int v24; // lr
  int v25; // r4
  int v26; // r5
  int v27; // r8
  int v28; // r9
  int v29; // r3
  int v30; // r7
  int v31; // r2
  int v32; // r6
  int v33; // r9
  int v34; // r1
  int v35; // lr
  int v36; // r8
  int v37; // r9
  int v38; // lr
  int v39; // r10
  int v40; // r12
  int v41; // r5
  int v42; // r3
  int v43; // r8
  int v44; // r6
  int v45; // r7
  int v46; // r6
  int v47; // r4
  int v48; // r12
  int v49; // r7
  int v50; // r8
  int v51; // r1
  int v52; // r2
  int v53; // r11
  int v54; // r12
  int v55; // r10
  int v56; // r6
  int v57; // r0
  int v58; // lr
  int v59; // r0
  int v60; // r3
  int v61; // r2
  int v62; // r6
  int v63; // r4
  int v64; // r3
  int v65; // r7
  int v66; // r4
  int v67; // r11
  int v68; // r12
  int v69; // r3
  int v70; // r2
  int v71; // r1
  int v72; // r8
  int v73; // r0
  int v74; // r2
  int v75; // r10
  int v76; // r3
  int v77; // lr
  int v78; // r4
  int v79; // r2
  int v80; // r11
  int v81; // r9
  int v82; // r5
  int v83; // r6
  int v84; // r1
  int v85; // r7
  int v86; // r3
  int v87; // r0
  int v88; // r4
  int v89; // r12
  int v90; // r1
  int v91; // r2
  int v92; // r6
  int v93; // r1
  int v94; // r9
  int v95; // r0
  int v96; // r2
  int v97; // r4
  int v98; // lr
  int v99; // r3
  int v100; // r11
  int v101; // r0
  int v102; // r2
  int v103; // r1
  int v104; // r12
  int v105; // lr
  int v106; // r3
  int v107; // r4
  int v108; // r11
  int v109; // r9
  int v110; // r8
  int v111; // r0
  unsigned int v112; // lr
  int v113; // r2
  unsigned int v114; // r3
  int v115; // r12
  unsigned int v116; // r11
  int v117; // r4
  int v118; // r1
  int v119; // r2
  int v120; // r11
  int v121; // r10
  int v122; // r5
  int v123; // r6
  int v124; // r1
  int v125; // r7
  int v126; // r3
  int v127; // r0
  int v128; // r4
  int v129; // r12
  int v130; // r1
  int v131; // r2
  int v132; // r6
  int v133; // r1
  int v134; // r10
  int v135; // r0
  int v136; // r2
  int v137; // r4
  int v138; // lr
  int v139; // r3
  int v140; // r11
  int v141; // r0
  int v142; // r2
  int v143; // r1
  int v144; // r12
  int v145; // lr
  int v146; // r3
  int v147; // r4
  int v148; // r11
  int v149; // r8
  int v150; // r10
  int v151; // r0
  unsigned int v152; // lr
  int v153; // r2
  unsigned int v154; // r3
  int v155; // r12
  unsigned int v156; // r11
  int v157; // r4
  int v158; // r1
  int v159; // r2
  int v160; // r11
  int v161; // r9
  int v162; // r5
  int v163; // r6
  int v164; // r1
  int v165; // r7
  int v166; // r3
  int v167; // r0
  int v168; // r4
  int v169; // r12
  int v170; // r1
  int v171; // r2
  int v172; // r6
  int v173; // r1
  int v174; // r9
  int v175; // r0
  int v176; // r2
  int v177; // r4
  int v178; // lr
  int v179; // r3
  int v180; // r11
  int v181; // r0
  int v182; // r2
  int v183; // r1
  int v184; // r12
  int v185; // lr
  int v186; // r3
  int v187; // r4
  int v188; // r11
  int v189; // r9
  int v190; // r8
  int v191; // r0
  unsigned int v192; // lr
  int v193; // r2
  unsigned int v194; // r3
  int v195; // r12
  unsigned int v196; // r11
  int v197; // r4
  int v198; // r1
  int v199; // r2
  int v200; // r11
  int v201; // r10
  int v202; // r5
  int v203; // r6
  int v204; // r1
  int v205; // r7
  int v206; // r3
  int v207; // r0
  int v208; // r4
  int v209; // r12
  int v210; // r1
  int v211; // r2
  int v212; // r6
  int v213; // r1
  int v214; // r10
  int v215; // r0
  int v216; // r2
  int v217; // r4
  int v218; // lr
  int v219; // r3
  int v220; // r11
  int v221; // r0
  int v222; // r2
  int v223; // r1
  int v224; // r12
  int v225; // lr
  int v226; // r3
  int v227; // r4
  int v228; // r11
  int v229; // r10
  int v230; // r8
  unsigned int v231; // lr
  int v232; // r2
  unsigned int v233; // r3
  int v234; // r12
  size_t v235; // r11
  int v236; // r4
  int v237; // r1
  int v238; // r2
  int v239; // r11
  int v240; // r9
  int v241; // r5
  unsigned int v242; // r6
  int v243; // r1
  int v244; // r7
  int v245; // r3
  unsigned int v246; // r0
  int v247; // r4
  int v248; // r12
  int v249; // r1
  int v250; // r2
  int v251; // r6
  int v252; // r1
  int v253; // r9
  int v254; // r0
  int v255; // r2
  int v256; // r4
  int v257; // lr
  int v258; // r3
  int v259; // r11
  int v260; // r0
  int v261; // r2
  int v262; // r1
  int v263; // r12
  int v264; // lr
  int v265; // r3
  int v266; // r4
  int v267; // r11
  unsigned int v268; // r4
  size_t n; // [sp+0h] [bp-10Ch]
  int v270; // [sp+4h] [bp-108h]
  unsigned int v271; // [sp+4h] [bp-108h]
  int v272; // [sp+4h] [bp-108h]
  int v273; // [sp+4h] [bp-108h]
  int v274; // [sp+4h] [bp-108h]
  int v275; // [sp+4h] [bp-108h]
  int v276; // [sp+4h] [bp-108h]
  unsigned int *v277; // [sp+8h] [bp-104h]
  char *src; // [sp+Ch] [bp-100h]
  int v279; // [sp+10h] [bp-FCh]
  unsigned int v280; // [sp+10h] [bp-FCh]
  int v281; // [sp+14h] [bp-F8h]
  int v282; // [sp+14h] [bp-F8h]
  int v283; // [sp+18h] [bp-F4h]
  int v284; // [sp+18h] [bp-F4h]
  int v285; // [sp+18h] [bp-F4h]
  int v286; // [sp+1Ch] [bp-F0h]
  unsigned int v287; // [sp+1Ch] [bp-F0h]
  int v288; // [sp+20h] [bp-ECh]
  int v289; // [sp+20h] [bp-ECh]
  int v290; // [sp+20h] [bp-ECh]
  unsigned int v291; // [sp+24h] [bp-E8h]
  int v292; // [sp+24h] [bp-E8h]
  unsigned int v293; // [sp+24h] [bp-E8h]
  int v294; // [sp+28h] [bp-E4h]
  unsigned int v295; // [sp+28h] [bp-E4h]
  int v296; // [sp+28h] [bp-E4h]
  unsigned int v297; // [sp+2Ch] [bp-E0h]
  int v298; // [sp+2Ch] [bp-E0h]
  int v299; // [sp+2Ch] [bp-E0h]
  unsigned int v300; // [sp+2Ch] [bp-E0h]
  int v301; // [sp+30h] [bp-DCh]
  int v302; // [sp+30h] [bp-DCh]
  int v303; // [sp+30h] [bp-DCh]
  int v304; // [sp+30h] [bp-DCh]
  int v305; // [sp+30h] [bp-DCh]
  unsigned int v306; // [sp+34h] [bp-D8h]
  int v307; // [sp+34h] [bp-D8h]
  int v308; // [sp+34h] [bp-D8h]
  unsigned int v309; // [sp+34h] [bp-D8h]
  int v310; // [sp+38h] [bp-D4h]
  int v311; // [sp+38h] [bp-D4h]
  int v312; // [sp+38h] [bp-D4h]
  int v313; // [sp+38h] [bp-D4h]
  int v314; // [sp+3Ch] [bp-D0h]
  int v315; // [sp+3Ch] [bp-D0h]
  int v316; // [sp+3Ch] [bp-D0h]
  int v317; // [sp+40h] [bp-CCh]
  int v318; // [sp+40h] [bp-CCh]
  int v319; // [sp+40h] [bp-CCh]
  int v320; // [sp+40h] [bp-CCh]
  unsigned int v321; // [sp+44h] [bp-C8h]
  int v322; // [sp+44h] [bp-C8h]
  int v323; // [sp+44h] [bp-C8h]
  unsigned int v324; // [sp+44h] [bp-C8h]
  int v325; // [sp+48h] [bp-C4h]
  unsigned int v326; // [sp+48h] [bp-C4h]
  int v327; // [sp+48h] [bp-C4h]
  unsigned int v328; // [sp+4Ch] [bp-C0h]
  int v329; // [sp+4Ch] [bp-C0h]
  int v330; // [sp+4Ch] [bp-C0h]
  unsigned int v331; // [sp+4Ch] [bp-C0h]
  int v332; // [sp+50h] [bp-BCh]
  unsigned int v333; // [sp+50h] [bp-BCh]
  int v334; // [sp+50h] [bp-BCh]
  unsigned int v335; // [sp+54h] [bp-B8h]
  int v336; // [sp+54h] [bp-B8h]
  unsigned int v337; // [sp+54h] [bp-B8h]
  int v338; // [sp+58h] [bp-B4h]
  int v339; // [sp+58h] [bp-B4h]
  int v340; // [sp+58h] [bp-B4h]
  int v341; // [sp+58h] [bp-B4h]
  int v342; // [sp+5Ch] [bp-B0h]
  int v343; // [sp+5Ch] [bp-B0h]
  int v344; // [sp+5Ch] [bp-B0h]
  int v345; // [sp+5Ch] [bp-B0h]
  int v346; // [sp+60h] [bp-ACh]
  unsigned int v347; // [sp+60h] [bp-ACh]
  int v348; // [sp+60h] [bp-ACh]
  unsigned int v349; // [sp+64h] [bp-A8h]
  int v350; // [sp+64h] [bp-A8h]
  unsigned int v351; // [sp+64h] [bp-A8h]
  int v352; // [sp+68h] [bp-A4h]
  int v353; // [sp+68h] [bp-A4h]
  int v354; // [sp+68h] [bp-A4h]
  int v355; // [sp+68h] [bp-A4h]
  int v356; // [sp+68h] [bp-A4h]
  unsigned int v357; // [sp+6Ch] [bp-A0h]
  int v358; // [sp+6Ch] [bp-A0h]
  int v359; // [sp+6Ch] [bp-A0h]
  unsigned int v360; // [sp+6Ch] [bp-A0h]
  unsigned int v361; // [sp+70h] [bp-9Ch]
  int v362; // [sp+70h] [bp-9Ch]
  unsigned int v363; // [sp+70h] [bp-9Ch]
  int v364; // [sp+74h] [bp-98h]
  int v365; // [sp+74h] [bp-98h]
  int v366; // [sp+74h] [bp-98h]
  int v367; // [sp+74h] [bp-98h]
  int v368; // [sp+78h] [bp-94h]
  int v369; // [sp+78h] [bp-94h]
  int v370; // [sp+78h] [bp-94h]
  int v371; // [sp+78h] [bp-94h]
  unsigned int v372; // [sp+7Ch] [bp-90h]
  int v373; // [sp+7Ch] [bp-90h]
  int v374; // [sp+7Ch] [bp-90h]
  int v375; // [sp+7Ch] [bp-90h]
  unsigned int v376; // [sp+80h] [bp-8Ch]
  int v377; // [sp+80h] [bp-8Ch]
  int v378; // [sp+80h] [bp-8Ch]
  unsigned int v379; // [sp+80h] [bp-8Ch]
  unsigned int v380; // [sp+84h] [bp-88h]
  int v381; // [sp+84h] [bp-88h]
  int v382; // [sp+84h] [bp-88h]
  unsigned int v383; // [sp+84h] [bp-88h]
  int v384; // [sp+88h] [bp-84h]
  int v385; // [sp+88h] [bp-84h]
  int v386; // [sp+88h] [bp-84h]
  int v387; // [sp+88h] [bp-84h]
  int v388; // [sp+8Ch] [bp-80h]
  int v389; // [sp+8Ch] [bp-80h]
  int v390; // [sp+90h] [bp-7Ch]
  int v391; // [sp+90h] [bp-7Ch]
  int v392; // [sp+90h] [bp-7Ch]
  int v393; // [sp+94h] [bp-78h]
  int v394; // [sp+94h] [bp-78h]
  int v395; // [sp+94h] [bp-78h]
  int v396; // [sp+94h] [bp-78h]
  int v397; // [sp+98h] [bp-74h]
  unsigned int v398; // [sp+98h] [bp-74h]
  int v399; // [sp+98h] [bp-74h]
  size_t v400; // [sp+9Ch] [bp-70h]
  size_t v401; // [sp+9Ch] [bp-70h]
  size_t v402; // [sp+9Ch] [bp-70h]
  size_t v403; // [sp+9Ch] [bp-70h]
  int v404; // [sp+A0h] [bp-6Ch]
  int v405; // [sp+A0h] [bp-6Ch]
  int v406; // [sp+A4h] [bp-68h]
  int v407; // [sp+A8h] [bp-64h]
  int v408; // [sp+A8h] [bp-64h]
  int v409; // [sp+A8h] [bp-64h]
  int v410; // [sp+ACh] [bp-60h]
  int v411; // [sp+ACh] [bp-60h]
  int v412; // [sp+ACh] [bp-60h]
  int v413; // [sp+B0h] [bp-5Ch]
  int v414; // [sp+B0h] [bp-5Ch]
  int v415; // [sp+B0h] [bp-5Ch]
  int v416; // [sp+B4h] [bp-58h]
  int v417; // [sp+B4h] [bp-58h]
  int v418; // [sp+B4h] [bp-58h]
  int v419; // [sp+B8h] [bp-54h]
  int v420; // [sp+B8h] [bp-54h]
  int v421; // [sp+B8h] [bp-54h]
  int v422; // [sp+BCh] [bp-50h]
  int v423; // [sp+BCh] [bp-50h]
  int v424; // [sp+BCh] [bp-50h]
  int v425; // [sp+C0h] [bp-4Ch]
  int v426; // [sp+C0h] [bp-4Ch]
  int v427; // [sp+C0h] [bp-4Ch]
  int v428; // [sp+C4h] [bp-48h]
  int v429; // [sp+C4h] [bp-48h]
  int v430; // [sp+C8h] [bp-44h]
  int v431; // [sp+C8h] [bp-44h]
  int v432; // [sp+CCh] [bp-40h]
  int v433; // [sp+CCh] [bp-40h]
  int v434; // [sp+D0h] [bp-3Ch]
  int v435; // [sp+D4h] [bp-38h]
  int v436; // [sp+D4h] [bp-38h]
  int v437; // [sp+D8h] [bp-34h]
  int v438; // [sp+DCh] [bp-30h]
  int v439; // [sp+E4h] [bp-28h]
  int v440; // [sp+E8h] [bp-24h]
  int v441; // [sp+ECh] [bp-20h]

  v3 = *(_DWORD *)(result + 32);
  v277 = (unsigned int *)result;
  v4 = 32 - v3;
  n = a3;
  src = a2;
  if ( a3 < 32 - v3 )
  {
    v268 = result;
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    *(_DWORD *)(v268 + 32) = n + v3;
  }
  else
  {
    v283 = *(_DWORD *)(result + 36);
    v404 = *(_DWORD *)(result + 40);
    v279 = *(_DWORD *)(result + 44);
    v410 = *(_DWORD *)(result + 48);
    v286 = *(_DWORD *)(result + 52);
    v281 = *(_DWORD *)(result + 56);
    v406 = *(_DWORD *)(result + 60);
    v407 = *(_DWORD *)(result + 64);
    v310 = *(_DWORD *)(result + 68);
    v288 = *(_DWORD *)(result + 72);
    v294 = *(_DWORD *)(result + 76);
    v301 = *(_DWORD *)(result + 80);
    v314 = *(_DWORD *)(result + 84);
    v291 = *(_DWORD *)(result + 88);
    v297 = *(_DWORD *)(result + 92);
    v306 = *(_DWORD *)(result + 96);
    v338 = *(_DWORD *)(result + 100);
    v317 = *(_DWORD *)(result + 104);
    v325 = *(_DWORD *)(result + 108);
    v332 = *(_DWORD *)(result + 112);
    v342 = *(_DWORD *)(result + 116);
    v321 = *(_DWORD *)(result + 120);
    v328 = *(_DWORD *)(result + 124);
    v335 = *(_DWORD *)(result + 128);
    v364 = *(_DWORD *)(result + 132);
    v346 = *(_DWORD *)(result + 136);
    v352 = *(_DWORD *)(result + 140);
    v393 = *(_DWORD *)(result + 144);
    v368 = *(_DWORD *)(result + 148);
    v349 = *(_DWORD *)(result + 152);
    v357 = *(_DWORD *)(result + 156);
    v361 = *(_DWORD *)(result + 160);
    v388 = *(_DWORD *)(result + 164);
    v372 = *(_DWORD *)(result + 168);
    v397 = *(_DWORD *)(result + 172);
    v384 = *(_DWORD *)(result + 176);
    v390 = *(_DWORD *)(result + 180);
    v376 = *(_DWORD *)(result + 184);
    v380 = *(_DWORD *)(result + 188);
    v400 = *(_DWORD *)(result + 192);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v5 = (char *)v277 + v3;
        v3 += v4;
        result = (unsigned int)memcpy(v5, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 32 )
        {
          v6 = v410;
          v7 = v400 ^ v361 ^ v335 ^ v306 ^ v407;
          v8 = v332 ^ v393 ^ v410 ^ v301 ^ v384 ^ v7;
          v9 = v297 ^ v406 ^ v357 ^ v328 ^ v380;
          v10 = v372 ^ v404 ^ v288 ^ v346 ^ v317;
          v411 = v10 ^ v397;
          v11 = v397 ^ v352 ^ v279 ^ v294 ^ v325 ^ v7;
          v12 = v281 ^ v291 ^ v349 ^ v321 ^ v376;
          v413 = v8 ^ v390;
          v13 = v11 ^ v393;
          v270 = v11 ^ v6;
          v14 = v9 ^ v335;
          v336 = v9 ^ v407;
          v15 = v306;
          v307 = v9 ^ v400;
          v16 = v9 ^ v15;
          v17 = v9 ^ v361;
          v394 = v10 ^ v325;
          v362 = v10 ^ v294;
          v401 = v10 ^ v352;
          v381 = v12 ^ v380;
          v18 = v301;
          v19 = v388 ^ v338 ^ v283 ^ v310 ^ v364 ^ v7;
          v302 = v14;
          v353 = v11 ^ v18;
          v432 = v11 ^ v384;
          v419 = v11 ^ v332;
          v408 = v11 ^ v6 ^ v10 ^ v397 ^ v307;
          v416 = v12 ^ v297;
          v425 = v12 ^ v328;
          v358 = v12 ^ v357;
          v20 = v368 ^ v342 ^ v286 ^ v314 ^ v390;
          v298 = v8 ^ v286;
          v329 = v8 ^ v314;
          v422 = v8 ^ v342;
          v385 = v13 ^ v8 ^ v390 ^ v17;
          v434 = v13 ^ v10 ^ v325 ^ v14;
          v21 = v12 ^ v406;
          v326 = bswap32(*v277);
          v22 = v8 ^ v368;
          v315 = v336 ^ v381;
          v295 = bswap32(v277[7]);
          v430 = v19 ^ v372;
          v391 = v10 ^ v279;
          v23 = v283;
          v284 = v307 ^ v358;
          v24 = v20 ^ v281;
          v25 = v7 ^ v23;
          v343 = v11 ^ v6 ^ v329;
          v26 = v20 ^ v291;
          v27 = v20 ^ v349;
          v428 = v7 ^ v364;
          v28 = v20 ^ v321;
          v29 = v20 ^ v376;
          v280 = bswap32(v277[6]);
          v398 = bswap32(v277[2]);
          v333 = bswap32(v277[1]);
          v369 = v270 ^ v411 ^ v307 ^ v336 ^ v381 ^ v385;
          v287 = bswap32(v277[4]);
          v271 = bswap32(v277[5]);
          v30 = v19 ^ v346;
          v292 = v19 ^ v404;
          v322 = v19 ^ v288;
          v318 = v19 ^ v317;
          v311 = v7 ^ v310;
          v377 = v7 ^ v338;
          v31 = v7 ^ v388;
          v373 = v25 ^ v307;
          v344 = v343 ^ v336;
          v435 = v24 ^ v413;
          v365 = v24 ^ v416;
          v289 = v416 ^ v302;
          v405 = v329 ^ v28;
          v414 = v28 ^ v358;
          v32 = v419 ^ v22;
          v417 = v22 ^ v29;
          v33 = v422;
          v34 = v362 ^ v16 ^ v419;
          v423 = v21 ^ v29;
          v35 = v27 ^ v381;
          v36 = v27 ^ v33;
          v420 = v35;
          v37 = v353 ^ v33 ^ v16;
          v38 = v21 ^ v16;
          v39 = v32 ^ v302;
          v347 = bswap32(v277[3]);
          v40 = v401 ^ v17 ^ v432;
          v382 = v298 ^ v432 ^ v307;
          v350 = v298 ^ v26;
          v41 = v26 ^ v425;
          v282 = v425 ^ v17;
          v330 = v30;
          v426 = v369 ^ v287;
          v370 = v30 ^ v411;
          v395 = v322 ^ v394;
          v439 = v36 ^ v385;
          v339 = v292 ^ v362;
          v299 = v318 ^ v401;
          v42 = v41 ^ v36;
          v43 = v31 ^ v307;
          v402 = v17 ^ v31;
          v386 = v302 ^ v428;
          v44 = v377 ^ v302;
          v359 = v16 ^ v377;
          v308 = v430 ^ v17 ^ v428;
          v378 = v391 ^ v430;
          v303 = v336 ^ v311;
          v45 = v311 ^ v16;
          v354 = v353 ^ v391 ^ v336;
          v433 = v34 ^ v289 ^ v344;
          v312 = v322 ^ v25 ^ v336;
          v46 = v44 ^ v330;
          v47 = v40 ^ v284 ^ v39;
          v48 = v40 ^ v391 ^ v430;
          v437 = v405 ^ v39;
          v49 = v45 ^ v318;
          v323 = v34 ^ v299;
          v392 = __ROR4__(v426 ^ v271 ^ v326 ^ v295, 28);
          v50 = v43 ^ v292;
          v441 = v48 ^ v315;
          v440 = v373 ^ v315 ^ v308 ^ v287;
          v331 = __ROR4__(v42 ^ v287, 30);
          v429 = v292 ^ v362 ^ v408 ^ v38;
          v293 = __ROR4__(v37 ^ v350 ^ v287, 31);
          v438 = v434 ^ v370 ^ v284;
          v427 = v299 ^ v308;
          v300 = __ROR4__(v365 ^ v405 ^ v271, 31);
          v51 = v420 ^ v435;
          v309 = __ROR4__(v280 ^ v38 ^ v41, 31);
          v319 = v38 ^ v373;
          v431 = v344 ^ v435;
          v52 = v282 ^ v420 ^ v287;
          v53 = v284 ^ v423;
          v424 = v350 ^ v423;
          v421 = v339 ^ v49;
          v54 = v414 ^ v417;
          v55 = v323 ^ v282;
          v363 = __ROR4__(v52, 29);
          v412 = v370 ^ v50;
          v337 = __ROR4__(v289 ^ v414 ^ v271, 30);
          v409 = v312 ^ v378;
          v340 = v365 ^ v315;
          v366 = v402 ^ v315;
          v436 = v402 ^ v284 ^ v46;
          v415 = v395 ^ v46;
          v56 = v354 ^ v395;
          v57 = v354 ^ v38;
          v58 = v38 ^ v303 ^ v50;
          v59 = v57 ^ v382;
          v60 = v271 ^ v333 ^ v280;
          v61 = v280 ^ v398 ^ v295;
          v355 = v47 ^ v60;
          v374 = v417 ^ v382 ^ v60;
          v62 = v56 ^ v289;
          v63 = v359 ^ v289 ^ v312;
          v304 = v303 ^ v289;
          v64 = v386 ^ v284;
          v418 = v386 ^ v282 ^ v49;
          v65 = v359 ^ v282;
          v316 = __ROR4__(v433 ^ v347 ^ v295, 31);
          v324 = __ROR4__(v437 ^ v347 ^ v295, 30);
          v360 = __ROR4__(v54 ^ v347 ^ v295, 29);
          v403 = __ROR4__(v53 ^ v347 ^ v295, 28);
          v345 = __ROR4__(v434 ^ v282 ^ v37 ^ v61, 30);
          v351 = __ROR4__(v439 ^ v61, 29);
          v371 = __ROR4__(v355, 29);
          v383 = __ROR4__(v61 ^ v51, 28);
          v396 = v438 ^ v271 ^ v326 ^ v295;
          v379 = __ROR4__(v374, 28);
          v285 = v326 ^ v319;
          v375 = v440 ^ v271;
          v66 = v63 ^ v326 ^ v295;
          v327 = v415 ^ v326 ^ v295;
          v290 = v66;
          v313 = v295 ^ v304;
          v67 = v295 ^ v340;
          v389 = v287 ^ v366;
          v367 = v271 ^ v64;
          v341 = v280 ^ v65;
          v387 = v441 ^ v287 ^ v280 ^ v295;
          v320 = v418 ^ v280 ^ v295;
          v356 = v427 ^ v280 ^ v295;
          v68 = v429 ^ v347;
          v305 = v62 ^ v398 ^ v295;
          v69 = v398 ^ v409;
          v70 = v58 ^ v333;
          v71 = v59 ^ v287;
          v296 = v333 ^ v421;
          v334 = v55 ^ v333 ^ v280;
          v399 = v412 ^ v271 ^ v280;
          v72 = 0;
          v73 = v70;
          v348 = v436 ^ v271 ^ v280;
          v74 = v69;
          v75 = -533497832;
          v76 = v424 ^ v280;
          v77 = v431 ^ v271;
          v78 = v285;
          v272 = 809079974;
          while ( 1 )
          {
            v79 = v74 ^ v68;
            v80 = v67 ^ v71;
            v81 = v79 ^ v78 & v68;
            v82 = (v77 | v76) ^ v71;
            v83 = v78 & v68 ^ ~v73;
            v84 = v71 & v77;
            v85 = v83 | v81;
            v86 = ~v76 ^ v84;
            v87 = (v78 | v73) ^ v68;
            v88 = v78 ^ (v83 | v81);
            v89 = v80 & v82 ^ v86;
            v90 = v84 ^ v80;
            v91 = v79 & v87 ^ v83;
            v92 = v86 | v90;
            v93 = v90 ^ v88 ^ v89;
            v94 = v81 ^ v91;
            v95 = ~v87 ^ v85;
            v96 = v91 & v85;
            v97 = v93 ^ __ROR4__(v88, 30);
            v98 = v77 ^ v92 ^ v95;
            v99 = ~v82 ^ v92 ^ v96;
            v100 = v89 & v92 ^ v94;
            v101 = v98 ^ __ROR4__(v95, 30);
            v102 = v99 ^ __ROR4__(v96, 30);
            v103 = v97 ^ __ROR4__(v93, 18);
            v104 = v100 ^ __ROR4__(v94, 30);
            v105 = v101 ^ __ROR4__(v98, 18);
            v106 = v102 ^ __ROR4__(v99, 18);
            v107 = v103 ^ __ROR4__(v97, 22);
            v108 = v104 ^ __ROR4__(v100, 18);
            v73 = v105 ^ __ROR4__(v101, 22);
            v74 = v106 ^ __ROR4__(v102, 22);
            v68 = v108 ^ __ROR4__(v104, 22);
            v77 = __ROR4__(v105, 31);
            v76 = __ROR4__(v106, 31);
            v71 = v75 ^ __ROR4__(v103, 31);
            v67 = __ROR4__(v108, 31);
            ++v72;
            v78 = v107 ^ v272;
            if ( v72 == 8 )
              break;
            v272 = dword_180180[v72];
            v75 = dword_1801A0[v72];
          }
          v109 = 23617341;
          v404 = v73;
          v281 = v77;
          v110 = 0;
          v279 = v74;
          v406 = v76;
          v410 = v68;
          v407 = v67;
          v283 = v78;
          v286 = v71;
          v111 = v290;
          v112 = v293;
          v113 = v296;
          v114 = v300;
          v115 = v305;
          v116 = v309;
          v117 = v313;
          v118 = v316;
          v273 = -1226960659;
          while ( 1 )
          {
            v119 = v113 ^ v115;
            v120 = v116 ^ v118;
            v121 = v119 ^ v117 & v115;
            v122 = (v112 | v114) ^ v118;
            v123 = v117 & v115 ^ ~v111;
            v124 = v118 & v112;
            v125 = v123 | v121;
            v126 = ~v114 ^ v124;
            v127 = (v117 | v111) ^ v115;
            v128 = v117 ^ (v123 | v121);
            v129 = v120 & v122 ^ v126;
            v130 = v124 ^ v120;
            v131 = v119 & v127 ^ v123;
            v132 = v126 | v130;
            v133 = v130 ^ v128 ^ v129;
            v134 = v121 ^ v131;
            v135 = ~v127 ^ v125;
            v136 = v131 & v125;
            v137 = v133 ^ __ROR4__(v128, 30);
            v138 = v112 ^ v132 ^ v135;
            v139 = ~v122 ^ v132 ^ v136;
            v140 = v129 & v132 ^ v134;
            v141 = v138 ^ __ROR4__(v135, 30);
            v142 = v139 ^ __ROR4__(v136, 30);
            v143 = v137 ^ __ROR4__(v133, 18);
            v144 = v140 ^ __ROR4__(v134, 30);
            v145 = v141 ^ __ROR4__(v138, 18);
            v146 = v142 ^ __ROR4__(v139, 18);
            v147 = v143 ^ __ROR4__(v137, 22);
            v148 = v144 ^ __ROR4__(v140, 18);
            v111 = v145 ^ __ROR4__(v141, 22);
            v113 = v146 ^ __ROR4__(v142, 22);
            v115 = v148 ^ __ROR4__(v144, 22);
            v112 = __ROR4__(v145, 31);
            v114 = __ROR4__(v146, 31);
            v118 = v109 ^ __ROR4__(v143, 31);
            v116 = __ROR4__(v148, 31);
            ++v110;
            v117 = v147 ^ v273;
            if ( v110 == 8 )
              break;
            v273 = dword_1801C0[v110];
            v109 = dword_1801E0[v110];
          }
          v149 = 0;
          v288 = v111;
          v291 = v112;
          v294 = v113;
          v297 = v114;
          v301 = v115;
          v306 = v116;
          v310 = v117;
          v314 = v118;
          v150 = -497126719;
          v151 = v320;
          v152 = v324;
          v153 = v327;
          v154 = v331;
          v155 = v334;
          v156 = v337;
          v157 = v341;
          v158 = v345;
          v274 = -64955950;
          while ( 1 )
          {
            v159 = v153 ^ v155;
            v160 = v156 ^ v158;
            v161 = v159 ^ v157 & v155;
            v162 = (v152 | v154) ^ v158;
            v163 = v157 & v155 ^ ~v151;
            v164 = v158 & v152;
            v165 = v163 | v161;
            v166 = ~v154 ^ v164;
            v167 = (v157 | v151) ^ v155;
            v168 = v157 ^ (v163 | v161);
            v169 = v160 & v162 ^ v166;
            v170 = v164 ^ v160;
            v171 = v159 & v167 ^ v163;
            v172 = v166 | v170;
            v173 = v170 ^ v168 ^ v169;
            v174 = v161 ^ v171;
            v175 = ~v167 ^ v165;
            v176 = v171 & v165;
            v177 = v173 ^ __ROR4__(v168, 30);
            v178 = v152 ^ v172 ^ v175;
            v179 = ~v162 ^ v172 ^ v176;
            v180 = v169 & v172 ^ v174;
            v181 = v178 ^ __ROR4__(v175, 30);
            v182 = v179 ^ __ROR4__(v176, 30);
            v183 = v177 ^ __ROR4__(v173, 18);
            v184 = v180 ^ __ROR4__(v174, 30);
            v185 = v181 ^ __ROR4__(v178, 18);
            v186 = v182 ^ __ROR4__(v179, 18);
            v187 = v183 ^ __ROR4__(v177, 22);
            v188 = v184 ^ __ROR4__(v180, 18);
            v151 = v185 ^ __ROR4__(v181, 22);
            v153 = v186 ^ __ROR4__(v182, 22);
            v155 = v188 ^ __ROR4__(v184, 22);
            v152 = __ROR4__(v185, 31);
            v154 = __ROR4__(v186, 31);
            v158 = v150 ^ __ROR4__(v183, 31);
            v156 = __ROR4__(v188, 31);
            ++v149;
            v157 = v187 ^ v274;
            if ( v149 == 8 )
              break;
            v274 = dword_180200[v149];
            v150 = dword_180220[v149];
          }
          v189 = -534197825;
          v317 = v151;
          v321 = v152;
          v190 = 0;
          v325 = v153;
          v328 = v154;
          v332 = v155;
          v335 = v156;
          v338 = v157;
          v342 = v158;
          v191 = v348;
          v192 = v351;
          v193 = v356;
          v194 = v360;
          v195 = v396;
          v196 = v363;
          v197 = v367;
          v198 = v371;
          v275 = -1307332699;
          while ( 1 )
          {
            v199 = v193 ^ v195;
            v200 = v196 ^ v198;
            v201 = v199 ^ v197 & v195;
            v202 = (v192 | v194) ^ v198;
            v203 = v197 & v195 ^ ~v191;
            v204 = v198 & v192;
            v205 = v203 | v201;
            v206 = ~v194 ^ v204;
            v207 = (v197 | v191) ^ v195;
            v208 = v197 ^ (v203 | v201);
            v209 = v200 & v202 ^ v206;
            v210 = v204 ^ v200;
            v211 = v199 & v207 ^ v203;
            v212 = v206 | v210;
            v213 = v210 ^ v208 ^ v209;
            v214 = v201 ^ v211;
            v215 = ~v207 ^ v205;
            v216 = v211 & v205;
            v217 = v213 ^ __ROR4__(v208, 30);
            v218 = v192 ^ v212 ^ v215;
            v219 = ~v202 ^ v212 ^ v216;
            v220 = v209 & v212 ^ v214;
            v221 = v218 ^ __ROR4__(v215, 30);
            v222 = v219 ^ __ROR4__(v216, 30);
            v223 = v217 ^ __ROR4__(v213, 18);
            v224 = v220 ^ __ROR4__(v214, 30);
            v225 = v221 ^ __ROR4__(v218, 18);
            v226 = v222 ^ __ROR4__(v219, 18);
            v227 = v223 ^ __ROR4__(v217, 22);
            v228 = v224 ^ __ROR4__(v220, 18);
            v191 = v225 ^ __ROR4__(v221, 22);
            v193 = v226 ^ __ROR4__(v222, 22);
            v195 = v228 ^ __ROR4__(v224, 22);
            v192 = __ROR4__(v225, 31);
            v194 = __ROR4__(v226, 31);
            v198 = v189 ^ __ROR4__(v223, 31);
            v196 = __ROR4__(v228, 31);
            ++v190;
            v197 = v227 ^ v275;
            if ( v190 == 8 )
              break;
            v275 = dword_1802E0[v190];
            v189 = dword_180300[v190];
          }
          v229 = 1351669111;
          v352 = v193;
          v357 = v194;
          v346 = v191;
          v349 = v192;
          v230 = 0;
          v393 = v195;
          v361 = v196;
          v364 = v197;
          v368 = v198;
          result = v375;
          v231 = v379;
          v232 = v399;
          v233 = v383;
          v234 = v387;
          v235 = v403;
          v236 = v389;
          v237 = v392;
          v276 = -254613021;
          while ( 1 )
          {
            v238 = v232 ^ v234;
            v239 = v235 ^ v237;
            v240 = v238 ^ v236 & v234;
            v241 = (v231 | v233) ^ v237;
            v242 = v236 & v234 ^ ~result;
            v243 = v237 & v231;
            v244 = v242 | v240;
            v245 = ~v233 ^ v243;
            v246 = (v236 | result) ^ v234;
            v247 = v236 ^ (v242 | v240);
            v248 = v239 & v241 ^ v245;
            v249 = v243 ^ v239;
            v250 = v238 & v246 ^ v242;
            v251 = v245 | v249;
            v252 = v249 ^ v247 ^ v248;
            v253 = v240 ^ v250;
            v254 = ~v246 ^ v244;
            v255 = v250 & v244;
            v256 = v252 ^ __ROR4__(v247, 30);
            v257 = v231 ^ v251 ^ v254;
            v258 = ~v241 ^ v251 ^ v255;
            v259 = v248 & v251 ^ v253;
            v260 = v257 ^ __ROR4__(v254, 30);
            v261 = v258 ^ __ROR4__(v255, 30);
            v262 = v256 ^ __ROR4__(v252, 18);
            v263 = v259 ^ __ROR4__(v253, 30);
            v264 = v260 ^ __ROR4__(v257, 18);
            v265 = v261 ^ __ROR4__(v258, 18);
            v266 = v262 ^ __ROR4__(v256, 22);
            v267 = v263 ^ __ROR4__(v259, 18);
            result = v264 ^ __ROR4__(v260, 22);
            v232 = v265 ^ __ROR4__(v261, 22);
            v234 = v267 ^ __ROR4__(v263, 22);
            v231 = __ROR4__(v264, 31);
            v233 = __ROR4__(v265, 31);
            v237 = v229 ^ __ROR4__(v262, 31);
            v235 = __ROR4__(v267, 31);
            ++v230;
            v236 = v266 ^ v276;
            if ( v230 == 8 )
              break;
            v276 = dword_180320[v230];
            v229 = dword_180340[v230];
          }
          v380 = v233;
          v3 = 0;
          v372 = result;
          v376 = v231;
          v397 = v232;
          v384 = v234;
          v400 = v235;
          v388 = v236;
          v390 = v237;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 32 - v3;
      }
    }
    v277[9] = v283;
    v277[10] = v404;
    v277[11] = v279;
    v277[12] = v410;
    v277[13] = v286;
    v277[14] = v281;
    v277[15] = v406;
    v277[16] = v407;
    v277[17] = v310;
    v277[18] = v288;
    v277[19] = v294;
    v277[20] = v301;
    v277[21] = v314;
    v277[22] = v291;
    v277[23] = v297;
    v277[24] = v306;
    v277[25] = v338;
    v277[26] = v317;
    v277[27] = v325;
    v277[28] = v332;
    v277[29] = v342;
    v277[30] = v321;
    v277[31] = v328;
    v277[32] = v335;
    v277[33] = v364;
    v277[34] = v346;
    v277[35] = v352;
    v277[36] = v393;
    v277[37] = v368;
    v277[38] = v349;
    v277[39] = v357;
    v277[40] = v361;
    v277[8] = v3;
    v277[41] = v388;
    v277[42] = v372;
    v277[43] = v397;
    v277[44] = v384;
    v277[45] = v390;
    v277[46] = v376;
    v277[47] = v380;
    v277[48] = v400;
  }
  return result;
}
