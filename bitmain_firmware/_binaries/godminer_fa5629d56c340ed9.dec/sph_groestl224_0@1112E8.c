void *__fastcall sph_groestl224_0(_DWORD *a1, char *a2, size_t a3)
{
  int v3; // r8
  _BYTE *v4; // r6
  int *v5; // r7
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // lr
  int v10; // r2
  int v11; // r3
  size_t i; // r4
  char *v13; // r0
  int *v14; // r12
  _BYTE *v15; // r0
  int *v16; // r1
  _DWORD *v17; // r3
  int v18; // r6
  int v19; // t1
  int v20; // t1
  int v21; // r4
  int v22; // r2
  int v23; // lr
  int v24; // r11
  int v25; // r3
  unsigned int v26; // r6
  unsigned int v27; // r4
  int v28; // r0
  unsigned int v29; // r5
  int v30; // r9
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r10
  _QWORD *v34; // r4
  _QWORD *v35; // lr
  int v36; // r12
  int v37; // r0
  int v38; // r9
  int v39; // r12
  int v40; // r11
  int *v41; // r10
  int v42; // r12
  int v43; // r10
  int v44; // r8
  _QWORD *v45; // r4
  int v46; // r5
  _DWORD *v47; // r12
  int v48; // r5
  int v49; // r1
  int v50; // r1
  int v51; // r3
  int v52; // r0
  __int64 v53; // r0
  int v54; // r9
  int v55; // r2
  int v56; // r11
  int v57; // r3
  _QWORD *v58; // r8
  _QWORD *v59; // r4
  int v60; // r5
  _QWORD *v61; // r6
  int v62; // r3
  int v63; // r4
  unsigned int v64; // r7
  unsigned int v65; // r9
  unsigned int v66; // r12
  _QWORD *v67; // lr
  __int64 v68; // r10
  int v69; // r8
  _QWORD *v70; // r9
  int v71; // r6
  __int64 v72; // r2
  int v73; // r12
  int v74; // r4
  int *v75; // r5
  int v76; // lr
  __int64 v77; // r2
  int v78; // r7
  int v79; // r5
  int v80; // r4
  int v81; // r5
  int v82; // r7
  int v83; // r12
  int v84; // r6
  int v85; // r12
  int v86; // r9
  int v87; // r9
  int v88; // r7
  int v89; // r8
  int v90; // r6
  int v91; // r9
  int v92; // r7
  int v93; // r2
  int v94; // r7
  int v95; // r0
  int v96; // r9
  int v97; // r6
  int v98; // r10
  int v99; // r2
  int v100; // r3
  int v101; // r12
  unsigned int v102; // lr
  _QWORD *v103; // r7
  _QWORD *v104; // r10
  _QWORD *v105; // r4
  int v106; // r2
  unsigned int v107; // r8
  int v108; // r10
  int v109; // r12
  _QWORD *v110; // r11
  int v111; // r4
  _QWORD *v112; // r5
  int v113; // lr
  int v114; // r1
  int v115; // r4
  int v116; // r5
  int v117; // r1
  int v118; // r2
  _QWORD *v119; // r5
  _QWORD *v120; // r11
  int v121; // r2
  int v122; // r1
  int v123; // lr
  int v124; // r2
  int v125; // r7
  unsigned int v126; // r3
  int v127; // r1
  int v128; // r2
  __int64 v129; // r0
  int v130; // r3
  unsigned int v131; // r2
  __int64 v132; // r0
  int v133; // r3
  unsigned int v134; // r7
  int *v135; // r3
  int v136; // r2
  __int64 v137; // r8
  _QWORD *v138; // r12
  int v139; // r4
  __int64 v140; // r10
  int v141; // r3
  int v142; // r2
  int v143; // r6
  int v144; // r7
  int v145; // r12
  int v146; // lr
  int v147; // r2
  _QWORD *v148; // r7
  int v149; // r12
  int v150; // r2
  int v151; // r12
  int v152; // r7
  int v153; // r6
  int v154; // r5
  int v155; // r3
  int v156; // r7
  int v157; // r11
  int *v158; // r12
  __int64 *v159; // r0
  int v160; // r5
  int v161; // r4
  int v162; // r3
  int v163; // r2
  int v164; // lr
  int v165; // t1
  int v166; // r4
  int v167; // r2
  _DWORD *v168; // r12
  __int64 *v169; // r5
  void *result; // r0
  int v171; // r1
  int v172; // r2
  int v173; // r3
  size_t v175; // r4
  __int64 v176; // [sp+0h] [bp-1BCh]
  __int64 v177; // [sp+0h] [bp-1BCh]
  __int64 v178; // [sp+10h] [bp-1ACh]
  int v179; // [sp+10h] [bp-1ACh]
  int v180; // [sp+10h] [bp-1ACh]
  unsigned int v181; // [sp+10h] [bp-1ACh]
  int v182; // [sp+10h] [bp-1ACh]
  int v183; // [sp+14h] [bp-1A8h]
  int v184; // [sp+14h] [bp-1A8h]
  unsigned int v185; // [sp+14h] [bp-1A8h]
  _QWORD *v186; // [sp+14h] [bp-1A8h]
  int v187; // [sp+18h] [bp-1A4h]
  unsigned int v188; // [sp+18h] [bp-1A4h]
  unsigned int v189; // [sp+18h] [bp-1A4h]
  int v190; // [sp+18h] [bp-1A4h]
  unsigned int v191; // [sp+18h] [bp-1A4h]
  _QWORD *v192; // [sp+18h] [bp-1A4h]
  unsigned int v193; // [sp+1Ch] [bp-1A0h]
  unsigned int v194; // [sp+1Ch] [bp-1A0h]
  int v195; // [sp+1Ch] [bp-1A0h]
  int v196; // [sp+1Ch] [bp-1A0h]
  unsigned int v197; // [sp+1Ch] [bp-1A0h]
  int v198; // [sp+1Ch] [bp-1A0h]
  int v199; // [sp+20h] [bp-19Ch]
  unsigned int v200; // [sp+20h] [bp-19Ch]
  int v201; // [sp+20h] [bp-19Ch]
  int v202; // [sp+20h] [bp-19Ch]
  unsigned int v203; // [sp+20h] [bp-19Ch]
  int v204; // [sp+20h] [bp-19Ch]
  unsigned int v205; // [sp+20h] [bp-19Ch]
  int v206; // [sp+20h] [bp-19Ch]
  int v207; // [sp+20h] [bp-19Ch]
  unsigned int v208; // [sp+24h] [bp-198h]
  unsigned int v209; // [sp+24h] [bp-198h]
  int v210; // [sp+24h] [bp-198h]
  unsigned int v211; // [sp+24h] [bp-198h]
  unsigned int v212; // [sp+24h] [bp-198h]
  int v213; // [sp+28h] [bp-194h]
  unsigned int v214; // [sp+28h] [bp-194h]
  unsigned int v215; // [sp+28h] [bp-194h]
  int v216; // [sp+28h] [bp-194h]
  unsigned int v217; // [sp+28h] [bp-194h]
  int v218; // [sp+28h] [bp-194h]
  unsigned int v219; // [sp+2Ch] [bp-190h]
  unsigned int v220; // [sp+2Ch] [bp-190h]
  int v221; // [sp+2Ch] [bp-190h]
  unsigned int v222; // [sp+2Ch] [bp-190h]
  unsigned int v223; // [sp+2Ch] [bp-190h]
  int v224; // [sp+2Ch] [bp-190h]
  int v225; // [sp+30h] [bp-18Ch]
  unsigned int v226; // [sp+30h] [bp-18Ch]
  _QWORD *v227; // [sp+30h] [bp-18Ch]
  unsigned int v228; // [sp+30h] [bp-18Ch]
  int v229; // [sp+30h] [bp-18Ch]
  unsigned int v230; // [sp+30h] [bp-18Ch]
  unsigned int v231; // [sp+30h] [bp-18Ch]
  int v232; // [sp+34h] [bp-188h]
  _QWORD *v233; // [sp+34h] [bp-188h]
  unsigned int v234; // [sp+34h] [bp-188h]
  unsigned int v235; // [sp+34h] [bp-188h]
  unsigned int v236; // [sp+34h] [bp-188h]
  int v237; // [sp+34h] [bp-188h]
  int v238; // [sp+38h] [bp-184h]
  unsigned int v239; // [sp+38h] [bp-184h]
  _QWORD *v240; // [sp+38h] [bp-184h]
  unsigned int v241; // [sp+38h] [bp-184h]
  unsigned int v242; // [sp+38h] [bp-184h]
  int v243; // [sp+38h] [bp-184h]
  int v244; // [sp+3Ch] [bp-180h]
  unsigned int v245; // [sp+3Ch] [bp-180h]
  unsigned int v246; // [sp+3Ch] [bp-180h]
  int v247; // [sp+3Ch] [bp-180h]
  int v248; // [sp+3Ch] [bp-180h]
  unsigned int v249; // [sp+3Ch] [bp-180h]
  _QWORD *v250; // [sp+3Ch] [bp-180h]
  int v251; // [sp+40h] [bp-17Ch]
  int v252; // [sp+40h] [bp-17Ch]
  int v253; // [sp+40h] [bp-17Ch]
  unsigned int v254; // [sp+40h] [bp-17Ch]
  __int16 v255; // [sp+40h] [bp-17Ch]
  _QWORD *v256; // [sp+40h] [bp-17Ch]
  unsigned int v257; // [sp+40h] [bp-17Ch]
  _QWORD *v258; // [sp+40h] [bp-17Ch]
  size_t n; // [sp+44h] [bp-178h]
  int v260; // [sp+48h] [bp-174h]
  int v261; // [sp+48h] [bp-174h]
  int v262; // [sp+48h] [bp-174h]
  unsigned int v263; // [sp+48h] [bp-174h]
  int v264; // [sp+48h] [bp-174h]
  unsigned int v265; // [sp+48h] [bp-174h]
  int v266; // [sp+48h] [bp-174h]
  int v267; // [sp+4Ch] [bp-170h]
  int v268; // [sp+4Ch] [bp-170h]
  int v269; // [sp+4Ch] [bp-170h]
  unsigned int v270; // [sp+4Ch] [bp-170h]
  int v271; // [sp+50h] [bp-16Ch]
  unsigned int v272; // [sp+50h] [bp-16Ch]
  int v273; // [sp+50h] [bp-16Ch]
  unsigned int v274; // [sp+50h] [bp-16Ch]
  __int64 v275; // [sp+50h] [bp-16Ch]
  int v276; // [sp+54h] [bp-168h]
  int v277; // [sp+54h] [bp-168h]
  int v278; // [sp+54h] [bp-168h]
  _QWORD *v279; // [sp+54h] [bp-168h]
  unsigned int v280; // [sp+54h] [bp-168h]
  unsigned int v281; // [sp+54h] [bp-168h]
  _QWORD *v282; // [sp+54h] [bp-168h]
  int v283; // [sp+58h] [bp-164h]
  unsigned int v284; // [sp+58h] [bp-164h]
  int v285; // [sp+58h] [bp-164h]
  _QWORD *v286; // [sp+58h] [bp-164h]
  int v287; // [sp+58h] [bp-164h]
  unsigned int v288; // [sp+58h] [bp-164h]
  _DWORD *v289; // [sp+5Ch] [bp-160h]
  int v290; // [sp+5Ch] [bp-160h]
  int v291; // [sp+5Ch] [bp-160h]
  int v292; // [sp+5Ch] [bp-160h]
  _QWORD *v293; // [sp+5Ch] [bp-160h]
  _DWORD *v294; // [sp+5Ch] [bp-160h]
  _QWORD *v295; // [sp+5Ch] [bp-160h]
  int v296; // [sp+5Ch] [bp-160h]
  unsigned int v297; // [sp+5Ch] [bp-160h]
  _QWORD *v298; // [sp+60h] [bp-15Ch]
  _QWORD *v299; // [sp+60h] [bp-15Ch]
  int v300; // [sp+60h] [bp-15Ch]
  unsigned int v301; // [sp+60h] [bp-15Ch]
  _QWORD *v302; // [sp+64h] [bp-158h]
  int v303; // [sp+64h] [bp-158h]
  int v304; // [sp+64h] [bp-158h]
  _DWORD *v305; // [sp+64h] [bp-158h]
  _QWORD *v306; // [sp+64h] [bp-158h]
  int v307; // [sp+64h] [bp-158h]
  unsigned int v308; // [sp+64h] [bp-158h]
  unsigned int v309; // [sp+68h] [bp-154h]
  _QWORD *v310; // [sp+68h] [bp-154h]
  _QWORD *v311; // [sp+68h] [bp-154h]
  int v312; // [sp+68h] [bp-154h]
  int v313; // [sp+68h] [bp-154h]
  __int64 v314; // [sp+6Ch] [bp-150h]
  unsigned int v315; // [sp+70h] [bp-14Ch]
  int v316; // [sp+74h] [bp-148h]
  int v317; // [sp+74h] [bp-148h]
  _QWORD *v318; // [sp+74h] [bp-148h]
  __int64 v319; // [sp+74h] [bp-148h]
  int v320; // [sp+78h] [bp-144h]
  _QWORD *v321; // [sp+78h] [bp-144h]
  _QWORD *v322; // [sp+7Ch] [bp-140h]
  _QWORD *v323; // [sp+7Ch] [bp-140h]
  _QWORD *v324; // [sp+7Ch] [bp-140h]
  _QWORD *v325; // [sp+7Ch] [bp-140h]
  int v326; // [sp+7Ch] [bp-140h]
  _QWORD *v327; // [sp+7Ch] [bp-140h]
  _QWORD *v328; // [sp+7Ch] [bp-140h]
  _DWORD *v329; // [sp+7Ch] [bp-140h]
  _DWORD *v330; // [sp+80h] [bp-13Ch]
  unsigned int v331; // [sp+80h] [bp-13Ch]
  int v332; // [sp+80h] [bp-13Ch]
  int v333; // [sp+80h] [bp-13Ch]
  _QWORD *v334; // [sp+80h] [bp-13Ch]
  _QWORD *v335; // [sp+80h] [bp-13Ch]
  int v336; // [sp+80h] [bp-13Ch]
  char *src; // [sp+84h] [bp-138h]
  _QWORD *v338; // [sp+88h] [bp-134h]
  _QWORD *v339; // [sp+88h] [bp-134h]
  int v340; // [sp+88h] [bp-134h]
  unsigned int v341; // [sp+88h] [bp-134h]
  int v342; // [sp+88h] [bp-134h]
  _QWORD *v343; // [sp+88h] [bp-134h]
  int v344; // [sp+8Ch] [bp-130h]
  _DWORD *v345; // [sp+8Ch] [bp-130h]
  _QWORD *v346; // [sp+8Ch] [bp-130h]
  _QWORD *v347; // [sp+8Ch] [bp-130h]
  _QWORD *v348; // [sp+90h] [bp-12Ch]
  int v349; // [sp+90h] [bp-12Ch]
  _QWORD *v350; // [sp+90h] [bp-12Ch]
  _QWORD *v351; // [sp+90h] [bp-12Ch]
  _QWORD *v352; // [sp+90h] [bp-12Ch]
  _QWORD *v353; // [sp+90h] [bp-12Ch]
  _QWORD *v354; // [sp+94h] [bp-128h]
  int v355; // [sp+94h] [bp-128h]
  unsigned int v356; // [sp+94h] [bp-128h]
  int v357; // [sp+94h] [bp-128h]
  _QWORD *v358; // [sp+98h] [bp-124h]
  int v359; // [sp+98h] [bp-124h]
  int v360; // [sp+98h] [bp-124h]
  _QWORD *v361; // [sp+98h] [bp-124h]
  _QWORD *v362; // [sp+98h] [bp-124h]
  int v363; // [sp+9Ch] [bp-120h]
  int v364; // [sp+9Ch] [bp-120h]
  int v365; // [sp+9Ch] [bp-120h]
  _QWORD *v366; // [sp+9Ch] [bp-120h]
  int v367; // [sp+9Ch] [bp-120h]
  int v368; // [sp+9Ch] [bp-120h]
  _QWORD *v369; // [sp+A0h] [bp-11Ch]
  _DWORD *v370; // [sp+A0h] [bp-11Ch]
  _QWORD *v371; // [sp+A0h] [bp-11Ch]
  _QWORD *v372; // [sp+A0h] [bp-11Ch]
  int v373; // [sp+A4h] [bp-118h]
  _QWORD *v374; // [sp+A4h] [bp-118h]
  _QWORD *v375; // [sp+A4h] [bp-118h]
  int v376; // [sp+A4h] [bp-118h]
  _QWORD *v377; // [sp+A8h] [bp-114h]
  int v378; // [sp+A8h] [bp-114h]
  int v379; // [sp+A8h] [bp-114h]
  _QWORD *v380; // [sp+A8h] [bp-114h]
  _QWORD *v381; // [sp+ACh] [bp-110h]
  _DWORD *v382; // [sp+ACh] [bp-110h]
  int v383; // [sp+ACh] [bp-110h]
  _QWORD *v384; // [sp+ACh] [bp-110h]
  _QWORD *v385; // [sp+ACh] [bp-110h]
  int v386; // [sp+B0h] [bp-10Ch]
  unsigned int v387; // [sp+B0h] [bp-10Ch]
  _QWORD *v388; // [sp+B0h] [bp-10Ch]
  _QWORD *v389; // [sp+B0h] [bp-10Ch]
  _QWORD *v390; // [sp+B0h] [bp-10Ch]
  unsigned int v391; // [sp+B4h] [bp-108h]
  int v392; // [sp+B4h] [bp-108h]
  _QWORD *v393; // [sp+B4h] [bp-108h]
  int v394; // [sp+B4h] [bp-108h]
  _QWORD *v395; // [sp+B4h] [bp-108h]
  int v396; // [sp+B8h] [bp-104h]
  _QWORD *v397; // [sp+B8h] [bp-104h]
  unsigned int v398; // [sp+B8h] [bp-104h]
  int v399; // [sp+B8h] [bp-104h]
  _QWORD *v400; // [sp+BCh] [bp-100h]
  _DWORD *v401; // [sp+BCh] [bp-100h]
  int v402; // [sp+BCh] [bp-100h]
  int v403; // [sp+BCh] [bp-100h]
  _QWORD *v404; // [sp+C0h] [bp-FCh]
  int v405; // [sp+C0h] [bp-FCh]
  int v406; // [sp+C0h] [bp-FCh]
  int v407; // [sp+C0h] [bp-FCh]
  int v408; // [sp+C4h] [bp-F8h]
  _QWORD *v409; // [sp+C4h] [bp-F8h]
  int v410; // [sp+C4h] [bp-F8h]
  int v411; // [sp+C4h] [bp-F8h]
  int v412; // [sp+C4h] [bp-F8h]
  int v413; // [sp+C4h] [bp-F8h]
  int v414; // [sp+C8h] [bp-F4h]
  _QWORD *v415; // [sp+C8h] [bp-F4h]
  int v416; // [sp+C8h] [bp-F4h]
  unsigned int v417; // [sp+C8h] [bp-F4h]
  int v418; // [sp+CCh] [bp-F0h]
  int v419; // [sp+CCh] [bp-F0h]
  int v420; // [sp+CCh] [bp-F0h]
  int v421; // [sp+CCh] [bp-F0h]
  int v422; // [sp+D0h] [bp-ECh]
  int v423; // [sp+D0h] [bp-ECh]
  int v424; // [sp+D0h] [bp-ECh]
  int v425; // [sp+D0h] [bp-ECh]
  unsigned int v426; // [sp+D0h] [bp-ECh]
  unsigned int v427; // [sp+D0h] [bp-ECh]
  unsigned int v428; // [sp+D4h] [bp-E8h]
  int v429; // [sp+D4h] [bp-E8h]
  unsigned int v430; // [sp+D8h] [bp-E4h]
  unsigned int v431; // [sp+D8h] [bp-E4h]
  int v432; // [sp+DCh] [bp-E0h]
  int v433; // [sp+E0h] [bp-DCh]
  int v434; // [sp+E4h] [bp-D8h]
  int v436; // [sp+F0h] [bp-CCh] BYREF
  _DWORD *v437; // [sp+F4h] [bp-C8h]
  _BYTE v438[56]; // [sp+F8h] [bp-C4h] BYREF
  _BYTE v439[8]; // [sp+130h] [bp-8Ch] BYREF
  __int64 v440; // [sp+138h] [bp-84h] BYREF
  int v441; // [sp+140h] [bp-7Ch] BYREF
  int v442; // [sp+144h] [bp-78h]
  int v443; // [sp+148h] [bp-74h]
  int v444; // [sp+14Ch] [bp-70h]
  int v445; // [sp+150h] [bp-6Ch]
  int v446; // [sp+154h] [bp-68h]
  int v447; // [sp+158h] [bp-64h]
  int v448; // [sp+15Ch] [bp-60h]
  int v449; // [sp+160h] [bp-5Ch]
  int v450; // [sp+164h] [bp-58h]
  int v451; // [sp+168h] [bp-54h]
  int v452; // [sp+16Ch] [bp-50h]
  int v453; // [sp+170h] [bp-4Ch] BYREF
  int v454; // [sp+174h] [bp-48h]
  int v455; // [sp+178h] [bp-44h]
  int v456; // [sp+17Ch] [bp-40h]
  __int64 v457; // [sp+180h] [bp-3Ch] BYREF
  int v458; // [sp+188h] [bp-34h]
  int v459; // [sp+18Ch] [bp-30h]
  int v460; // [sp+190h] [bp-2Ch]
  int v461; // [sp+194h] [bp-28h]
  int v462; // [sp+198h] [bp-24h]
  int v463; // [sp+19Ch] [bp-20h]
  int v464; // [sp+1A0h] [bp-1Ch]
  int v465; // [sp+1A4h] [bp-18h]
  int v466; // [sp+1A8h] [bp-14h]
  int v467; // [sp+1ACh] [bp-10h]
  int v468; // [sp+1B0h] [bp-Ch]
  int v469; // [sp+1B4h] [bp-8h]

  v3 = a1[16];
  n = a3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    v175 = v3 + a3;
    result = memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v175;
  }
  else
  {
    v4 = v438;
    v5 = a1 + 34;
    v6 = a1 + 18;
    v437 = a1 + 18;
    do
    {
      v7 = *v6;
      v6 += 4;
      v8 = *(v6 - 3);
      v9 = v4;
      v10 = *(v6 - 2);
      v4 += 16;
      v11 = *(v6 - 1);
      *v9 = v7;
      v9[1] = v8;
      v9[2] = v10;
      v9[3] = v11;
    }
    while ( v6 != v5 );
    if ( n )
    {
      for ( i = 64 - v3; ; i = 64 - v3 )
      {
        if ( n < i )
          i = n;
        v13 = (char *)a1 + v3;
        v3 += i;
        memcpy(v13, src, i);
        n -= i;
        src += i;
        if ( v3 == 64 )
        {
          v436 = (int)&v436;
          v14 = &v436;
          v15 = v439;
          v16 = &v453;
          v17 = a1 - 2;
          do
          {
            v19 = v17[2];
            v17 += 2;
            v18 = v19;
            v20 = v14[2];
            v14 += 2;
            v21 = v17[1];
            v22 = v14[1];
            v16[2] = v18;
            v16 += 2;
            *((_DWORD *)v15 + 2) = v20 ^ v18;
            v15 += 8;
            v16[1] = v21;
            *((_DWORD *)v15 + 1) = v22 ^ v21;
          }
          while ( a1 + 14 != v17 );
          v176 = 0;
          v314 = v440;
          v23 = v451;
          v24 = v453;
          v260 = v454;
          v225 = v441;
          v271 = v442;
          v238 = v443;
          v251 = v444;
          v232 = v445;
          v276 = v446;
          v187 = v447;
          v199 = v448;
          v213 = v449;
          v244 = v450;
          v25 = v452;
          do
          {
            v178 = v314 ^ v176;
            v219 = v271 ^ ((unsigned __int64)(v176 + 16) >> 32);
            v193 = v251 ^ ((unsigned __int64)(v176 + 32) >> 32);
            v26 = v187 ^ (v176 + 64);
            v208 = v199 ^ ((unsigned __int64)(v176 + 64) >> 32);
            v27 = v213 ^ (v176 + 80);
            v214 = (v176 + 96) ^ v23;
            v28 = (v260 ^ ((unsigned __int64)(v176 + 112) >> 32)) >> 24;
            v252 = v260 ^ ((unsigned __int64)(v176 + 112) >> 32);
            v188 = v225 ^ (v176 + 16);
            v29 = (v176 + 32) ^ v238;
            v239 = v27;
            v30 = v244;
            v31 = v25 ^ ((unsigned __int64)(v176 + 96) >> 32);
            v200 = v276 ^ ((unsigned __int64)(v176 + 48) >> 32);
            v245 = (v176 + 112) ^ v24;
            v32 = ((unsigned __int64)(v176 + 80) >> 32) ^ v30;
            v226 = (v176 + 48) ^ v232;
            v289 = &dword_17DB68[2 * ((unsigned int)(HIDWORD(v314) ^ HIDWORD(v176)) >> 24)];
            v330 = &dword_17DB68[2 * HIBYTE(v219)];
            v344 = 8 * HIBYTE(v27) + 1569632;
            HIDWORD(v314) = HIBYTE(v31);
            v363 = 8 * HIBYTE(v214) + 1569632;
            v386 = 8 * HIBYTE(v245) + 1569632;
            v33 = dword_17DB68[2 * v28 + 1];
            v391 = 8 * (((unsigned int)v314 ^ (unsigned int)v176) >> 24) + 1569632;
            v309 = HIBYTE(v32);
            v34 = &qword_17E370[BYTE1(v188)];
            v35 = &qword_17EB70[BYTE2(v29)];
            v36 = 8 * (unsigned __int8)(v314 ^ v176) + 1561448;
            v418 = 8 * HIBYTE(v29) + 1569632;
            v432 = (unsigned __int8)v29;
            v302 = &qword_17E370[BYTE1(v29)];
            v37 = LODWORD(qword_17D368[(unsigned __int8)(v314 ^ v176)])
                ^ (v176 + 1)
                ^ dword_17DB68[2 * v28]
                ^ *((_DWORD *)v34 - 2);
            v38 = 8 * HIBYTE(v226) + 1569632;
            LODWORD(v314) = &qword_17EB70[BYTE2(v226)];
            v39 = *(_DWORD *)(v36 + 4) ^ ((unsigned __int64)(v176 + 1) >> 32) ^ v33;
            v322 = &qword_17FB70[(unsigned __int8)v32];
            v40 = BYTE1(v31);
            v316 = BYTE2(v32);
            v41 = &dword_180B68[2 * BYTE2(v31)];
            v348 = &qword_17FB70[(unsigned __int8)v31];
            v408 = *v41;
            v42 = v39 ^ *((_DWORD *)v34 - 1);
            v414 = v41[1];
            v43 = BYTE6(v178);
            v44 = (unsigned __int8)((v176 + 48) ^ v232);
            v338 = &qword_17E370[BYTE1(v226)];
            v45 = &qword_17FB70[(unsigned __int8)v208];
            v46 = v289[1] ^ ((unsigned __int64)(v176 + 17) >> 32) ^ HIDWORD(qword_17D368[(unsigned __int8)v188]);
            v422 = *v289 ^ (v176 + 17) ^ LODWORD(qword_17D368[(unsigned __int8)v188]);
            v369 = &qword_17FB70[(unsigned __int8)(v260 ^ ((unsigned __int64)(v176 + 112) >> 32))];
            v433 = BYTE5(v178);
            v227 = &qword_17FB70[BYTE4(v178)];
            v233 = &qword_17E370[BYTE1(v26)];
            v358 = &qword_17EB70[BYTE2(v239)];
            v434 = BYTE2(v219);
            v290 = (unsigned __int8)v239;
            v377 = &qword_17E370[BYTE1(v239)];
            v277 = BYTE1(v219);
            v381 = &qword_17EB70[BYTE2(v214)];
            v404 = &qword_17FB70[(unsigned __int8)(v271 ^ ((unsigned __int64)(v176 + 16) >> 32))];
            v220 = v42
                 ^ *((_DWORD *)v35 - 1)
                 ^ *(_DWORD *)(v38 + 12)
                 ^ *((_DWORD *)v45 - 1)
                 ^ dword_180368[2 * BYTE1(v32) + 1]
                 ^ v414;
            v283 = BYTE2(v193);
            v47 = &dword_180B68[2 * BYTE6(v178)];
            HIDWORD(v178) = v37
                          ^ *((_DWORD *)v35 - 2)
                          ^ *(_DWORD *)(v38 + 8)
                          ^ *((_DWORD *)v45 - 2)
                          ^ dword_180368[2 * BYTE1(v32)]
                          ^ v408;
            v48 = v46 ^ *((_DWORD *)v302 - 1) ^ *(_DWORD *)(v314 - 4);
            v49 = v422 ^ *((_DWORD *)v302 - 2) ^ *(_DWORD *)(v314 - 8) ^ LODWORD(qword_17F368[HIBYTE(v26)]);
            v303 = (unsigned __int8)v214;
            v400 = &qword_17E370[BYTE1(v214)];
            v50 = v49 ^ *((_DWORD *)v322 - 2);
            v51 = dword_180368[2 * BYTE1(v31) + 1]
                ^ v48
                ^ HIDWORD(qword_17F368[HIBYTE(v26)])
                ^ *((_DWORD *)v322 - 1)
                ^ dword_180B68[2 * BYTE2(v252) + 1];
            v320 = dword_17DB68[2 * HIBYTE(v193)];
            v423 = dword_17DB68[2 * HIBYTE(v193) + 1];
            v323 = &qword_17EB70[BYTE2(v245)];
            v261 = BYTE1(v193);
            v409 = &qword_17FB70[(unsigned __int8)v193];
            v52 = v178;
            LODWORD(v178) = v51;
            v354 = &qword_17EB70[BYTE2(v52)];
            v415 = &qword_17E370[BYTE1(v52)];
            v240 = &qword_17E370[BYTE1(v245)];
            LODWORD(v314) = (unsigned __int8)v245;
            v246 = v50 ^ dword_180368[2 * v40] ^ dword_180B68[2 * BYTE2(v252)];
            v53 = qword_17EB70[BYTE2(v26) - 1];
            v194 = *v330
                 ^ dword_180B68[2 * v43]
                 ^ LODWORD(qword_17D368[v432])
                 ^ (v176 + 33)
                 ^ *((_DWORD *)v338 - 2)
                 ^ v53
                 ^ *(_DWORD *)(v344 + 8)
                 ^ *((_DWORD *)v348 - 2)
                 ^ dword_180368[2 * BYTE1(v252)];
            v215 = v330[1]
                 ^ v47[1]
                 ^ HIDWORD(qword_17D368[v432])
                 ^ ((unsigned __int64)(v176 + 33) >> 32)
                 ^ *((_DWORD *)v338 - 1)
                 ^ HIDWORD(v53)
                 ^ *(_DWORD *)(v344 + 12)
                 ^ *((_DWORD *)v348 - 1)
                 ^ dword_180368[2 * BYTE1(v252) + 1];
            v54 = *((_DWORD *)v358 - 1);
            v55 = LODWORD(qword_17D368[v44])
                ^ dword_180368[2 * v433]
                ^ (v176 + 49)
                ^ v320
                ^ *((_DWORD *)v233 - 2)
                ^ *((_DWORD *)v358 - 2);
            v359 = dword_180368[2 * v277 + 1];
            v56 = *((_DWORD *)v227 - 2);
            HIDWORD(v53) = v227;
            v228 = v55 ^ *(_DWORD *)(v363 + 8) ^ *((_DWORD *)v369 - 2) ^ dword_180B68[2 * v434];
            v234 = *(_DWORD *)(v363 + 12)
                 ^ HIDWORD(qword_17D368[v44])
                 ^ dword_180368[2 * v433 + 1]
                 ^ ((unsigned __int64)(v176 + 49) >> 32)
                 ^ v423
                 ^ *((_DWORD *)v233 - 1)
                 ^ v54
                 ^ *((_DWORD *)v369 - 1)
                 ^ dword_180B68[2 * v434 + 1];
            v278 = dword_180368[2 * v277];
            v364 = dword_180B68[2 * v283 + 1];
            v284 = dword_180B68[2 * v283];
            v57 = dword_17DB68[2 * HIBYTE(v200) + 1]
                ^ *(_DWORD *)(HIDWORD(v53) - 4)
                ^ HIDWORD(qword_17D368[(unsigned __int8)v26])
                ^ ((unsigned __int64)(v176 + 65) >> 32);
            v58 = v377;
            v396 = dword_180368[2 * v261 + 1];
            HIDWORD(v53) = *((_DWORD *)v377 - 1);
            v378 = dword_180368[2 * v261];
            v424 = dword_180B68[2 * BYTE2(v200)];
            v59 = &qword_17EB70[BYTE2(v188)];
            v253 = 8 * HIBYTE(v188) + 1569632;
            v267 = v57 ^ HIDWORD(v53) ^ *((_DWORD *)v381 - 1) ^ *(_DWORD *)(v386 + 12);
            v262 = dword_17DB68[2 * HIBYTE(v200)]
                 ^ v56
                 ^ LODWORD(qword_17D368[(unsigned __int8)v26])
                 ^ (v176 + 65)
                 ^ *((_DWORD *)v58 - 2)
                 ^ *((_DWORD *)v381 - 2)
                 ^ *(_DWORD *)(v386 + 8);
            v60 = (v176 + 81) ^ *(_DWORD *)(v391 + 8) ^ LODWORD(qword_17D368[v290]) ^ dword_17DB68[2 * HIBYTE(v208)];
            v291 = HIDWORD(qword_17D368[v290])
                 ^ *(_DWORD *)(v391 + 12)
                 ^ ((unsigned __int64)(v176 + 81) >> 32)
                 ^ dword_17DB68[2 * HIBYTE(v208) + 1];
            LODWORD(v53) = *((_DWORD *)v354 - 2) ^ LODWORD(qword_17D368[v303]);
            v61 = &qword_17FB70[(unsigned __int8)v200];
            v62 = HIDWORD(qword_17D368[v303])
                ^ *((_DWORD *)v354 - 1)
                ^ ((unsigned __int64)(v176 + 97) >> 32)
                ^ dword_17DB68[2 * v309 + 1];
            v304 = *((_DWORD *)v59 - 1);
            HIDWORD(v53) = LODWORD(qword_17D368[v314])
                         ^ *((_DWORD *)v415 - 2)
                         ^ (v176 + 113)
                         ^ dword_17DB68[2 * HIDWORD(v314)]
                         ^ *((_DWORD *)v59 - 2);
            v63 = dword_180368[2 * BYTE1(v208)];
            v189 = v267 ^ v359 ^ v364;
            LODWORD(v53) = v53
                         ^ (v176 + 97)
                         ^ dword_17DB68[2 * v309]
                         ^ *((_DWORD *)v240 - 2)
                         ^ *(_DWORD *)(v253 + 8)
                         ^ *((_DWORD *)v409 - 2)
                         ^ dword_180368[2 * BYTE1(v200)]
                         ^ dword_180B68[2 * BYTE2(v208)];
            v64 = dword_180B68[2 * BYTE2(v208) + 1]
                ^ v62
                ^ *((_DWORD *)v240 - 1)
                ^ *(_DWORD *)(v253 + 12)
                ^ *((_DWORD *)v409 - 1)
                ^ dword_180368[2 * BYTE1(v200) + 1];
            v209 = HIDWORD(qword_17D368[v314])
                 ^ *((_DWORD *)v415 - 1)
                 ^ ((unsigned __int64)(v176 + 113) >> 32)
                 ^ dword_17DB68[2 * HIDWORD(v314) + 1]
                 ^ v304
                 ^ *(_DWORD *)(v418 + 12)
                 ^ *((_DWORD *)v61 - 1)
                 ^ dword_180368[2 * BYTE1(v208) + 1]
                 ^ dword_180B68[2 * v316 + 1];
            v65 = (v262 ^ v278 ^ v284) >> 24;
            v66 = v291
                ^ *((_DWORD *)v400 - 1)
                ^ *((_DWORD *)v323 - 1)
                ^ *((_DWORD *)v404 - 1)
                ^ v396
                ^ dword_180B68[2 * BYTE2(v200) + 1];
            v201 = v262 ^ v278 ^ v284;
            v315 = v60 ^ *((_DWORD *)v400 - 2) ^ *((_DWORD *)v323 - 2) ^ *((_DWORD *)v404 - 2) ^ v378 ^ v424;
            v387 = HIDWORD(v53) ^ *(_DWORD *)(v418 + 8) ^ *((_DWORD *)v61 - 2) ^ v63 ^ dword_180B68[2 * v316];
            v254 = HIBYTE(v215);
            v241 = BYTE3(v178);
            v263 = HIBYTE(v234);
            v349 = v53;
            v285 = 8 * HIBYTE(v228) + 1569632;
            v292 = 8 * v65 + 1569632;
            v305 = &dword_17DB68[2 * BYTE3(v178)];
            v355 = 8 * HIBYTE(v387) + 1569632;
            v317 = 8 * HIBYTE(v315) + 1569632;
            v331 = 8 * BYTE3(v53) + 1569632;
            v345 = &dword_17DB68[2 * HIBYTE(v234)];
            v370 = &dword_17DB68[2 * HIBYTE(v189)];
            v430 = HIBYTE(v64);
            v360 = 8 * HIBYTE(HIDWORD(v178)) + 1569632;
            v401 = &dword_17DB68[2 * HIBYTE(v64)];
            v379 = 8 * HIBYTE(v246) + 1569632;
            v405 = 8 * HIBYTE(v194) + 1569632;
            v67 = &qword_17E370[BYTE1(v246)];
            v382 = &dword_17DB68[2 * HIBYTE(v66)];
            HIDWORD(v53) = (unsigned __int8)v246;
            v428 = HIBYTE(v66);
            v298 = &qword_17FB70[(unsigned __int8)v66];
            v397 = &qword_17EB70[BYTE2(v246)];
            v176 += 2;
            v373 = *((_DWORD *)v67 - 1) ^ dword_17DB68[2 * HIBYTE(v209) + 1];
            v392 = (unsigned __int8)v194;
            v279 = &qword_17EB70[BYTE2(v194)];
            v68 = qword_17E370[BYTE1(v194) - 1];
            v69 = BYTE2(v64);
            v365 = *((_DWORD *)v67 - 2) ^ dword_17DB68[2 * HIBYTE(v209)];
            LODWORD(v53) = HIDWORD(qword_17D368[(unsigned __int8)v246])
                         ^ dword_17DB68[2 * HIBYTE(v220) + 1]
                         ^ HIDWORD(v68);
            v321 = &qword_17FB70[(unsigned __int8)v64];
            v70 = &qword_17FB70[(unsigned __int8)v189];
            v71 = BYTE1(v66);
            v247 = BYTE2(v66);
            HIDWORD(v68) = BYTE2(v220);
            v72 = qword_17EB70[BYTE2(v228) - 1];
            v73 = dword_180368[2 * BYTE1(v64)];
            LODWORD(v53) = v53 ^ HIDWORD(v72);
            v74 = dword_180368[2 * BYTE1(v64) + 1];
            HIDWORD(v53) = LODWORD(qword_17D368[HIDWORD(v53)]) ^ dword_17DB68[2 * HIBYTE(v220)] ^ v68 ^ v72;
            v419 = (unsigned __int8)v228;
            v75 = &dword_180B68[2 * BYTE2(v209)];
            v76 = *v75;
            v310 = &qword_17E370[BYTE1(v228)];
            v77 = *(_QWORD *)(v292 + 8);
            v78 = v75[1];
            LODWORD(v53) = v53 ^ HIDWORD(v77);
            v410 = BYTE1(v209);
            v293 = &qword_17EB70[BYTE2(v201)];
            HIDWORD(v77) = *((_DWORD *)v298 - 1);
            v339 = &qword_17FB70[(unsigned __int8)v209];
            v79 = *((_DWORD *)v298 - 2);
            v416 = BYTE1(v220);
            LODWORD(v68) = &qword_17FB70[(unsigned __int8)v220];
            v425 = BYTE2(v178);
            v195 = (unsigned __int8)v201;
            v299 = &qword_17E370[BYTE1(v201)];
            v271 = v53 ^ HIDWORD(v77) ^ v74 ^ v78;
            v225 = HIDWORD(v53) ^ v77 ^ v79 ^ v73 ^ v76;
            v80 = LODWORD(qword_17D368[BYTE4(v178)]) ^ v365;
            v324 = &qword_17EB70[BYTE2(v315)];
            HIDWORD(v77) = (unsigned __int8)v178;
            LODWORD(v178) = BYTE1(v178);
            v366 = &qword_17FB70[HIDWORD(v77)];
            v210 = (unsigned __int8)v315;
            LODWORD(v77) = *(_DWORD *)(v285 + 12);
            HIDWORD(v77) = *(_DWORD *)(v285 + 8);
            v286 = &qword_17E370[BYTE1(v315)];
            v81 = HIDWORD(qword_17D368[BYTE4(v178)]) ^ v373 ^ *((_DWORD *)v279 - 1) ^ v77;
            LODWORD(v53) = *((_DWORD *)v70 - 2);
            LODWORD(v77) = *((_DWORD *)v70 - 1);
            LOWORD(v70) = v349;
            v350 = &qword_17EB70[BYTE2(v349)];
            v202 = BYTE2(v215);
            v221 = (unsigned __int8)v70;
            v374 = &qword_17E370[BYTE1(v70)];
            v82 = dword_17DB68[2 * HIBYTE(v215) + 1];
            HIDWORD(v314) = v81 ^ v77 ^ dword_180368[2 * v71 + 1] ^ dword_180B68[2 * v69 + 1];
            v83 = v80 ^ *((_DWORD *)v279 - 2) ^ HIDWORD(v77) ^ v53 ^ dword_180368[2 * v71] ^ dword_180B68[2 * v69];
            LOWORD(v81) = v387;
            LODWORD(v77) = dword_180B68[2 * HIDWORD(v68)] ^ LODWORD(qword_17D368[v392]);
            HIDWORD(v53) = HIDWORD(qword_17D368[v392]) ^ dword_180B68[2 * HIDWORD(v68) + 1] ^ v305[1];
            BYTE4(v77) = v215;
            v306 = &qword_17EB70[BYTE2(v387)];
            v84 = *((_DWORD *)v310 - 2);
            LODWORD(v314) = v83;
            v216 = BYTE1(v215);
            v85 = dword_17DB68[2 * v254];
            v388 = &qword_17FB70[BYTE4(v77)];
            HIDWORD(v77) = BYTE2(v234);
            v86 = *((_DWORD *)v293 - 1) ^ HIDWORD(v53) ^ *((_DWORD *)v310 - 1);
            v311 = &qword_17EB70[BYTE6(v178)];
            v393 = &qword_17E370[BYTE5(v178)];
            LODWORD(v53) = *(_DWORD *)(v317 + 8);
            v87 = v86 ^ *(_DWORD *)(v317 + 12);
            v318 = &qword_17E370[BYTE1(v81)];
            v251 = v87 ^ *((_DWORD *)v321 - 1) ^ dword_180368[2 * v410 + 1];
            v238 = *((_DWORD *)v293 - 2)
                 ^ v77
                 ^ dword_17DB68[2 * v241]
                 ^ v84
                 ^ v53
                 ^ *((_DWORD *)v321 - 2)
                 ^ dword_180368[2 * v410];
            v294 = &dword_180B68[2 * BYTE2(v234)];
            v183 = BYTE1(v234);
            v88 = v82
                ^ HIDWORD(qword_17D368[v419])
                ^ dword_180368[2 * v416 + 1]
                ^ dword_180B68[2 * v425 + 1]
                ^ *((_DWORD *)v299 - 1)
                ^ *((_DWORD *)v324 - 1);
            v89 = dword_180B68[2 * v425]
                ^ LODWORD(qword_17D368[v419])
                ^ dword_180368[2 * v416]
                ^ v85
                ^ *((_DWORD *)v299 - 2)
                ^ *((_DWORD *)v324 - 2);
            v325 = &qword_17FB70[(unsigned __int8)v234];
            v276 = v88 ^ *(_DWORD *)(v331 + 12) ^ *((_DWORD *)v339 - 1);
            v232 = v89 ^ *(_DWORD *)(v331 + 8) ^ *((_DWORD *)v339 - 2);
            HIDWORD(v53) = *(_DWORD *)(v68 - 4)
                         ^ HIDWORD(qword_17D368[v195])
                         ^ dword_180368[2 * (_DWORD)v178 + 1]
                         ^ v345[1];
            v90 = *((_DWORD *)v286 - 2)
                ^ *(_DWORD *)(v68 - 8)
                ^ LODWORD(qword_17D368[v195])
                ^ dword_180368[2 * (_DWORD)v178]
                ^ dword_17DB68[2 * v263];
            v332 = dword_180368[2 * v216 + 1];
            v340 = dword_180B68[2 * HIDWORD(v77)];
            v91 = BYTE1(v189);
            v179 = BYTE2(v189);
            v187 = v90 ^ *((_DWORD *)v350 - 2) ^ *(_DWORD *)(v355 + 8) ^ dword_180B68[2 * v202];
            v199 = *((_DWORD *)v286 - 1)
                 ^ HIDWORD(v53)
                 ^ *((_DWORD *)v350 - 1)
                 ^ *(_DWORD *)(v355 + 12)
                 ^ dword_180B68[2 * v202 + 1];
            v92 = dword_180B68[2 * v247 + 1];
            v23 = dword_180B68[2 * v179]
                ^ *((_DWORD *)v311 - 2)
                ^ LODWORD(qword_17D368[v221])
                ^ *(_DWORD *)(v379 + 8)
                ^ dword_17DB68[2 * v428]
                ^ *((_DWORD *)v318 - 2)
                ^ *((_DWORD *)v388 - 2)
                ^ dword_180368[2 * v183];
            v24 = LODWORD(qword_17D368[(unsigned __int8)v81])
                ^ *((_DWORD *)v393 - 2)
                ^ *((_DWORD *)v397 - 2)
                ^ dword_17DB68[2 * v430]
                ^ *(_DWORD *)(v405 + 8)
                ^ *((_DWORD *)v325 - 2)
                ^ dword_180368[2 * v91]
                ^ dword_180B68[2 * v247];
            v25 = dword_180B68[2 * v179 + 1]
                ^ *((_DWORD *)v311 - 1)
                ^ HIDWORD(qword_17D368[v221])
                ^ *(_DWORD *)(v379 + 12)
                ^ v382[1]
                ^ *((_DWORD *)v318 - 1)
                ^ *((_DWORD *)v388 - 1)
                ^ dword_180368[2 * v183 + 1];
            v213 = *((_DWORD *)v366 - 2)
                 ^ LODWORD(qword_17D368[v210])
                 ^ *(_DWORD *)(v360 + 8)
                 ^ *v370
                 ^ *((_DWORD *)v374 - 2)
                 ^ *((_DWORD *)v306 - 2)
                 ^ dword_180368[2 * v216]
                 ^ v340;
            v244 = HIDWORD(qword_17D368[v210])
                 ^ *(_DWORD *)(v360 + 12)
                 ^ *((_DWORD *)v366 - 1)
                 ^ v370[1]
                 ^ *((_DWORD *)v374 - 1)
                 ^ *((_DWORD *)v306 - 1)
                 ^ v332
                 ^ v294[1];
            v93 = HIDWORD(qword_17D368[(unsigned __int8)v81])
                ^ *((_DWORD *)v393 - 1)
                ^ *((_DWORD *)v397 - 1)
                ^ v401[1]
                ^ *(_DWORD *)(v405 + 12)
                ^ *((_DWORD *)v325 - 1)
                ^ dword_180368[2 * v91 + 1]
                ^ v92;
            v260 = v93;
          }
          while ( v176 != 10 );
          v94 = dword_180B68[2 * v179 + 1]
              ^ *((_DWORD *)v311 - 1)
              ^ HIDWORD(qword_17D368[v221])
              ^ *(_DWORD *)(v379 + 12)
              ^ v382[1]
              ^ *((_DWORD *)v318 - 1)
              ^ *((_DWORD *)v388 - 1)
              ^ dword_180368[2 * v183 + 1];
          v95 = v93;
          v307 = v455;
          v177 = -1;
          v312 = v456;
          v319 = v457;
          v264 = v458;
          v268 = v459;
          v287 = v460;
          v326 = v461;
          v440 = v314;
          v441 = v225;
          v442 = v271;
          v229 = v462;
          v443 = v238;
          v333 = v463;
          v444 = v251;
          v96 = v464;
          v445 = v232;
          v449 = v213;
          v97 = v465;
          v446 = v276;
          v98 = v466;
          v99 = v469;
          v447 = v187;
          v448 = v199;
          v100 = v468;
          v450 = v244;
          v451 = v23;
          v452 = v94;
          v453 = v24;
          v454 = v95;
          v180 = v467;
          do
          {
            v280 = HIDWORD(v177) ^ 0x70000000 ^ v99;
            v248 = ~v307;
            v184 = v312 ^ HIDWORD(v177);
            v190 = ~(_DWORD)v319;
            v203 = ~v264;
            v101 = ~v287;
            v272 = v180 ^ HIDWORD(v177) ^ 0x60000000;
            v211 = v268 ^ HIDWORD(v177) ^ 0x20000000;
            v222 = ~v229;
            v265 = HIDWORD(v319) ^ HIDWORD(v177) ^ 0x10000000;
            v235 = ~v98;
            v230 = HIDWORD(v177) ^ 0x50000000 ^ v97;
            v398 = ((unsigned int)v312 ^ HIDWORD(v177)) >> 24;
            v102 = 8 * ((unsigned int)~v307 >> 24) + 1569632;
            v341 = 8 * ((unsigned int)~(_DWORD)v319 >> 24) + 1569632;
            v356 = 8 * ((unsigned int)~v287 >> 24) + 1569632;
            v431 = (v326 ^ HIDWORD(v177) ^ 0x30000000u) >> 24;
            v426 = HIBYTE(v211);
            v308 = HIBYTE(v230);
            v103 = &qword_17FB70[(unsigned __int8)(BYTE4(v319) ^ BYTE4(v177))];
            v367 = 8 * HIBYTE(v222) + 1569632;
            v104 = &qword_17E370[BYTE1(v222)];
            v105 = &qword_17EB70[BYTE2(v235)];
            v255 = v333 ^ WORD2(v177);
            v288 = (v333 ^ HIDWORD(v177) ^ 0x40000000u) >> 24;
            v295 = &qword_17E370[BYTE1(v101)];
            v106 = *((_DWORD *)v105 - 2)
                 ^ ~LODWORD(qword_17D368[(unsigned __int8)v203])
                 ^ dword_17DB68[2 * HIBYTE(v280)]
                 ^ *((_DWORD *)v104 - 2)
                 ^ *(_DWORD *)(v102 + 8);
            HIDWORD(v319) = &qword_17FB70[(unsigned __int8)(v312 ^ BYTE4(v177))];
            v383 = (unsigned __int8)((v333 ^ HIDWORD(v177) ^ 0x40000000u) >> 16);
            v196 = 0xFFFFFF - HIDWORD(v177);
            v107 = HIDWORD(qword_17D368[(unsigned __int8)v203])
                 ^ (0xFFFFFF - HIDWORD(v177))
                 ^ 0xEFFFFFFF
                 ^ dword_17DB68[2 * HIBYTE(v280) + 1]
                 ^ *((_DWORD *)v104 - 1);
            v108 = (unsigned __int8)v101;
            v375 = &qword_17EB70[BYTE2(v101)];
            v109 = (unsigned __int8)v222;
            v389 = &qword_17EB70[BYTE2(v222)];
            v110 = &qword_17E370[BYTE1(v235)];
            v334 = &qword_17EB70[BYTE2(v248)];
            v351 = &qword_17FB70[(unsigned __int8)(v326 ^ BYTE4(v177))];
            v313 = (unsigned __int8)((v326 ^ HIDWORD(v177) ^ 0x30000000u) >> 16);
            v411 = (unsigned __int8)((unsigned __int16)(WORD2(v177) ^ v97) >> 8);
            v371 = &qword_17FB70[(unsigned __int8)(BYTE4(v177) ^ v97)];
            v223 = *((_DWORD *)v103 - 2)
                 ^ v106
                 ^ dword_180368[2 * (unsigned __int8)((unsigned __int16)(v326 ^ WORD2(v177)) >> 8)]
                 ^ dword_180B68[2 * BYTE2(v230)];
            v231 = v107
                 ^ *((_DWORD *)v105 - 1)
                 ^ *(_DWORD *)(v102 + 12)
                 ^ *((_DWORD *)v103 - 1)
                 ^ dword_180368[2 * (unsigned __int8)((unsigned __int16)(v326 ^ WORD2(v177)) >> 8) + 1]
                 ^ dword_180B68[2 * BYTE2(v230) + 1];
            v111 = HIDWORD(qword_17D368[(unsigned __int8)~(_BYTE)v319])
                 ^ dword_17DB68[2 * HIBYTE(v272) + 1]
                 ^ (HIDWORD(v177) - 0xFFFFFF);
            HIDWORD(v177) -= 0x1FFFFFF;
            v112 = &qword_17EB70[(unsigned __int8)((unsigned int)~v96 >> 16)];
            v327 = &qword_17E370[(unsigned __int8)((unsigned __int16)~(_WORD)v96 >> 8)];
            v113 = ~(LODWORD(qword_17D368[(unsigned __int8)~(_BYTE)v319]) ^ dword_17DB68[2 * HIBYTE(v272)])
                 ^ *((_DWORD *)v295 - 2)
                 ^ *((_DWORD *)v112 - 2);
            v114 = HIDWORD(qword_17F368[(unsigned int)~v100 >> 24])
                 ^ v111
                 ^ *((_DWORD *)v295 - 1)
                 ^ *((_DWORD *)v112 - 1);
            LODWORD(v319) = &qword_17EB70[(unsigned __int8)~BYTE2(v100)];
            v115 = *(_DWORD *)(HIDWORD(v319) - 4);
            v116 = *(_DWORD *)(HIDWORD(v319) - 8);
            v296 = BYTE2(v211);
            HIDWORD(v319) = &qword_17FB70[(unsigned __int8)v211];
            v420 = (unsigned __int8)~(_BYTE)v96;
            v402 = HIBYTE(v255);
            v361 = &qword_17FB70[(unsigned __int8)v255];
            v217 = v114 ^ v115 ^ dword_180368[2 * BYTE1(v211) + 1] ^ dword_180B68[2 * v383 + 1];
            v406 = BYTE2(v272);
            v212 = LODWORD(qword_17F368[(unsigned int)~v100 >> 24])
                 ^ v113
                 ^ v116
                 ^ dword_180368[2 * BYTE1(v211)]
                 ^ dword_180B68[2 * v383];
            v117 = *((_DWORD *)v110 - 2) ^ dword_17DB68[2 * HIBYTE(v265)] ^ ~LODWORD(qword_17D368[v109]);
            v118 = dword_17DB68[2 * HIBYTE(v265) + 1]
                 ^ HIDWORD(qword_17D368[v109])
                 ^ ~(v196 ^ 0x30000000)
                 ^ *((_DWORD *)v110 - 1);
            v269 = (unsigned __int8)~(_BYTE)v100;
            v119 = &qword_17E370[(unsigned __int8)((unsigned __int16)~(_WORD)v100 >> 8)];
            v120 = &qword_17EB70[BYTE2(v190)];
            v346 = &qword_17E370[BYTE1(v190)];
            v121 = v118 ^ *((_DWORD *)v334 - 1) ^ HIDWORD(qword_17F368[HIBYTE(v203)]) ^ *((_DWORD *)v351 - 1);
            v122 = v117 ^ *((_DWORD *)v334 - 2) ^ LODWORD(qword_17F368[HIBYTE(v203)]) ^ *((_DWORD *)v351 - 2);
            v429 = BYTE1(v272);
            v123 = dword_180368[2 * v411];
            v352 = &qword_17FB70[(unsigned __int8)v272];
            v124 = v121 ^ dword_180368[2 * v411 + 1];
            v125 = BYTE2(v184);
            v273 = BYTE1(v184);
            v412 = (unsigned __int8)v235;
            v126 = HIBYTE(v235);
            v236 = v122 ^ v123 ^ dword_180B68[2 * BYTE2(v280)];
            v394 = 8 * v126 + 1569632;
            v300 = (unsigned __int8)v248;
            v242 = v124 ^ dword_180B68[2 * BYTE2(v280) + 1];
            v335 = &qword_17E370[BYTE1(v248)];
            v127 = *((_DWORD *)v327 - 2);
            v128 = *((_DWORD *)v327 - 1);
            v328 = &qword_17EB70[BYTE2(v203)];
            v256 = &qword_17FB70[(unsigned __int8)v280];
            v384 = &qword_17E370[BYTE1(v203)];
            v204 = BYTE2(v265);
            v266 = BYTE1(v265);
            v185 = *(_DWORD *)(v319 - 8)
                 ^ ~LODWORD(qword_17D368[v108])
                 ^ dword_17DB68[2 * v398]
                 ^ v127
                 ^ *(_DWORD *)(v341 + 8)
                 ^ *(_DWORD *)(HIDWORD(v319) - 8)
                 ^ dword_180368[2 * v402]
                 ^ dword_180B68[2 * v406];
            v191 = *(_DWORD *)(v319 - 4)
                 ^ HIDWORD(qword_17D368[v108])
                 ^ ~(v196 ^ 0x20000000)
                 ^ dword_17DB68[2 * v398 + 1]
                 ^ v128
                 ^ *(_DWORD *)(v341 + 12)
                 ^ *(_DWORD *)(HIDWORD(v319) - 4)
                 ^ dword_180368[2 * v402 + 1]
                 ^ dword_180B68[2 * v406 + 1];
            v129 = *(v119 - 1);
            v130 = ~LODWORD(qword_17D368[v420]) ^ dword_17DB68[2 * v426] ^ v129;
            v131 = HIDWORD(qword_17D368[v420])
                 ^ v196
                 ^ 0xBFFFFFFF
                 ^ dword_17DB68[2 * v426 + 1]
                 ^ HIDWORD(v129)
                 ^ *((_DWORD *)v120 - 1);
            v132 = *(_QWORD *)(v356 + 8);
            v249 = v131
                 ^ HIDWORD(v132)
                 ^ *((_DWORD *)v361 - 1)
                 ^ dword_180368[2 * v429 + 1]
                 ^ dword_180B68[2 * v125 + 1];
            v342 = dword_180B68[2 * v204];
            v357 = dword_180B68[2 * v204 + 1];
            v205 = v130
                 ^ *((_DWORD *)v120 - 2)
                 ^ v132
                 ^ *((_DWORD *)v361 - 2)
                 ^ dword_180368[2 * v429]
                 ^ dword_180B68[2 * v125];
            HIDWORD(v132) = v196
                          ^ 0x9FFFFFFF
                          ^ HIDWORD(qword_17D368[v269])
                          ^ dword_17DB68[2 * v288 + 1]
                          ^ *((_DWORD *)v346 - 1)
                          ^ *((_DWORD *)v375 - 1)
                          ^ HIDWORD(qword_17F368[(unsigned int)~v96 >> 24])
                          ^ *((_DWORD *)v352 - 1)
                          ^ dword_180368[2 * v273 + 1];
            v133 = ~LODWORD(qword_17D368[v269])
                 ^ dword_17DB68[2 * v288]
                 ^ *((_DWORD *)v346 - 2)
                 ^ *((_DWORD *)v375 - 2)
                 ^ LODWORD(qword_17F368[(unsigned int)~v96 >> 24])
                 ^ *((_DWORD *)v352 - 2)
                 ^ dword_180368[2 * v273];
            v270 = ~LODWORD(qword_17D368[v300])
                 ^ dword_17DB68[2 * v308]
                 ^ *((_DWORD *)v384 - 2)
                 ^ *((_DWORD *)v389 - 2)
                 ^ *(_DWORD *)(v394 + 8)
                 ^ *((_DWORD *)v256 - 2)
                 ^ dword_180368[2 * v266]
                 ^ dword_180B68[2 * v313];
            v274 = ~(v196 ^ 0x70000000)
                 ^ HIDWORD(qword_17D368[v300])
                 ^ dword_17DB68[2 * v308 + 1]
                 ^ *((_DWORD *)v384 - 1)
                 ^ *((_DWORD *)v389 - 1)
                 ^ *(_DWORD *)(v394 + 12)
                 ^ *((_DWORD *)v256 - 1)
                 ^ dword_180368[2 * v266 + 1]
                 ^ dword_180B68[2 * v313 + 1];
            v197 = dword_17DB68[2 * v431 + 1]
                 ^ HIDWORD(qword_17D368[v412])
                 ^ v196
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)v335 - 1)
                 ^ *((_DWORD *)v328 - 1)
                 ^ *(_DWORD *)(v367 + 12)
                 ^ *((_DWORD *)v371 - 1)
                 ^ dword_180368[2 * BYTE1(v280) + 1]
                 ^ v357;
            v181 = *((_DWORD *)v335 - 2)
                 ^ ~LODWORD(qword_17D368[v412])
                 ^ dword_17DB68[2 * v431]
                 ^ *((_DWORD *)v328 - 2)
                 ^ *(_DWORD *)(v367 + 8)
                 ^ *((_DWORD *)v371 - 2)
                 ^ dword_180368[2 * BYTE1(v280)]
                 ^ v342;
            v134 = dword_180B68[2 * v296 + 1] ^ HIDWORD(v132);
            v281 = HIBYTE(v217);
            LOWORD(v266) = LOWORD(dword_180B68[2 * v296 + 1]) ^ WORD2(v132);
            v417 = HIBYTE(v191);
            v257 = v133 ^ dword_180B68[2 * v296];
            v297 = HIBYTE(v249);
            v427 = HIBYTE(v242);
            v301 = HIBYTE(v197);
            v135 = &dword_17DB68[2 * HIBYTE(v134)];
            v368 = 8 * HIBYTE(v236) + 1569632;
            v329 = &dword_17DB68[2 * HIBYTE(v217)];
            v376 = 8 * HIBYTE(v205) + 1569632;
            v136 = *v135;
            v137 = qword_17FB70[(unsigned __int8)v217 - 1];
            v138 = &qword_17E370[BYTE1(v236)];
            LODWORD(v132) = &qword_17EB70[BYTE2(v181)];
            v139 = BYTE1(v242);
            v140 = qword_17F368[HIBYTE(v270)];
            v141 = v135[1]
                 ^ HIDWORD(qword_17D368[(unsigned __int8)v223])
                 ^ *((_DWORD *)v138 - 1)
                 ^ *(_DWORD *)(v132 - 4)
                 ^ HIDWORD(v140)
                 ^ HIDWORD(v137);
            v399 = (unsigned __int8)v236;
            v385 = &qword_17EB70[BYTE2(v236)];
            v142 = v136
                 ^ LODWORD(qword_17D368[(unsigned __int8)v223])
                 ^ *((_DWORD *)v138 - 2)
                 ^ *(_DWORD *)(v132 - 8)
                 ^ v140;
            LODWORD(v140) = &qword_17E370[BYTE1(v181)];
            HIDWORD(v137) = &qword_17EB70[BYTE2(v270)];
            v237 = BYTE2(v191);
            v307 = v142 ^ v137 ^ dword_180368[2 * BYTE1(v191)] ^ dword_180B68[2 * BYTE2(v249)];
            v143 = BYTE1(v249);
            v312 = v141 ^ dword_180368[2 * BYTE1(v191) + 1] ^ dword_180B68[2 * BYTE2(v249) + 1];
            v372 = &qword_17FB70[(unsigned __int8)v249];
            v403 = BYTE2(v134);
            v407 = (unsigned __int8)v205;
            v395 = &qword_17EB70[BYTE2(v205)];
            v250 = &qword_17E370[BYTE1(v257)];
            v353 = &qword_17EB70[BYTE2(v212)];
            v362 = &qword_17FB70[(unsigned __int8)v242];
            v243 = BYTE2(v242);
            LODWORD(v137) = BYTE1(v197);
            v380 = &qword_17FB70[(unsigned __int8)v197];
            v144 = BYTE2(v217);
            v218 = BYTE1(v217);
            v421 = v144;
            v413 = (unsigned __int8)v181;
            v319 = qword_17D368[(unsigned __int8)v185]
                 ^ *(_QWORD *)&dword_17DB68[2 * HIBYTE(v274)]
                 ^ qword_17E370[BYTE1(v205) - 1]
                 ^ qword_17EB70[BYTE2(v257) - 1]
                 ^ qword_17F368[HIBYTE(v212)]
                 ^ qword_17FB70[(unsigned __int8)v231 - 1]
                 ^ *(_QWORD *)&dword_180368[2 * v139]
                 ^ *(_QWORD *)&dword_180B68[2 * BYTE2(v197)];
            v145 = dword_17DB68[2 * v281] ^ LODWORD(qword_17D368[v399]);
            v182 = 8 * HIBYTE(v181) + 1569632;
            v146 = *(_DWORD *)(v140 - 8);
            v206 = (unsigned __int8)v270;
            v282 = &qword_17E370[BYTE1(v270)];
            v147 = v329[1]
                 ^ HIDWORD(qword_17D368[v399])
                 ^ *(_DWORD *)(v140 - 4)
                 ^ *(_DWORD *)(HIDWORD(v137) - 4)
                 ^ HIDWORD(qword_17F368[HIBYTE(v223)]);
            v148 = &qword_17FB70[(unsigned __int8)v191];
            LODWORD(v140) = &qword_17EB70[BYTE2(v223)];
            v347 = &qword_17E370[BYTE1(v223)];
            HIDWORD(v140) = BYTE1(v266);
            v192 = &qword_17FB70[(unsigned __int8)v266];
            v336 = (unsigned __int8)v257;
            v198 = 8 * HIBYTE(v257) + 1569632;
            v258 = &qword_17E370[BYTE1(v212)];
            v268 = v147 ^ *((_DWORD *)v148 - 1) ^ dword_180368[2 * v143 + 1] ^ dword_180B68[2 * v403 + 1];
            v264 = v145
                 ^ v146
                 ^ *(_DWORD *)(HIDWORD(v137) - 8)
                 ^ LODWORD(qword_17F368[HIBYTE(v223)])
                 ^ *((_DWORD *)v148 - 2)
                 ^ dword_180368[2 * v143]
                 ^ dword_180B68[2 * v403];
            v343 = &qword_17EB70[BYTE2(v185)];
            v390 = &qword_17E370[BYTE1(v185)];
            v149 = 8 * HIBYTE(v185) + 1569632;
            v186 = &qword_17FB70[(unsigned __int8)v274];
            v224 = BYTE1(v231);
            v326 = HIDWORD(qword_17D368[v407])
                 ^ dword_17DB68[2 * HIBYTE(v231) + 1]
                 ^ *((_DWORD *)v250 - 1)
                 ^ *((_DWORD *)v353 - 1)
                 ^ *(_DWORD *)(v149 + 12)
                 ^ *((_DWORD *)v362 - 1)
                 ^ dword_180368[2 * (_DWORD)v137 + 1]
                 ^ dword_180B68[2 * BYTE2(v274) + 1];
            v287 = dword_17DB68[2 * HIBYTE(v231)]
                 ^ LODWORD(qword_17D368[v407])
                 ^ *((_DWORD *)v250 - 2)
                 ^ *((_DWORD *)v353 - 2)
                 ^ *(_DWORD *)(v149 + 8)
                 ^ *((_DWORD *)v362 - 2)
                 ^ dword_180368[2 * (_DWORD)v137]
                 ^ dword_180B68[2 * BYTE2(v274)];
            v150 = dword_17DB68[2 * v427] ^ LODWORD(qword_17D368[v336]);
            HIDWORD(v132) = HIDWORD(qword_17D368[v413])
                          ^ dword_17DB68[2 * v417 + 1]
                          ^ *((_DWORD *)v282 - 1)
                          ^ *(_DWORD *)(v140 - 4)
                          ^ *(_DWORD *)(v368 + 12);
            v151 = LODWORD(qword_17D368[v413])
                 ^ dword_17DB68[2 * v417]
                 ^ *((_DWORD *)v282 - 2)
                 ^ *(_DWORD *)(v140 - 8)
                 ^ *(_DWORD *)(v368 + 8);
            v152 = dword_180368[2 * BYTE1(v274)];
            v153 = dword_180368[2 * BYTE1(v274) + 1];
            v275 = *(_QWORD *)&dword_180B68[2 * BYTE2(v231)];
            v154 = dword_17DB68[2 * v427 + 1] ^ HIDWORD(qword_17D368[v336]) ^ *((_DWORD *)v258 - 1);
            v229 = *((_DWORD *)v372 - 2) ^ v151 ^ dword_180368[2 * HIDWORD(v140)] ^ dword_180B68[2 * v421];
            v333 = HIDWORD(v132)
                 ^ *((_DWORD *)v372 - 1)
                 ^ dword_180368[2 * HIDWORD(v140) + 1]
                 ^ dword_180B68[2 * v421 + 1];
            v155 = LODWORD(qword_17D368[v206]) ^ dword_17DB68[2 * v297];
            LODWORD(v132) = dword_17DB68[2 * v297 + 1] ^ HIDWORD(qword_17D368[v206]);
            v207 = *(_DWORD *)(v376 + 8)
                 ^ v150
                 ^ *((_DWORD *)v258 - 2)
                 ^ *((_DWORD *)v343 - 2)
                 ^ *((_DWORD *)v380 - 2)
                 ^ v152;
            v98 = dword_180B68[2 * v237]
                ^ v155
                ^ *((_DWORD *)v347 - 2)
                ^ *((_DWORD *)v385 - 2)
                ^ *(_DWORD *)(v182 + 8)
                ^ *((_DWORD *)v192 - 2)
                ^ dword_180368[2 * v218];
            v156 = dword_180B68[2 * v243];
            v157 = LODWORD(qword_17D368[(unsigned __int8)v212])
                 ^ dword_17DB68[2 * v301]
                 ^ *((_DWORD *)v390 - 2)
                 ^ *((_DWORD *)v395 - 2)
                 ^ *(_DWORD *)(v198 + 8)
                 ^ *((_DWORD *)v186 - 2)
                 ^ dword_180368[2 * v224];
            v100 = v157 ^ v156;
            v97 = v154 ^ *((_DWORD *)v343 - 1) ^ *(_DWORD *)(v376 + 12) ^ *((_DWORD *)v380 - 1) ^ v153 ^ HIDWORD(v275);
            v96 = v207 ^ v275;
            v180 = v132
                 ^ *((_DWORD *)v347 - 1)
                 ^ *((_DWORD *)v385 - 1)
                 ^ *(_DWORD *)(v182 + 12)
                 ^ *((_DWORD *)v192 - 1)
                 ^ dword_180368[2 * v218 + 1]
                 ^ dword_180B68[2 * v237 + 1];
            v99 = HIDWORD(qword_17D368[(unsigned __int8)v212])
                ^ dword_17DB68[2 * v301 + 1]
                ^ *((_DWORD *)v390 - 1)
                ^ *((_DWORD *)v395 - 1)
                ^ *(_DWORD *)(v198 + 12)
                ^ *((_DWORD *)v186 - 1)
                ^ dword_180368[2 * v224 + 1]
                ^ dword_180B68[2 * v243 + 1];
          }
          while ( v177 != 0xF5FFFFFFFFFFFFFFLL );
          v158 = &v441;
          v159 = &v457;
          v160 = v307;
          v457 = v319;
          v161 = v312;
          v468 = v157 ^ v156;
          v469 = v99;
          v455 = v307;
          v458 = v264;
          v456 = v312;
          v464 = v207 ^ v275;
          v459 = v268;
          v465 = v97;
          v466 = v98;
          v460 = v287;
          v467 = v180;
          v162 = v436;
          v461 = v326;
          v163 = HIDWORD(v314);
          v462 = v229;
          v463 = v333;
          v164 = v314;
          while ( 1 )
          {
            v165 = *(_DWORD *)(v162 + 8);
            v162 += 8;
            v166 = v161 ^ v163;
            v167 = *(_DWORD *)(v162 + 4);
            *(_DWORD *)v162 = v165 ^ v164 ^ v160;
            *(_DWORD *)(v162 + 4) = v167 ^ v166;
            if ( v439 == (_BYTE *)v162 )
              break;
            v164 = *v158;
            ++v159;
            v163 = v158[1];
            v158 += 2;
            v160 = *((_DWORD *)v159 - 2);
            v161 = *((_DWORD *)v159 - 1);
          }
          v3 = 0;
          ++*((_QWORD *)a1 + 17);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
      }
    }
    v168 = v437;
    v169 = (__int64 *)v438;
    do
    {
      v168 += 4;
      result = *(void **)v169;
      v171 = *((_DWORD *)v169 + 1);
      v172 = *((_DWORD *)v169 + 2);
      v173 = *((_DWORD *)v169 + 3);
      v169 += 2;
      *(v168 - 4) = result;
      *(v168 - 3) = v171;
      *(v168 - 2) = v172;
      *(v168 - 1) = v173;
    }
    while ( v169 != &v440 );
    a1[16] = v3;
  }
  return result;
}
