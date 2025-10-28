void *__fastcall sph_groestl384_0(int a1, char *a2, size_t a3)
{
  int v3; // r6
  size_t v4; // r4
  int v5; // r8
  void *v6; // r0
  _BYTE *v7; // r0
  int *v8; // r12
  int v9; // r1
  int *v10; // r3
  int v11; // r6
  int v12; // t1
  int v13; // t1
  int v14; // r4
  int v15; // r2
  int v16; // r1
  int v17; // r12
  unsigned int v18; // r10
  unsigned int v19; // lr
  unsigned int v20; // r7
  int v21; // r9
  unsigned int v22; // r6
  int v23; // r4
  unsigned int v24; // r0
  int *v25; // r11
  _QWORD *v26; // r12
  _QWORD *v27; // r0
  _QWORD *v28; // r1
  _QWORD *v29; // r11
  int v30; // r3
  int v31; // r6
  int v32; // r2
  _QWORD *v33; // r12
  int v34; // r10
  int v35; // r5
  int v36; // r3
  _DWORD *v37; // r5
  int v38; // r8
  int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r12
  int v43; // r3
  int v44; // r6
  int v45; // r5
  int v46; // lr
  int v47; // r11
  _QWORD *v48; // r8
  _QWORD *v49; // r6
  int v50; // r12
  int v51; // r2
  int v52; // r3
  int v53; // lr
  int v54; // r0
  int v55; // r1
  int v56; // r0
  int v57; // r2
  int v58; // r3
  int v59; // r0
  int v60; // r12
  int v61; // r0
  __int64 v62; // r2
  int v63; // r1
  int v64; // r0
  int v65; // r12
  int v66; // r11
  int v67; // r4
  unsigned int v68; // r8
  unsigned int v69; // r10
  int v70; // r11
  _QWORD *v71; // r12
  _QWORD *v72; // r11
  int v73; // r6
  _QWORD *v74; // lr
  int v75; // r9
  int v76; // r5
  _QWORD *v77; // r4
  _QWORD *v78; // r12
  _QWORD *v79; // r0
  int v80; // r9
  int v81; // lr
  int v82; // r11
  int v83; // r12
  int v84; // r10
  int v85; // r1
  int v86; // r12
  int v87; // r4
  int v88; // r5
  int v89; // r4
  int v90; // r1
  int v91; // r6
  int v92; // r8
  int v93; // lr
  int v94; // r5
  int v95; // r4
  int v96; // r12
  int v97; // r6
  int v98; // r8
  __int64 v99; // r0
  int v100; // r9
  int v101; // r12
  int v102; // lr
  _QWORD *v103; // r12
  int v104; // r6
  int v105; // r5
  int v106; // r9
  int v107; // r6
  __int64 v108; // r2
  int v109; // r5
  int v110; // r12
  __int64 v111; // r2
  int v112; // r12
  int v113; // r5
  int v114; // r7
  int v115; // r6
  int v116; // r11
  int v117; // r9
  int v118; // r4
  int v119; // r2
  int v120; // r6
  int v121; // r8
  int v122; // lr
  int v123; // r10
  int v124; // r2
  int v125; // r11
  int v126; // r3
  unsigned int v127; // r1
  unsigned int v128; // r5
  unsigned int v129; // r0
  unsigned int v130; // lr
  unsigned int v131; // r12
  int v132; // r7
  unsigned int v133; // r2
  _QWORD *v134; // r5
  _QWORD *v135; // r1
  _QWORD *v136; // r0
  int v137; // r7
  int v138; // r5
  _QWORD *v139; // r1
  int v140; // r12
  int v141; // lr
  int v142; // r3
  int v143; // r3
  int v144; // r0
  int v145; // r10
  int v146; // r3
  _QWORD *v147; // r9
  int v148; // r0
  int v149; // r12
  int v150; // r7
  _QWORD *v151; // r0
  int v152; // r6
  unsigned int v153; // r2
  int v154; // r5
  unsigned int v155; // r12
  int v156; // r5
  _QWORD *v157; // lr
  int v158; // r9
  int v159; // r7
  int v160; // r1
  _QWORD *v161; // r8
  int v162; // r1
  unsigned int v163; // r2
  _QWORD *v164; // r9
  int v165; // r3
  int v166; // r2
  _QWORD *v167; // r6
  int v168; // r12
  int v169; // r4
  int v170; // r2
  _QWORD *v171; // r6
  int v172; // r3
  int v173; // r10
  _QWORD *v174; // r5
  int v175; // r1
  unsigned int v176; // r2
  int v177; // r6
  int v178; // r7
  unsigned int v179; // r2
  int v180; // lr
  int v181; // r3
  int v182; // lr
  int v183; // r0
  int v184; // r6
  int v185; // r1
  unsigned int v186; // r0
  unsigned int v187; // r2
  __int64 v188; // r6
  _QWORD *v189; // r12
  _QWORD *v190; // r1
  int v191; // r3
  _QWORD *v192; // r0
  int v193; // r2
  int v194; // r3
  int v195; // r2
  int v196; // r9
  int v197; // r10
  int v198; // r2
  int v199; // r5
  int v200; // r12
  int v201; // r9
  int v202; // r3
  _QWORD *v203; // r0
  _QWORD *v204; // r2
  int v205; // r5
  int v206; // r12
  int v207; // lr
  int v208; // r3
  int v209; // r8
  __int64 v210; // r6
  int v211; // r1
  int v212; // r8
  int v213; // r1
  int v214; // r10
  int v215; // r1
  int v216; // r3
  int v217; // r10
  int v218; // r9
  int v219; // r5
  int v220; // r0
  int v221; // r0
  int v222; // r5
  int v223; // lr
  _QWORD *v224; // r2
  int v225; // r0
  int v226; // r3
  int v227; // r4
  int v228; // r1
  int v229; // r12
  int v230; // r3
  _QWORD *v231; // r8
  int v232; // r12
  int v233; // r1
  int v234; // r3
  int v235; // lr
  __int64 v236; // r2
  int v237; // r0
  int v238; // lr
  int v239; // r12
  int v240; // r1
  int v241; // r10
  _DWORD *v242; // r1
  int v243; // lr
  int v244; // r5
  int v245; // lr
  int v246; // r12
  int v247; // r1
  int v248; // r8
  int v249; // r5
  int v250; // r0
  int v251; // r10
  int v252; // r7
  int v253; // r4
  int v254; // r6
  int v255; // r5
  int *v256; // r0
  int *v257; // r1
  int v258; // r4
  int v259; // r3
  unsigned __int64 v260; // kr48_8
  int v261; // lr
  int v262; // r2
  int v263; // t1
  int v264; // r2
  void *result; // r0
  size_t v267; // r5
  int v268; // [sp+0h] [bp-354h]
  __int64 v269; // [sp+0h] [bp-354h]
  __int64 v270; // [sp+8h] [bp-34Ch]
  int v271; // [sp+8h] [bp-34Ch]
  unsigned int v272; // [sp+8h] [bp-34Ch]
  int v273; // [sp+8h] [bp-34Ch]
  unsigned int v274; // [sp+18h] [bp-33Ch]
  unsigned int v275; // [sp+18h] [bp-33Ch]
  int v276; // [sp+18h] [bp-33Ch]
  int v277; // [sp+18h] [bp-33Ch]
  int v278; // [sp+18h] [bp-33Ch]
  int v279; // [sp+1Ch] [bp-338h]
  unsigned int v280; // [sp+1Ch] [bp-338h]
  unsigned int v281; // [sp+1Ch] [bp-338h]
  int v282; // [sp+1Ch] [bp-338h]
  _QWORD *v283; // [sp+1Ch] [bp-338h]
  int v284; // [sp+1Ch] [bp-338h]
  unsigned int v285; // [sp+1Ch] [bp-338h]
  _QWORD *v286; // [sp+1Ch] [bp-338h]
  unsigned int v287; // [sp+1Ch] [bp-338h]
  int v288; // [sp+1Ch] [bp-338h]
  unsigned __int64 v289; // [sp+20h] [bp-334h]
  unsigned int v290; // [sp+20h] [bp-334h]
  _QWORD *v291; // [sp+20h] [bp-334h]
  unsigned int v292; // [sp+20h] [bp-334h]
  _QWORD *v293; // [sp+20h] [bp-334h]
  int v294; // [sp+20h] [bp-334h]
  int v295; // [sp+20h] [bp-334h]
  unsigned int v296; // [sp+24h] [bp-330h]
  unsigned int v297; // [sp+24h] [bp-330h]
  int v298; // [sp+24h] [bp-330h]
  int v299; // [sp+24h] [bp-330h]
  int v300; // [sp+28h] [bp-32Ch]
  unsigned int v301; // [sp+28h] [bp-32Ch]
  int v302; // [sp+28h] [bp-32Ch]
  unsigned int v303; // [sp+28h] [bp-32Ch]
  int v304; // [sp+28h] [bp-32Ch]
  int v305; // [sp+28h] [bp-32Ch]
  unsigned int v306; // [sp+28h] [bp-32Ch]
  int v307; // [sp+28h] [bp-32Ch]
  unsigned int v308; // [sp+2Ch] [bp-328h]
  int v309; // [sp+2Ch] [bp-328h]
  unsigned int v310; // [sp+2Ch] [bp-328h]
  int v311; // [sp+2Ch] [bp-328h]
  int v312; // [sp+2Ch] [bp-328h]
  int v313; // [sp+2Ch] [bp-328h]
  unsigned int v314; // [sp+2Ch] [bp-328h]
  unsigned int v315; // [sp+2Ch] [bp-328h]
  _QWORD *v316; // [sp+2Ch] [bp-328h]
  int v317; // [sp+2Ch] [bp-328h]
  __int64 v318; // [sp+30h] [bp-324h]
  unsigned int v319; // [sp+30h] [bp-324h]
  unsigned int v320; // [sp+30h] [bp-324h]
  int v321; // [sp+30h] [bp-324h]
  unsigned int v322; // [sp+34h] [bp-320h]
  unsigned int v323; // [sp+34h] [bp-320h]
  unsigned int v324; // [sp+38h] [bp-31Ch]
  unsigned int v325; // [sp+38h] [bp-31Ch]
  unsigned int v326; // [sp+38h] [bp-31Ch]
  unsigned int v327; // [sp+38h] [bp-31Ch]
  int v328; // [sp+38h] [bp-31Ch]
  unsigned int v329; // [sp+3Ch] [bp-318h]
  unsigned int v330; // [sp+3Ch] [bp-318h]
  int v331; // [sp+3Ch] [bp-318h]
  int v332; // [sp+3Ch] [bp-318h]
  unsigned int v333; // [sp+3Ch] [bp-318h]
  unsigned int v334; // [sp+3Ch] [bp-318h]
  _QWORD *v335; // [sp+3Ch] [bp-318h]
  _QWORD *v336; // [sp+3Ch] [bp-318h]
  int v337; // [sp+3Ch] [bp-318h]
  unsigned int v338; // [sp+40h] [bp-314h]
  unsigned int v339; // [sp+40h] [bp-314h]
  int v340; // [sp+40h] [bp-314h]
  int v341; // [sp+40h] [bp-314h]
  _QWORD *v342; // [sp+40h] [bp-314h]
  unsigned int v343; // [sp+40h] [bp-314h]
  int v344; // [sp+40h] [bp-314h]
  unsigned int v345; // [sp+40h] [bp-314h]
  _QWORD *v346; // [sp+40h] [bp-314h]
  int v347; // [sp+44h] [bp-310h]
  unsigned int v348; // [sp+44h] [bp-310h]
  unsigned int v349; // [sp+44h] [bp-310h]
  int v350; // [sp+44h] [bp-310h]
  unsigned int v351; // [sp+44h] [bp-310h]
  int v352; // [sp+44h] [bp-310h]
  int v353; // [sp+48h] [bp-30Ch]
  unsigned int v354; // [sp+48h] [bp-30Ch]
  unsigned int v355; // [sp+48h] [bp-30Ch]
  int v356; // [sp+48h] [bp-30Ch]
  int v357; // [sp+48h] [bp-30Ch]
  int v358; // [sp+48h] [bp-30Ch]
  unsigned int v359; // [sp+48h] [bp-30Ch]
  unsigned int v360; // [sp+48h] [bp-30Ch]
  int v361; // [sp+4Ch] [bp-308h]
  unsigned int v362; // [sp+4Ch] [bp-308h]
  unsigned int v363; // [sp+4Ch] [bp-308h]
  int v364; // [sp+4Ch] [bp-308h]
  unsigned int v365; // [sp+4Ch] [bp-308h]
  unsigned int v366; // [sp+4Ch] [bp-308h]
  int v367; // [sp+4Ch] [bp-308h]
  int v368; // [sp+50h] [bp-304h]
  unsigned int v369; // [sp+50h] [bp-304h]
  __int64 v370; // [sp+50h] [bp-304h]
  int v371; // [sp+50h] [bp-304h]
  unsigned int v372; // [sp+50h] [bp-304h]
  unsigned int v373; // [sp+50h] [bp-304h]
  int v374; // [sp+54h] [bp-300h]
  unsigned int v375; // [sp+54h] [bp-300h]
  int v376; // [sp+54h] [bp-300h]
  unsigned int v377; // [sp+54h] [bp-300h]
  unsigned int v378; // [sp+54h] [bp-300h]
  unsigned int v379; // [sp+58h] [bp-2FCh]
  unsigned int v380; // [sp+58h] [bp-2FCh]
  int v381; // [sp+58h] [bp-2FCh]
  int v382; // [sp+58h] [bp-2FCh]
  unsigned int v383; // [sp+58h] [bp-2FCh]
  unsigned int v384; // [sp+58h] [bp-2FCh]
  int v385; // [sp+5Ch] [bp-2F8h]
  unsigned int v386; // [sp+5Ch] [bp-2F8h]
  int v387; // [sp+5Ch] [bp-2F8h]
  int v388; // [sp+5Ch] [bp-2F8h]
  unsigned int v389; // [sp+5Ch] [bp-2F8h]
  int v390; // [sp+5Ch] [bp-2F8h]
  int v391; // [sp+5Ch] [bp-2F8h]
  int v392; // [sp+5Ch] [bp-2F8h]
  unsigned int v393; // [sp+5Ch] [bp-2F8h]
  unsigned int v394; // [sp+5Ch] [bp-2F8h]
  int v395; // [sp+60h] [bp-2F4h]
  unsigned int v396; // [sp+60h] [bp-2F4h]
  _QWORD *v397; // [sp+60h] [bp-2F4h]
  _QWORD *v398; // [sp+60h] [bp-2F4h]
  unsigned int v399; // [sp+60h] [bp-2F4h]
  _QWORD *v400; // [sp+60h] [bp-2F4h]
  int v401; // [sp+60h] [bp-2F4h]
  unsigned int v402; // [sp+60h] [bp-2F4h]
  unsigned int v403; // [sp+60h] [bp-2F4h]
  _QWORD *v404; // [sp+64h] [bp-2F0h]
  int v405; // [sp+64h] [bp-2F0h]
  unsigned int v406; // [sp+64h] [bp-2F0h]
  int v407; // [sp+64h] [bp-2F0h]
  int v408; // [sp+64h] [bp-2F0h]
  unsigned int v409; // [sp+64h] [bp-2F0h]
  unsigned int v410; // [sp+64h] [bp-2F0h]
  int v411; // [sp+68h] [bp-2ECh]
  unsigned int v412; // [sp+68h] [bp-2ECh]
  int v413; // [sp+68h] [bp-2ECh]
  int v414; // [sp+68h] [bp-2ECh]
  unsigned int v415; // [sp+68h] [bp-2ECh]
  int v416; // [sp+68h] [bp-2ECh]
  int v417; // [sp+68h] [bp-2ECh]
  int v418; // [sp+68h] [bp-2ECh]
  unsigned int v419; // [sp+68h] [bp-2ECh]
  int v420; // [sp+68h] [bp-2ECh]
  unsigned int v421; // [sp+68h] [bp-2ECh]
  unsigned int v422; // [sp+6Ch] [bp-2E8h]
  int v423; // [sp+6Ch] [bp-2E8h]
  unsigned int v424; // [sp+6Ch] [bp-2E8h]
  int v425; // [sp+6Ch] [bp-2E8h]
  int v426; // [sp+6Ch] [bp-2E8h]
  unsigned int v427; // [sp+6Ch] [bp-2E8h]
  _QWORD *v428; // [sp+6Ch] [bp-2E8h]
  unsigned int v429; // [sp+6Ch] [bp-2E8h]
  unsigned int v430; // [sp+70h] [bp-2E4h]
  _QWORD *v431; // [sp+70h] [bp-2E4h]
  unsigned int v432; // [sp+70h] [bp-2E4h]
  int v433; // [sp+70h] [bp-2E4h]
  int v434; // [sp+70h] [bp-2E4h]
  int v435; // [sp+70h] [bp-2E4h]
  unsigned int v436; // [sp+70h] [bp-2E4h]
  int v437; // [sp+70h] [bp-2E4h]
  unsigned int v438; // [sp+70h] [bp-2E4h]
  int v439; // [sp+74h] [bp-2E0h]
  unsigned int v440; // [sp+74h] [bp-2E0h]
  int v441; // [sp+74h] [bp-2E0h]
  _QWORD *v442; // [sp+74h] [bp-2E0h]
  unsigned int v443; // [sp+74h] [bp-2E0h]
  int v444; // [sp+74h] [bp-2E0h]
  int v445; // [sp+74h] [bp-2E0h]
  int v446; // [sp+74h] [bp-2E0h]
  unsigned int v447; // [sp+74h] [bp-2E0h]
  int v448; // [sp+78h] [bp-2DCh]
  int v449; // [sp+78h] [bp-2DCh]
  unsigned int v450; // [sp+78h] [bp-2DCh]
  int v451; // [sp+78h] [bp-2DCh]
  unsigned int v452; // [sp+78h] [bp-2DCh]
  int v453; // [sp+78h] [bp-2DCh]
  unsigned int v454; // [sp+78h] [bp-2DCh]
  int v455; // [sp+7Ch] [bp-2D8h]
  unsigned int v456; // [sp+7Ch] [bp-2D8h]
  int v457; // [sp+7Ch] [bp-2D8h]
  unsigned int v458; // [sp+7Ch] [bp-2D8h]
  int v459; // [sp+7Ch] [bp-2D8h]
  unsigned int v460; // [sp+7Ch] [bp-2D8h]
  unsigned int v461; // [sp+7Ch] [bp-2D8h]
  int v462; // [sp+80h] [bp-2D4h]
  unsigned int v463; // [sp+80h] [bp-2D4h]
  unsigned int v464; // [sp+80h] [bp-2D4h]
  int v465; // [sp+80h] [bp-2D4h]
  int v466; // [sp+80h] [bp-2D4h]
  unsigned int v467; // [sp+80h] [bp-2D4h]
  int v468; // [sp+84h] [bp-2D0h]
  unsigned int v469; // [sp+84h] [bp-2D0h]
  unsigned int v470; // [sp+84h] [bp-2D0h]
  int v471; // [sp+84h] [bp-2D0h]
  _QWORD *v472; // [sp+84h] [bp-2D0h]
  unsigned int v473; // [sp+84h] [bp-2D0h]
  __int64 v474; // [sp+88h] [bp-2CCh]
  int v475; // [sp+88h] [bp-2CCh]
  int v476; // [sp+88h] [bp-2CCh]
  unsigned int v477; // [sp+88h] [bp-2CCh]
  int v478; // [sp+88h] [bp-2CCh]
  unsigned int v479; // [sp+88h] [bp-2CCh]
  int v480; // [sp+88h] [bp-2CCh]
  unsigned int v481; // [sp+88h] [bp-2CCh]
  int v482; // [sp+8Ch] [bp-2C8h]
  unsigned int v483; // [sp+8Ch] [bp-2C8h]
  int v484; // [sp+8Ch] [bp-2C8h]
  __int16 v485; // [sp+8Ch] [bp-2C8h]
  _QWORD *v486; // [sp+8Ch] [bp-2C8h]
  int v487; // [sp+8Ch] [bp-2C8h]
  unsigned int v488; // [sp+8Ch] [bp-2C8h]
  int v489; // [sp+90h] [bp-2C4h]
  int v490; // [sp+90h] [bp-2C4h]
  int v491; // [sp+90h] [bp-2C4h]
  int v492; // [sp+90h] [bp-2C4h]
  __int64 v493; // [sp+90h] [bp-2C4h]
  int v494; // [sp+90h] [bp-2C4h]
  unsigned int v495; // [sp+90h] [bp-2C4h]
  int v496; // [sp+94h] [bp-2C0h]
  int v497; // [sp+94h] [bp-2C0h]
  int v498; // [sp+94h] [bp-2C0h]
  unsigned int v499; // [sp+94h] [bp-2C0h]
  int v500; // [sp+98h] [bp-2BCh]
  _DWORD *v501; // [sp+98h] [bp-2BCh]
  int v502; // [sp+98h] [bp-2BCh]
  unsigned int v503; // [sp+98h] [bp-2BCh]
  _QWORD *v504; // [sp+98h] [bp-2BCh]
  int v505; // [sp+98h] [bp-2BCh]
  int v506; // [sp+98h] [bp-2BCh]
  int v507; // [sp+9Ch] [bp-2B8h]
  int v508; // [sp+9Ch] [bp-2B8h]
  int v509; // [sp+9Ch] [bp-2B8h]
  int v510; // [sp+9Ch] [bp-2B8h]
  _QWORD *v511; // [sp+9Ch] [bp-2B8h]
  _QWORD *v512; // [sp+9Ch] [bp-2B8h]
  int v513; // [sp+A0h] [bp-2B4h]
  unsigned int v514; // [sp+A0h] [bp-2B4h]
  int v515; // [sp+A0h] [bp-2B4h]
  unsigned int v516; // [sp+A0h] [bp-2B4h]
  int v517; // [sp+A0h] [bp-2B4h]
  unsigned int v518; // [sp+A0h] [bp-2B4h]
  int v519; // [sp+A4h] [bp-2B0h]
  unsigned int v520; // [sp+A4h] [bp-2B0h]
  unsigned int v521; // [sp+A4h] [bp-2B0h]
  unsigned int v522; // [sp+A4h] [bp-2B0h]
  int v523; // [sp+A8h] [bp-2ACh]
  _QWORD *v524; // [sp+A8h] [bp-2ACh]
  _QWORD *v525; // [sp+A8h] [bp-2ACh]
  int v526; // [sp+A8h] [bp-2ACh]
  int v527; // [sp+A8h] [bp-2ACh]
  unsigned int v528; // [sp+A8h] [bp-2ACh]
  unsigned int v529; // [sp+A8h] [bp-2ACh]
  int v530; // [sp+A8h] [bp-2ACh]
  int v531; // [sp+ACh] [bp-2A8h]
  unsigned int v532; // [sp+ACh] [bp-2A8h]
  _QWORD *v533; // [sp+ACh] [bp-2A8h]
  int v534; // [sp+ACh] [bp-2A8h]
  unsigned int v535; // [sp+ACh] [bp-2A8h]
  int v536; // [sp+B0h] [bp-2A4h]
  _QWORD *v537; // [sp+B0h] [bp-2A4h]
  int v538; // [sp+B0h] [bp-2A4h]
  unsigned int v539; // [sp+B0h] [bp-2A4h]
  unsigned int v540; // [sp+B0h] [bp-2A4h]
  _QWORD *v541; // [sp+B4h] [bp-2A0h]
  int v542; // [sp+B4h] [bp-2A0h]
  int v543; // [sp+B4h] [bp-2A0h]
  _QWORD *v544; // [sp+B4h] [bp-2A0h]
  _QWORD *v545; // [sp+B4h] [bp-2A0h]
  int v546; // [sp+B4h] [bp-2A0h]
  unsigned int v547; // [sp+B8h] [bp-29Ch]
  int v548; // [sp+B8h] [bp-29Ch]
  unsigned int v549; // [sp+B8h] [bp-29Ch]
  int v550; // [sp+B8h] [bp-29Ch]
  int v551; // [sp+B8h] [bp-29Ch]
  _QWORD *v552; // [sp+B8h] [bp-29Ch]
  _QWORD *v553; // [sp+B8h] [bp-29Ch]
  int v554; // [sp+B8h] [bp-29Ch]
  unsigned int v555; // [sp+BCh] [bp-298h]
  unsigned int v556; // [sp+BCh] [bp-298h]
  int v557; // [sp+BCh] [bp-298h]
  _QWORD *v558; // [sp+BCh] [bp-298h]
  _QWORD *v559; // [sp+BCh] [bp-298h]
  _QWORD *v560; // [sp+BCh] [bp-298h]
  _QWORD *v561; // [sp+BCh] [bp-298h]
  int v562; // [sp+BCh] [bp-298h]
  _QWORD *v563; // [sp+C0h] [bp-294h]
  int v564; // [sp+C0h] [bp-294h]
  int v565; // [sp+C0h] [bp-294h]
  int v566; // [sp+C0h] [bp-294h]
  _QWORD *v567; // [sp+C0h] [bp-294h]
  _QWORD *v568; // [sp+C0h] [bp-294h]
  _QWORD *v569; // [sp+C0h] [bp-294h]
  int v570; // [sp+C0h] [bp-294h]
  _QWORD *v571; // [sp+C0h] [bp-294h]
  int v572; // [sp+C4h] [bp-290h]
  int v573; // [sp+C4h] [bp-290h]
  unsigned int v574; // [sp+C4h] [bp-290h]
  unsigned int v575; // [sp+C4h] [bp-290h]
  _QWORD *v576; // [sp+C4h] [bp-290h]
  _QWORD *v577; // [sp+C4h] [bp-290h]
  _QWORD *v578; // [sp+C4h] [bp-290h]
  _QWORD *v579; // [sp+C4h] [bp-290h]
  _QWORD *v580; // [sp+C8h] [bp-28Ch]
  int v581; // [sp+C8h] [bp-28Ch]
  _QWORD *v582; // [sp+C8h] [bp-28Ch]
  int v583; // [sp+C8h] [bp-28Ch]
  _QWORD *v584; // [sp+C8h] [bp-28Ch]
  _QWORD *v585; // [sp+C8h] [bp-28Ch]
  _QWORD *v586; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v587; // [sp+CCh] [bp-288h]
  int v588; // [sp+CCh] [bp-288h]
  unsigned int v589; // [sp+CCh] [bp-288h]
  _QWORD *v590; // [sp+D0h] [bp-284h]
  _QWORD *v591; // [sp+D0h] [bp-284h]
  int v592; // [sp+D0h] [bp-284h]
  int v593; // [sp+D4h] [bp-280h]
  int v594; // [sp+D4h] [bp-280h]
  unsigned int v595; // [sp+D4h] [bp-280h]
  _QWORD *v596; // [sp+D4h] [bp-280h]
  int v597; // [sp+D4h] [bp-280h]
  _QWORD *v598; // [sp+D4h] [bp-280h]
  int v599; // [sp+D4h] [bp-280h]
  _DWORD *v600; // [sp+D4h] [bp-280h]
  _QWORD *v601; // [sp+D4h] [bp-280h]
  _QWORD *v602; // [sp+D4h] [bp-280h]
  int v603; // [sp+D8h] [bp-27Ch]
  int v604; // [sp+D8h] [bp-27Ch]
  _QWORD *v605; // [sp+D8h] [bp-27Ch]
  _QWORD *v606; // [sp+D8h] [bp-27Ch]
  _DWORD *v607; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v609; // [sp+E0h] [bp-274h]
  _QWORD *v610; // [sp+E0h] [bp-274h]
  _QWORD *v611; // [sp+E0h] [bp-274h]
  unsigned int v612; // [sp+E0h] [bp-274h]
  _QWORD *v613; // [sp+E0h] [bp-274h]
  _QWORD *v614; // [sp+E0h] [bp-274h]
  int v615; // [sp+E0h] [bp-274h]
  unsigned int v616; // [sp+E0h] [bp-274h]
  _QWORD *v617; // [sp+E0h] [bp-274h]
  _QWORD *v618; // [sp+E0h] [bp-274h]
  _QWORD *v619; // [sp+E0h] [bp-274h]
  int v620; // [sp+E4h] [bp-270h]
  _QWORD *v621; // [sp+E4h] [bp-270h]
  _QWORD *v622; // [sp+E4h] [bp-270h]
  _QWORD *v623; // [sp+E4h] [bp-270h]
  _QWORD *v624; // [sp+E4h] [bp-270h]
  _QWORD *v625; // [sp+E4h] [bp-270h]
  _QWORD *v626; // [sp+E4h] [bp-270h]
  _QWORD *v627; // [sp+E4h] [bp-270h]
  _QWORD *v628; // [sp+E8h] [bp-26Ch]
  _QWORD *v629; // [sp+E8h] [bp-26Ch]
  _QWORD *v630; // [sp+E8h] [bp-26Ch]
  _QWORD *v631; // [sp+E8h] [bp-26Ch]
  _QWORD *v632; // [sp+E8h] [bp-26Ch]
  _QWORD *v633; // [sp+E8h] [bp-26Ch]
  int v634; // [sp+ECh] [bp-268h]
  _QWORD *v635; // [sp+ECh] [bp-268h]
  _QWORD *v636; // [sp+ECh] [bp-268h]
  _QWORD *v637; // [sp+ECh] [bp-268h]
  int v638; // [sp+ECh] [bp-268h]
  _QWORD *v639; // [sp+ECh] [bp-268h]
  _QWORD *v640; // [sp+ECh] [bp-268h]
  int v641; // [sp+F0h] [bp-264h]
  _QWORD *v642; // [sp+F0h] [bp-264h]
  _DWORD *v643; // [sp+F0h] [bp-264h]
  int v644; // [sp+F0h] [bp-264h]
  _QWORD *v645; // [sp+F0h] [bp-264h]
  _QWORD *v646; // [sp+F0h] [bp-264h]
  _DWORD *v647; // [sp+F0h] [bp-264h]
  _QWORD *v648; // [sp+F0h] [bp-264h]
  int v649; // [sp+F0h] [bp-264h]
  _QWORD *v650; // [sp+F0h] [bp-264h]
  int v651; // [sp+F4h] [bp-260h]
  _QWORD *v652; // [sp+F4h] [bp-260h]
  int *v653; // [sp+F4h] [bp-260h]
  _QWORD *v654; // [sp+F4h] [bp-260h]
  _DWORD *v655; // [sp+F4h] [bp-260h]
  int v656; // [sp+F4h] [bp-260h]
  _QWORD *v657; // [sp+F4h] [bp-260h]
  int v658; // [sp+F4h] [bp-260h]
  _DWORD *v659; // [sp+F4h] [bp-260h]
  _QWORD *v660; // [sp+F8h] [bp-25Ch]
  _QWORD *v661; // [sp+F8h] [bp-25Ch]
  int v662; // [sp+F8h] [bp-25Ch]
  int v663; // [sp+F8h] [bp-25Ch]
  _QWORD *v664; // [sp+F8h] [bp-25Ch]
  unsigned int v665; // [sp+FCh] [bp-258h]
  _QWORD *v666; // [sp+FCh] [bp-258h]
  _QWORD *v667; // [sp+FCh] [bp-258h]
  int v668; // [sp+FCh] [bp-258h]
  int v669; // [sp+FCh] [bp-258h]
  int v670; // [sp+100h] [bp-254h]
  _QWORD *v671; // [sp+100h] [bp-254h]
  _QWORD *v672; // [sp+100h] [bp-254h]
  int v673; // [sp+100h] [bp-254h]
  int v674; // [sp+100h] [bp-254h]
  int v675; // [sp+100h] [bp-254h]
  int v676; // [sp+104h] [bp-250h]
  _DWORD *v677; // [sp+104h] [bp-250h]
  int v678; // [sp+104h] [bp-250h]
  _QWORD *v679; // [sp+104h] [bp-250h]
  _QWORD *v680; // [sp+104h] [bp-250h]
  int v681; // [sp+104h] [bp-250h]
  int v682; // [sp+104h] [bp-250h]
  int v683; // [sp+104h] [bp-250h]
  _QWORD *v684; // [sp+104h] [bp-250h]
  int v685; // [sp+104h] [bp-250h]
  int v686; // [sp+108h] [bp-24Ch]
  _DWORD *v687; // [sp+108h] [bp-24Ch]
  _QWORD *v688; // [sp+108h] [bp-24Ch]
  int v689; // [sp+108h] [bp-24Ch]
  _QWORD *v690; // [sp+108h] [bp-24Ch]
  int v691; // [sp+10Ch] [bp-248h]
  _QWORD *v692; // [sp+10Ch] [bp-248h]
  _QWORD *v693; // [sp+10Ch] [bp-248h]
  _QWORD *v694; // [sp+10Ch] [bp-248h]
  unsigned int v695; // [sp+10Ch] [bp-248h]
  int v696; // [sp+10Ch] [bp-248h]
  int v697; // [sp+10Ch] [bp-248h]
  _QWORD *v698; // [sp+10Ch] [bp-248h]
  int v699; // [sp+110h] [bp-244h]
  _QWORD *v700; // [sp+110h] [bp-244h]
  int v701; // [sp+110h] [bp-244h]
  _QWORD *v702; // [sp+110h] [bp-244h]
  _QWORD *v703; // [sp+110h] [bp-244h]
  _QWORD *v704; // [sp+110h] [bp-244h]
  int v705; // [sp+114h] [bp-240h]
  int v706; // [sp+114h] [bp-240h]
  _QWORD *v707; // [sp+114h] [bp-240h]
  _QWORD *v708; // [sp+114h] [bp-240h]
  int v709; // [sp+114h] [bp-240h]
  int v710; // [sp+114h] [bp-240h]
  _QWORD *v711; // [sp+114h] [bp-240h]
  _QWORD *v712; // [sp+118h] [bp-23Ch]
  _QWORD *v713; // [sp+118h] [bp-23Ch]
  int v714; // [sp+118h] [bp-23Ch]
  int v715; // [sp+118h] [bp-23Ch]
  _QWORD *v716; // [sp+118h] [bp-23Ch]
  int v717; // [sp+118h] [bp-23Ch]
  int v718; // [sp+118h] [bp-23Ch]
  unsigned int v719; // [sp+11Ch] [bp-238h]
  _QWORD *v720; // [sp+11Ch] [bp-238h]
  _QWORD *v721; // [sp+11Ch] [bp-238h]
  int v722; // [sp+11Ch] [bp-238h]
  int v723; // [sp+11Ch] [bp-238h]
  int v724; // [sp+11Ch] [bp-238h]
  _QWORD *v725; // [sp+11Ch] [bp-238h]
  _QWORD *v726; // [sp+11Ch] [bp-238h]
  int v727; // [sp+120h] [bp-234h]
  _QWORD *v728; // [sp+120h] [bp-234h]
  _QWORD *v729; // [sp+120h] [bp-234h]
  _QWORD *v730; // [sp+120h] [bp-234h]
  int v731; // [sp+120h] [bp-234h]
  int v732; // [sp+120h] [bp-234h]
  _QWORD *v733; // [sp+120h] [bp-234h]
  int v734; // [sp+124h] [bp-230h]
  int v735; // [sp+124h] [bp-230h]
  _QWORD *v736; // [sp+124h] [bp-230h]
  int v737; // [sp+124h] [bp-230h]
  _QWORD *v738; // [sp+124h] [bp-230h]
  _QWORD *v739; // [sp+124h] [bp-230h]
  _QWORD *v740; // [sp+128h] [bp-22Ch]
  int v741; // [sp+128h] [bp-22Ch]
  _QWORD *v742; // [sp+128h] [bp-22Ch]
  int v743; // [sp+128h] [bp-22Ch]
  int v744; // [sp+128h] [bp-22Ch]
  int v745; // [sp+128h] [bp-22Ch]
  int v746; // [sp+12Ch] [bp-228h]
  _QWORD *v747; // [sp+12Ch] [bp-228h]
  int v748; // [sp+12Ch] [bp-228h]
  int v749; // [sp+12Ch] [bp-228h]
  int v750; // [sp+12Ch] [bp-228h]
  _QWORD *v751; // [sp+12Ch] [bp-228h]
  _QWORD *v752; // [sp+130h] [bp-224h]
  int v753; // [sp+130h] [bp-224h]
  int v754; // [sp+130h] [bp-224h]
  int v755; // [sp+130h] [bp-224h]
  int v756; // [sp+130h] [bp-224h]
  int v757; // [sp+130h] [bp-224h]
  _QWORD *v758; // [sp+134h] [bp-220h]
  int v759; // [sp+134h] [bp-220h]
  int v760; // [sp+134h] [bp-220h]
  int v761; // [sp+134h] [bp-220h]
  int v762; // [sp+138h] [bp-21Ch]
  int v763; // [sp+138h] [bp-21Ch]
  int v764; // [sp+138h] [bp-21Ch]
  int v765; // [sp+13Ch] [bp-218h]
  _QWORD *v766; // [sp+13Ch] [bp-218h]
  int v767; // [sp+13Ch] [bp-218h]
  int v768; // [sp+13Ch] [bp-218h]
  _QWORD *v769; // [sp+13Ch] [bp-218h]
  int v770; // [sp+13Ch] [bp-218h]
  int v771; // [sp+13Ch] [bp-218h]
  int v772; // [sp+140h] [bp-214h]
  _QWORD *v773; // [sp+140h] [bp-214h]
  int v774; // [sp+140h] [bp-214h]
  int v775; // [sp+140h] [bp-214h]
  int v776; // [sp+144h] [bp-210h]
  _QWORD *v777; // [sp+144h] [bp-210h]
  int v778; // [sp+144h] [bp-210h]
  int v779; // [sp+144h] [bp-210h]
  unsigned int v780; // [sp+144h] [bp-210h]
  int v781; // [sp+148h] [bp-20Ch]
  _DWORD *v782; // [sp+148h] [bp-20Ch]
  int v783; // [sp+148h] [bp-20Ch]
  unsigned int v784; // [sp+14Ch] [bp-208h]
  int v785; // [sp+14Ch] [bp-208h]
  unsigned int v786; // [sp+14Ch] [bp-208h]
  unsigned int v787; // [sp+14Ch] [bp-208h]
  int v788; // [sp+150h] [bp-204h]
  _QWORD *v789; // [sp+150h] [bp-204h]
  _DWORD *v790; // [sp+150h] [bp-204h]
  unsigned int v791; // [sp+150h] [bp-204h]
  int v792; // [sp+150h] [bp-204h]
  int v793; // [sp+154h] [bp-200h]
  _QWORD *v794; // [sp+154h] [bp-200h]
  int v795; // [sp+154h] [bp-200h]
  int v796; // [sp+154h] [bp-200h]
  unsigned int v797; // [sp+158h] [bp-1FCh]
  _QWORD *v798; // [sp+158h] [bp-1FCh]
  _DWORD *v799; // [sp+158h] [bp-1FCh]
  unsigned int v800; // [sp+158h] [bp-1FCh]
  int v801; // [sp+158h] [bp-1FCh]
  int v802; // [sp+15Ch] [bp-1F8h]
  _QWORD *v803; // [sp+15Ch] [bp-1F8h]
  int v804; // [sp+15Ch] [bp-1F8h]
  int v805; // [sp+15Ch] [bp-1F8h]
  unsigned int v806; // [sp+15Ch] [bp-1F8h]
  int v807; // [sp+160h] [bp-1F4h]
  _QWORD *v808; // [sp+160h] [bp-1F4h]
  int v809; // [sp+160h] [bp-1F4h]
  int v810; // [sp+160h] [bp-1F4h]
  _QWORD *v811; // [sp+164h] [bp-1F0h]
  _DWORD *v812; // [sp+164h] [bp-1F0h]
  unsigned int v813; // [sp+164h] [bp-1F0h]
  unsigned int v814; // [sp+164h] [bp-1F0h]
  _QWORD *v815; // [sp+168h] [bp-1ECh]
  _DWORD *v816; // [sp+168h] [bp-1ECh]
  int v817; // [sp+16Ch] [bp-1E8h]
  int v818; // [sp+16Ch] [bp-1E8h]
  int v819; // [sp+16Ch] [bp-1E8h]
  _QWORD *v820; // [sp+16Ch] [bp-1E8h]
  unsigned int v821; // [sp+170h] [bp-1E4h]
  int v822; // [sp+170h] [bp-1E4h]
  int v823; // [sp+174h] [bp-1E0h]
  _QWORD *v824; // [sp+174h] [bp-1E0h]
  int v825; // [sp+178h] [bp-1DCh]
  _QWORD *v826; // [sp+178h] [bp-1DCh]
  int v827; // [sp+17Ch] [bp-1D8h]
  _DWORD *v828; // [sp+17Ch] [bp-1D8h]
  int v829; // [sp+180h] [bp-1D4h]
  int v830; // [sp+180h] [bp-1D4h]
  _QWORD *v831; // [sp+180h] [bp-1D4h]
  int v832; // [sp+184h] [bp-1D0h]
  int v833; // [sp+184h] [bp-1D0h]
  int v834; // [sp+188h] [bp-1CCh]
  int v835; // [sp+18Ch] [bp-1C8h]
  int v836; // [sp+18Ch] [bp-1C8h]
  int v837; // [sp+190h] [bp-1C4h]
  int v838; // [sp+194h] [bp-1C0h]
  unsigned int v839; // [sp+198h] [bp-1BCh]
  char *src; // [sp+1C0h] [bp-194h]
  int v842; // [sp+1C8h] [bp-18Ch] BYREF
  void *v843; // [sp+1CCh] [bp-188h]
  _BYTE dest[128]; // [sp+1D0h] [bp-184h] BYREF
  unsigned __int64 v845; // [sp+250h] [bp-104h]
  int v846; // [sp+258h] [bp-FCh] BYREF
  int v847; // [sp+25Ch] [bp-F8h]
  int v848; // [sp+260h] [bp-F4h]
  int v849; // [sp+264h] [bp-F0h]
  int v850; // [sp+268h] [bp-ECh]
  int v851; // [sp+26Ch] [bp-E8h]
  __int64 v852; // [sp+270h] [bp-E4h]
  int v853; // [sp+278h] [bp-DCh]
  int v854; // [sp+27Ch] [bp-D8h]
  int v855; // [sp+280h] [bp-D4h]
  int v856; // [sp+284h] [bp-D0h]
  int v857; // [sp+288h] [bp-CCh]
  int v858; // [sp+28Ch] [bp-C8h]
  int v859; // [sp+290h] [bp-C4h]
  int v860; // [sp+294h] [bp-C0h]
  int v861; // [sp+298h] [bp-BCh]
  int v862; // [sp+29Ch] [bp-B8h]
  int v863; // [sp+2A0h] [bp-B4h]
  int v864; // [sp+2A4h] [bp-B0h]
  int v865; // [sp+2A8h] [bp-ACh]
  int v866; // [sp+2ACh] [bp-A8h]
  int v867; // [sp+2B0h] [bp-A4h]
  int v868; // [sp+2B4h] [bp-A0h]
  int v869; // [sp+2B8h] [bp-9Ch]
  int v870; // [sp+2BCh] [bp-98h]
  int v871; // [sp+2C0h] [bp-94h]
  int v872; // [sp+2C4h] [bp-90h]
  int v873; // [sp+2C8h] [bp-8Ch] BYREF
  int v874; // [sp+2CCh] [bp-88h]
  int v875; // [sp+2D0h] [bp-84h]
  int v876; // [sp+2D4h] [bp-80h]
  int v877; // [sp+2D8h] [bp-7Ch] BYREF
  int v878; // [sp+2DCh] [bp-78h]
  int v879; // [sp+2E0h] [bp-74h]
  int v880; // [sp+2E4h] [bp-70h]
  int v881; // [sp+2E8h] [bp-6Ch]
  int v882; // [sp+2ECh] [bp-68h]
  int v883; // [sp+2F0h] [bp-64h]
  int v884; // [sp+2F4h] [bp-60h]
  int v885; // [sp+2F8h] [bp-5Ch]
  int v886; // [sp+2FCh] [bp-58h]
  int v887; // [sp+300h] [bp-54h]
  int v888; // [sp+304h] [bp-50h]
  int v889; // [sp+308h] [bp-4Ch]
  int v890; // [sp+30Ch] [bp-48h]
  int v891; // [sp+310h] [bp-44h]
  int v892; // [sp+314h] [bp-40h]
  int v893; // [sp+318h] [bp-3Ch]
  int v894; // [sp+31Ch] [bp-38h]
  __int64 v895; // [sp+320h] [bp-34h]
  int v896; // [sp+328h] [bp-2Ch]
  int v897; // [sp+32Ch] [bp-28h]
  int v898; // [sp+330h] [bp-24h]
  int v899; // [sp+334h] [bp-20h]
  int v900; // [sp+338h] [bp-1Ch]
  int v901; // [sp+33Ch] [bp-18h]
  int v902; // [sp+340h] [bp-14h]
  int v903; // [sp+344h] [bp-10h]
  int v904; // [sp+348h] [bp-Ch] BYREF
  int v905; // [sp+34Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v267 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v267;
  }
  else
  {
    v843 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v5 = 1447256;
      while ( 1 )
      {
        if ( n < v4 )
          v4 = n;
        v6 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v6, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v7 = &dest[120];
          v842 = (int)&v842;
          v8 = &v842;
          v9 = a1 - 8;
          v10 = &v873;
          do
          {
            v12 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            v11 = v12;
            v13 = v8[2];
            v8 += 2;
            v14 = *(_DWORD *)(v9 + 4);
            v15 = v8[1];
            v10[2] = v11;
            v10 += 2;
            *((_DWORD *)v7 + 2) = v13 ^ v11;
            v7 += 8;
            v10[1] = v14;
            *((_DWORD *)v7 + 1) = v15 ^ v14;
          }
          while ( &v904 != v10 );
          v270 = 0;
          v496 = v846;
          v468 = v847;
          v500 = v848;
          v507 = v849;
          v593 = v850;
          v603 = v851;
          v474 = v852;
          v489 = v853;
          v513 = v854;
          v439 = v855;
          v448 = v856;
          v300 = v857;
          v361 = v858;
          v455 = v859;
          v519 = v860;
          v16 = v871;
          v17 = v873;
          v268 = v5;
          v347 = v861;
          v536 = v874;
          v523 = v862;
          v279 = v863;
          v395 = v864;
          v353 = v865;
          v368 = v866;
          v374 = v867;
          v385 = v868;
          v411 = v869;
          v462 = v870;
          v531 = v872;
          v587 = v845;
          do
          {
            v289 = v587 ^ v270;
            v379 = v468 ^ ((unsigned __int64)(v270 + 16) >> 32);
            v308 = v603 ^ ((unsigned __int64)(v270 + 48) >> 32);
            v318 = v474 ^ (v270 + 64);
            v274 = ((unsigned __int64)(v270 + 80) >> 32) ^ v513;
            v18 = v439 ^ (v270 + 96);
            v19 = ((unsigned __int64)(v270 + 96) >> 32) ^ v448;
            v324 = v300 ^ (v270 + 112);
            v329 = v361 ^ ((unsigned __int64)(v270 + 112) >> 32);
            v338 = v455 ^ (v270 + 128);
            v422 = v519 ^ ((unsigned __int64)(v270 + 128) >> 32);
            v430 = v347 ^ (v270 + 144);
            v440 = v279 ^ (v270 + 160);
            v354 = v353 ^ (v270 + 176);
            v20 = v368 ^ ((unsigned __int64)(v270 + 176) >> 32);
            v21 = v374;
            v375 = (v270 + 240) ^ v17;
            v362 = v21 ^ (v270 + 192);
            v22 = v385 ^ ((unsigned __int64)(v270 + 192) >> 32);
            v369 = v411 ^ (v270 + 208);
            v23 = v462;
            v463 = (v270 + 224) ^ v16;
            v456 = v23 ^ ((unsigned __int64)(v270 + 208) >> 32);
            v24 = v531 ^ ((unsigned __int64)(v270 + 224) >> 32);
            v469 = v536 ^ ((unsigned __int64)(v270 + 240) >> 32);
            v301 = v496 ^ (v270 + 16);
            v386 = v500 ^ (v270 + 32);
            v280 = v523 ^ ((unsigned __int64)(v270 + 144) >> 32);
            v665 = v22;
            v532 = HIBYTE(v329);
            v348 = v395 ^ ((unsigned __int64)(v270 + 160) >> 32);
            v719 = v24;
            HIDWORD(v474) = HIBYTE(v24);
            v520 = HIBYTE(v19);
            v412 = v18;
            v555 = HIBYTE(v422);
            v396 = v593 ^ (v270 + 48);
            v797 = (unsigned int)(HIDWORD(v587) ^ HIDWORD(v270)) >> 24;
            v772 = v507 ^ ((unsigned __int64)(v270 + 32) >> 32);
            v514 = HIBYTE(v274);
            v620 = 8 * HIBYTE(v324) + 1455440;
            v634 = 8 * HIBYTE(v338) + 1455440;
            v25 = &dword_161D58[2 * HIBYTE(v22)];
            v547 = 8 * ((v489 ^ (unsigned int)(v270 + 80)) >> 24) + 1455440;
            v588 = 8 * HIBYTE(v18) + 1455440;
            v746 = 8 * HIBYTE(v369) + 1455440;
            v762 = 8 * HIBYTE(v463) + 1455440;
            v676 = 8 * HIBYTE(v440) + 1455440;
            v781 = 8 * HIBYTE(v375) + 1455440;
            v705 = 8 * HIBYTE(v354) + 1455440;
            v734 = 8 * HIBYTE(v362) + 1455440;
            v784 = 8 * BYTE3(v289) + 1455440;
            v26 = &qword_162560[BYTE1(v301)];
            v27 = &qword_162D60[BYTE2(v386)];
            v28 = &qword_163D60[BYTE4(v318)];
            v594 = *v25;
            v609 = v25[1];
            v29 = &qword_163D60[(unsigned __int8)v274];
            v563 = &qword_163D60[(unsigned __int8)(((unsigned __int64)(v270 + 96) >> 32) ^ v448)];
            v30 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v289 + 4)
                ^ ((unsigned __int64)(v270 + 1) >> 32)
                ^ dword_161D58[2 * HIBYTE(v20) + 1]
                ^ *((_DWORD *)v26 - 1)
                ^ *((_DWORD *)v27 - 1);
            v31 = 8 * HIBYTE(v396) + 1455440;
            v32 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v289)
                ^ (v270 + 1)
                ^ dword_161D58[2 * HIBYTE(v20)]
                ^ *((_DWORD *)v26 - 2);
            v604 = BYTE2(v274);
            v33 = &qword_162560[BYTE1(v386)];
            v524 = &qword_162D60[BYTE2(v396)];
            v34 = (unsigned __int8)(v500 ^ (v270 + 32));
            v817 = 8 * HIBYTE(v386) + 1455440;
            v686 = BYTE1(v329);
            v590 = &qword_163D60[(unsigned __int8)v329];
            v387 = BYTE2(v422);
            v35 = (unsigned __int8)v422;
            v423 = BYTE1(v422);
            v628 = &qword_163D60[v35];
            v36 = v30 ^ HIDWORD(qword_163558[HIBYTE(v396)]) ^ *((_DWORD *)v28 - 1);
            v699 = (unsigned __int8)v396;
            v397 = &qword_162560[BYTE1(v396)];
            v37 = &dword_164D58[2 * BYTE2(v19)];
            v38 = v32
                ^ *((_DWORD *)v27 - 2)
                ^ *(_DWORD *)(v31 + 8)
                ^ *((_DWORD *)v28 - 2)
                ^ dword_164558[2 * BYTE1(v274)]
                ^ *v37;
            v670 = dword_164D58[2 * BYTE2(v329) + 1];
            v641 = dword_164558[2 * BYTE1(v19)];
            v39 = dword_164558[2 * BYTE1(v274) + 1];
            v275 = v38;
            v651 = dword_164D58[2 * BYTE2(v329)];
            v330 = v36 ^ v39 ^ v37[1];
            v537 = &qword_162D60[BYTE2(v318)];
            v40 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v301) ^ v594 ^ (v270 + 17) ^ *((_DWORD *)v33 - 2);
            v41 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v301 + 4)
                ^ v609
                ^ ((unsigned __int64)(v270 + 17) >> 32)
                ^ *((_DWORD *)v33 - 1);
            v776 = (unsigned __int8)v318;
            v580 = &qword_162560[BYTE1(v318)];
            v42 = *((_DWORD *)v524 - 1);
            v43 = v40 ^ *((_DWORD *)v524 - 2);
            v404 = &qword_162D60[(unsigned __int8)((v489 ^ (unsigned int)(v270 + 80)) >> 16)];
            v802 = (unsigned __int8)(v489 ^ (v270 + 80));
            v525 = &qword_162560[(unsigned __int8)((unsigned __int16)(v489 ^ (v270 + 80)) >> 8)];
            v788 = BYTE1(v280);
            v610 = &qword_162D60[BYTE2(v412)];
            v793 = BYTE2(v348);
            v44 = dword_164558[2 * BYTE1(v19) + 1]
                ^ *((_DWORD *)v29 - 1)
                ^ HIDWORD(qword_163558[((unsigned int)v474 ^ ((_DWORD)v270 + 64)) >> 24])
                ^ v41
                ^ v42;
            v691 = dword_164D58[2 * v387 + 1];
            v572 = dword_164D58[2 * v387];
            v45 = *((_DWORD *)v563 - 2);
            v46 = *((_DWORD *)v563 - 1);
            v564 = *((_DWORD *)v590 - 2);
            LODWORD(v318) = v44 ^ v670;
            v727 = *((_DWORD *)v590 - 1);
            v821 = *((_DWORD *)v29 - 2)
                 ^ LODWORD(qword_163558[((unsigned int)v474 ^ ((_DWORD)v270 + 64)) >> 24])
                 ^ v43
                 ^ v641
                 ^ v651;
            v765 = dword_164D58[2 * BYTE2(v280) + 1];
            v490 = dword_164D58[2 * BYTE2(v280)];
            v47 = *(_DWORD *)(v588 + 8);
            LODWORD(v474) = *(_DWORD *)(v588 + 12);
            v823 = (unsigned __int8)v412;
            v48 = &qword_162560[BYTE1(v412)];
            v541 = &qword_162D60[BYTE2(v324)];
            v591 = &qword_163D60[(unsigned __int8)v280];
            v589 = HIBYTE(v280);
            v807 = BYTE1(v348);
            v832 = (unsigned __int8)v324;
            v642 = &qword_162560[BYTE1(v324)];
            v652 = &qword_162D60[BYTE2(v338)];
            v49 = &qword_163D60[(unsigned __int8)v348];
            v595 = HIBYTE(v348);
            LOWORD(v23) = v665;
            v829 = BYTE2(v665);
            v388 = (unsigned __int8)v338;
            v666 = &qword_162560[BYTE1(v338)];
            v325 = dword_161D58[2 * HIBYTE(v456) + 1]
                 ^ *(_DWORD *)(v268 + 8 * v34 + 4)
                 ^ ((unsigned __int64)(v270 + 33) >> 32)
                 ^ *((_DWORD *)v397 - 1)
                 ^ *((_DWORD *)v537 - 1)
                 ^ *(_DWORD *)(v547 + 12)
                 ^ v46
                 ^ dword_164558[2 * v686 + 1]
                 ^ v691;
            v835 = BYTE2(v456);
            v712 = &qword_163D60[(unsigned __int8)v23];
            v692 = &qword_162560[BYTE1(v430)];
            v281 = *(_DWORD *)(v268 + 8 * v34)
                 ^ dword_161D58[2 * HIBYTE(v456)]
                 ^ (v270 + 33)
                 ^ *((_DWORD *)v397 - 2)
                 ^ *((_DWORD *)v537 - 2)
                 ^ *(_DWORD *)(v547 + 8)
                 ^ v45
                 ^ dword_164558[2 * v686]
                 ^ v572;
            v50 = dword_161D58[2 * HIDWORD(v474)]
                ^ *(_DWORD *)(v268 + 8 * v699)
                ^ (v270 + 49)
                ^ *((_DWORD *)v580 - 2)
                ^ *((_DWORD *)v404 - 2)
                ^ v47;
            v51 = dword_161D58[2 * HIDWORD(v474) + 1]
                ^ *(_DWORD *)(v268 + 8 * v699 + 4)
                ^ ((unsigned __int64)(v270 + 49) >> 32)
                ^ *((_DWORD *)v580 - 1)
                ^ *((_DWORD *)v404 - 1)
                ^ v474;
            v405 = BYTE1(v456);
            v700 = &qword_162D60[BYTE2(v440)];
            LOWORD(v34) = v719;
            v740 = &qword_163D60[(unsigned __int8)v456];
            v413 = BYTE2(v719);
            v339 = v50 ^ v564 ^ dword_164558[2 * v423] ^ v490;
            v349 = v51 ^ v727 ^ dword_164558[2 * v423 + 1] ^ v765;
            v457 = (unsigned __int8)v440;
            v720 = &qword_162560[BYTE1(v440)];
            v728 = &qword_162D60[BYTE2(v354)];
            v752 = &qword_163D60[(unsigned __int8)v34];
            v52 = *((_DWORD *)v610 - 1);
            v441 = BYTE2(v469);
            v53 = *(_DWORD *)(v268 + 8 * v776)
                ^ dword_161D58[2 * HIBYTE(v469)]
                ^ (v270 + 65)
                ^ *((_DWORD *)v525 - 2)
                ^ *((_DWORD *)v610 - 2);
            v449 = BYTE6(v289);
            v491 = (unsigned __int8)v354;
            v611 = &qword_162560[BYTE1(v354)];
            v54 = *(_DWORD *)(v620 + 12);
            v55 = *(_DWORD *)(v620 + 8);
            v621 = &qword_162D60[BYTE2(v362)];
            v475 = BYTE1(v469);
            v766 = &qword_163D60[(unsigned __int8)v469];
            v56 = *((_DWORD *)v628 - 1)
                ^ *((_DWORD *)v525 - 1)
                ^ dword_161D58[2 * HIBYTE(v469) + 1]
                ^ *(_DWORD *)(v268 + 8 * v776 + 4)
                ^ ((unsigned __int64)(v270 + 65) >> 32)
                ^ v52
                ^ v54
                ^ dword_164558[2 * v788 + 1];
            v482 = BYTE5(v289);
            v398 = &qword_163D60[BYTE4(v289)];
            v470 = *((_DWORD *)v628 - 2) ^ v53 ^ v55 ^ dword_164558[2 * v788] ^ dword_164D58[2 * v793];
            v526 = (unsigned __int8)(v21 ^ (v270 - 64));
            v629 = &qword_162560[BYTE1(v362)];
            v758 = &qword_162D60[BYTE2(v369)];
            v497 = BYTE2(v379);
            HIDWORD(v289) = v56 ^ dword_164D58[2 * v793 + 1];
            v57 = dword_161D58[2 * v797 + 1] ^ ((unsigned __int64)(v270 + 81) >> 32);
            v538 = BYTE1(v379);
            v58 = dword_161D58[2 * v797] ^ (v270 + 81) ^ *(_DWORD *)(v268 + 8 * v802) ^ *((_DWORD *)v48 - 2);
            v798 = &qword_163D60[(unsigned __int8)v379];
            v59 = *((_DWORD *)v541 - 1);
            v60 = *((_DWORD *)v541 - 2);
            v542 = BYTE2(v772);
            v565 = BYTE1(v772);
            v811 = &qword_163D60[(unsigned __int8)(v507 ^ ((unsigned __int64)(v270 + 32) >> 32))];
            v573 = BYTE2(v308);
            v773 = &qword_162560[BYTE1(v369)];
            v548 = (unsigned __int8)v369;
            v777 = &qword_162D60[BYTE2(v463)];
            v581 = (unsigned __int8)v463;
            v61 = dword_164558[2 * v807 + 1]
                ^ v57
                ^ *(_DWORD *)(v268 + 8 * v802 + 4)
                ^ *((_DWORD *)v48 - 1)
                ^ v59
                ^ *(_DWORD *)(v634 + 12)
                ^ *((_DWORD *)v591 - 1);
            v789 = &qword_162560[BYTE1(v463)];
            v794 = &qword_162D60[BYTE2(v375)];
            v803 = &qword_162D60[BYTE2(v289)];
            v815 = &qword_162560[BYTE1(v289)];
            v355 = v61 ^ dword_164D58[2 * BYTE2(v20) + 1];
            LODWORD(v289) = v58
                          ^ v60
                          ^ *(_DWORD *)(v634 + 8)
                          ^ *((_DWORD *)v591 - 2)
                          ^ dword_164558[2 * v807]
                          ^ dword_164D58[2 * BYTE2(v20)];
            v592 = (unsigned __int8)v375;
            v808 = &qword_162560[BYTE1(v375)];
            v62 = *(v49 - 1);
            v464 = *(_DWORD *)(v268 + 8 * v823 + 4)
                 ^ dword_161D58[2 * HIBYTE(v379) + 1]
                 ^ ((unsigned __int64)(v270 + 97) >> 32)
                 ^ *((_DWORD *)v642 - 1)
                 ^ *((_DWORD *)v652 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v430)])
                 ^ HIDWORD(v62)
                 ^ dword_164558[2 * BYTE1(v20) + 1]
                 ^ dword_164D58[2 * v829 + 1];
            v363 = *(_DWORD *)(v268 + 8 * v823)
                 ^ dword_161D58[2 * HIBYTE(v379)]
                 ^ (v270 + 97)
                 ^ *((_DWORD *)v642 - 2)
                 ^ *((_DWORD *)v652 - 2)
                 ^ LODWORD(qword_163558[HIBYTE(v430)])
                 ^ v62
                 ^ dword_164558[2 * BYTE1(v20)]
                 ^ dword_164D58[2 * v829];
            v63 = *(_DWORD *)(v268 + 8 * v388) ^ dword_161D58[2 * HIBYTE(v308)];
            v370 = *(_QWORD *)(v268 + 8 * v832)
                 ^ *(_QWORD *)&dword_161D58[2 * ((v507 ^ ((unsigned __int64)(v270 + 32) >> 32)) >> 24)]
                 ^ (v270 + 113)
                 ^ *(v666 - 1)
                 ^ qword_162D60[BYTE2(v430) - 1]
                 ^ *(_QWORD *)(v676 + 8)
                 ^ qword_163D60[(unsigned __int8)v20 - 1]
                 ^ *(_QWORD *)&dword_164558[2 * BYTE1(v23)]
                 ^ *(_QWORD *)&dword_164D58[2 * v835];
            v830 = dword_164D58[2 * v441 + 1];
            v827 = dword_164D58[2 * v441];
            v501 = &dword_164D58[2 * BYTE2(v379)];
            v643 = &dword_164558[2 * BYTE1(v379)];
            v677 = &dword_164D58[2 * BYTE2(v308)];
            v389 = dword_164D58[2 * v413 + 1]
                 ^ *((_DWORD *)v700 - 1)
                 ^ *((_DWORD *)v692 - 1)
                 ^ *(_DWORD *)(v268 + 8 * v388 + 4)
                 ^ dword_161D58[2 * HIBYTE(v308) + 1]
                 ^ (__CFADD__((_DWORD)v270, 129) + HIDWORD(v270))
                 ^ *(_DWORD *)(v705 + 12)
                 ^ *((_DWORD *)v712 - 1)
                 ^ dword_164558[2 * v405 + 1];
            v380 = v63
                 ^ (v270 + 129)
                 ^ *((_DWORD *)v692 - 2)
                 ^ *((_DWORD *)v700 - 2)
                 ^ *(_DWORD *)(v705 + 8)
                 ^ *((_DWORD *)v712 - 2)
                 ^ dword_164558[2 * v405]
                 ^ dword_164D58[2 * v413];
            v64 = dword_161D58[2 * v514 + 1];
            v706 = dword_164558[2 * v475 + 1];
            v701 = *((_DWORD *)v728 - 1)
                 ^ dword_161D58[2 * HIBYTE(HIDWORD(v318)) + 1]
                 ^ *(_DWORD *)(v268 + 8 * (unsigned __int8)v430 + 4)
                 ^ ((unsigned __int64)(v270 + 145) >> 32)
                 ^ *((_DWORD *)v720 - 1)
                 ^ *(_DWORD *)(v734 + 12)
                 ^ *((_DWORD *)v740 - 1);
            HIDWORD(v62) = dword_161D58[2 * v514];
            v515 = dword_164558[2 * v475];
            v65 = *(_DWORD *)(v268 + 8 * v457 + 4)
                ^ dword_164D58[2 * v449 + 1]
                ^ ((unsigned __int64)(v270 + 161) >> 32)
                ^ v64;
            v476 = dword_161D58[2 * HIBYTE(HIDWORD(v318))]
                 ^ *(_DWORD *)(v268 + 8 * (unsigned __int8)v430)
                 ^ (v270 + 145)
                 ^ *((_DWORD *)v720 - 2)
                 ^ *((_DWORD *)v728 - 2)
                 ^ *(_DWORD *)(v734 + 8)
                 ^ *((_DWORD *)v740 - 2)
                 ^ dword_164558[2 * BYTE1(v34)];
            v431 = &qword_162D60[BYTE2(v301)];
            v414 = 8 * HIBYTE(v301) + 1455440;
            v302 = BYTE1(v308);
            v442 = &qword_163D60[(unsigned __int8)v308];
            v309 = BYTE6(v318);
            v735 = BYTE5(v318);
            v66 = *(_DWORD *)(v414 + 8);
            v67 = dword_164558[2 * v302];
            v68 = *(_DWORD *)(v268 + 8 * v581 + 4)
                ^ *((_DWORD *)v803 - 1)
                ^ ((unsigned __int64)(v270 + 225) >> 32)
                ^ dword_161D58[2 * v589 + 1]
                ^ *((_DWORD *)v808 - 1)
                ^ *(_DWORD *)(v414 + 12)
                ^ *((_DWORD *)v811 - 1)
                ^ dword_164558[2 * v302 + 1]
                ^ dword_164D58[2 * BYTE6(v318) + 1];
            LODWORD(v62) = *(_DWORD *)(v268 + 8 * v592 + 4)
                         ^ *((_DWORD *)v815 - 1)
                         ^ ((unsigned __int64)(v270 + 241) >> 32)
                         ^ dword_161D58[2 * v595 + 1]
                         ^ *((_DWORD *)v431 - 1)
                         ^ *(_DWORD *)(v817 + 12)
                         ^ *((_DWORD *)v442 - 1)
                         ^ dword_164558[2 * BYTE5(v318) + 1];
            v303 = v476 ^ v827;
            HIDWORD(v318) = dword_164D58[2 * v449]
                          ^ *(_DWORD *)(v268 + 8 * v457)
                          ^ (v270 + 161)
                          ^ HIDWORD(v62)
                          ^ *((_DWORD *)v611 - 2)
                          ^ *((_DWORD *)v621 - 2)
                          ^ *(_DWORD *)(v746 + 8)
                          ^ *((_DWORD *)v752 - 2)
                          ^ v515;
            v415 = *(_DWORD *)(v268 + 8 * v491 + 4)
                 ^ dword_164558[2 * v482 + 1]
                 ^ ((unsigned __int64)(v270 + 177) >> 32)
                 ^ dword_161D58[2 * v520 + 1]
                 ^ *((_DWORD *)v629 - 1)
                 ^ *((_DWORD *)v758 - 1)
                 ^ *(_DWORD *)(v762 + 12)
                 ^ *((_DWORD *)v766 - 1)
                 ^ v501[1];
            v406 = dword_164558[2 * v482]
                 ^ *(_DWORD *)(v268 + 8 * v491)
                 ^ (v270 + 177)
                 ^ dword_161D58[2 * v520]
                 ^ *((_DWORD *)v629 - 2)
                 ^ *((_DWORD *)v758 - 2)
                 ^ *(_DWORD *)(v762 + 8)
                 ^ *((_DWORD *)v766 - 2)
                 ^ dword_164D58[2 * v497];
            v458 = *((_DWORD *)v815 - 2)
                 ^ *(_DWORD *)(v268 + 8 * v592)
                 ^ (v270 + 241)
                 ^ dword_161D58[2 * v595]
                 ^ *((_DWORD *)v431 - 2)
                 ^ *(_DWORD *)(v817 + 8)
                 ^ *((_DWORD *)v442 - 2)
                 ^ dword_164558[2 * v735]
                 ^ dword_164D58[2 * v604];
            v432 = *(_DWORD *)(v268 + 8 * v526 + 4)
                 ^ *((_DWORD *)v398 - 1)
                 ^ (__CFADD__((_DWORD)v270, 193) + HIDWORD(v270))
                 ^ dword_161D58[2 * v532 + 1]
                 ^ *((_DWORD *)v773 - 1)
                 ^ *((_DWORD *)v777 - 1)
                 ^ *(_DWORD *)(v781 + 12)
                 ^ v643[1]
                 ^ dword_164D58[2 * v542 + 1];
            LODWORD(v62) = v62 ^ dword_164D58[2 * v604 + 1];
            v450 = *((_DWORD *)v803 - 2)
                 ^ *(_DWORD *)(v268 + 8 * v581)
                 ^ (v270 + 225)
                 ^ dword_161D58[2 * v589]
                 ^ *((_DWORD *)v808 - 2)
                 ^ v66
                 ^ *((_DWORD *)v811 - 2)
                 ^ v67
                 ^ dword_164D58[2 * v309];
            v424 = dword_161D58[2 * v532]
                 ^ *((_DWORD *)v398 - 2)
                 ^ *(_DWORD *)(v268 + 8 * v526)
                 ^ (v270 + 193)
                 ^ *((_DWORD *)v773 - 2)
                 ^ *((_DWORD *)v777 - 2)
                 ^ *(_DWORD *)(v781 + 8)
                 ^ dword_164558[2 * v538]
                 ^ dword_164D58[2 * v542];
            v310 = v701 ^ dword_164558[2 * BYTE1(v34) + 1] ^ v830;
            v443 = *(_DWORD *)(v268 + 8 * v548)
                 ^ *(_DWORD *)(v784 + 8)
                 ^ (v270 + 209)
                 ^ dword_161D58[2 * v555]
                 ^ *((_DWORD *)v789 - 2)
                 ^ *((_DWORD *)v794 - 2)
                 ^ *((_DWORD *)v798 - 2)
                 ^ dword_164558[2 * v565]
                 ^ dword_164D58[2 * v573];
            v399 = v65
                 ^ *((_DWORD *)v611 - 1)
                 ^ *((_DWORD *)v621 - 1)
                 ^ *(_DWORD *)(v746 + 12)
                 ^ *((_DWORD *)v752 - 1)
                 ^ v706;
            v477 = *(_DWORD *)(v784 + 12)
                 ^ *(_DWORD *)(v268 + 8 * v548 + 4)
                 ^ ((unsigned __int64)(v270 + 209) >> 32)
                 ^ dword_161D58[2 * v555 + 1]
                 ^ *((_DWORD *)v789 - 1)
                 ^ *((_DWORD *)v794 - 1)
                 ^ *((_DWORD *)v798 - 1)
                 ^ dword_164558[2 * v565 + 1]
                 ^ v677[1];
            v556 = HIBYTE(v464);
            v574 = HIBYTE(v389);
            v516 = BYTE3(v62);
            v492 = v62;
            v566 = HIBYTE(HIDWORD(v370));
            v483 = v68;
            v549 = HIBYTE(v355);
            v612 = 8 * BYTE3(v289) + 1455440;
            v653 = &dword_161D58[2 * HIBYTE(v68)];
            v687 = &dword_161D58[2 * BYTE3(v62)];
            v785 = 8 * HIBYTE(v443) + 1455440;
            v795 = 8 * HIBYTE(v450) + 1455440;
            v69 = v821;
            v804 = 8 * HIBYTE(v458) + 1455440;
            v839 = HIBYTE(v399);
            v741 = 8 * HIBYTE(v303) + 1455440;
            v753 = 8 * HIBYTE(HIDWORD(v318)) + 1455440;
            v763 = 8 * HIBYTE(v406) + 1455440;
            v778 = 8 * HIBYTE(v424) + 1455440;
            v799 = &dword_161D58[2 * HIBYTE(HIDWORD(v370))];
            v782 = &dword_161D58[2 * HIBYTE(v355)];
            v790 = &dword_161D58[2 * HIBYTE(v464)];
            v70 = BYTE1(v821);
            v812 = &dword_161D58[2 * HIBYTE(v389)];
            v816 = &dword_161D58[2 * HIBYTE(v310)];
            v828 = &dword_161D58[2 * HIBYTE(v399)];
            v822 = 8 * HIBYTE(v821) + 1455440;
            v833 = 8 * HIBYTE(v281) + 1455440;
            v71 = &qword_163D60[BYTE4(v289)];
            v72 = &qword_162560[v70];
            v73 = BYTE2(v464);
            v74 = &qword_162D60[BYTE2(v281)];
            v75 = BYTE1(v464);
            v635 = &qword_163D60[(unsigned __int8)v464];
            v644 = *((_DWORD *)v71 - 2);
            v678 = *((_DWORD *)v71 - 1);
            v270 += 2;
            v831 = &qword_162D60[BYTE2(v69)];
            v465 = BYTE2(v355);
            v76 = BYTE6(v370);
            v77 = &qword_163D60[(unsigned __int8)v355];
            v78 = &qword_162560[BYTE1(v281)];
            v79 = &qword_162D60[BYTE2(v339)];
            v596 = &qword_162560[BYTE1(v339)];
            v767 = dword_164558[2 * v75];
            LODWORD(v62) = dword_164558[2 * BYTE1(v355) + 1]
                         ^ dword_161D58[2 * HIBYTE(v415) + 1]
                         ^ *(_DWORD *)(v268 + 8 * (unsigned __int8)v275 + 4)
                         ^ *((_DWORD *)v72 - 1)
                         ^ *((_DWORD *)v74 - 1);
            v818 = dword_164558[2 * v75 + 1];
            HIDWORD(v62) = dword_164558[2 * BYTE1(v355)]
                         ^ dword_161D58[2 * HIBYTE(v415)]
                         ^ *(_DWORD *)(v268 + 8 * (unsigned __int8)v275)
                         ^ *((_DWORD *)v72 - 2)
                         ^ *((_DWORD *)v74 - 2);
            v80 = BYTE4(v370);
            v630 = &qword_162D60[BYTE2(v470)];
            v81 = BYTE5(v370);
            HIDWORD(v370) = (unsigned __int8)v470;
            v671 = &qword_163D60[v80];
            v82 = BYTE2(v389);
            v660 = &qword_162560[BYTE1(v470)];
            LODWORD(v587) = HIDWORD(v62) ^ LODWORD(qword_163558[HIBYTE(v339)]) ^ v644 ^ dword_164D58[2 * v73];
            LODWORD(v62) = v62 ^ HIDWORD(qword_163558[HIBYTE(v339)]) ^ v678;
            LOWORD(v80) = v389;
            HIDWORD(v62) = *((_DWORD *)v78 - 2);
            v390 = (unsigned __int8)v289;
            v645 = &qword_162D60[BYTE2(v289)];
            v679 = &qword_162560[BYTE1(v289)];
            v83 = *((_DWORD *)v77 - 1)
                ^ *(_DWORD *)(v268 + 8 * (unsigned __int8)v69 + 4)
                ^ dword_161D58[2 * HIBYTE(v432) + 1]
                ^ *((_DWORD *)v78 - 1);
            HIDWORD(v62) ^= *(_DWORD *)(v268 + 8 * (unsigned __int8)v69)
                          ^ *((_DWORD *)v77 - 2)
                          ^ dword_161D58[2 * HIBYTE(v432)]
                          ^ *((_DWORD *)v79 - 2);
            v707 = &qword_163D60[(unsigned __int8)v80];
            v693 = &qword_162D60[BYTE2(v363)];
            v84 = BYTE2(v310);
            HIDWORD(v587) = v62 ^ dword_164D58[2 * v73 + 1];
            LODWORD(v289) = BYTE1(v310);
            v729 = &qword_163D60[(unsigned __int8)v310];
            v311 = BYTE2(v399);
            v496 = HIDWORD(v62) ^ LODWORD(qword_163558[HIBYTE(v470)]) ^ v767 ^ dword_164D58[2 * v76];
            v468 = v83 ^ *((_DWORD *)v79 - 1) ^ HIDWORD(qword_163558[HIBYTE(v470)]) ^ v818 ^ dword_164D58[2 * v76 + 1];
            v768 = *((_DWORD *)v635 - 1);
            v85 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v281)
                ^ *(_DWORD *)(v612 + 8)
                ^ dword_161D58[2 * HIBYTE(v477)]
                ^ *((_DWORD *)v596 - 2);
            HIDWORD(v62) = *(_DWORD *)(v268 + 8 * (unsigned __int8)v281 + 4)
                         ^ *(_DWORD *)(v612 + 12)
                         ^ dword_161D58[2 * HIBYTE(v477) + 1]
                         ^ *((_DWORD *)v596 - 1);
            v597 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v339);
            v86 = *v653;
            v87 = *((_DWORD *)v630 - 2) ^ v85 ^ *((_DWORD *)v635 - 2) ^ dword_164558[2 * v81] ^ dword_164D58[2 * v82];
            v825 = (unsigned __int8)v363;
            v613 = &qword_162560[BYTE1(v363)];
            v622 = &qword_162D60[BYTE2(v370)];
            v282 = BYTE1(v399);
            v636 = &qword_163D60[(unsigned __int8)v399];
            v834 = (unsigned __int8)v370;
            v400 = &qword_162560[BYTE1(v370)];
            v507 = HIDWORD(v62) ^ *((_DWORD *)v630 - 1) ^ v768 ^ dword_164558[2 * v81 + 1] ^ dword_164D58[2 * v82 + 1];
            v88 = qword_163558[HIBYTE(v363)];
            v631 = &qword_162D60[BYTE2(v380)];
            v500 = v87;
            v89 = HIDWORD(qword_163558[HIBYTE(v363)]);
            v90 = *((_DWORD *)v671 - 1);
            v91 = *((_DWORD *)v660 - 1);
            v92 = *((_DWORD *)v660 - 2);
            HIDWORD(v62) = *((_DWORD *)v645 - 2);
            v93 = *(_DWORD *)(v268 + 8 * (unsigned __int8)v339 + 4) ^ *((_DWORD *)v645 - 1) ^ v653[1];
            v340 = BYTE1(v415);
            v364 = (unsigned __int8)v380;
            v661 = &qword_163D60[(unsigned __int8)v415];
            v356 = BYTE2(v432);
            v646 = &qword_162560[BYTE1(v380)];
            v654 = &qword_162D60[BYTE2(v303)];
            v836 = BYTE1(v432);
            v769 = &qword_163D60[(unsigned __int8)v432];
            v837 = BYTE2(v477);
            v838 = (unsigned __int8)v303;
            v667 = &qword_162560[BYTE1(v303)];
            v593 = HIDWORD(v62)
                 ^ v597
                 ^ v86
                 ^ v92
                 ^ v88
                 ^ *((_DWORD *)v671 - 2)
                 ^ dword_164558[2 * BYTE1(v80)]
                 ^ dword_164D58[2 * v84];
            v672 = &qword_162D60[BYTE6(v318)];
            v603 = v93 ^ v91 ^ v89 ^ v90 ^ dword_164558[2 * BYTE1(v80) + 1] ^ dword_164D58[2 * v84 + 1];
            v94 = dword_164558[2 * (_DWORD)v289];
            v95 = dword_164D58[2 * v311 + 1];
            HIDWORD(v62) = *((_DWORD *)v679 - 2)
                         ^ *(_DWORD *)(v268 + 8 * HIDWORD(v370))
                         ^ dword_161D58[2 * v516]
                         ^ *((_DWORD *)v693 - 2);
            v96 = dword_164D58[2 * v311];
            v97 = dword_164558[2 * (_DWORD)v289 + 1]
                ^ *(_DWORD *)(v268 + 8 * HIDWORD(v370) + 4)
                ^ *((_DWORD *)v679 - 1)
                ^ v687[1]
                ^ *((_DWORD *)v693 - 1)
                ^ HIDWORD(qword_163558[BYTE3(v370)])
                ^ *((_DWORD *)v707 - 1);
            v433 = dword_164558[2 * v282 + 1];
            v98 = BYTE2(v415);
            v416 = dword_164558[2 * v282];
            LODWORD(v289) = BYTE1(v477);
            v694 = &qword_163D60[(unsigned __int8)v477];
            v304 = BYTE2(v483);
            HIDWORD(v370) = BYTE4(v318);
            v680 = &qword_162560[BYTE5(v318)];
            v688 = &qword_162D60[BYTE2(v406)];
            v312 = BYTE1(v483);
            v702 = &qword_163D60[(unsigned __int8)v483];
            HIDWORD(v318) = BYTE2(v492);
            LODWORD(v474) = HIDWORD(v62) ^ LODWORD(qword_163558[BYTE3(v370)]) ^ *((_DWORD *)v707 - 2) ^ v94 ^ v96;
            LODWORD(v370) = BYTE2(v330);
            HIDWORD(v474) = v97 ^ v95;
            v99 = *(_QWORD *)(v268 + 8 * v390)
                ^ *(_QWORD *)&dword_161D58[2 * HIBYTE(v330)]
                ^ *(v613 - 1)
                ^ *(v622 - 1)
                ^ qword_163558[HIBYTE(v380)]
                ^ *(v729 - 1);
            v100 = dword_161D58[2 * BYTE3(v318)] ^ *(_DWORD *)(v268 + 8 * v825);
            HIDWORD(v62) = dword_164558[2 * v340];
            v819 = dword_164D58[2 * v356 + 1];
            v101 = dword_164D58[2 * v356];
            v357 = (unsigned __int8)v406;
            v614 = &qword_162560[BYTE1(v406)];
            v527 = v101;
            v102 = dword_164558[2 * v340 + 1];
            v533 = &qword_162D60[BYTE2(v424)];
            v341 = BYTE1(v492);
            v713 = &qword_163D60[(unsigned __int8)v492];
            v103 = &qword_163D60[(unsigned __int8)v330];
            v331 = BYTE1(v330);
            v283 = v103;
            v391 = (unsigned __int8)v424;
            v623 = &qword_162560[BYTE1(v424)];
            v381 = BYTE2(v318);
            v708 = &qword_162D60[BYTE2(v443)];
            v513 = dword_164D58[2 * v98 + 1] ^ HIDWORD(v99) ^ v433;
            v489 = v99 ^ v416 ^ dword_164D58[2 * v98];
            v721 = &qword_162560[BYTE1(v443)];
            v407 = (unsigned __int8)v443;
            v730 = &qword_162D60[BYTE2(v450)];
            v104 = dword_161D58[2 * BYTE3(v318) + 1]
                 ^ *(_DWORD *)(v268 + 8 * v825 + 4)
                 ^ *((_DWORD *)v400 - 1)
                 ^ *((_DWORD *)v631 - 1);
            v105 = (unsigned __int8)v318;
            LODWORD(v318) = BYTE1(v318);
            v747 = &qword_163D60[v105];
            v736 = &qword_162560[BYTE1(v450)];
            v425 = (unsigned __int8)v450;
            v106 = v100 ^ *((_DWORD *)v400 - 2) ^ *((_DWORD *)v631 - 2) ^ *(_DWORD *)(v741 + 8) ^ *((_DWORD *)v636 - 2);
            v107 = v104 ^ *(_DWORD *)(v741 + 12) ^ *((_DWORD *)v636 - 1) ^ v102;
            v637 = &qword_162D60[BYTE2(v458)];
            v824 = &qword_163D60[(unsigned __int8)v325];
            v417 = BYTE2(v349);
            v826 = &qword_162560[BYTE1(v275)];
            v742 = &qword_162D60[BYTE2(v275)];
            v448 = v107 ^ v819;
            v434 = (unsigned __int8)v458;
            v439 = HIDWORD(v62) ^ v106 ^ v527;
            v820 = &qword_162560[BYTE1(v458)];
            v108 = *(_QWORD *)(v753 + 8);
            v109 = *((_DWORD *)v646 - 1)
                 ^ *(_DWORD *)(v268 + 8 * v834 + 4)
                 ^ dword_161D58[2 * HIBYTE(v325) + 1]
                 ^ *((_DWORD *)v654 - 1)
                 ^ HIDWORD(v108);
            v110 = *(_DWORD *)(v268 + 8 * v834)
                 ^ dword_161D58[2 * HIBYTE(v325)]
                 ^ *((_DWORD *)v646 - 2)
                 ^ *((_DWORD *)v654 - 2)
                 ^ v108;
            v111 = *(v661 - 1);
            v112 = v110 ^ v111;
            v113 = v109 ^ HIDWORD(v111) ^ dword_164558[2 * v836 + 1];
            LODWORD(v111) = *(_DWORD *)(v268 + 8 * v364 + 4) ^ dword_161D58[2 * HIBYTE(v349) + 1];
            HIDWORD(v111) = dword_161D58[2 * HIBYTE(v349)] ^ *(_DWORD *)(v268 + 8 * v364);
            v114 = dword_164D58[2 * v304 + 1];
            v115 = dword_164D58[2 * v304];
            v361 = v113 ^ dword_164D58[2 * v837 + 1];
            v300 = v112 ^ dword_164558[2 * v836] ^ dword_164D58[2 * v837];
            v647 = &dword_164558[2 * BYTE1(v325)];
            v655 = &dword_164D58[2 * BYTE2(v349)];
            v455 = HIDWORD(v111)
                 ^ *((_DWORD *)v667 - 2)
                 ^ *((_DWORD *)v672 - 2)
                 ^ *(_DWORD *)(v763 + 8)
                 ^ *((_DWORD *)v769 - 2)
                 ^ dword_164558[2 * (_DWORD)v289]
                 ^ v115;
            v519 = v111
                 ^ *((_DWORD *)v667 - 1)
                 ^ *((_DWORD *)v672 - 1)
                 ^ *(_DWORD *)(v763 + 12)
                 ^ *((_DWORD *)v769 - 1)
                 ^ dword_164558[2 * (_DWORD)v289 + 1]
                 ^ v114;
            v116 = dword_164558[2 * v312]
                 ^ dword_161D58[2 * HIBYTE(HIDWORD(v289))]
                 ^ *(_DWORD *)(v268 + 8 * v838)
                 ^ *((_DWORD *)v680 - 2)
                 ^ *((_DWORD *)v688 - 2)
                 ^ *(_DWORD *)(v778 + 8)
                 ^ *((_DWORD *)v694 - 2);
            LODWORD(v99) = dword_161D58[2 * HIBYTE(HIDWORD(v289)) + 1]
                         ^ *(_DWORD *)(v268 + 8 * v838 + 4)
                         ^ *((_DWORD *)v680 - 1)
                         ^ *((_DWORD *)v688 - 1)
                         ^ *(_DWORD *)(v778 + 12)
                         ^ *((_DWORD *)v694 - 1)
                         ^ dword_164558[2 * v312 + 1];
            v117 = dword_164D58[2 * (_DWORD)v370] ^ *(_DWORD *)(v268 + 8 * HIDWORD(v370)) ^ dword_161D58[2 * v549];
            v681 = dword_164558[2 * v341 + 1];
            v550 = dword_164558[2 * v341];
            v523 = v99 ^ dword_164D58[2 * HIDWORD(v318) + 1];
            v342 = &qword_163D60[(unsigned __int8)v349];
            LODWORD(v111) = v614;
            v615 = BYTE1(v349);
            v347 = v116 ^ dword_164D58[2 * HIDWORD(v318)];
            v118 = *((_DWORD *)v283 - 1)
                 ^ *(_DWORD *)(v268 + 8 * v391 + 4)
                 ^ v799[1]
                 ^ *((_DWORD *)v721 - 1)
                 ^ *((_DWORD *)v730 - 1)
                 ^ *(_DWORD *)(v804 + 12)
                 ^ dword_164558[2 * (_DWORD)v318 + 1];
            HIDWORD(v99) = *((_DWORD *)v283 - 2)
                         ^ *(_DWORD *)(v268 + 8 * v391)
                         ^ dword_161D58[2 * v566]
                         ^ *((_DWORD *)v721 - 2)
                         ^ *((_DWORD *)v730 - 2)
                         ^ *(_DWORD *)(v804 + 8)
                         ^ dword_164558[2 * (_DWORD)v318]
                         ^ dword_164D58[2 * BYTE2(v325)];
            v395 = dword_164D58[2 * (_DWORD)v370 + 1]
                 ^ *(_DWORD *)(v268 + 8 * HIDWORD(v370) + 4)
                 ^ v782[1]
                 ^ *(_DWORD *)(v111 - 4)
                 ^ *((_DWORD *)v533 - 1)
                 ^ *(_DWORD *)(v785 + 12)
                 ^ *((_DWORD *)v702 - 1)
                 ^ v681;
            v279 = v117
                 ^ *(_DWORD *)(v111 - 8)
                 ^ *((_DWORD *)v533 - 2)
                 ^ *(_DWORD *)(v785 + 8)
                 ^ *((_DWORD *)v702 - 2)
                 ^ v550;
            v368 = dword_164558[2 * v331 + 1]
                 ^ *(_DWORD *)(v268 + 8 * v357 + 4)
                 ^ v790[1]
                 ^ *((_DWORD *)v623 - 1)
                 ^ *((_DWORD *)v708 - 1)
                 ^ *(_DWORD *)(v795 + 12)
                 ^ *((_DWORD *)v713 - 1)
                 ^ dword_164D58[2 * v381 + 1];
            v353 = *(_DWORD *)(v268 + 8 * v357)
                 ^ dword_164558[2 * v331]
                 ^ dword_161D58[2 * v556]
                 ^ *((_DWORD *)v623 - 2)
                 ^ *((_DWORD *)v708 - 2)
                 ^ *(_DWORD *)(v795 + 8)
                 ^ *((_DWORD *)v713 - 2)
                 ^ dword_164D58[2 * v381];
            v374 = HIDWORD(v99);
            v385 = v118 ^ dword_164D58[2 * BYTE2(v325) + 1];
            v119 = *(_DWORD *)(v833 + 12)
                 ^ v828[1]
                 ^ *(_DWORD *)(v268 + 8 * v434 + 4)
                 ^ *((_DWORD *)v826 - 1)
                 ^ dword_164D58[2 * v465 + 1]
                 ^ *((_DWORD *)v831 - 1)
                 ^ *((_DWORD *)v342 - 1);
            v17 = *((_DWORD *)v342 - 2)
                ^ *((_DWORD *)v831 - 2)
                ^ dword_161D58[2 * v839]
                ^ *(_DWORD *)(v268 + 8 * v434)
                ^ *((_DWORD *)v826 - 2)
                ^ dword_164D58[2 * v465]
                ^ *(_DWORD *)(v833 + 8)
                ^ dword_164558[2 * BYTE5(v289)];
            v120 = dword_164558[2 * BYTE5(v289) + 1];
            v16 = dword_164D58[2 * BYTE6(v289)]
                ^ *((_DWORD *)v824 - 2)
                ^ *((_DWORD *)v820 - 2)
                ^ *((_DWORD *)v742 - 2)
                ^ *(_DWORD *)(v268 + 8 * v425)
                ^ *v816
                ^ *(_DWORD *)(v822 + 8)
                ^ dword_164558[2 * v615];
            v411 = *(_DWORD *)(v268 + 8 * v407)
                 ^ LODWORD(qword_163558[HIBYTE(v275)])
                 ^ dword_161D58[2 * v574]
                 ^ *((_DWORD *)v736 - 2)
                 ^ *((_DWORD *)v637 - 2)
                 ^ *((_DWORD *)v747 - 2)
                 ^ *v647
                 ^ dword_164D58[2 * v417];
            v531 = *(_DWORD *)(v268 + 8 * v425 + 4)
                 ^ *((_DWORD *)v742 - 1)
                 ^ v816[1]
                 ^ *((_DWORD *)v820 - 1)
                 ^ *(_DWORD *)(v822 + 12)
                 ^ *((_DWORD *)v824 - 1)
                 ^ dword_164558[2 * v615 + 1]
                 ^ dword_164D58[2 * BYTE6(v289) + 1];
            v536 = v119 ^ v120;
            v462 = v647[1]
                 ^ *(_DWORD *)(v268 + 8 * v407 + 4)
                 ^ HIDWORD(qword_163558[HIBYTE(v275)])
                 ^ v812[1]
                 ^ *((_DWORD *)v736 - 1)
                 ^ *((_DWORD *)v637 - 1)
                 ^ *((_DWORD *)v747 - 1)
                 ^ v655[1];
          }
          while ( v270 != 14 );
          v121 = v268;
          v845 = v587;
          v269 = -1;
          v846 = v496;
          v847 = v468;
          v848 = v500;
          v849 = v507;
          v850 = v593;
          v851 = v603;
          v852 = v474;
          v853 = v489;
          v854 = v513;
          v855 = v439;
          v856 = v448;
          v857 = v300;
          v874 = v119 ^ v120;
          v871 = v16;
          v858 = v361;
          v873 = v17;
          v859 = v455;
          v860 = v519;
          v861 = v347;
          v862 = v523;
          v863 = v279;
          v864 = v395;
          v865 = v353;
          v866 = v368;
          v867 = v374;
          v868 = v385;
          v869 = v411;
          v870 = v462;
          v872 = v531;
          v358 = v875;
          v517 = v876;
          v371 = v877;
          v376 = v878;
          v382 = v879;
          v392 = v880;
          v401 = v881;
          v408 = v882;
          v418 = v883;
          v543 = v884;
          v426 = v885;
          v502 = v886;
          v435 = v887;
          v451 = v888;
          v444 = v889;
          v459 = v890;
          v471 = v891;
          v122 = v898;
          v478 = v892;
          v123 = v900;
          v124 = v904;
          v125 = v121;
          v466 = v893;
          v284 = v902;
          v484 = v894;
          v332 = v903;
          v493 = v895;
          v313 = v896;
          v508 = v897;
          v271 = v899;
          v276 = v901;
          v126 = v905;
          do
          {
            v319 = ~v382;
            v305 = v517 ^ HIDWORD(v269);
            v290 = ~v401;
            v343 = ~v435;
            v326 = ~v418;
            v127 = ~v371;
            v128 = ~v313;
            v129 = ~v426;
            v402 = ~v122;
            v130 = ~v444;
            v350 = ~v471;
            v427 = ~v284;
            v296 = ~v358;
            v445 = ~v124;
            v314 = v376 ^ HIDWORD(v269) ^ 0x10000000;
            v322 = v408 ^ HIDWORD(v269) ^ 0x30000000;
            v285 = v392 ^ HIDWORD(v269) ^ 0x20000000;
            v131 = v451 ^ HIDWORD(v269) ^ 0x60000000;
            v359 = v478 ^ (HIDWORD(v269) + 0x80000000);
            v372 = v484 ^ HIDWORD(v269) ^ 0x90000000;
            v383 = HIDWORD(v493) ^ HIDWORD(v269) ^ 0xA0000000;
            v393 = v508 ^ HIDWORD(v269) ^ 0xB0000000;
            v409 = v271 ^ HIDWORD(v269) ^ 0xC0000000;
            v419 = v276 ^ HIDWORD(v269) ^ 0xD0000000;
            HIDWORD(v493) = v459 ^ HIDWORD(v269) ^ 0x70000000;
            v436 = HIDWORD(v269) ^ 0xE0000000 ^ v332;
            v509 = ~v123;
            v452 = HIDWORD(v269) ^ 0xF0000000 ^ v126;
            v485 = v131;
            v460 = v129;
            v365 = ~v466;
            v377 = ~(_DWORD)v493;
            v132 = v502;
            v503 = v128;
            v333 = v132 ^ HIDWORD(v269) ^ 0x50000000;
            LOWORD(v493) = v130;
            v479 = v127;
            v786 = HIBYTE(v436);
            v791 = HIBYTE(v452);
            v800 = ((unsigned int)v517 ^ HIDWORD(v269)) >> 24;
            v813 = HIBYTE(v314);
            v518 = HIBYTE(v285);
            v668 = 8 * HIBYTE(v129) + 1455440;
            v616 = 8 * ((unsigned int)~v124 >> 24) + 1455440;
            v673 = 8 * HIBYTE(v343) + 1455440;
            v557 = 8 * HIBYTE(v128) + 1455440;
            v575 = 8 * ((unsigned int)~v123 >> 24) + 1455440;
            v689 = 8 * HIBYTE(v130) + 1455440;
            v662 = 8 * HIBYTE(v326) + 1455440;
            v638 = 8 * HIBYTE(v127) + 1455440;
            v521 = HIBYTE(v322);
            v656 = 8 * HIBYTE(v290) + 1455440;
            v133 = v543 ^ HIDWORD(v269) ^ 0x40000000;
            v528 = HIBYTE(v133);
            v134 = &qword_163D60[(unsigned __int8)v314];
            v539 = HIBYTE(v333);
            v135 = &qword_162D60[BYTE2(v343)];
            v695 = 8 * ((unsigned int)~v471 >> 24) + 1455440;
            v136 = &qword_162560[BYTE1(v326)];
            v709 = dword_161D58[2 * HIBYTE(v131) + 1];
            v682 = dword_161D58[2 * HIBYTE(v131)];
            v714 = BYTE1(v285);
            v544 = &qword_162D60[BYTE2(v460)];
            v567 = &qword_163D60[(unsigned __int8)v305];
            v137 = *((_DWORD *)v134 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v319)
                 ^ dword_161D58[2 * HIBYTE(HIDWORD(v493))]
                 ^ *((_DWORD *)v136 - 2)
                 ^ *((_DWORD *)v135 - 2)
                 ^ LODWORD(qword_163558[HIBYTE(v402)]);
            v277 = 0xFFFFFF - HIDWORD(v269);
            v582 = &qword_163D60[(unsigned __int8)v285];
            v534 = BYTE2(v285);
            v722 = (unsigned __int8)v290;
            v138 = *((_DWORD *)v134 - 1)
                 ^ *((_DWORD *)v135 - 1)
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v319 + 4)
                 ^ ~((0xFFFFFF - HIDWORD(v269)) ^ 0x10000000)
                 ^ dword_161D58[2 * HIBYTE(HIDWORD(v493)) + 1]
                 ^ *((_DWORD *)v136 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v402)])
                 ^ dword_164558[2 * BYTE1(v322) + 1];
            v703 = &qword_162D60[BYTE2(v290)];
            v754 = (unsigned __int8)v460;
            v286 = &qword_162560[BYTE1(v460)];
            v139 = &qword_162D60[BYTE2(v130)];
            v624 = &qword_163D60[(unsigned __int8)v133];
            v743 = BYTE2(v131);
            v467 = v138 ^ dword_164D58[2 * BYTE2(v333) + 1];
            v551 = BYTE2(v322);
            v140 = dword_164558[2 * v714];
            v605 = &qword_163D60[(unsigned __int8)v322];
            v461 = v137 ^ dword_164558[2 * BYTE1(v322)] ^ dword_164D58[2 * BYTE2(v333)];
            v141 = dword_164558[2 * v714 + 1];
            v142 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v479 + 4) ^ v709 ^ (HIDWORD(v269) - 0xFFFFFF);
            HIDWORD(v269) -= 0x1FFFFFF;
            v143 = v142 ^ HIDWORD(qword_162560[BYTE1(v290) - 1]);
            v144 = LODWORD(qword_162560[BYTE1(v290) - 1]) ^ ~(*(_DWORD *)(v125 + 8 * (unsigned __int8)v479) ^ v682);
            v145 = (unsigned __int8)v326;
            v472 = &qword_162D60[BYTE2(v326)];
            v715 = (unsigned __int8)v343;
            v291 = &qword_162560[BYTE1(v343)];
            v146 = v143 ^ *((_DWORD *)v544 - 1) ^ *(_DWORD *)(v557 + 12) ^ *((_DWORD *)v567 - 1) ^ v141;
            v147 = &qword_162D60[BYTE2(v350)];
            v148 = v144
                 ^ *((_DWORD *)v544 - 2)
                 ^ *(_DWORD *)(v557 + 8)
                 ^ *((_DWORD *)v567 - 2)
                 ^ v140
                 ^ dword_164D58[2 * BYTE2(v133)];
            v545 = &qword_163D60[(unsigned __int8)v333];
            v149 = *((_DWORD *)v582 - 2);
            v323 = v148;
            v150 = *((_DWORD *)v582 - 1);
            v327 = v146 ^ dword_164D58[2 * BYTE2(v133) + 1];
            v344 = BYTE1(v333);
            v583 = BYTE6(v493);
            v683 = HIBYTE(v485);
            v568 = &qword_163D60[(unsigned __int8)v485];
            v151 = &qword_162560[BYTE1(v493)];
            v779 = (unsigned __int8)v350;
            v486 = &qword_162560[BYTE1(v350)];
            v334 = *((_DWORD *)v139 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v722 + 4)
                 ^ v277
                 ^ 0xDFFFFFFF
                 ^ dword_161D58[2 * HIBYTE(v359) + 1]
                 ^ *((_DWORD *)v286 - 1)
                 ^ *(_DWORD *)(v575 + 12)
                 ^ v150
                 ^ dword_164558[2 * BYTE1(v133) + 1]
                 ^ dword_164D58[2 * v743 + 1];
            v287 = ~*(_DWORD *)(v125 + 8 * v722)
                 ^ dword_161D58[2 * HIBYTE(v359)]
                 ^ *((_DWORD *)v286 - 2)
                 ^ *((_DWORD *)v139 - 2)
                 ^ *(_DWORD *)(v575 + 8)
                 ^ v149
                 ^ dword_164558[2 * BYTE1(v133)]
                 ^ dword_164D58[2 * v743];
            v723 = BYTE5(v493);
            v152 = *((_DWORD *)v605 - 2)
                 ^ *((_DWORD *)v147 - 2)
                 ^ dword_161D58[2 * HIBYTE(v372)]
                 ^ ~*(_DWORD *)(v125 + 8 * v145)
                 ^ *((_DWORD *)v291 - 2)
                 ^ LODWORD(qword_163558[HIBYTE(v427)]);
            v598 = &qword_163D60[BYTE4(v493)];
            v153 = *((_DWORD *)v605 - 1)
                 ^ *((_DWORD *)v147 - 1)
                 ^ *((_DWORD *)v291 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v145 + 4)
                 ^ v277
                 ^ 0xCFFFFFFF
                 ^ dword_161D58[2 * HIBYTE(v372) + 1]
                 ^ HIDWORD(qword_163558[HIBYTE(v427)]);
            HIDWORD(v493) = &qword_162560[BYTE1(v365)];
            v558 = &qword_162D60[BYTE2(v503)];
            v737 = BYTE1(v359);
            v606 = &qword_163D60[(unsigned __int8)v359];
            v292 = v153 ^ dword_164558[2 * v344 + 1] ^ dword_164D58[2 * v583 + 1];
            v345 = v152 ^ dword_164558[2 * v344] ^ dword_164D58[2 * v583];
            v154 = *((_DWORD *)v624 - 2);
            v576 = &qword_162560[BYTE1(v377)];
            v155 = dword_161D58[2 * HIBYTE(v383) + 1]
                 ^ v277
                 ^ 0xBFFFFFFF
                 ^ *(_DWORD *)(v125 + 8 * v754 + 4)
                 ^ *((_DWORD *)v151 - 1)
                 ^ HIDWORD(qword_162D60[BYTE2(v365) - 1])
                 ^ *(_DWORD *)(v616 + 12)
                 ^ *((_DWORD *)v624 - 1);
            v625 = &qword_163D60[(unsigned __int8)v372];
            v744 = BYTE1(v372);
            v156 = v154
                 ^ *(_DWORD *)(v616 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v754)
                 ^ dword_161D58[2 * HIBYTE(v383)]
                 ^ *((_DWORD *)v151 - 2)
                 ^ LODWORD(qword_162D60[BYTE2(v365) - 1])
                 ^ dword_164558[2 * v683];
            v755 = (unsigned __int8)v365;
            v710 = 8 * HIBYTE(v365) + 1455440;
            v351 = v156 ^ dword_164D58[2 * BYTE2(v359)];
            v360 = dword_164558[2 * v683 + 1] ^ v155 ^ dword_164D58[2 * BYTE2(v359) + 1];
            v157 = &qword_162D60[BYTE2(v377)];
            v158 = (unsigned __int8)v503;
            v504 = &qword_162560[BYTE1(v503)];
            v796 = v158;
            v759 = BYTE1(v383);
            v632 = &qword_163D60[(unsigned __int8)v383];
            v159 = dword_164558[2 * v723];
            v160 = dword_164558[2 * v723 + 1];
            v724 = (unsigned __int8)v377;
            v366 = *((_DWORD *)v545 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v715)
                 ^ dword_161D58[2 * HIBYTE(v393)]
                 ^ *((_DWORD *)v486 - 2)
                 ^ *((_DWORD *)v157 - 2)
                 ^ LODWORD(qword_163558[HIBYTE(v296)])
                 ^ v159
                 ^ dword_164D58[2 * BYTE2(v372)];
            v809 = (unsigned __int8)v402;
            v731 = 8 * HIBYTE(v377) + 1455440;
            v373 = *((_DWORD *)v486 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v715 + 4)
                 ^ v277
                 ^ 0xAFFFFFFF
                 ^ dword_161D58[2 * HIBYTE(v393) + 1]
                 ^ *((_DWORD *)v157 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v296)])
                 ^ *((_DWORD *)v545 - 1)
                 ^ v160
                 ^ dword_164D58[2 * BYTE2(v372) + 1];
            v617 = &qword_162560[BYTE1(v402)];
            v161 = &qword_162D60[BYTE2(v427)];
            v162 = *((_DWORD *)v558 - 2);
            v770 = BYTE1(v393);
            v163 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v493 + 4)
                 ^ v277
                 ^ 0x9FFFFFFF
                 ^ dword_161D58[2 * HIBYTE(v409) + 1]
                 ^ *(_DWORD *)(HIDWORD(v493) - 4)
                 ^ *((_DWORD *)v558 - 1);
            v684 = &qword_163D60[(unsigned __int8)v393];
            v774 = BYTE2(v419);
            v487 = (unsigned __int8)v509;
            v559 = &qword_162560[BYTE1(v509)];
            v164 = &qword_162D60[BYTE2(v445)];
            v165 = ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v493)
                 ^ dword_161D58[2 * HIBYTE(v409)]
                 ^ *(_DWORD *)(HIDWORD(v493) - 8)
                 ^ v162
                 ^ *(_DWORD *)(v638 + 8)
                 ^ *((_DWORD *)v568 - 2)
                 ^ dword_164558[2 * v737];
            v166 = v163 ^ *(_DWORD *)(v638 + 12) ^ *((_DWORD *)v568 - 1) ^ dword_164558[2 * v737 + 1];
            v805 = BYTE1(v409);
            v639 = &qword_163D60[(unsigned __int8)v409];
            v378 = v165 ^ dword_164D58[2 * BYTE2(v383)];
            v384 = v166 ^ dword_164D58[2 * BYTE2(v383) + 1];
            v167 = &qword_162D60[BYTE2(v402)];
            v494 = (unsigned __int8)v427;
            v168 = BYTE2(v436);
            v428 = &qword_162560[BYTE1(v427)];
            v169 = *((_DWORD *)v576 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v779 + 4)
                 ^ ~(v277 ^ 0x70000000)
                 ^ dword_161D58[2 * HIBYTE(v419) + 1]
                 ^ *((_DWORD *)v167 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v319)])
                 ^ *((_DWORD *)v598 - 1);
            v170 = *((_DWORD *)v598 - 2)
                 ^ dword_161D58[2 * HIBYTE(v419)]
                 ^ ~*(_DWORD *)(v125 + 8 * v779)
                 ^ *((_DWORD *)v576 - 2)
                 ^ *((_DWORD *)v167 - 2)
                 ^ LODWORD(qword_163558[HIBYTE(v319)]);
            v569 = &qword_162D60[BYTE2(v296)];
            v171 = &qword_163D60[(unsigned __int8)v419];
            v420 = BYTE1(v419);
            v648 = v171;
            v599 = BYTE2(v452);
            v172 = (unsigned __int8)v436;
            v437 = BYTE1(v436);
            v716 = &qword_163D60[v172];
            v173 = dword_164D58[2 * BYTE2(v393) + 1];
            v394 = v170 ^ dword_164558[2 * v744] ^ dword_164D58[2 * BYTE2(v393)];
            v403 = dword_164558[2 * v744 + 1] ^ v169 ^ v173;
            LOBYTE(v170) = v452;
            v453 = BYTE1(v452);
            v174 = &qword_162D60[BYTE2(v509)];
            v738 = &qword_163D60[(unsigned __int8)v170];
            v498 = BYTE2(v314);
            v546 = BYTE1(v314);
            v175 = *(_DWORD *)(v656 + 8)
                 ^ *((_DWORD *)v174 - 2)
                 ^ *((_DWORD *)v504 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v755)
                 ^ dword_161D58[2 * v786];
            v176 = *(_DWORD *)(v656 + 12)
                 ^ ~(v277 ^ 0x80000000)
                 ^ *(_DWORD *)(v125 + 8 * v755 + 4)
                 ^ dword_161D58[2 * v786 + 1]
                 ^ *((_DWORD *)v504 - 1)
                 ^ *((_DWORD *)v174 - 1)
                 ^ *((_DWORD *)v606 - 1);
            v505 = (unsigned __int8)v445;
            v577 = &qword_162560[BYTE1(v445)];
            v584 = &qword_162D60[BYTE2(v479)];
            v657 = &qword_162560[BYTE1(v479)];
            v177 = dword_164D58[2 * BYTE2(v409)];
            v410 = v176 ^ dword_164558[2 * v759 + 1] ^ dword_164D58[2 * BYTE2(v409) + 1];
            v315 = v175 ^ *((_DWORD *)v606 - 2) ^ dword_164558[2 * v759] ^ v177;
            v178 = *((_DWORD *)v625 - 2);
            v446 = BYTE2(v305);
            v480 = BYTE1(v305);
            v179 = ~(v277 ^ 0x90000000)
                 ^ *(_DWORD *)(v125 + 8 * v724 + 4)
                 ^ dword_161D58[2 * v791 + 1]
                 ^ *((_DWORD *)v617 - 1);
            v180 = *((_DWORD *)v625 - 1);
            v181 = ~*(_DWORD *)(v125 + 8 * v724)
                 ^ dword_161D58[2 * v791]
                 ^ *((_DWORD *)v617 - 2)
                 ^ *((_DWORD *)v161 - 2);
            v510 = (unsigned __int8)v296;
            v618 = &qword_162560[BYTE1(v296)];
            v626 = &qword_162D60[BYTE2(v319)];
            v725 = &qword_162560[BYTE1(v319)];
            v297 = v181 ^ *(_DWORD *)(v662 + 8) ^ v178 ^ dword_164558[2 * v770] ^ dword_164D58[2 * v774];
            v306 = *(_DWORD *)(v662 + 12)
                 ^ v179
                 ^ *((_DWORD *)v161 - 1)
                 ^ v180
                 ^ dword_164558[2 * v770 + 1]
                 ^ dword_164D58[2 * v774 + 1];
            v748 = dword_164558[2 * v420];
            v756 = dword_164558[2 * v420 + 1];
            v760 = dword_164D58[2 * v599];
            v764 = dword_164D58[2 * v599 + 1];
            v421 = *(_DWORD *)(v125 + 8 * v796 + 4)
                 ^ ~(v277 ^ 0xA0000000)
                 ^ dword_161D58[2 * v800 + 1]
                 ^ *((_DWORD *)v559 - 1)
                 ^ *((_DWORD *)v164 - 1)
                 ^ *(_DWORD *)(v668 + 12)
                 ^ *((_DWORD *)v632 - 1)
                 ^ dword_164558[2 * v805 + 1]
                 ^ dword_164D58[2 * v168 + 1];
            v320 = ~*(_DWORD *)(v125 + 8 * v796)
                 ^ dword_161D58[2 * v800]
                 ^ *((_DWORD *)v559 - 2)
                 ^ *((_DWORD *)v164 - 2)
                 ^ *(_DWORD *)(v668 + 8)
                 ^ *((_DWORD *)v632 - 2)
                 ^ dword_164558[2 * v805]
                 ^ dword_164D58[2 * v168];
            v600 = &dword_164D58[2 * v446];
            v182 = *((_DWORD *)v428 - 1);
            v183 = *(_DWORD *)(v673 + 12);
            v429 = ~*(_DWORD *)(v125 + 8 * v809)
                 ^ dword_161D58[2 * v813]
                 ^ *((_DWORD *)v428 - 2)
                 ^ *((_DWORD *)v569 - 2)
                 ^ *(_DWORD *)(v673 + 8)
                 ^ *((_DWORD *)v684 - 2)
                 ^ v748
                 ^ v760;
            v674 = dword_164558[2 * v437 + 1];
            v184 = dword_164558[2 * v437];
            v749 = dword_164558[2 * v453 + 1];
            v185 = dword_164D58[2 * v498 + 1];
            v438 = v183
                 ^ ~(v277 ^ 0xB0000000)
                 ^ *(_DWORD *)(v125 + 8 * v809 + 4)
                 ^ dword_161D58[2 * v813 + 1]
                 ^ v182
                 ^ *((_DWORD *)v569 - 1)
                 ^ *((_DWORD *)v684 - 1)
                 ^ v756
                 ^ v764;
            v447 = *((_DWORD *)v639 - 2)
                 ^ *(_DWORD *)(v689 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v487)
                 ^ dword_161D58[2 * v518]
                 ^ *((_DWORD *)v577 - 2)
                 ^ *((_DWORD *)v584 - 2)
                 ^ v184
                 ^ *v600;
            v186 = ~(v277 ^ 0xC0000000) ^ *(_DWORD *)(v125 + 8 * v487 + 4) ^ dword_161D58[2 * v518 + 1];
            v570 = *((_DWORD *)v472 - 2);
            v187 = ~(v277 ^ 0xE0000000)
                 ^ *(_DWORD *)(v125 + 8 * v505 + 4)
                 ^ dword_161D58[2 * v528 + 1]
                 ^ *((_DWORD *)v657 - 1)
                 ^ *((_DWORD *)v703 - 1)
                 ^ *(_DWORD *)(v710 + 12)
                 ^ *((_DWORD *)v716 - 1)
                 ^ dword_164558[2 * v480 + 1]
                 ^ dword_164D58[2 * v534 + 1];
            v272 = dword_164D58[2 * v551 + 1]
                 ^ ~(v277 ^ 0xF0000000)
                 ^ *(_DWORD *)(v125 + 8 * v510 + 4)
                 ^ dword_161D58[2 * v539 + 1]
                 ^ *((_DWORD *)v725 - 1)
                 ^ *((_DWORD *)v472 - 1)
                 ^ *(_DWORD *)(v731 + 12)
                 ^ *((_DWORD *)v738 - 1)
                 ^ dword_164558[2 * v546 + 1];
            v473 = *(_DWORD *)(v695 + 8)
                 ^ dword_161D58[2 * v521]
                 ^ ~*(_DWORD *)(v125 + 8 * v494)
                 ^ *((_DWORD *)v618 - 2)
                 ^ *((_DWORD *)v626 - 2)
                 ^ *((_DWORD *)v648 - 2)
                 ^ dword_164558[2 * v453]
                 ^ dword_164D58[2 * v498];
            v488 = dword_164D58[2 * v534]
                 ^ ~*(_DWORD *)(v125 + 8 * v505)
                 ^ dword_161D58[2 * v528]
                 ^ *((_DWORD *)v657 - 2)
                 ^ *((_DWORD *)v703 - 2)
                 ^ *(_DWORD *)(v710 + 8)
                 ^ *((_DWORD *)v716 - 2)
                 ^ dword_164558[2 * v480];
            v499 = ~*(_DWORD *)(v125 + 8 * v510)
                 ^ dword_161D58[2 * v539]
                 ^ *((_DWORD *)v725 - 2)
                 ^ v570
                 ^ *(_DWORD *)(v731 + 8)
                 ^ *((_DWORD *)v738 - 2)
                 ^ dword_164558[2 * v546]
                 ^ dword_164D58[2 * v551];
            v454 = v186
                 ^ *((_DWORD *)v577 - 1)
                 ^ *((_DWORD *)v584 - 1)
                 ^ *(_DWORD *)(v689 + 12)
                 ^ *((_DWORD *)v639 - 1)
                 ^ v674
                 ^ v600[1];
            v535 = HIBYTE(v360);
            v540 = HIBYTE(v373);
            v481 = *(_DWORD *)(v125 + 8 * v494 + 4)
                 ^ ~(v277 ^ 0xD0000000)
                 ^ dword_161D58[2 * v521 + 1]
                 ^ *((_DWORD *)v618 - 1)
                 ^ *((_DWORD *)v626 - 1)
                 ^ *(_DWORD *)(v695 + 12)
                 ^ *((_DWORD *)v648 - 1)
                 ^ v749
                 ^ v185;
            v495 = v187;
            v780 = HIBYTE(v187);
            v787 = HIBYTE(v272);
            v806 = HIBYTE(v327);
            v814 = HIBYTE(v467);
            v522 = HIBYTE(v334);
            v529 = HIBYTE(v292);
            v675 = 8 * HIBYTE(v378) + 1455440;
            v669 = 8 * HIBYTE(v366) + 1455440;
            v685 = 8 * HIBYTE(v394) + 1455440;
            v278 = 8 * HIBYTE(v315) + 1455440;
            v649 = 8 * HIBYTE(v345) + 1455440;
            v658 = 8 * HIBYTE(v351) + 1455440;
            v188 = qword_163D60[(unsigned __int8)v327 - 1];
            v189 = &qword_162560[BYTE1(v351)];
            v190 = &qword_162D60[BYTE2(v366)];
            v191 = dword_161D58[2 * HIBYTE(v384)]
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v461)
                 ^ LODWORD(qword_162560[BYTE1(v345) - 1])
                 ^ *((_DWORD *)v190 - 2);
            v192 = &qword_162D60[BYTE2(v378)];
            v193 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v461 + 4)
                 ^ dword_161D58[2 * HIBYTE(v384) + 1]
                 ^ HIDWORD(qword_162560[BYTE1(v345) - 1])
                 ^ *((_DWORD *)v190 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v429)]);
            v696 = (unsigned __int8)v345;
            v711 = &qword_162D60[BYTE2(v345)];
            v717 = (unsigned __int8)v366;
            v346 = &qword_162560[BYTE1(v366)];
            v194 = v191 ^ LODWORD(qword_163558[HIBYTE(v429)]) ^ v188 ^ dword_164558[2 * BYTE1(v334)];
            v195 = v193 ^ HIDWORD(v188) ^ dword_164558[2 * BYTE1(v334) + 1];
            LODWORD(v188) = &qword_163D60[(unsigned __int8)v334];
            v367 = BYTE2(v334);
            v196 = dword_164D58[2 * BYTE2(v360) + 1];
            WORD2(v188) = v360;
            v358 = v194 ^ dword_164D58[2 * BYTE2(v360)];
            v197 = BYTE5(v188);
            v517 = v195 ^ v196;
            v552 = &qword_163D60[BYTE4(v188)];
            v198 = *((_DWORD *)v189 - 1);
            v199 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v287)
                 ^ dword_161D58[2 * HIBYTE(v403)]
                 ^ *((_DWORD *)v189 - 2);
            v200 = *((_DWORD *)v192 - 2);
            v201 = (unsigned __int8)v351;
            v739 = &qword_162D60[BYTE2(v351)];
            v732 = (unsigned __int8)v378;
            v202 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v287 + 4)
                 ^ dword_161D58[2 * HIBYTE(v403) + 1]
                 ^ v198
                 ^ *((_DWORD *)v192 - 1)
                 ^ HIDWORD(qword_163558[HIBYTE(v447)]);
            v203 = &qword_162560[BYTE1(v378)];
            v204 = &qword_162D60[BYTE2(v315)];
            v205 = v199 ^ v200 ^ LODWORD(qword_163558[HIBYTE(v447)]) ^ LODWORD(qword_163D60[(unsigned __int8)v467 - 1]);
            v335 = &qword_163D60[(unsigned __int8)v292];
            v206 = dword_164558[2 * BYTE1(v292) + 1];
            v352 = BYTE2(v292);
            v663 = BYTE1(v373);
            v560 = &qword_163D60[(unsigned __int8)v373];
            v207 = dword_164D58[2 * BYTE2(v373) + 1];
            v750 = (unsigned __int8)v394;
            v371 = v205 ^ dword_164558[2 * BYTE1(v292)] ^ dword_164D58[2 * BYTE2(v373)];
            v293 = &qword_162560[BYTE1(v394)];
            v376 = v202 ^ HIDWORD(qword_163D60[(unsigned __int8)v467 - 1]) ^ v206 ^ v207;
            HIDWORD(v188) = &qword_162D60[BYTE2(v394)];
            v208 = *(_DWORD *)(v125 + 8 * v696 + 4)
                 ^ dword_161D58[2 * HIBYTE(v410) + 1]
                 ^ *((_DWORD *)v346 - 1)
                 ^ *(_DWORD *)(HIDWORD(v188) - 4);
            v209 = *(_DWORD *)(HIDWORD(v188) - 8)
                 ^ *(_DWORD *)(v125 + 8 * v696)
                 ^ dword_161D58[2 * HIBYTE(v410)]
                 ^ *((_DWORD *)v346 - 2);
            v506 = BYTE1(v384);
            v210 = *(_QWORD *)(v188 - 8);
            v571 = &qword_163D60[(unsigned __int8)v384];
            v211 = v209 ^ LODWORD(qword_163558[HIBYTE(v473)]);
            v212 = BYTE2(v410);
            v761 = (unsigned __int8)v315;
            v316 = &qword_162560[BYTE1(v315)];
            v213 = dword_164558[2 * v197] ^ v211 ^ v210;
            HIDWORD(v210) ^= dword_164558[2 * v197 + 1] ^ v208 ^ HIDWORD(qword_163558[HIBYTE(v473)]);
            LODWORD(v210) = &qword_162D60[BYTE2(v320)];
            v697 = BYTE1(v403);
            v585 = &qword_163D60[(unsigned __int8)v403];
            v214 = dword_164D58[2 * BYTE2(v384) + 1];
            v382 = v213 ^ dword_164D58[2 * BYTE2(v384)];
            v215 = *(_DWORD *)(v125 + 8 * v201);
            v216 = *(_DWORD *)(v125 + 8 * v201 + 4);
            v392 = HIDWORD(v210) ^ v214;
            v511 = &qword_162560[BYTE1(v297)];
            v217 = BYTE2(v421);
            HIDWORD(v210) = &qword_162D60[BYTE2(v429)];
            v218 = BYTE1(v410);
            v601 = &qword_163D60[(unsigned __int8)v410];
            v219 = HIDWORD(qword_163558[HIBYTE(v488)])
                 ^ dword_161D58[2 * HIBYTE(v306) + 1]
                 ^ v216
                 ^ *((_DWORD *)v203 - 1)
                 ^ *((_DWORD *)v204 - 1)
                 ^ *((_DWORD *)v335 - 1);
            v220 = LODWORD(qword_163558[HIBYTE(v488)])
                 ^ dword_161D58[2 * HIBYTE(v306)]
                 ^ v215
                 ^ *((_DWORD *)v203 - 2)
                 ^ *((_DWORD *)v204 - 2)
                 ^ *((_DWORD *)v335 - 2);
            v336 = &qword_162560[BYTE1(v320)];
            v221 = v220 ^ dword_164558[2 * v663];
            v222 = v219 ^ dword_164558[2 * v663 + 1];
            v578 = &qword_162D60[BYTE2(v447)];
            v771 = BYTE1(v306);
            v664 = &qword_163D60[(unsigned __int8)v306];
            v223 = dword_164D58[2 * BYTE2(v403) + 1];
            v775 = BYTE2(v438);
            v401 = v221 ^ dword_164D58[2 * BYTE2(v403)];
            v408 = v222 ^ v223;
            v224 = &qword_162D60[BYTE2(v297)];
            v225 = dword_161D58[2 * HIBYTE(v421) + 1]
                 ^ *(_DWORD *)(v125 + 8 * v717 + 4)
                 ^ *((_DWORD *)v293 - 1)
                 ^ *((_DWORD *)v224 - 1);
            v226 = dword_161D58[2 * HIBYTE(v421)]
                 ^ *(_DWORD *)(v125 + 8 * v717)
                 ^ *((_DWORD *)v293 - 2)
                 ^ *((_DWORD *)v224 - 2);
            v294 = BYTE2(v454);
            v227 = (unsigned __int8)v297;
            v228 = HIDWORD(qword_163558[HIBYTE(v499)]) ^ v225 ^ *((_DWORD *)v552 - 1);
            v229 = v226 ^ LODWORD(qword_163558[HIBYTE(v499)]) ^ *((_DWORD *)v552 - 2);
            v718 = 8 * HIBYTE(v297) + 1455440;
            v801 = (unsigned __int8)v429;
            v553 = &qword_162560[BYTE1(v429)];
            v230 = v229 ^ dword_164558[2 * v506] ^ dword_164D58[2 * v212];
            v543 = v228 ^ dword_164558[2 * v506 + 1] ^ dword_164D58[2 * v212 + 1];
            v231 = &qword_162D60[BYTE2(v473)];
            LOWORD(v225) = v421;
            v418 = v230;
            v783 = BYTE1(v225);
            v619 = &qword_163D60[(unsigned __int8)v225];
            v298 = (unsigned __int8)v320;
            v745 = 8 * HIBYTE(v320) + 1455440;
            v232 = *((_DWORD *)v560 - 2);
            v810 = (unsigned __int8)v447;
            v233 = *(_DWORD *)(v125 + 8 * v732 + 4)
                 ^ dword_161D58[2 * HIBYTE(v438) + 1]
                 ^ *((_DWORD *)v316 - 1)
                 ^ *(_DWORD *)(v210 - 4)
                 ^ HIDWORD(qword_163558[HIBYTE(v323)])
                 ^ *((_DWORD *)v560 - 1);
            v561 = &qword_162560[BYTE1(v447)];
            v792 = BYTE1(v438);
            v627 = &qword_163D60[(unsigned __int8)v438];
            v426 = v232
                 ^ *(_DWORD *)(v125 + 8 * v732)
                 ^ dword_161D58[2 * HIBYTE(v438)]
                 ^ *((_DWORD *)v316 - 2)
                 ^ *(_DWORD *)(v210 - 8)
                 ^ LODWORD(qword_163558[HIBYTE(v323)])
                 ^ dword_164558[2 * v697]
                 ^ dword_164D58[2 * BYTE2(v306)];
            v502 = v233 ^ dword_164558[2 * v697 + 1] ^ dword_164D58[2 * BYTE2(v306) + 1];
            v307 = BYTE1(v454);
            v234 = *((_DWORD *)v511 - 2)
                 ^ *(_DWORD *)(v125 + 8 * v750)
                 ^ dword_161D58[2 * HIBYTE(v454)]
                 ^ *(_DWORD *)(HIDWORD(v210) - 8);
            v235 = *(_DWORD *)(v125 + 8 * v750 + 4)
                 ^ dword_161D58[2 * HIBYTE(v454) + 1]
                 ^ *((_DWORD *)v511 - 1)
                 ^ *(_DWORD *)(HIDWORD(v210) - 4);
            v690 = &qword_163D60[(unsigned __int8)v454];
            v317 = (unsigned __int8)v473;
            v512 = &qword_162560[BYTE1(v473)];
            v757 = BYTE1(v481);
            v698 = &qword_163D60[(unsigned __int8)v481];
            v435 = *((_DWORD *)v571 - 2)
                 ^ v234
                 ^ LODWORD(qword_163558[HIBYTE(v461)])
                 ^ dword_164558[2 * v218]
                 ^ dword_164D58[2 * v217];
            v236 = *(v585 - 1);
            v451 = HIDWORD(qword_163558[HIBYTE(v461)])
                 ^ v235
                 ^ *((_DWORD *)v571 - 1)
                 ^ dword_164558[2 * v218 + 1]
                 ^ dword_164D58[2 * v217 + 1];
            v237 = dword_161D58[2 * HIBYTE(v481)] ^ *(_DWORD *)(v125 + 8 * v761) ^ *((_DWORD *)v336 - 2);
            v238 = dword_161D58[2 * HIBYTE(v481) + 1] ^ *(_DWORD *)(v125 + 8 * v761 + 4) ^ *((_DWORD *)v336 - 1);
            v239 = *((_DWORD *)v578 - 2);
            v240 = *((_DWORD *)v578 - 1);
            v337 = (unsigned __int8)v488;
            v579 = &qword_162560[BYTE1(v488)];
            v586 = &qword_162D60[BYTE2(v323)];
            v241 = BYTE2(v272);
            v633 = &qword_162560[BYTE1(v499)];
            HIDWORD(v236) ^= v238 ^ v240 ^ HIDWORD(qword_163558[HIBYTE(v287)]) ^ dword_164558[2 * v771 + 1];
            v640 = &qword_162D60[BYTE2(v461)];
            v704 = &qword_162560[BYTE1(v461)];
            v242 = &dword_164D58[2 * v294];
            v444 = v236
                 ^ v237
                 ^ v239
                 ^ LODWORD(qword_163558[HIBYTE(v287)])
                 ^ dword_164558[2 * v771]
                 ^ dword_164D58[2 * v775];
            v321 = BYTE1(v495);
            v459 = HIDWORD(v236) ^ dword_164D58[2 * v775 + 1];
            v726 = &qword_163D60[(unsigned __int8)v495];
            v295 = BYTE2(v327);
            HIDWORD(v236) = *(_DWORD *)(v649 + 12);
            v328 = BYTE1(v327);
            v243 = dword_161D58[2 * v780]
                 ^ *(_DWORD *)(v125 + 8 * v227)
                 ^ *((_DWORD *)v553 - 2)
                 ^ *((_DWORD *)v231 - 2)
                 ^ *(_DWORD *)(v649 + 8);
            v650 = &qword_162560[BYTE1(v323)];
            v244 = *(_DWORD *)(v125 + 8 * v227 + 4)
                 ^ dword_161D58[2 * v780 + 1]
                 ^ *((_DWORD *)v553 - 1)
                 ^ *((_DWORD *)v231 - 1)
                 ^ HIDWORD(v236)
                 ^ *((_DWORD *)v601 - 1);
            v245 = v243 ^ *((_DWORD *)v601 - 2);
            v602 = &qword_162D60[BYTE2(v287)];
            v733 = &qword_162560[BYTE1(v287)];
            v471 = v245 ^ dword_164558[2 * v783] ^ *v242;
            HIDWORD(v236) = (unsigned __int8)v272;
            v273 = BYTE1(v272);
            v751 = &qword_163D60[HIDWORD(v236)];
            LODWORD(v210) = dword_164D58[2 * BYTE2(v481)];
            v246 = dword_164D58[2 * BYTE2(v481) + 1];
            v478 = v244 ^ dword_164558[2 * v783 + 1] ^ v242[1];
            HIDWORD(v236) = dword_161D58[2 * v787 + 1] ^ *(_DWORD *)(v125 + 8 * v298 + 4);
            v247 = *(_DWORD *)(v125 + 8 * v298) ^ dword_161D58[2 * v787];
            v288 = BYTE2(v467);
            v299 = BYTE1(v467);
            LODWORD(v236) = &qword_162D60[BYTE2(v488)];
            v484 = *(_DWORD *)(v658 + 12)
                 ^ HIDWORD(v236)
                 ^ *((_DWORD *)v561 - 1)
                 ^ *(_DWORD *)(v236 - 4)
                 ^ *((_DWORD *)v664 - 1)
                 ^ dword_164558[2 * v792 + 1]
                 ^ v246;
            v466 = v247
                 ^ *((_DWORD *)v561 - 2)
                 ^ *(_DWORD *)(v236 - 8)
                 ^ *(_DWORD *)(v658 + 8)
                 ^ *((_DWORD *)v664 - 2)
                 ^ dword_164558[2 * v792]
                 ^ v210;
            LODWORD(v210) = &dword_164558[2 * BYTE1(v495)];
            v607 = (_DWORD *)(v125 + 8 * (unsigned __int8)v499);
            v493 = *(_QWORD *)&dword_161D58[2 * v806]
                 ^ *(_QWORD *)(v125 + 8 * v801)
                 ^ *(v512 - 1)
                 ^ qword_162D60[BYTE2(v499) - 1]
                 ^ *(_QWORD *)(v669 + 8)
                 ^ *(v619 - 1)
                 ^ *(_QWORD *)&dword_164558[2 * v307]
                 ^ *(_QWORD *)&dword_164D58[2 * BYTE2(v495)];
            v659 = (_DWORD *)(v125 + 8 * (unsigned __int8)v323);
            v248 = *(_DWORD *)(v125 + 8 * v317 + 4) ^ dword_161D58[2 * v522 + 1];
            v249 = *(_DWORD *)(v125 + 8 * v317) ^ dword_161D58[2 * v522];
            v508 = dword_161D58[2 * v814 + 1]
                 ^ *(_DWORD *)(v125 + 8 * v810 + 4)
                 ^ *((_DWORD *)v579 - 1)
                 ^ *((_DWORD *)v586 - 1)
                 ^ *(_DWORD *)(v675 + 12)
                 ^ *((_DWORD *)v627 - 1)
                 ^ dword_164558[2 * v757 + 1]
                 ^ dword_164D58[2 * v241 + 1];
            v313 = *(_DWORD *)(v125 + 8 * v810)
                 ^ dword_161D58[2 * v814]
                 ^ *((_DWORD *)v579 - 2)
                 ^ *((_DWORD *)v586 - 2)
                 ^ *(_DWORD *)(v675 + 8)
                 ^ *((_DWORD *)v627 - 2)
                 ^ dword_164558[2 * v757]
                 ^ dword_164D58[2 * v241];
            HIDWORD(v210) = dword_161D58[2 * v529] ^ *(_DWORD *)(v125 + 8 * v337);
            v554 = dword_164558[2 * v273 + 1];
            v250 = *(_DWORD *)(v125 + 8 * v337 + 4) ^ dword_161D58[2 * v529 + 1];
            v251 = v248
                 ^ *((_DWORD *)v633 - 1)
                 ^ *((_DWORD *)v640 - 1)
                 ^ *(_DWORD *)(v685 + 12)
                 ^ *((_DWORD *)v690 - 1)
                 ^ *(_DWORD *)(v210 + 4);
            v530 = dword_164558[2 * v273];
            v252 = HIDWORD(v210)
                 ^ *((_DWORD *)v650 - 2)
                 ^ *((_DWORD *)v602 - 2)
                 ^ *(_DWORD *)(v278 + 8)
                 ^ *((_DWORD *)v698 - 2);
            v562 = dword_164D58[2 * v288];
            v253 = *v607
                 ^ dword_161D58[2 * v535]
                 ^ *((_DWORD *)v704 - 2)
                 ^ *((_DWORD *)v711 - 2)
                 ^ *(_DWORD *)(v718 + 8)
                 ^ *((_DWORD *)v726 - 2)
                 ^ dword_164558[2 * v328];
            v254 = dword_164D58[2 * v367];
            v332 = v607[1]
                 ^ dword_161D58[2 * v535 + 1]
                 ^ *((_DWORD *)v704 - 1)
                 ^ *((_DWORD *)v711 - 1)
                 ^ *(_DWORD *)(v718 + 12)
                 ^ *((_DWORD *)v726 - 1)
                 ^ dword_164558[2 * v328 + 1]
                 ^ dword_164D58[2 * v367 + 1];
            v124 = dword_161D58[2 * v540]
                 ^ *v659
                 ^ *((_DWORD *)v733 - 2)
                 ^ *((_DWORD *)v739 - 2)
                 ^ *(_DWORD *)(v745 + 8)
                 ^ *((_DWORD *)v751 - 2)
                 ^ dword_164558[2 * v299]
                 ^ dword_164D58[2 * v352];
            v271 = v251 ^ dword_164D58[2 * v295 + 1];
            v126 = v659[1]
                 ^ dword_161D58[2 * v540 + 1]
                 ^ *((_DWORD *)v733 - 1)
                 ^ *((_DWORD *)v739 - 1)
                 ^ *(_DWORD *)(v745 + 12)
                 ^ *((_DWORD *)v751 - 1)
                 ^ dword_164558[2 * v299 + 1]
                 ^ dword_164D58[2 * v352 + 1];
            v122 = *((_DWORD *)v640 - 2)
                 ^ v249
                 ^ *((_DWORD *)v633 - 2)
                 ^ *(_DWORD *)(v685 + 8)
                 ^ *((_DWORD *)v690 - 2)
                 ^ dword_164558[2 * v321]
                 ^ dword_164D58[2 * v295];
            v276 = v250
                 ^ *((_DWORD *)v650 - 1)
                 ^ *((_DWORD *)v602 - 1)
                 ^ *(_DWORD *)(v278 + 12)
                 ^ *((_DWORD *)v698 - 1)
                 ^ v554
                 ^ dword_164D58[2 * v288 + 1];
            v284 = v253 ^ v254;
            v123 = v252 ^ v530 ^ v562;
          }
          while ( v269 != 0xF1FFFFFFFFFFFFFFLL );
          v5 = v125;
          v255 = v358;
          v256 = &v846;
          v877 = v371;
          v257 = &v877;
          v875 = v358;
          v878 = v376;
          v876 = v517;
          v879 = v382;
          v880 = v392;
          v881 = v401;
          v882 = v408;
          v883 = v418;
          v884 = v543;
          v885 = v426;
          v886 = v502;
          v887 = v435;
          v888 = v451;
          v889 = v444;
          v890 = v459;
          v898 = v122;
          v891 = v471;
          v899 = v271;
          v892 = v478;
          v901 = v276;
          v902 = v253 ^ v254;
          v258 = v517;
          v893 = v466;
          v904 = v124;
          v905 = v126;
          v894 = v484;
          v900 = v252 ^ v530 ^ v562;
          v903 = v332;
          v895 = v493;
          v259 = v842;
          v260 = v587;
          v896 = v313;
          v897 = v508;
          while ( 1 )
          {
            v263 = *(_DWORD *)(v259 + 8);
            v259 += 8;
            v264 = *(_DWORD *)(v259 + 4);
            *(_DWORD *)v259 = v263 ^ v260 ^ v255;
            *(_DWORD *)(v259 + 4) = v264 ^ v258 ^ HIDWORD(v260);
            if ( &dest[120] == (_BYTE *)v259 )
              break;
            v261 = *v256;
            v257 += 2;
            v262 = v256[1];
            v256 += 2;
            v255 = *(v257 - 2);
            v258 = *(v257 - 1);
            v260 = __PAIR64__(v262, v261);
          }
          v3 = 0;
          ++*(_QWORD *)(a1 + 264);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 128 - v3;
      }
    }
    result = memcpy(v843, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
