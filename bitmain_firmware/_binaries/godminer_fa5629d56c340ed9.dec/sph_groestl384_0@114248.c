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
  unsigned int v185; // r0
  unsigned int v186; // r2
  __int64 v187; // r6
  _QWORD *v188; // r12
  _QWORD *v189; // r1
  int v190; // r3
  _QWORD *v191; // r0
  int v192; // r2
  int v193; // r3
  int v194; // r2
  int v195; // r9
  int v196; // r10
  int v197; // r2
  int v198; // r5
  int v199; // r12
  int v200; // r9
  int v201; // r3
  _QWORD *v202; // r0
  _QWORD *v203; // r2
  int v204; // r5
  int v205; // r12
  int v206; // lr
  int v207; // r3
  int v208; // r8
  __int64 v209; // r6
  int v210; // r1
  int v211; // r8
  int v212; // r1
  int v213; // r10
  int v214; // r1
  int v215; // r3
  int v216; // r10
  int v217; // r9
  int v218; // r5
  int v219; // r0
  int v220; // r0
  int v221; // r5
  int v222; // lr
  _QWORD *v223; // r2
  int v224; // r0
  int v225; // r3
  int v226; // r4
  int v227; // r1
  int v228; // r12
  int v229; // r3
  _QWORD *v230; // r8
  int v231; // r12
  int v232; // r1
  int v233; // r3
  int v234; // lr
  __int64 v235; // r2
  int v236; // r0
  int v237; // lr
  int v238; // r12
  int v239; // r1
  int v240; // r10
  _DWORD *v241; // r1
  int v242; // lr
  int v243; // r5
  int v244; // lr
  int v245; // r12
  int v246; // r1
  int v247; // r8
  int v248; // r5
  int v249; // r0
  int v250; // r10
  int v251; // r7
  int v252; // r4
  int v253; // r6
  int v254; // r5
  int *v255; // r0
  int *v256; // r1
  int v257; // r4
  int v258; // r3
  unsigned __int64 v259; // kr48_8
  int v260; // lr
  int v261; // r2
  int v262; // t1
  int v263; // r2
  void *result; // r0
  size_t v266; // r5
  int v267; // [sp+0h] [bp-354h]
  __int64 v268; // [sp+0h] [bp-354h]
  __int64 v269; // [sp+8h] [bp-34Ch]
  int v270; // [sp+8h] [bp-34Ch]
  unsigned int v271; // [sp+8h] [bp-34Ch]
  int v272; // [sp+8h] [bp-34Ch]
  unsigned int v273; // [sp+18h] [bp-33Ch]
  unsigned int v274; // [sp+18h] [bp-33Ch]
  int v275; // [sp+18h] [bp-33Ch]
  int v276; // [sp+18h] [bp-33Ch]
  int v277; // [sp+18h] [bp-33Ch]
  int v278; // [sp+1Ch] [bp-338h]
  unsigned int v279; // [sp+1Ch] [bp-338h]
  unsigned int v280; // [sp+1Ch] [bp-338h]
  int v281; // [sp+1Ch] [bp-338h]
  _QWORD *v282; // [sp+1Ch] [bp-338h]
  int v283; // [sp+1Ch] [bp-338h]
  unsigned int v284; // [sp+1Ch] [bp-338h]
  _QWORD *v285; // [sp+1Ch] [bp-338h]
  unsigned int v286; // [sp+1Ch] [bp-338h]
  int v287; // [sp+1Ch] [bp-338h]
  unsigned __int64 v288; // [sp+20h] [bp-334h]
  unsigned int v289; // [sp+20h] [bp-334h]
  _QWORD *v290; // [sp+20h] [bp-334h]
  unsigned int v291; // [sp+20h] [bp-334h]
  _QWORD *v292; // [sp+20h] [bp-334h]
  int v293; // [sp+20h] [bp-334h]
  int v294; // [sp+20h] [bp-334h]
  unsigned int v295; // [sp+24h] [bp-330h]
  unsigned int v296; // [sp+24h] [bp-330h]
  int v297; // [sp+24h] [bp-330h]
  int v298; // [sp+24h] [bp-330h]
  int v299; // [sp+28h] [bp-32Ch]
  unsigned int v300; // [sp+28h] [bp-32Ch]
  int v301; // [sp+28h] [bp-32Ch]
  unsigned int v302; // [sp+28h] [bp-32Ch]
  int v303; // [sp+28h] [bp-32Ch]
  int v304; // [sp+28h] [bp-32Ch]
  unsigned int v305; // [sp+28h] [bp-32Ch]
  int v306; // [sp+28h] [bp-32Ch]
  unsigned int v307; // [sp+2Ch] [bp-328h]
  int v308; // [sp+2Ch] [bp-328h]
  unsigned int v309; // [sp+2Ch] [bp-328h]
  int v310; // [sp+2Ch] [bp-328h]
  int v311; // [sp+2Ch] [bp-328h]
  int v312; // [sp+2Ch] [bp-328h]
  unsigned int v313; // [sp+2Ch] [bp-328h]
  unsigned int v314; // [sp+2Ch] [bp-328h]
  _QWORD *v315; // [sp+2Ch] [bp-328h]
  int v316; // [sp+2Ch] [bp-328h]
  __int64 v317; // [sp+30h] [bp-324h]
  unsigned int v318; // [sp+30h] [bp-324h]
  unsigned int v319; // [sp+30h] [bp-324h]
  int v320; // [sp+30h] [bp-324h]
  unsigned int v321; // [sp+34h] [bp-320h]
  unsigned int v322; // [sp+34h] [bp-320h]
  unsigned int v323; // [sp+38h] [bp-31Ch]
  unsigned int v324; // [sp+38h] [bp-31Ch]
  unsigned int v325; // [sp+38h] [bp-31Ch]
  unsigned int v326; // [sp+38h] [bp-31Ch]
  int v327; // [sp+38h] [bp-31Ch]
  unsigned int v328; // [sp+3Ch] [bp-318h]
  unsigned int v329; // [sp+3Ch] [bp-318h]
  int v330; // [sp+3Ch] [bp-318h]
  int v331; // [sp+3Ch] [bp-318h]
  unsigned int v332; // [sp+3Ch] [bp-318h]
  unsigned int v333; // [sp+3Ch] [bp-318h]
  _QWORD *v334; // [sp+3Ch] [bp-318h]
  _QWORD *v335; // [sp+3Ch] [bp-318h]
  int v336; // [sp+3Ch] [bp-318h]
  unsigned int v337; // [sp+40h] [bp-314h]
  unsigned int v338; // [sp+40h] [bp-314h]
  int v339; // [sp+40h] [bp-314h]
  int v340; // [sp+40h] [bp-314h]
  _QWORD *v341; // [sp+40h] [bp-314h]
  unsigned int v342; // [sp+40h] [bp-314h]
  int v343; // [sp+40h] [bp-314h]
  unsigned int v344; // [sp+40h] [bp-314h]
  _QWORD *v345; // [sp+40h] [bp-314h]
  int v346; // [sp+44h] [bp-310h]
  unsigned int v347; // [sp+44h] [bp-310h]
  unsigned int v348; // [sp+44h] [bp-310h]
  int v349; // [sp+44h] [bp-310h]
  unsigned int v350; // [sp+44h] [bp-310h]
  int v351; // [sp+44h] [bp-310h]
  int v352; // [sp+48h] [bp-30Ch]
  unsigned int v353; // [sp+48h] [bp-30Ch]
  unsigned int v354; // [sp+48h] [bp-30Ch]
  int v355; // [sp+48h] [bp-30Ch]
  int v356; // [sp+48h] [bp-30Ch]
  int v357; // [sp+48h] [bp-30Ch]
  unsigned int v358; // [sp+48h] [bp-30Ch]
  unsigned int v359; // [sp+48h] [bp-30Ch]
  int v360; // [sp+4Ch] [bp-308h]
  unsigned int v361; // [sp+4Ch] [bp-308h]
  unsigned int v362; // [sp+4Ch] [bp-308h]
  int v363; // [sp+4Ch] [bp-308h]
  unsigned int v364; // [sp+4Ch] [bp-308h]
  unsigned int v365; // [sp+4Ch] [bp-308h]
  int v366; // [sp+4Ch] [bp-308h]
  int v367; // [sp+50h] [bp-304h]
  unsigned int v368; // [sp+50h] [bp-304h]
  __int64 v369; // [sp+50h] [bp-304h]
  int v370; // [sp+50h] [bp-304h]
  unsigned int v371; // [sp+50h] [bp-304h]
  unsigned int v372; // [sp+50h] [bp-304h]
  int v373; // [sp+54h] [bp-300h]
  unsigned int v374; // [sp+54h] [bp-300h]
  int v375; // [sp+54h] [bp-300h]
  unsigned int v376; // [sp+54h] [bp-300h]
  unsigned int v377; // [sp+54h] [bp-300h]
  unsigned int v378; // [sp+58h] [bp-2FCh]
  unsigned int v379; // [sp+58h] [bp-2FCh]
  int v380; // [sp+58h] [bp-2FCh]
  int v381; // [sp+58h] [bp-2FCh]
  unsigned int v382; // [sp+58h] [bp-2FCh]
  unsigned int v383; // [sp+58h] [bp-2FCh]
  int v384; // [sp+5Ch] [bp-2F8h]
  unsigned int v385; // [sp+5Ch] [bp-2F8h]
  int v386; // [sp+5Ch] [bp-2F8h]
  int v387; // [sp+5Ch] [bp-2F8h]
  unsigned int v388; // [sp+5Ch] [bp-2F8h]
  int v389; // [sp+5Ch] [bp-2F8h]
  int v390; // [sp+5Ch] [bp-2F8h]
  int v391; // [sp+5Ch] [bp-2F8h]
  unsigned int v392; // [sp+5Ch] [bp-2F8h]
  unsigned int v393; // [sp+5Ch] [bp-2F8h]
  int v394; // [sp+60h] [bp-2F4h]
  unsigned int v395; // [sp+60h] [bp-2F4h]
  _QWORD *v396; // [sp+60h] [bp-2F4h]
  _QWORD *v397; // [sp+60h] [bp-2F4h]
  unsigned int v398; // [sp+60h] [bp-2F4h]
  _QWORD *v399; // [sp+60h] [bp-2F4h]
  int v400; // [sp+60h] [bp-2F4h]
  unsigned int v401; // [sp+60h] [bp-2F4h]
  unsigned int v402; // [sp+60h] [bp-2F4h]
  _QWORD *v403; // [sp+64h] [bp-2F0h]
  int v404; // [sp+64h] [bp-2F0h]
  unsigned int v405; // [sp+64h] [bp-2F0h]
  int v406; // [sp+64h] [bp-2F0h]
  int v407; // [sp+64h] [bp-2F0h]
  unsigned int v408; // [sp+64h] [bp-2F0h]
  unsigned int v409; // [sp+64h] [bp-2F0h]
  int v410; // [sp+68h] [bp-2ECh]
  unsigned int v411; // [sp+68h] [bp-2ECh]
  int v412; // [sp+68h] [bp-2ECh]
  int v413; // [sp+68h] [bp-2ECh]
  unsigned int v414; // [sp+68h] [bp-2ECh]
  int v415; // [sp+68h] [bp-2ECh]
  int v416; // [sp+68h] [bp-2ECh]
  int v417; // [sp+68h] [bp-2ECh]
  unsigned int v418; // [sp+68h] [bp-2ECh]
  int v419; // [sp+68h] [bp-2ECh]
  unsigned int v420; // [sp+68h] [bp-2ECh]
  unsigned int v421; // [sp+6Ch] [bp-2E8h]
  int v422; // [sp+6Ch] [bp-2E8h]
  unsigned int v423; // [sp+6Ch] [bp-2E8h]
  int v424; // [sp+6Ch] [bp-2E8h]
  int v425; // [sp+6Ch] [bp-2E8h]
  unsigned int v426; // [sp+6Ch] [bp-2E8h]
  _QWORD *v427; // [sp+6Ch] [bp-2E8h]
  unsigned int v428; // [sp+6Ch] [bp-2E8h]
  unsigned int v429; // [sp+70h] [bp-2E4h]
  _QWORD *v430; // [sp+70h] [bp-2E4h]
  unsigned int v431; // [sp+70h] [bp-2E4h]
  int v432; // [sp+70h] [bp-2E4h]
  int v433; // [sp+70h] [bp-2E4h]
  int v434; // [sp+70h] [bp-2E4h]
  unsigned int v435; // [sp+70h] [bp-2E4h]
  int v436; // [sp+70h] [bp-2E4h]
  unsigned int v437; // [sp+70h] [bp-2E4h]
  int v438; // [sp+74h] [bp-2E0h]
  unsigned int v439; // [sp+74h] [bp-2E0h]
  int v440; // [sp+74h] [bp-2E0h]
  _QWORD *v441; // [sp+74h] [bp-2E0h]
  unsigned int v442; // [sp+74h] [bp-2E0h]
  int v443; // [sp+74h] [bp-2E0h]
  int v444; // [sp+74h] [bp-2E0h]
  int v445; // [sp+74h] [bp-2E0h]
  unsigned int v446; // [sp+74h] [bp-2E0h]
  int v447; // [sp+78h] [bp-2DCh]
  int v448; // [sp+78h] [bp-2DCh]
  unsigned int v449; // [sp+78h] [bp-2DCh]
  int v450; // [sp+78h] [bp-2DCh]
  unsigned int v451; // [sp+78h] [bp-2DCh]
  int v452; // [sp+78h] [bp-2DCh]
  unsigned int v453; // [sp+78h] [bp-2DCh]
  int v454; // [sp+7Ch] [bp-2D8h]
  unsigned int v455; // [sp+7Ch] [bp-2D8h]
  int v456; // [sp+7Ch] [bp-2D8h]
  unsigned int v457; // [sp+7Ch] [bp-2D8h]
  int v458; // [sp+7Ch] [bp-2D8h]
  unsigned int v459; // [sp+7Ch] [bp-2D8h]
  unsigned int v460; // [sp+7Ch] [bp-2D8h]
  int v461; // [sp+80h] [bp-2D4h]
  unsigned int v462; // [sp+80h] [bp-2D4h]
  unsigned int v463; // [sp+80h] [bp-2D4h]
  int v464; // [sp+80h] [bp-2D4h]
  int v465; // [sp+80h] [bp-2D4h]
  unsigned int v466; // [sp+80h] [bp-2D4h]
  int v467; // [sp+84h] [bp-2D0h]
  unsigned int v468; // [sp+84h] [bp-2D0h]
  unsigned int v469; // [sp+84h] [bp-2D0h]
  int v470; // [sp+84h] [bp-2D0h]
  _QWORD *v471; // [sp+84h] [bp-2D0h]
  unsigned int v472; // [sp+84h] [bp-2D0h]
  __int64 v473; // [sp+88h] [bp-2CCh]
  int v474; // [sp+88h] [bp-2CCh]
  int v475; // [sp+88h] [bp-2CCh]
  unsigned int v476; // [sp+88h] [bp-2CCh]
  int v477; // [sp+88h] [bp-2CCh]
  unsigned int v478; // [sp+88h] [bp-2CCh]
  int v479; // [sp+88h] [bp-2CCh]
  unsigned int v480; // [sp+88h] [bp-2CCh]
  int v481; // [sp+8Ch] [bp-2C8h]
  unsigned int v482; // [sp+8Ch] [bp-2C8h]
  int v483; // [sp+8Ch] [bp-2C8h]
  __int16 v484; // [sp+8Ch] [bp-2C8h]
  _QWORD *v485; // [sp+8Ch] [bp-2C8h]
  int v486; // [sp+8Ch] [bp-2C8h]
  unsigned int v487; // [sp+8Ch] [bp-2C8h]
  int v488; // [sp+90h] [bp-2C4h]
  int v489; // [sp+90h] [bp-2C4h]
  int v490; // [sp+90h] [bp-2C4h]
  int v491; // [sp+90h] [bp-2C4h]
  __int64 v492; // [sp+90h] [bp-2C4h]
  int v493; // [sp+90h] [bp-2C4h]
  unsigned int v494; // [sp+90h] [bp-2C4h]
  int v495; // [sp+94h] [bp-2C0h]
  int v496; // [sp+94h] [bp-2C0h]
  int v497; // [sp+94h] [bp-2C0h]
  unsigned int v498; // [sp+94h] [bp-2C0h]
  int v499; // [sp+98h] [bp-2BCh]
  _DWORD *v500; // [sp+98h] [bp-2BCh]
  int v501; // [sp+98h] [bp-2BCh]
  unsigned int v502; // [sp+98h] [bp-2BCh]
  _QWORD *v503; // [sp+98h] [bp-2BCh]
  int v504; // [sp+98h] [bp-2BCh]
  int v505; // [sp+98h] [bp-2BCh]
  int v506; // [sp+9Ch] [bp-2B8h]
  int v507; // [sp+9Ch] [bp-2B8h]
  int v508; // [sp+9Ch] [bp-2B8h]
  int v509; // [sp+9Ch] [bp-2B8h]
  _QWORD *v510; // [sp+9Ch] [bp-2B8h]
  _QWORD *v511; // [sp+9Ch] [bp-2B8h]
  int v512; // [sp+A0h] [bp-2B4h]
  unsigned int v513; // [sp+A0h] [bp-2B4h]
  int v514; // [sp+A0h] [bp-2B4h]
  unsigned int v515; // [sp+A0h] [bp-2B4h]
  int v516; // [sp+A0h] [bp-2B4h]
  unsigned int v517; // [sp+A0h] [bp-2B4h]
  int v518; // [sp+A4h] [bp-2B0h]
  unsigned int v519; // [sp+A4h] [bp-2B0h]
  unsigned int v520; // [sp+A4h] [bp-2B0h]
  unsigned int v521; // [sp+A4h] [bp-2B0h]
  int v522; // [sp+A8h] [bp-2ACh]
  _QWORD *v523; // [sp+A8h] [bp-2ACh]
  _QWORD *v524; // [sp+A8h] [bp-2ACh]
  int v525; // [sp+A8h] [bp-2ACh]
  int v526; // [sp+A8h] [bp-2ACh]
  unsigned int v527; // [sp+A8h] [bp-2ACh]
  unsigned int v528; // [sp+A8h] [bp-2ACh]
  int v529; // [sp+A8h] [bp-2ACh]
  int v530; // [sp+ACh] [bp-2A8h]
  unsigned int v531; // [sp+ACh] [bp-2A8h]
  _QWORD *v532; // [sp+ACh] [bp-2A8h]
  int v533; // [sp+ACh] [bp-2A8h]
  unsigned int v534; // [sp+ACh] [bp-2A8h]
  int v535; // [sp+B0h] [bp-2A4h]
  _QWORD *v536; // [sp+B0h] [bp-2A4h]
  int v537; // [sp+B0h] [bp-2A4h]
  unsigned int v538; // [sp+B0h] [bp-2A4h]
  unsigned int v539; // [sp+B0h] [bp-2A4h]
  _QWORD *v540; // [sp+B4h] [bp-2A0h]
  int v541; // [sp+B4h] [bp-2A0h]
  int v542; // [sp+B4h] [bp-2A0h]
  _QWORD *v543; // [sp+B4h] [bp-2A0h]
  _QWORD *v544; // [sp+B4h] [bp-2A0h]
  int v545; // [sp+B4h] [bp-2A0h]
  unsigned int v546; // [sp+B8h] [bp-29Ch]
  int v547; // [sp+B8h] [bp-29Ch]
  unsigned int v548; // [sp+B8h] [bp-29Ch]
  int v549; // [sp+B8h] [bp-29Ch]
  int v550; // [sp+B8h] [bp-29Ch]
  _QWORD *v551; // [sp+B8h] [bp-29Ch]
  _QWORD *v552; // [sp+B8h] [bp-29Ch]
  int v553; // [sp+B8h] [bp-29Ch]
  unsigned int v554; // [sp+BCh] [bp-298h]
  unsigned int v555; // [sp+BCh] [bp-298h]
  int v556; // [sp+BCh] [bp-298h]
  _QWORD *v557; // [sp+BCh] [bp-298h]
  _QWORD *v558; // [sp+BCh] [bp-298h]
  _QWORD *v559; // [sp+BCh] [bp-298h]
  _QWORD *v560; // [sp+BCh] [bp-298h]
  int v561; // [sp+BCh] [bp-298h]
  _QWORD *v562; // [sp+C0h] [bp-294h]
  int v563; // [sp+C0h] [bp-294h]
  int v564; // [sp+C0h] [bp-294h]
  int v565; // [sp+C0h] [bp-294h]
  _QWORD *v566; // [sp+C0h] [bp-294h]
  _QWORD *v567; // [sp+C0h] [bp-294h]
  _QWORD *v568; // [sp+C0h] [bp-294h]
  int v569; // [sp+C0h] [bp-294h]
  _QWORD *v570; // [sp+C0h] [bp-294h]
  int v571; // [sp+C4h] [bp-290h]
  int v572; // [sp+C4h] [bp-290h]
  unsigned int v573; // [sp+C4h] [bp-290h]
  unsigned int v574; // [sp+C4h] [bp-290h]
  _QWORD *v575; // [sp+C4h] [bp-290h]
  _QWORD *v576; // [sp+C4h] [bp-290h]
  _QWORD *v577; // [sp+C4h] [bp-290h]
  _QWORD *v578; // [sp+C4h] [bp-290h]
  _QWORD *v579; // [sp+C8h] [bp-28Ch]
  int v580; // [sp+C8h] [bp-28Ch]
  _QWORD *v581; // [sp+C8h] [bp-28Ch]
  int v582; // [sp+C8h] [bp-28Ch]
  _QWORD *v583; // [sp+C8h] [bp-28Ch]
  _QWORD *v584; // [sp+C8h] [bp-28Ch]
  _QWORD *v585; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v586; // [sp+CCh] [bp-288h]
  int v587; // [sp+CCh] [bp-288h]
  unsigned int v588; // [sp+CCh] [bp-288h]
  _QWORD *v589; // [sp+D0h] [bp-284h]
  _QWORD *v590; // [sp+D0h] [bp-284h]
  int v591; // [sp+D0h] [bp-284h]
  int v592; // [sp+D4h] [bp-280h]
  int v593; // [sp+D4h] [bp-280h]
  unsigned int v594; // [sp+D4h] [bp-280h]
  _QWORD *v595; // [sp+D4h] [bp-280h]
  int v596; // [sp+D4h] [bp-280h]
  _QWORD *v597; // [sp+D4h] [bp-280h]
  int v598; // [sp+D4h] [bp-280h]
  int v599; // [sp+D4h] [bp-280h]
  _QWORD *v600; // [sp+D4h] [bp-280h]
  _QWORD *v601; // [sp+D4h] [bp-280h]
  int v602; // [sp+D8h] [bp-27Ch]
  int v603; // [sp+D8h] [bp-27Ch]
  _QWORD *v604; // [sp+D8h] [bp-27Ch]
  _QWORD *v605; // [sp+D8h] [bp-27Ch]
  _DWORD *v606; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v608; // [sp+E0h] [bp-274h]
  _QWORD *v609; // [sp+E0h] [bp-274h]
  _QWORD *v610; // [sp+E0h] [bp-274h]
  unsigned int v611; // [sp+E0h] [bp-274h]
  _QWORD *v612; // [sp+E0h] [bp-274h]
  _QWORD *v613; // [sp+E0h] [bp-274h]
  int v614; // [sp+E0h] [bp-274h]
  unsigned int v615; // [sp+E0h] [bp-274h]
  _QWORD *v616; // [sp+E0h] [bp-274h]
  _QWORD *v617; // [sp+E0h] [bp-274h]
  _QWORD *v618; // [sp+E0h] [bp-274h]
  int v619; // [sp+E4h] [bp-270h]
  _QWORD *v620; // [sp+E4h] [bp-270h]
  _QWORD *v621; // [sp+E4h] [bp-270h]
  _QWORD *v622; // [sp+E4h] [bp-270h]
  _QWORD *v623; // [sp+E4h] [bp-270h]
  _QWORD *v624; // [sp+E4h] [bp-270h]
  _QWORD *v625; // [sp+E4h] [bp-270h]
  _QWORD *v626; // [sp+E4h] [bp-270h]
  _QWORD *v627; // [sp+E8h] [bp-26Ch]
  _QWORD *v628; // [sp+E8h] [bp-26Ch]
  _QWORD *v629; // [sp+E8h] [bp-26Ch]
  _QWORD *v630; // [sp+E8h] [bp-26Ch]
  _QWORD *v631; // [sp+E8h] [bp-26Ch]
  _QWORD *v632; // [sp+E8h] [bp-26Ch]
  int v633; // [sp+ECh] [bp-268h]
  _QWORD *v634; // [sp+ECh] [bp-268h]
  _QWORD *v635; // [sp+ECh] [bp-268h]
  _QWORD *v636; // [sp+ECh] [bp-268h]
  int v637; // [sp+ECh] [bp-268h]
  _QWORD *v638; // [sp+ECh] [bp-268h]
  _QWORD *v639; // [sp+ECh] [bp-268h]
  int v640; // [sp+F0h] [bp-264h]
  _QWORD *v641; // [sp+F0h] [bp-264h]
  _DWORD *v642; // [sp+F0h] [bp-264h]
  int v643; // [sp+F0h] [bp-264h]
  _QWORD *v644; // [sp+F0h] [bp-264h]
  _QWORD *v645; // [sp+F0h] [bp-264h]
  _DWORD *v646; // [sp+F0h] [bp-264h]
  _QWORD *v647; // [sp+F0h] [bp-264h]
  int v648; // [sp+F0h] [bp-264h]
  _QWORD *v649; // [sp+F0h] [bp-264h]
  int v650; // [sp+F4h] [bp-260h]
  _QWORD *v651; // [sp+F4h] [bp-260h]
  int *v652; // [sp+F4h] [bp-260h]
  _QWORD *v653; // [sp+F4h] [bp-260h]
  _DWORD *v654; // [sp+F4h] [bp-260h]
  int v655; // [sp+F4h] [bp-260h]
  _QWORD *v656; // [sp+F4h] [bp-260h]
  int v657; // [sp+F4h] [bp-260h]
  _DWORD *v658; // [sp+F4h] [bp-260h]
  _QWORD *v659; // [sp+F8h] [bp-25Ch]
  _QWORD *v660; // [sp+F8h] [bp-25Ch]
  int v661; // [sp+F8h] [bp-25Ch]
  int v662; // [sp+F8h] [bp-25Ch]
  _QWORD *v663; // [sp+F8h] [bp-25Ch]
  unsigned int v664; // [sp+FCh] [bp-258h]
  _QWORD *v665; // [sp+FCh] [bp-258h]
  _QWORD *v666; // [sp+FCh] [bp-258h]
  int v667; // [sp+FCh] [bp-258h]
  int v668; // [sp+FCh] [bp-258h]
  int v669; // [sp+100h] [bp-254h]
  _QWORD *v670; // [sp+100h] [bp-254h]
  _QWORD *v671; // [sp+100h] [bp-254h]
  int v672; // [sp+100h] [bp-254h]
  int v673; // [sp+100h] [bp-254h]
  int v674; // [sp+100h] [bp-254h]
  int v675; // [sp+104h] [bp-250h]
  _DWORD *v676; // [sp+104h] [bp-250h]
  int v677; // [sp+104h] [bp-250h]
  _QWORD *v678; // [sp+104h] [bp-250h]
  _QWORD *v679; // [sp+104h] [bp-250h]
  int v680; // [sp+104h] [bp-250h]
  int v681; // [sp+104h] [bp-250h]
  int v682; // [sp+104h] [bp-250h]
  _QWORD *v683; // [sp+104h] [bp-250h]
  int v684; // [sp+104h] [bp-250h]
  int v685; // [sp+108h] [bp-24Ch]
  _DWORD *v686; // [sp+108h] [bp-24Ch]
  _QWORD *v687; // [sp+108h] [bp-24Ch]
  int v688; // [sp+108h] [bp-24Ch]
  _QWORD *v689; // [sp+108h] [bp-24Ch]
  int v690; // [sp+10Ch] [bp-248h]
  _QWORD *v691; // [sp+10Ch] [bp-248h]
  _QWORD *v692; // [sp+10Ch] [bp-248h]
  _QWORD *v693; // [sp+10Ch] [bp-248h]
  unsigned int v694; // [sp+10Ch] [bp-248h]
  int v695; // [sp+10Ch] [bp-248h]
  int v696; // [sp+10Ch] [bp-248h]
  _QWORD *v697; // [sp+10Ch] [bp-248h]
  int v698; // [sp+110h] [bp-244h]
  _QWORD *v699; // [sp+110h] [bp-244h]
  int v700; // [sp+110h] [bp-244h]
  _QWORD *v701; // [sp+110h] [bp-244h]
  _QWORD *v702; // [sp+110h] [bp-244h]
  _QWORD *v703; // [sp+110h] [bp-244h]
  int v704; // [sp+114h] [bp-240h]
  int v705; // [sp+114h] [bp-240h]
  _QWORD *v706; // [sp+114h] [bp-240h]
  _QWORD *v707; // [sp+114h] [bp-240h]
  int v708; // [sp+114h] [bp-240h]
  int v709; // [sp+114h] [bp-240h]
  _QWORD *v710; // [sp+114h] [bp-240h]
  _QWORD *v711; // [sp+118h] [bp-23Ch]
  _QWORD *v712; // [sp+118h] [bp-23Ch]
  int v713; // [sp+118h] [bp-23Ch]
  int v714; // [sp+118h] [bp-23Ch]
  _QWORD *v715; // [sp+118h] [bp-23Ch]
  int v716; // [sp+118h] [bp-23Ch]
  int v717; // [sp+118h] [bp-23Ch]
  unsigned int v718; // [sp+11Ch] [bp-238h]
  _QWORD *v719; // [sp+11Ch] [bp-238h]
  _QWORD *v720; // [sp+11Ch] [bp-238h]
  int v721; // [sp+11Ch] [bp-238h]
  int v722; // [sp+11Ch] [bp-238h]
  int v723; // [sp+11Ch] [bp-238h]
  _QWORD *v724; // [sp+11Ch] [bp-238h]
  _QWORD *v725; // [sp+11Ch] [bp-238h]
  int v726; // [sp+120h] [bp-234h]
  _QWORD *v727; // [sp+120h] [bp-234h]
  _QWORD *v728; // [sp+120h] [bp-234h]
  _QWORD *v729; // [sp+120h] [bp-234h]
  int v730; // [sp+120h] [bp-234h]
  int v731; // [sp+120h] [bp-234h]
  _QWORD *v732; // [sp+120h] [bp-234h]
  int v733; // [sp+124h] [bp-230h]
  int v734; // [sp+124h] [bp-230h]
  _QWORD *v735; // [sp+124h] [bp-230h]
  int v736; // [sp+124h] [bp-230h]
  _QWORD *v737; // [sp+124h] [bp-230h]
  _QWORD *v738; // [sp+124h] [bp-230h]
  _QWORD *v739; // [sp+128h] [bp-22Ch]
  int v740; // [sp+128h] [bp-22Ch]
  _QWORD *v741; // [sp+128h] [bp-22Ch]
  int v742; // [sp+128h] [bp-22Ch]
  int v743; // [sp+128h] [bp-22Ch]
  int v744; // [sp+128h] [bp-22Ch]
  int v745; // [sp+12Ch] [bp-228h]
  _QWORD *v746; // [sp+12Ch] [bp-228h]
  int v747; // [sp+12Ch] [bp-228h]
  int v748; // [sp+12Ch] [bp-228h]
  int v749; // [sp+12Ch] [bp-228h]
  _QWORD *v750; // [sp+12Ch] [bp-228h]
  _QWORD *v751; // [sp+130h] [bp-224h]
  int v752; // [sp+130h] [bp-224h]
  int v753; // [sp+130h] [bp-224h]
  int v754; // [sp+130h] [bp-224h]
  int v755; // [sp+130h] [bp-224h]
  int v756; // [sp+130h] [bp-224h]
  _QWORD *v757; // [sp+134h] [bp-220h]
  int v758; // [sp+134h] [bp-220h]
  int v759; // [sp+134h] [bp-220h]
  int v760; // [sp+134h] [bp-220h]
  int v761; // [sp+138h] [bp-21Ch]
  int v762; // [sp+138h] [bp-21Ch]
  int v763; // [sp+13Ch] [bp-218h]
  _QWORD *v764; // [sp+13Ch] [bp-218h]
  int v765; // [sp+13Ch] [bp-218h]
  int v766; // [sp+13Ch] [bp-218h]
  _QWORD *v767; // [sp+13Ch] [bp-218h]
  int v768; // [sp+13Ch] [bp-218h]
  int v769; // [sp+13Ch] [bp-218h]
  int v770; // [sp+140h] [bp-214h]
  _QWORD *v771; // [sp+140h] [bp-214h]
  int v772; // [sp+140h] [bp-214h]
  int v773; // [sp+140h] [bp-214h]
  int v774; // [sp+144h] [bp-210h]
  _QWORD *v775; // [sp+144h] [bp-210h]
  int v776; // [sp+144h] [bp-210h]
  int v777; // [sp+144h] [bp-210h]
  unsigned int v778; // [sp+144h] [bp-210h]
  int v779; // [sp+148h] [bp-20Ch]
  _DWORD *v780; // [sp+148h] [bp-20Ch]
  int v781; // [sp+148h] [bp-20Ch]
  unsigned int v782; // [sp+14Ch] [bp-208h]
  int v783; // [sp+14Ch] [bp-208h]
  unsigned int v784; // [sp+14Ch] [bp-208h]
  unsigned int v785; // [sp+14Ch] [bp-208h]
  int v786; // [sp+150h] [bp-204h]
  _QWORD *v787; // [sp+150h] [bp-204h]
  _DWORD *v788; // [sp+150h] [bp-204h]
  unsigned int v789; // [sp+150h] [bp-204h]
  int v790; // [sp+150h] [bp-204h]
  int v791; // [sp+154h] [bp-200h]
  _QWORD *v792; // [sp+154h] [bp-200h]
  int v793; // [sp+154h] [bp-200h]
  int v794; // [sp+154h] [bp-200h]
  unsigned int v795; // [sp+158h] [bp-1FCh]
  _QWORD *v796; // [sp+158h] [bp-1FCh]
  _DWORD *v797; // [sp+158h] [bp-1FCh]
  unsigned int v798; // [sp+158h] [bp-1FCh]
  int v799; // [sp+158h] [bp-1FCh]
  int v800; // [sp+15Ch] [bp-1F8h]
  _QWORD *v801; // [sp+15Ch] [bp-1F8h]
  int v802; // [sp+15Ch] [bp-1F8h]
  int v803; // [sp+15Ch] [bp-1F8h]
  unsigned int v804; // [sp+15Ch] [bp-1F8h]
  int v805; // [sp+160h] [bp-1F4h]
  _QWORD *v806; // [sp+160h] [bp-1F4h]
  int v807; // [sp+160h] [bp-1F4h]
  int v808; // [sp+160h] [bp-1F4h]
  _QWORD *v809; // [sp+164h] [bp-1F0h]
  _DWORD *v810; // [sp+164h] [bp-1F0h]
  unsigned int v811; // [sp+164h] [bp-1F0h]
  unsigned int v812; // [sp+164h] [bp-1F0h]
  _QWORD *v813; // [sp+168h] [bp-1ECh]
  _DWORD *v814; // [sp+168h] [bp-1ECh]
  int v815; // [sp+16Ch] [bp-1E8h]
  int v816; // [sp+16Ch] [bp-1E8h]
  int v817; // [sp+16Ch] [bp-1E8h]
  _QWORD *v818; // [sp+16Ch] [bp-1E8h]
  unsigned int v819; // [sp+170h] [bp-1E4h]
  int v820; // [sp+170h] [bp-1E4h]
  int v821; // [sp+174h] [bp-1E0h]
  _QWORD *v822; // [sp+174h] [bp-1E0h]
  int v823; // [sp+178h] [bp-1DCh]
  _QWORD *v824; // [sp+178h] [bp-1DCh]
  int v825; // [sp+17Ch] [bp-1D8h]
  _DWORD *v826; // [sp+17Ch] [bp-1D8h]
  int v827; // [sp+180h] [bp-1D4h]
  int v828; // [sp+180h] [bp-1D4h]
  _QWORD *v829; // [sp+180h] [bp-1D4h]
  int v830; // [sp+184h] [bp-1D0h]
  int v831; // [sp+184h] [bp-1D0h]
  int v832; // [sp+188h] [bp-1CCh]
  int v833; // [sp+18Ch] [bp-1C8h]
  int v834; // [sp+18Ch] [bp-1C8h]
  int v835; // [sp+190h] [bp-1C4h]
  int v836; // [sp+194h] [bp-1C0h]
  unsigned int v837; // [sp+198h] [bp-1BCh]
  char *src; // [sp+1C0h] [bp-194h]
  int v840; // [sp+1C8h] [bp-18Ch] BYREF
  void *v841; // [sp+1CCh] [bp-188h]
  _BYTE dest[128]; // [sp+1D0h] [bp-184h] BYREF
  unsigned __int64 v843; // [sp+250h] [bp-104h]
  int v844; // [sp+258h] [bp-FCh] BYREF
  int v845; // [sp+25Ch] [bp-F8h]
  int v846; // [sp+260h] [bp-F4h]
  int v847; // [sp+264h] [bp-F0h]
  int v848; // [sp+268h] [bp-ECh]
  int v849; // [sp+26Ch] [bp-E8h]
  __int64 v850; // [sp+270h] [bp-E4h]
  int v851; // [sp+278h] [bp-DCh]
  int v852; // [sp+27Ch] [bp-D8h]
  int v853; // [sp+280h] [bp-D4h]
  int v854; // [sp+284h] [bp-D0h]
  int v855; // [sp+288h] [bp-CCh]
  int v856; // [sp+28Ch] [bp-C8h]
  int v857; // [sp+290h] [bp-C4h]
  int v858; // [sp+294h] [bp-C0h]
  int v859; // [sp+298h] [bp-BCh]
  int v860; // [sp+29Ch] [bp-B8h]
  int v861; // [sp+2A0h] [bp-B4h]
  int v862; // [sp+2A4h] [bp-B0h]
  int v863; // [sp+2A8h] [bp-ACh]
  int v864; // [sp+2ACh] [bp-A8h]
  int v865; // [sp+2B0h] [bp-A4h]
  int v866; // [sp+2B4h] [bp-A0h]
  int v867; // [sp+2B8h] [bp-9Ch]
  int v868; // [sp+2BCh] [bp-98h]
  int v869; // [sp+2C0h] [bp-94h]
  int v870; // [sp+2C4h] [bp-90h]
  int v871; // [sp+2C8h] [bp-8Ch] BYREF
  int v872; // [sp+2CCh] [bp-88h]
  int v873; // [sp+2D0h] [bp-84h]
  int v874; // [sp+2D4h] [bp-80h]
  int v875; // [sp+2D8h] [bp-7Ch] BYREF
  int v876; // [sp+2DCh] [bp-78h]
  int v877; // [sp+2E0h] [bp-74h]
  int v878; // [sp+2E4h] [bp-70h]
  int v879; // [sp+2E8h] [bp-6Ch]
  int v880; // [sp+2ECh] [bp-68h]
  int v881; // [sp+2F0h] [bp-64h]
  int v882; // [sp+2F4h] [bp-60h]
  int v883; // [sp+2F8h] [bp-5Ch]
  int v884; // [sp+2FCh] [bp-58h]
  int v885; // [sp+300h] [bp-54h]
  int v886; // [sp+304h] [bp-50h]
  int v887; // [sp+308h] [bp-4Ch]
  int v888; // [sp+30Ch] [bp-48h]
  int v889; // [sp+310h] [bp-44h]
  int v890; // [sp+314h] [bp-40h]
  int v891; // [sp+318h] [bp-3Ch]
  int v892; // [sp+31Ch] [bp-38h]
  __int64 v893; // [sp+320h] [bp-34h]
  int v894; // [sp+328h] [bp-2Ch]
  int v895; // [sp+32Ch] [bp-28h]
  int v896; // [sp+330h] [bp-24h]
  int v897; // [sp+334h] [bp-20h]
  int v898; // [sp+338h] [bp-1Ch]
  int v899; // [sp+33Ch] [bp-18h]
  int v900; // [sp+340h] [bp-14h]
  int v901; // [sp+344h] [bp-10h]
  int v902; // [sp+348h] [bp-Ch] BYREF
  int v903; // [sp+34Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v266 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v266;
  }
  else
  {
    v841 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v5 = 1561448;
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
          v840 = (int)&v840;
          v8 = &v840;
          v9 = a1 - 8;
          v10 = &v871;
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
          while ( &v902 != v10 );
          v269 = 0;
          v495 = v844;
          v467 = v845;
          v499 = v846;
          v506 = v847;
          v592 = v848;
          v602 = v849;
          v473 = v850;
          v488 = v851;
          v512 = v852;
          v438 = v853;
          v447 = v854;
          v299 = v855;
          v360 = v856;
          v454 = v857;
          v518 = v858;
          v16 = v869;
          v17 = v871;
          v267 = v5;
          v346 = v859;
          v535 = v872;
          v522 = v860;
          v278 = v861;
          v394 = v862;
          v352 = v863;
          v367 = v864;
          v373 = v865;
          v384 = v866;
          v410 = v867;
          v461 = v868;
          v530 = v870;
          v586 = v843;
          do
          {
            v288 = v586 ^ v269;
            v378 = v467 ^ ((unsigned __int64)(v269 + 16) >> 32);
            v307 = v602 ^ ((unsigned __int64)(v269 + 48) >> 32);
            v317 = v473 ^ (v269 + 64);
            v273 = ((unsigned __int64)(v269 + 80) >> 32) ^ v512;
            v18 = v438 ^ (v269 + 96);
            v19 = ((unsigned __int64)(v269 + 96) >> 32) ^ v447;
            v323 = v299 ^ (v269 + 112);
            v328 = v360 ^ ((unsigned __int64)(v269 + 112) >> 32);
            v337 = v454 ^ (v269 + 128);
            v421 = v518 ^ ((unsigned __int64)(v269 + 128) >> 32);
            v429 = v346 ^ (v269 + 144);
            v439 = v278 ^ (v269 + 160);
            v353 = v352 ^ (v269 + 176);
            v20 = v367 ^ ((unsigned __int64)(v269 + 176) >> 32);
            v21 = v373;
            v374 = (v269 + 240) ^ v17;
            v361 = v21 ^ (v269 + 192);
            v22 = v384 ^ ((unsigned __int64)(v269 + 192) >> 32);
            v368 = v410 ^ (v269 + 208);
            v23 = v461;
            v462 = (v269 + 224) ^ v16;
            v455 = v23 ^ ((unsigned __int64)(v269 + 208) >> 32);
            v24 = v530 ^ ((unsigned __int64)(v269 + 224) >> 32);
            v468 = v535 ^ ((unsigned __int64)(v269 + 240) >> 32);
            v300 = v495 ^ (v269 + 16);
            v385 = v499 ^ (v269 + 32);
            v279 = v522 ^ ((unsigned __int64)(v269 + 144) >> 32);
            v664 = v22;
            v531 = HIBYTE(v328);
            v347 = v394 ^ ((unsigned __int64)(v269 + 160) >> 32);
            v718 = v24;
            HIDWORD(v473) = HIBYTE(v24);
            v519 = HIBYTE(v19);
            v411 = v18;
            v554 = HIBYTE(v421);
            v395 = v592 ^ (v269 + 48);
            v795 = (unsigned int)(HIDWORD(v586) ^ HIDWORD(v269)) >> 24;
            v770 = v506 ^ ((unsigned __int64)(v269 + 32) >> 32);
            v513 = HIBYTE(v273);
            v619 = 8 * HIBYTE(v323) + 1569632;
            v633 = 8 * HIBYTE(v337) + 1569632;
            v25 = &dword_17DB68[2 * HIBYTE(v22)];
            v546 = 8 * ((v488 ^ (unsigned int)(v269 + 80)) >> 24) + 1569632;
            v587 = 8 * HIBYTE(v18) + 1569632;
            v745 = 8 * HIBYTE(v368) + 1569632;
            v761 = 8 * HIBYTE(v462) + 1569632;
            v675 = 8 * HIBYTE(v439) + 1569632;
            v779 = 8 * HIBYTE(v374) + 1569632;
            v704 = 8 * HIBYTE(v353) + 1569632;
            v733 = 8 * HIBYTE(v361) + 1569632;
            v782 = 8 * BYTE3(v288) + 1569632;
            v26 = &qword_17E370[BYTE1(v300)];
            v27 = &qword_17EB70[BYTE2(v385)];
            v28 = &qword_17FB70[BYTE4(v317)];
            v593 = *v25;
            v608 = v25[1];
            v29 = &qword_17FB70[(unsigned __int8)v273];
            v562 = &qword_17FB70[(unsigned __int8)(((unsigned __int64)(v269 + 96) >> 32) ^ v447)];
            v30 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v288 + 4)
                ^ ((unsigned __int64)(v269 + 1) >> 32)
                ^ dword_17DB68[2 * HIBYTE(v20) + 1]
                ^ *((_DWORD *)v26 - 1)
                ^ *((_DWORD *)v27 - 1);
            v31 = 8 * HIBYTE(v395) + 1569632;
            v32 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v288)
                ^ (v269 + 1)
                ^ dword_17DB68[2 * HIBYTE(v20)]
                ^ *((_DWORD *)v26 - 2);
            v603 = BYTE2(v273);
            v33 = &qword_17E370[BYTE1(v385)];
            v523 = &qword_17EB70[BYTE2(v395)];
            v34 = (unsigned __int8)(v499 ^ (v269 + 32));
            v815 = 8 * HIBYTE(v385) + 1569632;
            v685 = BYTE1(v328);
            v589 = &qword_17FB70[(unsigned __int8)v328];
            v386 = BYTE2(v421);
            v35 = (unsigned __int8)v421;
            v422 = BYTE1(v421);
            v627 = &qword_17FB70[v35];
            v36 = v30 ^ HIDWORD(qword_17F368[HIBYTE(v395)]) ^ *((_DWORD *)v28 - 1);
            v698 = (unsigned __int8)v395;
            v396 = &qword_17E370[BYTE1(v395)];
            v37 = &dword_180B68[2 * BYTE2(v19)];
            v38 = v32
                ^ *((_DWORD *)v27 - 2)
                ^ *(_DWORD *)(v31 + 8)
                ^ *((_DWORD *)v28 - 2)
                ^ dword_180368[2 * BYTE1(v273)]
                ^ *v37;
            v669 = dword_180B68[2 * BYTE2(v328) + 1];
            v640 = dword_180368[2 * BYTE1(v19)];
            v39 = dword_180368[2 * BYTE1(v273) + 1];
            v274 = v38;
            v650 = dword_180B68[2 * BYTE2(v328)];
            v329 = v36 ^ v39 ^ v37[1];
            v536 = &qword_17EB70[BYTE2(v317)];
            v40 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v300) ^ v593 ^ (v269 + 17) ^ *((_DWORD *)v33 - 2);
            v41 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v300 + 4)
                ^ v608
                ^ ((unsigned __int64)(v269 + 17) >> 32)
                ^ *((_DWORD *)v33 - 1);
            v774 = (unsigned __int8)v317;
            v579 = &qword_17E370[BYTE1(v317)];
            v42 = *((_DWORD *)v523 - 1);
            v43 = v40 ^ *((_DWORD *)v523 - 2);
            v403 = &qword_17EB70[(unsigned __int8)((v488 ^ (unsigned int)(v269 + 80)) >> 16)];
            v800 = (unsigned __int8)(v488 ^ (v269 + 80));
            v524 = &qword_17E370[(unsigned __int8)((unsigned __int16)(v488 ^ (v269 + 80)) >> 8)];
            v786 = BYTE1(v279);
            v609 = &qword_17EB70[BYTE2(v411)];
            v791 = BYTE2(v347);
            v44 = dword_180368[2 * BYTE1(v19) + 1]
                ^ *((_DWORD *)v29 - 1)
                ^ HIDWORD(qword_17F368[((unsigned int)v473 ^ ((_DWORD)v269 + 64)) >> 24])
                ^ v41
                ^ v42;
            v690 = dword_180B68[2 * v386 + 1];
            v571 = dword_180B68[2 * v386];
            v45 = *((_DWORD *)v562 - 2);
            v46 = *((_DWORD *)v562 - 1);
            v563 = *((_DWORD *)v589 - 2);
            LODWORD(v317) = v44 ^ v669;
            v726 = *((_DWORD *)v589 - 1);
            v819 = *((_DWORD *)v29 - 2)
                 ^ LODWORD(qword_17F368[((unsigned int)v473 ^ ((_DWORD)v269 + 64)) >> 24])
                 ^ v43
                 ^ v640
                 ^ v650;
            v763 = dword_180B68[2 * BYTE2(v279) + 1];
            v489 = dword_180B68[2 * BYTE2(v279)];
            v47 = *(_DWORD *)(v587 + 8);
            LODWORD(v473) = *(_DWORD *)(v587 + 12);
            v821 = (unsigned __int8)v411;
            v48 = &qword_17E370[BYTE1(v411)];
            v540 = &qword_17EB70[BYTE2(v323)];
            v590 = &qword_17FB70[(unsigned __int8)v279];
            v588 = HIBYTE(v279);
            v805 = BYTE1(v347);
            v830 = (unsigned __int8)v323;
            v641 = &qword_17E370[BYTE1(v323)];
            v651 = &qword_17EB70[BYTE2(v337)];
            v49 = &qword_17FB70[(unsigned __int8)v347];
            v594 = HIBYTE(v347);
            LOWORD(v23) = v664;
            v827 = BYTE2(v664);
            v387 = (unsigned __int8)v337;
            v665 = &qword_17E370[BYTE1(v337)];
            v324 = dword_17DB68[2 * HIBYTE(v455) + 1]
                 ^ *(_DWORD *)(v267 + 8 * v34 + 4)
                 ^ ((unsigned __int64)(v269 + 33) >> 32)
                 ^ *((_DWORD *)v396 - 1)
                 ^ *((_DWORD *)v536 - 1)
                 ^ *(_DWORD *)(v546 + 12)
                 ^ v46
                 ^ dword_180368[2 * v685 + 1]
                 ^ v690;
            v833 = BYTE2(v455);
            v711 = &qword_17FB70[(unsigned __int8)v23];
            v691 = &qword_17E370[BYTE1(v429)];
            v280 = *(_DWORD *)(v267 + 8 * v34)
                 ^ dword_17DB68[2 * HIBYTE(v455)]
                 ^ (v269 + 33)
                 ^ *((_DWORD *)v396 - 2)
                 ^ *((_DWORD *)v536 - 2)
                 ^ *(_DWORD *)(v546 + 8)
                 ^ v45
                 ^ dword_180368[2 * v685]
                 ^ v571;
            v50 = dword_17DB68[2 * HIDWORD(v473)]
                ^ *(_DWORD *)(v267 + 8 * v698)
                ^ (v269 + 49)
                ^ *((_DWORD *)v579 - 2)
                ^ *((_DWORD *)v403 - 2)
                ^ v47;
            v51 = dword_17DB68[2 * HIDWORD(v473) + 1]
                ^ *(_DWORD *)(v267 + 8 * v698 + 4)
                ^ ((unsigned __int64)(v269 + 49) >> 32)
                ^ *((_DWORD *)v579 - 1)
                ^ *((_DWORD *)v403 - 1)
                ^ v473;
            v404 = BYTE1(v455);
            v699 = &qword_17EB70[BYTE2(v439)];
            LOWORD(v34) = v718;
            v739 = &qword_17FB70[(unsigned __int8)v455];
            v412 = BYTE2(v718);
            v338 = v50 ^ v563 ^ dword_180368[2 * v422] ^ v489;
            v348 = v51 ^ v726 ^ dword_180368[2 * v422 + 1] ^ v763;
            v456 = (unsigned __int8)v439;
            v719 = &qword_17E370[BYTE1(v439)];
            v727 = &qword_17EB70[BYTE2(v353)];
            v751 = &qword_17FB70[(unsigned __int8)v34];
            v52 = *((_DWORD *)v609 - 1);
            v440 = BYTE2(v468);
            v53 = *(_DWORD *)(v267 + 8 * v774)
                ^ dword_17DB68[2 * HIBYTE(v468)]
                ^ (v269 + 65)
                ^ *((_DWORD *)v524 - 2)
                ^ *((_DWORD *)v609 - 2);
            v448 = BYTE6(v288);
            v490 = (unsigned __int8)v353;
            v610 = &qword_17E370[BYTE1(v353)];
            v54 = *(_DWORD *)(v619 + 12);
            v55 = *(_DWORD *)(v619 + 8);
            v620 = &qword_17EB70[BYTE2(v361)];
            v474 = BYTE1(v468);
            v764 = &qword_17FB70[(unsigned __int8)v468];
            v56 = *((_DWORD *)v627 - 1)
                ^ *((_DWORD *)v524 - 1)
                ^ dword_17DB68[2 * HIBYTE(v468) + 1]
                ^ *(_DWORD *)(v267 + 8 * v774 + 4)
                ^ ((unsigned __int64)(v269 + 65) >> 32)
                ^ v52
                ^ v54
                ^ dword_180368[2 * v786 + 1];
            v481 = BYTE5(v288);
            v397 = &qword_17FB70[BYTE4(v288)];
            v469 = *((_DWORD *)v627 - 2) ^ v53 ^ v55 ^ dword_180368[2 * v786] ^ dword_180B68[2 * v791];
            v525 = (unsigned __int8)(v21 ^ (v269 - 64));
            v628 = &qword_17E370[BYTE1(v361)];
            v757 = &qword_17EB70[BYTE2(v368)];
            v496 = BYTE2(v378);
            HIDWORD(v288) = v56 ^ dword_180B68[2 * v791 + 1];
            v57 = dword_17DB68[2 * v795 + 1] ^ ((unsigned __int64)(v269 + 81) >> 32);
            v537 = BYTE1(v378);
            v58 = dword_17DB68[2 * v795] ^ (v269 + 81) ^ *(_DWORD *)(v267 + 8 * v800) ^ *((_DWORD *)v48 - 2);
            v796 = &qword_17FB70[(unsigned __int8)v378];
            v59 = *((_DWORD *)v540 - 1);
            v60 = *((_DWORD *)v540 - 2);
            v541 = BYTE2(v770);
            v564 = BYTE1(v770);
            v809 = &qword_17FB70[(unsigned __int8)(v506 ^ ((unsigned __int64)(v269 + 32) >> 32))];
            v572 = BYTE2(v307);
            v771 = &qword_17E370[BYTE1(v368)];
            v547 = (unsigned __int8)v368;
            v775 = &qword_17EB70[BYTE2(v462)];
            v580 = (unsigned __int8)v462;
            v61 = dword_180368[2 * v805 + 1]
                ^ v57
                ^ *(_DWORD *)(v267 + 8 * v800 + 4)
                ^ *((_DWORD *)v48 - 1)
                ^ v59
                ^ *(_DWORD *)(v633 + 12)
                ^ *((_DWORD *)v590 - 1);
            v787 = &qword_17E370[BYTE1(v462)];
            v792 = &qword_17EB70[BYTE2(v374)];
            v801 = &qword_17EB70[BYTE2(v288)];
            v813 = &qword_17E370[BYTE1(v288)];
            v354 = v61 ^ dword_180B68[2 * BYTE2(v20) + 1];
            LODWORD(v288) = v58
                          ^ v60
                          ^ *(_DWORD *)(v633 + 8)
                          ^ *((_DWORD *)v590 - 2)
                          ^ dword_180368[2 * v805]
                          ^ dword_180B68[2 * BYTE2(v20)];
            v591 = (unsigned __int8)v374;
            v806 = &qword_17E370[BYTE1(v374)];
            v62 = *(v49 - 1);
            v463 = *(_DWORD *)(v267 + 8 * v821 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v378) + 1]
                 ^ ((unsigned __int64)(v269 + 97) >> 32)
                 ^ *((_DWORD *)v641 - 1)
                 ^ *((_DWORD *)v651 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v429)])
                 ^ HIDWORD(v62)
                 ^ dword_180368[2 * BYTE1(v20) + 1]
                 ^ dword_180B68[2 * v827 + 1];
            v362 = *(_DWORD *)(v267 + 8 * v821)
                 ^ dword_17DB68[2 * HIBYTE(v378)]
                 ^ (v269 + 97)
                 ^ *((_DWORD *)v641 - 2)
                 ^ *((_DWORD *)v651 - 2)
                 ^ LODWORD(qword_17F368[HIBYTE(v429)])
                 ^ v62
                 ^ dword_180368[2 * BYTE1(v20)]
                 ^ dword_180B68[2 * v827];
            v63 = *(_DWORD *)(v267 + 8 * v387) ^ dword_17DB68[2 * HIBYTE(v307)];
            v369 = *(_QWORD *)(v267 + 8 * v830)
                 ^ *(_QWORD *)&dword_17DB68[2 * ((v506 ^ ((unsigned __int64)(v269 + 32) >> 32)) >> 24)]
                 ^ (v269 + 113)
                 ^ *(v665 - 1)
                 ^ qword_17EB70[BYTE2(v429) - 1]
                 ^ *(_QWORD *)(v675 + 8)
                 ^ qword_17FB70[(unsigned __int8)v20 - 1]
                 ^ *(_QWORD *)&dword_180368[2 * BYTE1(v23)]
                 ^ *(_QWORD *)&dword_180B68[2 * v833];
            v828 = dword_180B68[2 * v440 + 1];
            v825 = dword_180B68[2 * v440];
            v500 = &dword_180B68[2 * BYTE2(v378)];
            v642 = &dword_180368[2 * BYTE1(v378)];
            v676 = &dword_180B68[2 * BYTE2(v307)];
            v388 = dword_180B68[2 * v412 + 1]
                 ^ *((_DWORD *)v699 - 1)
                 ^ *((_DWORD *)v691 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v387 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v307) + 1]
                 ^ (__CFADD__((_DWORD)v269, 129) + HIDWORD(v269))
                 ^ *(_DWORD *)(v704 + 12)
                 ^ *((_DWORD *)v711 - 1)
                 ^ dword_180368[2 * v404 + 1];
            v379 = v63
                 ^ (v269 + 129)
                 ^ *((_DWORD *)v691 - 2)
                 ^ *((_DWORD *)v699 - 2)
                 ^ *(_DWORD *)(v704 + 8)
                 ^ *((_DWORD *)v711 - 2)
                 ^ dword_180368[2 * v404]
                 ^ dword_180B68[2 * v412];
            v64 = dword_17DB68[2 * v513 + 1];
            v705 = dword_180368[2 * v474 + 1];
            v700 = *((_DWORD *)v727 - 1)
                 ^ dword_17DB68[2 * HIBYTE(HIDWORD(v317)) + 1]
                 ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v429 + 4)
                 ^ ((unsigned __int64)(v269 + 145) >> 32)
                 ^ *((_DWORD *)v719 - 1)
                 ^ *(_DWORD *)(v733 + 12)
                 ^ *((_DWORD *)v739 - 1);
            HIDWORD(v62) = dword_17DB68[2 * v513];
            v514 = dword_180368[2 * v474];
            v65 = *(_DWORD *)(v267 + 8 * v456 + 4)
                ^ dword_180B68[2 * v448 + 1]
                ^ ((unsigned __int64)(v269 + 161) >> 32)
                ^ v64;
            v475 = dword_17DB68[2 * HIBYTE(HIDWORD(v317))]
                 ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v429)
                 ^ (v269 + 145)
                 ^ *((_DWORD *)v719 - 2)
                 ^ *((_DWORD *)v727 - 2)
                 ^ *(_DWORD *)(v733 + 8)
                 ^ *((_DWORD *)v739 - 2)
                 ^ dword_180368[2 * BYTE1(v34)];
            v430 = &qword_17EB70[BYTE2(v300)];
            v413 = 8 * HIBYTE(v300) + 1569632;
            v301 = BYTE1(v307);
            v441 = &qword_17FB70[(unsigned __int8)v307];
            v308 = BYTE6(v317);
            v734 = BYTE5(v317);
            v66 = *(_DWORD *)(v413 + 8);
            v67 = dword_180368[2 * v301];
            v68 = *(_DWORD *)(v267 + 8 * v580 + 4)
                ^ *((_DWORD *)v801 - 1)
                ^ ((unsigned __int64)(v269 + 225) >> 32)
                ^ dword_17DB68[2 * v588 + 1]
                ^ *((_DWORD *)v806 - 1)
                ^ *(_DWORD *)(v413 + 12)
                ^ *((_DWORD *)v809 - 1)
                ^ dword_180368[2 * v301 + 1]
                ^ dword_180B68[2 * BYTE6(v317) + 1];
            LODWORD(v62) = *(_DWORD *)(v267 + 8 * v591 + 4)
                         ^ *((_DWORD *)v813 - 1)
                         ^ ((unsigned __int64)(v269 + 241) >> 32)
                         ^ dword_17DB68[2 * v594 + 1]
                         ^ *((_DWORD *)v430 - 1)
                         ^ *(_DWORD *)(v815 + 12)
                         ^ *((_DWORD *)v441 - 1)
                         ^ dword_180368[2 * BYTE5(v317) + 1];
            v302 = v475 ^ v825;
            HIDWORD(v317) = dword_180B68[2 * v448]
                          ^ *(_DWORD *)(v267 + 8 * v456)
                          ^ (v269 + 161)
                          ^ HIDWORD(v62)
                          ^ *((_DWORD *)v610 - 2)
                          ^ *((_DWORD *)v620 - 2)
                          ^ *(_DWORD *)(v745 + 8)
                          ^ *((_DWORD *)v751 - 2)
                          ^ v514;
            v414 = *(_DWORD *)(v267 + 8 * v490 + 4)
                 ^ dword_180368[2 * v481 + 1]
                 ^ ((unsigned __int64)(v269 + 177) >> 32)
                 ^ dword_17DB68[2 * v519 + 1]
                 ^ *((_DWORD *)v628 - 1)
                 ^ *((_DWORD *)v757 - 1)
                 ^ *(_DWORD *)(v761 + 12)
                 ^ *((_DWORD *)v764 - 1)
                 ^ v500[1];
            v405 = dword_180368[2 * v481]
                 ^ *(_DWORD *)(v267 + 8 * v490)
                 ^ (v269 + 177)
                 ^ dword_17DB68[2 * v519]
                 ^ *((_DWORD *)v628 - 2)
                 ^ *((_DWORD *)v757 - 2)
                 ^ *(_DWORD *)(v761 + 8)
                 ^ *((_DWORD *)v764 - 2)
                 ^ dword_180B68[2 * v496];
            v457 = *((_DWORD *)v813 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v591)
                 ^ (v269 + 241)
                 ^ dword_17DB68[2 * v594]
                 ^ *((_DWORD *)v430 - 2)
                 ^ *(_DWORD *)(v815 + 8)
                 ^ *((_DWORD *)v441 - 2)
                 ^ dword_180368[2 * v734]
                 ^ dword_180B68[2 * v603];
            v431 = *(_DWORD *)(v267 + 8 * v525 + 4)
                 ^ *((_DWORD *)v397 - 1)
                 ^ (__CFADD__((_DWORD)v269, 193) + HIDWORD(v269))
                 ^ dword_17DB68[2 * v531 + 1]
                 ^ *((_DWORD *)v771 - 1)
                 ^ *((_DWORD *)v775 - 1)
                 ^ *(_DWORD *)(v779 + 12)
                 ^ v642[1]
                 ^ dword_180B68[2 * v541 + 1];
            LODWORD(v62) = v62 ^ dword_180B68[2 * v603 + 1];
            v449 = *((_DWORD *)v801 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v580)
                 ^ (v269 + 225)
                 ^ dword_17DB68[2 * v588]
                 ^ *((_DWORD *)v806 - 2)
                 ^ v66
                 ^ *((_DWORD *)v809 - 2)
                 ^ v67
                 ^ dword_180B68[2 * v308];
            v423 = dword_17DB68[2 * v531]
                 ^ *((_DWORD *)v397 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v525)
                 ^ (v269 + 193)
                 ^ *((_DWORD *)v771 - 2)
                 ^ *((_DWORD *)v775 - 2)
                 ^ *(_DWORD *)(v779 + 8)
                 ^ dword_180368[2 * v537]
                 ^ dword_180B68[2 * v541];
            v309 = v700 ^ dword_180368[2 * BYTE1(v34) + 1] ^ v828;
            v442 = *(_DWORD *)(v267 + 8 * v547)
                 ^ *(_DWORD *)(v782 + 8)
                 ^ (v269 + 209)
                 ^ dword_17DB68[2 * v554]
                 ^ *((_DWORD *)v787 - 2)
                 ^ *((_DWORD *)v792 - 2)
                 ^ *((_DWORD *)v796 - 2)
                 ^ dword_180368[2 * v564]
                 ^ dword_180B68[2 * v572];
            v398 = v65
                 ^ *((_DWORD *)v610 - 1)
                 ^ *((_DWORD *)v620 - 1)
                 ^ *(_DWORD *)(v745 + 12)
                 ^ *((_DWORD *)v751 - 1)
                 ^ v705;
            v476 = *(_DWORD *)(v782 + 12)
                 ^ *(_DWORD *)(v267 + 8 * v547 + 4)
                 ^ ((unsigned __int64)(v269 + 209) >> 32)
                 ^ dword_17DB68[2 * v554 + 1]
                 ^ *((_DWORD *)v787 - 1)
                 ^ *((_DWORD *)v792 - 1)
                 ^ *((_DWORD *)v796 - 1)
                 ^ dword_180368[2 * v564 + 1]
                 ^ v676[1];
            v555 = HIBYTE(v463);
            v573 = HIBYTE(v388);
            v515 = BYTE3(v62);
            v491 = v62;
            v565 = HIBYTE(HIDWORD(v369));
            v482 = v68;
            v548 = HIBYTE(v354);
            v611 = 8 * BYTE3(v288) + 1569632;
            v652 = &dword_17DB68[2 * HIBYTE(v68)];
            v686 = &dword_17DB68[2 * BYTE3(v62)];
            v783 = 8 * HIBYTE(v442) + 1569632;
            v793 = 8 * HIBYTE(v449) + 1569632;
            v69 = v819;
            v802 = 8 * HIBYTE(v457) + 1569632;
            v837 = HIBYTE(v398);
            v740 = 8 * HIBYTE(v302) + 1569632;
            v752 = 8 * HIBYTE(HIDWORD(v317)) + 1569632;
            v762 = 8 * HIBYTE(v405) + 1569632;
            v776 = 8 * HIBYTE(v423) + 1569632;
            v797 = &dword_17DB68[2 * HIBYTE(HIDWORD(v369))];
            v780 = &dword_17DB68[2 * HIBYTE(v354)];
            v788 = &dword_17DB68[2 * HIBYTE(v463)];
            v70 = BYTE1(v819);
            v810 = &dword_17DB68[2 * HIBYTE(v388)];
            v814 = &dword_17DB68[2 * HIBYTE(v309)];
            v826 = &dword_17DB68[2 * HIBYTE(v398)];
            v820 = 8 * HIBYTE(v819) + 1569632;
            v831 = 8 * HIBYTE(v280) + 1569632;
            v71 = &qword_17FB70[BYTE4(v288)];
            v72 = &qword_17E370[v70];
            v73 = BYTE2(v463);
            v74 = &qword_17EB70[BYTE2(v280)];
            v75 = BYTE1(v463);
            v634 = &qword_17FB70[(unsigned __int8)v463];
            v643 = *((_DWORD *)v71 - 2);
            v677 = *((_DWORD *)v71 - 1);
            v269 += 2;
            v829 = &qword_17EB70[BYTE2(v69)];
            v464 = BYTE2(v354);
            v76 = BYTE6(v369);
            v77 = &qword_17FB70[(unsigned __int8)v354];
            v78 = &qword_17E370[BYTE1(v280)];
            v79 = &qword_17EB70[BYTE2(v338)];
            v595 = &qword_17E370[BYTE1(v338)];
            v765 = dword_180368[2 * v75];
            LODWORD(v62) = dword_180368[2 * BYTE1(v354) + 1]
                         ^ dword_17DB68[2 * HIBYTE(v414) + 1]
                         ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v274 + 4)
                         ^ *((_DWORD *)v72 - 1)
                         ^ *((_DWORD *)v74 - 1);
            v816 = dword_180368[2 * v75 + 1];
            HIDWORD(v62) = dword_180368[2 * BYTE1(v354)]
                         ^ dword_17DB68[2 * HIBYTE(v414)]
                         ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v274)
                         ^ *((_DWORD *)v72 - 2)
                         ^ *((_DWORD *)v74 - 2);
            v80 = BYTE4(v369);
            v629 = &qword_17EB70[BYTE2(v469)];
            v81 = BYTE5(v369);
            HIDWORD(v369) = (unsigned __int8)v469;
            v670 = &qword_17FB70[v80];
            v82 = BYTE2(v388);
            v659 = &qword_17E370[BYTE1(v469)];
            LODWORD(v586) = HIDWORD(v62) ^ LODWORD(qword_17F368[HIBYTE(v338)]) ^ v643 ^ dword_180B68[2 * v73];
            LODWORD(v62) = v62 ^ HIDWORD(qword_17F368[HIBYTE(v338)]) ^ v677;
            LOWORD(v80) = v388;
            HIDWORD(v62) = *((_DWORD *)v78 - 2);
            v389 = (unsigned __int8)v288;
            v644 = &qword_17EB70[BYTE2(v288)];
            v678 = &qword_17E370[BYTE1(v288)];
            v83 = *((_DWORD *)v77 - 1)
                ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v69 + 4)
                ^ dword_17DB68[2 * HIBYTE(v431) + 1]
                ^ *((_DWORD *)v78 - 1);
            HIDWORD(v62) ^= *(_DWORD *)(v267 + 8 * (unsigned __int8)v69)
                          ^ *((_DWORD *)v77 - 2)
                          ^ dword_17DB68[2 * HIBYTE(v431)]
                          ^ *((_DWORD *)v79 - 2);
            v706 = &qword_17FB70[(unsigned __int8)v80];
            v692 = &qword_17EB70[BYTE2(v362)];
            v84 = BYTE2(v309);
            HIDWORD(v586) = v62 ^ dword_180B68[2 * v73 + 1];
            LODWORD(v288) = BYTE1(v309);
            v728 = &qword_17FB70[(unsigned __int8)v309];
            v310 = BYTE2(v398);
            v495 = HIDWORD(v62) ^ LODWORD(qword_17F368[HIBYTE(v469)]) ^ v765 ^ dword_180B68[2 * v76];
            v467 = v83 ^ *((_DWORD *)v79 - 1) ^ HIDWORD(qword_17F368[HIBYTE(v469)]) ^ v816 ^ dword_180B68[2 * v76 + 1];
            v766 = *((_DWORD *)v634 - 1);
            v85 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v280)
                ^ *(_DWORD *)(v611 + 8)
                ^ dword_17DB68[2 * HIBYTE(v476)]
                ^ *((_DWORD *)v595 - 2);
            HIDWORD(v62) = *(_DWORD *)(v267 + 8 * (unsigned __int8)v280 + 4)
                         ^ *(_DWORD *)(v611 + 12)
                         ^ dword_17DB68[2 * HIBYTE(v476) + 1]
                         ^ *((_DWORD *)v595 - 1);
            v596 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v338);
            v86 = *v652;
            v87 = *((_DWORD *)v629 - 2) ^ v85 ^ *((_DWORD *)v634 - 2) ^ dword_180368[2 * v81] ^ dword_180B68[2 * v82];
            v823 = (unsigned __int8)v362;
            v612 = &qword_17E370[BYTE1(v362)];
            v621 = &qword_17EB70[BYTE2(v369)];
            v281 = BYTE1(v398);
            v635 = &qword_17FB70[(unsigned __int8)v398];
            v832 = (unsigned __int8)v369;
            v399 = &qword_17E370[BYTE1(v369)];
            v506 = HIDWORD(v62) ^ *((_DWORD *)v629 - 1) ^ v766 ^ dword_180368[2 * v81 + 1] ^ dword_180B68[2 * v82 + 1];
            v88 = qword_17F368[HIBYTE(v362)];
            v630 = &qword_17EB70[BYTE2(v379)];
            v499 = v87;
            v89 = HIDWORD(qword_17F368[HIBYTE(v362)]);
            v90 = *((_DWORD *)v670 - 1);
            v91 = *((_DWORD *)v659 - 1);
            v92 = *((_DWORD *)v659 - 2);
            HIDWORD(v62) = *((_DWORD *)v644 - 2);
            v93 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v338 + 4) ^ *((_DWORD *)v644 - 1) ^ v652[1];
            v339 = BYTE1(v414);
            v363 = (unsigned __int8)v379;
            v660 = &qword_17FB70[(unsigned __int8)v414];
            v355 = BYTE2(v431);
            v645 = &qword_17E370[BYTE1(v379)];
            v653 = &qword_17EB70[BYTE2(v302)];
            v834 = BYTE1(v431);
            v767 = &qword_17FB70[(unsigned __int8)v431];
            v835 = BYTE2(v476);
            v836 = (unsigned __int8)v302;
            v666 = &qword_17E370[BYTE1(v302)];
            v592 = HIDWORD(v62)
                 ^ v596
                 ^ v86
                 ^ v92
                 ^ v88
                 ^ *((_DWORD *)v670 - 2)
                 ^ dword_180368[2 * BYTE1(v80)]
                 ^ dword_180B68[2 * v84];
            v671 = &qword_17EB70[BYTE6(v317)];
            v602 = v93 ^ v91 ^ v89 ^ v90 ^ dword_180368[2 * BYTE1(v80) + 1] ^ dword_180B68[2 * v84 + 1];
            v94 = dword_180368[2 * (_DWORD)v288];
            v95 = dword_180B68[2 * v310 + 1];
            HIDWORD(v62) = *((_DWORD *)v678 - 2)
                         ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369))
                         ^ dword_17DB68[2 * v515]
                         ^ *((_DWORD *)v692 - 2);
            v96 = dword_180B68[2 * v310];
            v97 = dword_180368[2 * (_DWORD)v288 + 1]
                ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369) + 4)
                ^ *((_DWORD *)v678 - 1)
                ^ v686[1]
                ^ *((_DWORD *)v692 - 1)
                ^ HIDWORD(qword_17F368[BYTE3(v369)])
                ^ *((_DWORD *)v706 - 1);
            v432 = dword_180368[2 * v281 + 1];
            v98 = BYTE2(v414);
            v415 = dword_180368[2 * v281];
            LODWORD(v288) = BYTE1(v476);
            v693 = &qword_17FB70[(unsigned __int8)v476];
            v303 = BYTE2(v482);
            HIDWORD(v369) = BYTE4(v317);
            v679 = &qword_17E370[BYTE5(v317)];
            v687 = &qword_17EB70[BYTE2(v405)];
            v311 = BYTE1(v482);
            v701 = &qword_17FB70[(unsigned __int8)v482];
            HIDWORD(v317) = BYTE2(v491);
            LODWORD(v473) = HIDWORD(v62) ^ LODWORD(qword_17F368[BYTE3(v369)]) ^ *((_DWORD *)v706 - 2) ^ v94 ^ v96;
            LODWORD(v369) = BYTE2(v329);
            HIDWORD(v473) = v97 ^ v95;
            v99 = *(_QWORD *)(v267 + 8 * v389)
                ^ *(_QWORD *)&dword_17DB68[2 * HIBYTE(v329)]
                ^ *(v612 - 1)
                ^ *(v621 - 1)
                ^ qword_17F368[HIBYTE(v379)]
                ^ *(v728 - 1);
            v100 = dword_17DB68[2 * BYTE3(v317)] ^ *(_DWORD *)(v267 + 8 * v823);
            HIDWORD(v62) = dword_180368[2 * v339];
            v817 = dword_180B68[2 * v355 + 1];
            v101 = dword_180B68[2 * v355];
            v356 = (unsigned __int8)v405;
            v613 = &qword_17E370[BYTE1(v405)];
            v526 = v101;
            v102 = dword_180368[2 * v339 + 1];
            v532 = &qword_17EB70[BYTE2(v423)];
            v340 = BYTE1(v491);
            v712 = &qword_17FB70[(unsigned __int8)v491];
            v103 = &qword_17FB70[(unsigned __int8)v329];
            v330 = BYTE1(v329);
            v282 = v103;
            v390 = (unsigned __int8)v423;
            v622 = &qword_17E370[BYTE1(v423)];
            v380 = BYTE2(v317);
            v707 = &qword_17EB70[BYTE2(v442)];
            v512 = dword_180B68[2 * v98 + 1] ^ HIDWORD(v99) ^ v432;
            v488 = v99 ^ v415 ^ dword_180B68[2 * v98];
            v720 = &qword_17E370[BYTE1(v442)];
            v406 = (unsigned __int8)v442;
            v729 = &qword_17EB70[BYTE2(v449)];
            v104 = dword_17DB68[2 * BYTE3(v317) + 1]
                 ^ *(_DWORD *)(v267 + 8 * v823 + 4)
                 ^ *((_DWORD *)v399 - 1)
                 ^ *((_DWORD *)v630 - 1);
            v105 = (unsigned __int8)v317;
            LODWORD(v317) = BYTE1(v317);
            v746 = &qword_17FB70[v105];
            v735 = &qword_17E370[BYTE1(v449)];
            v424 = (unsigned __int8)v449;
            v106 = v100 ^ *((_DWORD *)v399 - 2) ^ *((_DWORD *)v630 - 2) ^ *(_DWORD *)(v740 + 8) ^ *((_DWORD *)v635 - 2);
            v107 = v104 ^ *(_DWORD *)(v740 + 12) ^ *((_DWORD *)v635 - 1) ^ v102;
            v636 = &qword_17EB70[BYTE2(v457)];
            v822 = &qword_17FB70[(unsigned __int8)v324];
            v416 = BYTE2(v348);
            v824 = &qword_17E370[BYTE1(v274)];
            v741 = &qword_17EB70[BYTE2(v274)];
            v447 = v107 ^ v817;
            v433 = (unsigned __int8)v457;
            v438 = HIDWORD(v62) ^ v106 ^ v526;
            v818 = &qword_17E370[BYTE1(v457)];
            v108 = *(_QWORD *)(v752 + 8);
            v109 = *((_DWORD *)v645 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v832 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v324) + 1]
                 ^ *((_DWORD *)v653 - 1)
                 ^ HIDWORD(v108);
            v110 = *(_DWORD *)(v267 + 8 * v832)
                 ^ dword_17DB68[2 * HIBYTE(v324)]
                 ^ *((_DWORD *)v645 - 2)
                 ^ *((_DWORD *)v653 - 2)
                 ^ v108;
            v111 = *(v660 - 1);
            v112 = v110 ^ v111;
            v113 = v109 ^ HIDWORD(v111) ^ dword_180368[2 * v834 + 1];
            LODWORD(v111) = *(_DWORD *)(v267 + 8 * v363 + 4) ^ dword_17DB68[2 * HIBYTE(v348) + 1];
            HIDWORD(v111) = dword_17DB68[2 * HIBYTE(v348)] ^ *(_DWORD *)(v267 + 8 * v363);
            v114 = dword_180B68[2 * v303 + 1];
            v115 = dword_180B68[2 * v303];
            v360 = v113 ^ dword_180B68[2 * v835 + 1];
            v299 = v112 ^ dword_180368[2 * v834] ^ dword_180B68[2 * v835];
            v646 = &dword_180368[2 * BYTE1(v324)];
            v654 = &dword_180B68[2 * BYTE2(v348)];
            v454 = HIDWORD(v111)
                 ^ *((_DWORD *)v666 - 2)
                 ^ *((_DWORD *)v671 - 2)
                 ^ *(_DWORD *)(v762 + 8)
                 ^ *((_DWORD *)v767 - 2)
                 ^ dword_180368[2 * (_DWORD)v288]
                 ^ v115;
            v518 = v111
                 ^ *((_DWORD *)v666 - 1)
                 ^ *((_DWORD *)v671 - 1)
                 ^ *(_DWORD *)(v762 + 12)
                 ^ *((_DWORD *)v767 - 1)
                 ^ dword_180368[2 * (_DWORD)v288 + 1]
                 ^ v114;
            v116 = dword_180368[2 * v311]
                 ^ dword_17DB68[2 * HIBYTE(HIDWORD(v288))]
                 ^ *(_DWORD *)(v267 + 8 * v836)
                 ^ *((_DWORD *)v679 - 2)
                 ^ *((_DWORD *)v687 - 2)
                 ^ *(_DWORD *)(v776 + 8)
                 ^ *((_DWORD *)v693 - 2);
            LODWORD(v99) = dword_17DB68[2 * HIBYTE(HIDWORD(v288)) + 1]
                         ^ *(_DWORD *)(v267 + 8 * v836 + 4)
                         ^ *((_DWORD *)v679 - 1)
                         ^ *((_DWORD *)v687 - 1)
                         ^ *(_DWORD *)(v776 + 12)
                         ^ *((_DWORD *)v693 - 1)
                         ^ dword_180368[2 * v311 + 1];
            v117 = dword_180B68[2 * (_DWORD)v369] ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369)) ^ dword_17DB68[2 * v548];
            v680 = dword_180368[2 * v340 + 1];
            v549 = dword_180368[2 * v340];
            v522 = v99 ^ dword_180B68[2 * HIDWORD(v317) + 1];
            v341 = &qword_17FB70[(unsigned __int8)v348];
            LODWORD(v111) = v613;
            v614 = BYTE1(v348);
            v346 = v116 ^ dword_180B68[2 * HIDWORD(v317)];
            v118 = *((_DWORD *)v282 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v390 + 4)
                 ^ v797[1]
                 ^ *((_DWORD *)v720 - 1)
                 ^ *((_DWORD *)v729 - 1)
                 ^ *(_DWORD *)(v802 + 12)
                 ^ dword_180368[2 * (_DWORD)v317 + 1];
            HIDWORD(v99) = *((_DWORD *)v282 - 2)
                         ^ *(_DWORD *)(v267 + 8 * v390)
                         ^ dword_17DB68[2 * v565]
                         ^ *((_DWORD *)v720 - 2)
                         ^ *((_DWORD *)v729 - 2)
                         ^ *(_DWORD *)(v802 + 8)
                         ^ dword_180368[2 * (_DWORD)v317]
                         ^ dword_180B68[2 * BYTE2(v324)];
            v394 = dword_180B68[2 * (_DWORD)v369 + 1]
                 ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369) + 4)
                 ^ v780[1]
                 ^ *(_DWORD *)(v111 - 4)
                 ^ *((_DWORD *)v532 - 1)
                 ^ *(_DWORD *)(v783 + 12)
                 ^ *((_DWORD *)v701 - 1)
                 ^ v680;
            v278 = v117
                 ^ *(_DWORD *)(v111 - 8)
                 ^ *((_DWORD *)v532 - 2)
                 ^ *(_DWORD *)(v783 + 8)
                 ^ *((_DWORD *)v701 - 2)
                 ^ v549;
            v367 = dword_180368[2 * v330 + 1]
                 ^ *(_DWORD *)(v267 + 8 * v356 + 4)
                 ^ v788[1]
                 ^ *((_DWORD *)v622 - 1)
                 ^ *((_DWORD *)v707 - 1)
                 ^ *(_DWORD *)(v793 + 12)
                 ^ *((_DWORD *)v712 - 1)
                 ^ dword_180B68[2 * v380 + 1];
            v352 = *(_DWORD *)(v267 + 8 * v356)
                 ^ dword_180368[2 * v330]
                 ^ dword_17DB68[2 * v555]
                 ^ *((_DWORD *)v622 - 2)
                 ^ *((_DWORD *)v707 - 2)
                 ^ *(_DWORD *)(v793 + 8)
                 ^ *((_DWORD *)v712 - 2)
                 ^ dword_180B68[2 * v380];
            v373 = HIDWORD(v99);
            v384 = v118 ^ dword_180B68[2 * BYTE2(v324) + 1];
            v119 = *(_DWORD *)(v831 + 12)
                 ^ v826[1]
                 ^ *(_DWORD *)(v267 + 8 * v433 + 4)
                 ^ *((_DWORD *)v824 - 1)
                 ^ dword_180B68[2 * v464 + 1]
                 ^ *((_DWORD *)v829 - 1)
                 ^ *((_DWORD *)v341 - 1);
            v17 = *((_DWORD *)v341 - 2)
                ^ *((_DWORD *)v829 - 2)
                ^ dword_17DB68[2 * v837]
                ^ *(_DWORD *)(v267 + 8 * v433)
                ^ *((_DWORD *)v824 - 2)
                ^ dword_180B68[2 * v464]
                ^ *(_DWORD *)(v831 + 8)
                ^ dword_180368[2 * BYTE5(v288)];
            v120 = dword_180368[2 * BYTE5(v288) + 1];
            v16 = dword_180B68[2 * BYTE6(v288)]
                ^ *((_DWORD *)v822 - 2)
                ^ *((_DWORD *)v818 - 2)
                ^ *((_DWORD *)v741 - 2)
                ^ *(_DWORD *)(v267 + 8 * v424)
                ^ *v814
                ^ *(_DWORD *)(v820 + 8)
                ^ dword_180368[2 * v614];
            v410 = *(_DWORD *)(v267 + 8 * v406)
                 ^ LODWORD(qword_17F368[HIBYTE(v274)])
                 ^ dword_17DB68[2 * v573]
                 ^ *((_DWORD *)v735 - 2)
                 ^ *((_DWORD *)v636 - 2)
                 ^ *((_DWORD *)v746 - 2)
                 ^ *v646
                 ^ dword_180B68[2 * v416];
            v530 = *(_DWORD *)(v267 + 8 * v424 + 4)
                 ^ *((_DWORD *)v741 - 1)
                 ^ v814[1]
                 ^ *((_DWORD *)v818 - 1)
                 ^ *(_DWORD *)(v820 + 12)
                 ^ *((_DWORD *)v822 - 1)
                 ^ dword_180368[2 * v614 + 1]
                 ^ dword_180B68[2 * BYTE6(v288) + 1];
            v535 = v119 ^ v120;
            v461 = v646[1]
                 ^ *(_DWORD *)(v267 + 8 * v406 + 4)
                 ^ HIDWORD(qword_17F368[HIBYTE(v274)])
                 ^ v810[1]
                 ^ *((_DWORD *)v735 - 1)
                 ^ *((_DWORD *)v636 - 1)
                 ^ *((_DWORD *)v746 - 1)
                 ^ v654[1];
          }
          while ( v269 != 14 );
          v121 = v267;
          v843 = v586;
          v268 = -1;
          v844 = v495;
          v845 = v467;
          v846 = v499;
          v847 = v506;
          v848 = v592;
          v849 = v602;
          v850 = v473;
          v851 = v488;
          v852 = v512;
          v853 = v438;
          v854 = v447;
          v855 = v299;
          v872 = v119 ^ v120;
          v869 = v16;
          v856 = v360;
          v871 = v17;
          v857 = v454;
          v858 = v518;
          v859 = v346;
          v860 = v522;
          v861 = v278;
          v862 = v394;
          v863 = v352;
          v864 = v367;
          v865 = v373;
          v866 = v384;
          v867 = v410;
          v868 = v461;
          v870 = v530;
          v357 = v873;
          v516 = v874;
          v370 = v875;
          v375 = v876;
          v381 = v877;
          v391 = v878;
          v400 = v879;
          v407 = v880;
          v417 = v881;
          v542 = v882;
          v425 = v883;
          v501 = v884;
          v434 = v885;
          v450 = v886;
          v443 = v887;
          v458 = v888;
          v470 = v889;
          v122 = v896;
          v477 = v890;
          v123 = v898;
          v124 = v902;
          v125 = v121;
          v465 = v891;
          v283 = v900;
          v483 = v892;
          v331 = v901;
          v492 = v893;
          v312 = v894;
          v507 = v895;
          v270 = v897;
          v275 = v899;
          v126 = v903;
          do
          {
            v318 = ~v381;
            v304 = v516 ^ HIDWORD(v268);
            v289 = ~v400;
            v342 = ~v434;
            v325 = ~v417;
            v127 = ~v370;
            v128 = ~v312;
            v129 = ~v425;
            v401 = ~v122;
            v130 = ~v443;
            v349 = ~v470;
            v426 = ~v283;
            v295 = ~v357;
            v444 = ~v124;
            v313 = v375 ^ HIDWORD(v268) ^ 0x10000000;
            v321 = v407 ^ HIDWORD(v268) ^ 0x30000000;
            v284 = v391 ^ HIDWORD(v268) ^ 0x20000000;
            v131 = v450 ^ HIDWORD(v268) ^ 0x60000000;
            v358 = v477 ^ (HIDWORD(v268) + 0x80000000);
            v371 = v483 ^ HIDWORD(v268) ^ 0x90000000;
            v382 = HIDWORD(v492) ^ HIDWORD(v268) ^ 0xA0000000;
            v392 = v507 ^ HIDWORD(v268) ^ 0xB0000000;
            v408 = v270 ^ HIDWORD(v268) ^ 0xC0000000;
            v418 = v275 ^ HIDWORD(v268) ^ 0xD0000000;
            HIDWORD(v492) = v458 ^ HIDWORD(v268) ^ 0x70000000;
            v435 = HIDWORD(v268) ^ 0xE0000000 ^ v331;
            v508 = ~v123;
            v451 = HIDWORD(v268) ^ 0xF0000000 ^ v126;
            v484 = v131;
            v459 = v129;
            v364 = ~v465;
            v376 = ~(_DWORD)v492;
            v132 = v501;
            v502 = v128;
            v332 = v132 ^ HIDWORD(v268) ^ 0x50000000;
            LOWORD(v492) = v130;
            v478 = v127;
            v784 = HIBYTE(v435);
            v789 = HIBYTE(v451);
            v798 = ((unsigned int)v516 ^ HIDWORD(v268)) >> 24;
            v811 = HIBYTE(v313);
            v517 = HIBYTE(v284);
            v667 = 8 * HIBYTE(v129) + 1569632;
            v615 = 8 * ((unsigned int)~v124 >> 24) + 1569632;
            v672 = 8 * HIBYTE(v342) + 1569632;
            v556 = 8 * HIBYTE(v128) + 1569632;
            v574 = 8 * ((unsigned int)~v123 >> 24) + 1569632;
            v688 = 8 * HIBYTE(v130) + 1569632;
            v661 = 8 * HIBYTE(v325) + 1569632;
            v637 = 8 * HIBYTE(v127) + 1569632;
            v520 = HIBYTE(v321);
            v655 = 8 * HIBYTE(v289) + 1569632;
            v133 = v542 ^ HIDWORD(v268) ^ 0x40000000;
            v527 = HIBYTE(v133);
            v134 = &qword_17FB70[(unsigned __int8)v313];
            v538 = HIBYTE(v332);
            v135 = &qword_17EB70[BYTE2(v342)];
            v694 = 8 * ((unsigned int)~v470 >> 24) + 1569632;
            v136 = &qword_17E370[BYTE1(v325)];
            v708 = dword_17DB68[2 * HIBYTE(v131) + 1];
            v681 = dword_17DB68[2 * HIBYTE(v131)];
            v713 = BYTE1(v284);
            v543 = &qword_17EB70[BYTE2(v459)];
            v566 = &qword_17FB70[(unsigned __int8)v304];
            v137 = *((_DWORD *)v134 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v318)
                 ^ dword_17DB68[2 * HIBYTE(HIDWORD(v492))]
                 ^ *((_DWORD *)v136 - 2)
                 ^ *((_DWORD *)v135 - 2)
                 ^ LODWORD(qword_17F368[HIBYTE(v401)]);
            v276 = 0xFFFFFF - HIDWORD(v268);
            v581 = &qword_17FB70[(unsigned __int8)v284];
            v533 = BYTE2(v284);
            v721 = (unsigned __int8)v289;
            v138 = *((_DWORD *)v134 - 1)
                 ^ *((_DWORD *)v135 - 1)
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v318 + 4)
                 ^ ~((0xFFFFFF - HIDWORD(v268)) ^ 0x10000000)
                 ^ dword_17DB68[2 * HIBYTE(HIDWORD(v492)) + 1]
                 ^ *((_DWORD *)v136 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v401)])
                 ^ dword_180368[2 * BYTE1(v321) + 1];
            v702 = &qword_17EB70[BYTE2(v289)];
            v753 = (unsigned __int8)v459;
            v285 = &qword_17E370[BYTE1(v459)];
            v139 = &qword_17EB70[BYTE2(v130)];
            v623 = &qword_17FB70[(unsigned __int8)v133];
            v742 = BYTE2(v131);
            v466 = v138 ^ dword_180B68[2 * BYTE2(v332) + 1];
            v550 = BYTE2(v321);
            v140 = dword_180368[2 * v713];
            v604 = &qword_17FB70[(unsigned __int8)v321];
            v460 = v137 ^ dword_180368[2 * BYTE1(v321)] ^ dword_180B68[2 * BYTE2(v332)];
            v141 = dword_180368[2 * v713 + 1];
            v142 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v478 + 4) ^ v708 ^ (HIDWORD(v268) - 0xFFFFFF);
            HIDWORD(v268) -= 0x1FFFFFF;
            v143 = v142 ^ HIDWORD(qword_17E370[BYTE1(v289) - 1]);
            v144 = LODWORD(qword_17E370[BYTE1(v289) - 1]) ^ ~(*(_DWORD *)(v125 + 8 * (unsigned __int8)v478) ^ v681);
            v145 = (unsigned __int8)v325;
            v471 = &qword_17EB70[BYTE2(v325)];
            v714 = (unsigned __int8)v342;
            v290 = &qword_17E370[BYTE1(v342)];
            v146 = v143 ^ *((_DWORD *)v543 - 1) ^ *(_DWORD *)(v556 + 12) ^ *((_DWORD *)v566 - 1) ^ v141;
            v147 = &qword_17EB70[BYTE2(v349)];
            v148 = v144
                 ^ *((_DWORD *)v543 - 2)
                 ^ *(_DWORD *)(v556 + 8)
                 ^ *((_DWORD *)v566 - 2)
                 ^ v140
                 ^ dword_180B68[2 * BYTE2(v133)];
            v544 = &qword_17FB70[(unsigned __int8)v332];
            v149 = *((_DWORD *)v581 - 2);
            v322 = v148;
            v150 = *((_DWORD *)v581 - 1);
            v326 = v146 ^ dword_180B68[2 * BYTE2(v133) + 1];
            v343 = BYTE1(v332);
            v582 = BYTE6(v492);
            v682 = HIBYTE(v484);
            v567 = &qword_17FB70[(unsigned __int8)v484];
            v151 = &qword_17E370[BYTE1(v492)];
            v777 = (unsigned __int8)v349;
            v485 = &qword_17E370[BYTE1(v349)];
            v333 = *((_DWORD *)v139 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v721 + 4)
                 ^ v276
                 ^ 0xDFFFFFFF
                 ^ dword_17DB68[2 * HIBYTE(v358) + 1]
                 ^ *((_DWORD *)v285 - 1)
                 ^ *(_DWORD *)(v574 + 12)
                 ^ v150
                 ^ dword_180368[2 * BYTE1(v133) + 1]
                 ^ dword_180B68[2 * v742 + 1];
            v286 = ~*(_DWORD *)(v125 + 8 * v721)
                 ^ dword_17DB68[2 * HIBYTE(v358)]
                 ^ *((_DWORD *)v285 - 2)
                 ^ *((_DWORD *)v139 - 2)
                 ^ *(_DWORD *)(v574 + 8)
                 ^ v149
                 ^ dword_180368[2 * BYTE1(v133)]
                 ^ dword_180B68[2 * v742];
            v722 = BYTE5(v492);
            v152 = *((_DWORD *)v604 - 2)
                 ^ *((_DWORD *)v147 - 2)
                 ^ dword_17DB68[2 * HIBYTE(v371)]
                 ^ ~*(_DWORD *)(v125 + 8 * v145)
                 ^ *((_DWORD *)v290 - 2)
                 ^ LODWORD(qword_17F368[HIBYTE(v426)]);
            v597 = &qword_17FB70[BYTE4(v492)];
            v153 = *((_DWORD *)v604 - 1)
                 ^ *((_DWORD *)v147 - 1)
                 ^ *((_DWORD *)v290 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v145 + 4)
                 ^ v276
                 ^ 0xCFFFFFFF
                 ^ dword_17DB68[2 * HIBYTE(v371) + 1]
                 ^ HIDWORD(qword_17F368[HIBYTE(v426)]);
            HIDWORD(v492) = &qword_17E370[BYTE1(v364)];
            v557 = &qword_17EB70[BYTE2(v502)];
            v736 = BYTE1(v358);
            v605 = &qword_17FB70[(unsigned __int8)v358];
            v291 = v153 ^ dword_180368[2 * v343 + 1] ^ dword_180B68[2 * v582 + 1];
            v344 = v152 ^ dword_180368[2 * v343] ^ dword_180B68[2 * v582];
            v154 = *((_DWORD *)v623 - 2);
            v575 = &qword_17E370[BYTE1(v376)];
            v155 = dword_17DB68[2 * HIBYTE(v382) + 1]
                 ^ v276
                 ^ 0xBFFFFFFF
                 ^ *(_DWORD *)(v125 + 8 * v753 + 4)
                 ^ *((_DWORD *)v151 - 1)
                 ^ HIDWORD(qword_17EB70[BYTE2(v364) - 1])
                 ^ *(_DWORD *)(v615 + 12)
                 ^ *((_DWORD *)v623 - 1);
            v624 = &qword_17FB70[(unsigned __int8)v371];
            v743 = BYTE1(v371);
            v156 = v154
                 ^ *(_DWORD *)(v615 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v753)
                 ^ dword_17DB68[2 * HIBYTE(v382)]
                 ^ *((_DWORD *)v151 - 2)
                 ^ LODWORD(qword_17EB70[BYTE2(v364) - 1])
                 ^ dword_180368[2 * v682];
            v754 = (unsigned __int8)v364;
            v709 = 8 * HIBYTE(v364) + 1569632;
            v350 = v156 ^ dword_180B68[2 * BYTE2(v358)];
            v359 = dword_180368[2 * v682 + 1] ^ v155 ^ dword_180B68[2 * BYTE2(v358) + 1];
            v157 = &qword_17EB70[BYTE2(v376)];
            v158 = (unsigned __int8)v502;
            v503 = &qword_17E370[BYTE1(v502)];
            v794 = v158;
            v758 = BYTE1(v382);
            v631 = &qword_17FB70[(unsigned __int8)v382];
            v159 = dword_180368[2 * v722];
            v160 = dword_180368[2 * v722 + 1];
            v723 = (unsigned __int8)v376;
            v365 = *((_DWORD *)v544 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v714)
                 ^ dword_17DB68[2 * HIBYTE(v392)]
                 ^ *((_DWORD *)v485 - 2)
                 ^ *((_DWORD *)v157 - 2)
                 ^ LODWORD(qword_17F368[HIBYTE(v295)])
                 ^ v159
                 ^ dword_180B68[2 * BYTE2(v371)];
            v807 = (unsigned __int8)v401;
            v730 = 8 * HIBYTE(v376) + 1569632;
            v372 = *((_DWORD *)v485 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v714 + 4)
                 ^ v276
                 ^ 0xAFFFFFFF
                 ^ dword_17DB68[2 * HIBYTE(v392) + 1]
                 ^ *((_DWORD *)v157 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v295)])
                 ^ *((_DWORD *)v544 - 1)
                 ^ v160
                 ^ dword_180B68[2 * BYTE2(v371) + 1];
            v616 = &qword_17E370[BYTE1(v401)];
            v161 = &qword_17EB70[BYTE2(v426)];
            v162 = *((_DWORD *)v557 - 2);
            v768 = BYTE1(v392);
            v163 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v492 + 4)
                 ^ v276
                 ^ 0x9FFFFFFF
                 ^ dword_17DB68[2 * HIBYTE(v408) + 1]
                 ^ *(_DWORD *)(HIDWORD(v492) - 4)
                 ^ *((_DWORD *)v557 - 1);
            v683 = &qword_17FB70[(unsigned __int8)v392];
            v772 = BYTE2(v418);
            v486 = (unsigned __int8)v508;
            v558 = &qword_17E370[BYTE1(v508)];
            v164 = &qword_17EB70[BYTE2(v444)];
            v165 = ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v492)
                 ^ dword_17DB68[2 * HIBYTE(v408)]
                 ^ *(_DWORD *)(HIDWORD(v492) - 8)
                 ^ v162
                 ^ *(_DWORD *)(v637 + 8)
                 ^ *((_DWORD *)v567 - 2)
                 ^ dword_180368[2 * v736];
            v166 = v163 ^ *(_DWORD *)(v637 + 12) ^ *((_DWORD *)v567 - 1) ^ dword_180368[2 * v736 + 1];
            v803 = BYTE1(v408);
            v638 = &qword_17FB70[(unsigned __int8)v408];
            v377 = v165 ^ dword_180B68[2 * BYTE2(v382)];
            v383 = v166 ^ dword_180B68[2 * BYTE2(v382) + 1];
            v167 = &qword_17EB70[BYTE2(v401)];
            v493 = (unsigned __int8)v426;
            v168 = BYTE2(v435);
            v427 = &qword_17E370[BYTE1(v426)];
            v169 = *((_DWORD *)v575 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v777 + 4)
                 ^ ~(v276 ^ 0x70000000)
                 ^ dword_17DB68[2 * HIBYTE(v418) + 1]
                 ^ *((_DWORD *)v167 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v318)])
                 ^ *((_DWORD *)v597 - 1);
            v170 = *((_DWORD *)v597 - 2)
                 ^ dword_17DB68[2 * HIBYTE(v418)]
                 ^ ~*(_DWORD *)(v125 + 8 * v777)
                 ^ *((_DWORD *)v575 - 2)
                 ^ *((_DWORD *)v167 - 2)
                 ^ LODWORD(qword_17F368[HIBYTE(v318)]);
            v568 = &qword_17EB70[BYTE2(v295)];
            v171 = &qword_17FB70[(unsigned __int8)v418];
            v419 = BYTE1(v418);
            v647 = v171;
            v598 = BYTE2(v451);
            v172 = (unsigned __int8)v435;
            v436 = BYTE1(v435);
            v715 = &qword_17FB70[v172];
            v173 = dword_180B68[2 * BYTE2(v392) + 1];
            v393 = v170 ^ dword_180368[2 * v743] ^ dword_180B68[2 * BYTE2(v392)];
            v402 = dword_180368[2 * v743 + 1] ^ v169 ^ v173;
            LOBYTE(v170) = v451;
            v452 = BYTE1(v451);
            v174 = &qword_17EB70[BYTE2(v508)];
            v737 = &qword_17FB70[(unsigned __int8)v170];
            v497 = BYTE2(v313);
            v545 = BYTE1(v313);
            v175 = *(_DWORD *)(v655 + 8)
                 ^ *((_DWORD *)v174 - 2)
                 ^ *((_DWORD *)v503 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v754)
                 ^ dword_17DB68[2 * v784];
            v176 = *(_DWORD *)(v655 + 12)
                 ^ ~(v276 ^ 0x80000000)
                 ^ *(_DWORD *)(v125 + 8 * v754 + 4)
                 ^ dword_17DB68[2 * v784 + 1]
                 ^ *((_DWORD *)v503 - 1)
                 ^ *((_DWORD *)v174 - 1)
                 ^ *((_DWORD *)v605 - 1);
            v504 = (unsigned __int8)v444;
            v576 = &qword_17E370[BYTE1(v444)];
            v583 = &qword_17EB70[BYTE2(v478)];
            v656 = &qword_17E370[BYTE1(v478)];
            v177 = dword_180B68[2 * BYTE2(v408)];
            v409 = v176 ^ dword_180368[2 * v758 + 1] ^ dword_180B68[2 * BYTE2(v408) + 1];
            v314 = v175 ^ *((_DWORD *)v605 - 2) ^ dword_180368[2 * v758] ^ v177;
            v178 = *((_DWORD *)v624 - 2);
            v445 = BYTE2(v304);
            v479 = BYTE1(v304);
            v179 = ~(v276 ^ 0x90000000)
                 ^ *(_DWORD *)(v125 + 8 * v723 + 4)
                 ^ dword_17DB68[2 * v789 + 1]
                 ^ *((_DWORD *)v616 - 1);
            v180 = *((_DWORD *)v624 - 1);
            v181 = ~*(_DWORD *)(v125 + 8 * v723)
                 ^ dword_17DB68[2 * v789]
                 ^ *((_DWORD *)v616 - 2)
                 ^ *((_DWORD *)v161 - 2);
            v509 = (unsigned __int8)v295;
            v617 = &qword_17E370[BYTE1(v295)];
            v625 = &qword_17EB70[BYTE2(v318)];
            v724 = &qword_17E370[BYTE1(v318)];
            v296 = v181 ^ *(_DWORD *)(v661 + 8) ^ v178 ^ dword_180368[2 * v768] ^ dword_180B68[2 * v772];
            v305 = *(_DWORD *)(v661 + 12)
                 ^ v179
                 ^ *((_DWORD *)v161 - 1)
                 ^ v180
                 ^ dword_180368[2 * v768 + 1]
                 ^ dword_180B68[2 * v772 + 1];
            v747 = dword_180368[2 * v419];
            v755 = dword_180368[2 * v419 + 1];
            v420 = *(_DWORD *)(v125 + 8 * v794 + 4)
                 ^ ~(v276 ^ 0xA0000000)
                 ^ dword_17DB68[2 * v798 + 1]
                 ^ *((_DWORD *)v558 - 1)
                 ^ *((_DWORD *)v164 - 1)
                 ^ *(_DWORD *)(v667 + 12)
                 ^ *((_DWORD *)v631 - 1)
                 ^ dword_180368[2 * v803 + 1]
                 ^ dword_180B68[2 * v168 + 1];
            v319 = ~*(_DWORD *)(v125 + 8 * v794)
                 ^ dword_17DB68[2 * v798]
                 ^ *((_DWORD *)v558 - 2)
                 ^ *((_DWORD *)v164 - 2)
                 ^ *(_DWORD *)(v667 + 8)
                 ^ *((_DWORD *)v631 - 2)
                 ^ dword_180368[2 * v803]
                 ^ dword_180B68[2 * v168];
            v182 = *((_DWORD *)v427 - 1);
            v183 = *(_DWORD *)(v672 + 12);
            v428 = ~*(_DWORD *)(v125 + 8 * v807)
                 ^ dword_17DB68[2 * v811]
                 ^ *((_DWORD *)v427 - 2)
                 ^ *((_DWORD *)v568 - 2)
                 ^ *(_DWORD *)(v672 + 8)
                 ^ *((_DWORD *)v683 - 2)
                 ^ v747
                 ^ dword_180B68[2 * v598];
            v673 = dword_180368[2 * v436 + 1];
            v184 = dword_180368[2 * v436];
            v748 = dword_180368[2 * v452 + 1];
            v759 = dword_180B68[2 * v497 + 1];
            v437 = v183
                 ^ ~(v276 ^ 0xB0000000)
                 ^ *(_DWORD *)(v125 + 8 * v807 + 4)
                 ^ dword_17DB68[2 * v811 + 1]
                 ^ v182
                 ^ *((_DWORD *)v568 - 1)
                 ^ *((_DWORD *)v683 - 1)
                 ^ v755
                 ^ dword_180B68[2 * v598 + 1];
            v599 = dword_180B68[2 * v445 + 1];
            v446 = *((_DWORD *)v638 - 2)
                 ^ *(_DWORD *)(v688 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v486)
                 ^ dword_17DB68[2 * v517]
                 ^ *((_DWORD *)v576 - 2)
                 ^ *((_DWORD *)v583 - 2)
                 ^ v184
                 ^ dword_180B68[2 * v445];
            v185 = ~(v276 ^ 0xC0000000) ^ *(_DWORD *)(v125 + 8 * v486 + 4);
            v569 = *((_DWORD *)v471 - 2);
            v186 = ~(v276 ^ 0xE0000000)
                 ^ *(_DWORD *)(v125 + 8 * v504 + 4)
                 ^ dword_17DB68[2 * v527 + 1]
                 ^ *((_DWORD *)v656 - 1)
                 ^ *((_DWORD *)v702 - 1)
                 ^ *(_DWORD *)(v709 + 12)
                 ^ *((_DWORD *)v715 - 1)
                 ^ dword_180368[2 * v479 + 1]
                 ^ dword_180B68[2 * v533 + 1];
            v271 = dword_180B68[2 * v550 + 1]
                 ^ ~(v276 ^ 0xF0000000)
                 ^ *(_DWORD *)(v125 + 8 * v509 + 4)
                 ^ dword_17DB68[2 * v538 + 1]
                 ^ *((_DWORD *)v724 - 1)
                 ^ *((_DWORD *)v471 - 1)
                 ^ *(_DWORD *)(v730 + 12)
                 ^ *((_DWORD *)v737 - 1)
                 ^ dword_180368[2 * v545 + 1];
            v472 = *(_DWORD *)(v694 + 8)
                 ^ dword_17DB68[2 * v520]
                 ^ ~*(_DWORD *)(v125 + 8 * v493)
                 ^ *((_DWORD *)v617 - 2)
                 ^ *((_DWORD *)v625 - 2)
                 ^ *((_DWORD *)v647 - 2)
                 ^ dword_180368[2 * v452]
                 ^ dword_180B68[2 * v497];
            v487 = dword_180B68[2 * v533]
                 ^ ~*(_DWORD *)(v125 + 8 * v504)
                 ^ dword_17DB68[2 * v527]
                 ^ *((_DWORD *)v656 - 2)
                 ^ *((_DWORD *)v702 - 2)
                 ^ *(_DWORD *)(v709 + 8)
                 ^ *((_DWORD *)v715 - 2)
                 ^ dword_180368[2 * v479];
            v498 = ~*(_DWORD *)(v125 + 8 * v509)
                 ^ dword_17DB68[2 * v538]
                 ^ *((_DWORD *)v724 - 2)
                 ^ v569
                 ^ *(_DWORD *)(v730 + 8)
                 ^ *((_DWORD *)v737 - 2)
                 ^ dword_180368[2 * v545]
                 ^ dword_180B68[2 * v550];
            v453 = v185
                 ^ dword_17DB68[2 * v517 + 1]
                 ^ *((_DWORD *)v576 - 1)
                 ^ *((_DWORD *)v583 - 1)
                 ^ *(_DWORD *)(v688 + 12)
                 ^ *((_DWORD *)v638 - 1)
                 ^ v673
                 ^ v599;
            v534 = HIBYTE(v359);
            v539 = HIBYTE(v372);
            v480 = *(_DWORD *)(v125 + 8 * v493 + 4)
                 ^ ~(v276 ^ 0xD0000000)
                 ^ dword_17DB68[2 * v520 + 1]
                 ^ *((_DWORD *)v617 - 1)
                 ^ *((_DWORD *)v625 - 1)
                 ^ *(_DWORD *)(v694 + 12)
                 ^ *((_DWORD *)v647 - 1)
                 ^ v748
                 ^ v759;
            v494 = v186;
            v778 = HIBYTE(v186);
            v785 = HIBYTE(v271);
            v804 = HIBYTE(v326);
            v812 = HIBYTE(v466);
            v521 = HIBYTE(v333);
            v528 = HIBYTE(v291);
            v674 = 8 * HIBYTE(v377) + 1569632;
            v668 = 8 * HIBYTE(v365) + 1569632;
            v684 = 8 * HIBYTE(v393) + 1569632;
            v277 = 8 * HIBYTE(v314) + 1569632;
            v648 = 8 * HIBYTE(v344) + 1569632;
            v657 = 8 * HIBYTE(v350) + 1569632;
            v187 = qword_17FB70[(unsigned __int8)v326 - 1];
            v188 = &qword_17E370[BYTE1(v350)];
            v189 = &qword_17EB70[BYTE2(v365)];
            v190 = dword_17DB68[2 * HIBYTE(v383)]
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v460)
                 ^ LODWORD(qword_17E370[BYTE1(v344) - 1])
                 ^ *((_DWORD *)v189 - 2);
            v191 = &qword_17EB70[BYTE2(v377)];
            v192 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v460 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v383) + 1]
                 ^ HIDWORD(qword_17E370[BYTE1(v344) - 1])
                 ^ *((_DWORD *)v189 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v428)]);
            v695 = (unsigned __int8)v344;
            v710 = &qword_17EB70[BYTE2(v344)];
            v716 = (unsigned __int8)v365;
            v345 = &qword_17E370[BYTE1(v365)];
            v193 = v190 ^ LODWORD(qword_17F368[HIBYTE(v428)]) ^ v187 ^ dword_180368[2 * BYTE1(v333)];
            v194 = v192 ^ HIDWORD(v187) ^ dword_180368[2 * BYTE1(v333) + 1];
            LODWORD(v187) = &qword_17FB70[(unsigned __int8)v333];
            v366 = BYTE2(v333);
            v195 = dword_180B68[2 * BYTE2(v359) + 1];
            WORD2(v187) = v359;
            v357 = v193 ^ dword_180B68[2 * BYTE2(v359)];
            v196 = BYTE5(v187);
            v516 = v194 ^ v195;
            v551 = &qword_17FB70[BYTE4(v187)];
            v197 = *((_DWORD *)v188 - 1);
            v198 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v286)
                 ^ dword_17DB68[2 * HIBYTE(v402)]
                 ^ *((_DWORD *)v188 - 2);
            v199 = *((_DWORD *)v191 - 2);
            v200 = (unsigned __int8)v350;
            v738 = &qword_17EB70[BYTE2(v350)];
            v731 = (unsigned __int8)v377;
            v201 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v286 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v402) + 1]
                 ^ v197
                 ^ *((_DWORD *)v191 - 1)
                 ^ HIDWORD(qword_17F368[HIBYTE(v446)]);
            v202 = &qword_17E370[BYTE1(v377)];
            v203 = &qword_17EB70[BYTE2(v314)];
            v204 = v198 ^ v199 ^ LODWORD(qword_17F368[HIBYTE(v446)]) ^ LODWORD(qword_17FB70[(unsigned __int8)v466 - 1]);
            v334 = &qword_17FB70[(unsigned __int8)v291];
            v205 = dword_180368[2 * BYTE1(v291) + 1];
            v351 = BYTE2(v291);
            v662 = BYTE1(v372);
            v559 = &qword_17FB70[(unsigned __int8)v372];
            v206 = dword_180B68[2 * BYTE2(v372) + 1];
            v749 = (unsigned __int8)v393;
            v370 = v204 ^ dword_180368[2 * BYTE1(v291)] ^ dword_180B68[2 * BYTE2(v372)];
            v292 = &qword_17E370[BYTE1(v393)];
            v375 = v201 ^ HIDWORD(qword_17FB70[(unsigned __int8)v466 - 1]) ^ v205 ^ v206;
            HIDWORD(v187) = &qword_17EB70[BYTE2(v393)];
            v207 = *(_DWORD *)(v125 + 8 * v695 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v409) + 1]
                 ^ *((_DWORD *)v345 - 1)
                 ^ *(_DWORD *)(HIDWORD(v187) - 4);
            v208 = *(_DWORD *)(HIDWORD(v187) - 8)
                 ^ *(_DWORD *)(v125 + 8 * v695)
                 ^ dword_17DB68[2 * HIBYTE(v409)]
                 ^ *((_DWORD *)v345 - 2);
            v505 = BYTE1(v383);
            v209 = *(_QWORD *)(v187 - 8);
            v570 = &qword_17FB70[(unsigned __int8)v383];
            v210 = v208 ^ LODWORD(qword_17F368[HIBYTE(v472)]);
            v211 = BYTE2(v409);
            v760 = (unsigned __int8)v314;
            v315 = &qword_17E370[BYTE1(v314)];
            v212 = dword_180368[2 * v196] ^ v210 ^ v209;
            HIDWORD(v209) ^= dword_180368[2 * v196 + 1] ^ v207 ^ HIDWORD(qword_17F368[HIBYTE(v472)]);
            LODWORD(v209) = &qword_17EB70[BYTE2(v319)];
            v696 = BYTE1(v402);
            v584 = &qword_17FB70[(unsigned __int8)v402];
            v213 = dword_180B68[2 * BYTE2(v383) + 1];
            v381 = v212 ^ dword_180B68[2 * BYTE2(v383)];
            v214 = *(_DWORD *)(v125 + 8 * v200);
            v215 = *(_DWORD *)(v125 + 8 * v200 + 4);
            v391 = HIDWORD(v209) ^ v213;
            v510 = &qword_17E370[BYTE1(v296)];
            v216 = BYTE2(v420);
            HIDWORD(v209) = &qword_17EB70[BYTE2(v428)];
            v217 = BYTE1(v409);
            v600 = &qword_17FB70[(unsigned __int8)v409];
            v218 = HIDWORD(qword_17F368[HIBYTE(v487)])
                 ^ dword_17DB68[2 * HIBYTE(v305) + 1]
                 ^ v215
                 ^ *((_DWORD *)v202 - 1)
                 ^ *((_DWORD *)v203 - 1)
                 ^ *((_DWORD *)v334 - 1);
            v219 = LODWORD(qword_17F368[HIBYTE(v487)])
                 ^ dword_17DB68[2 * HIBYTE(v305)]
                 ^ v214
                 ^ *((_DWORD *)v202 - 2)
                 ^ *((_DWORD *)v203 - 2)
                 ^ *((_DWORD *)v334 - 2);
            v335 = &qword_17E370[BYTE1(v319)];
            v220 = v219 ^ dword_180368[2 * v662];
            v221 = v218 ^ dword_180368[2 * v662 + 1];
            v577 = &qword_17EB70[BYTE2(v446)];
            v769 = BYTE1(v305);
            v663 = &qword_17FB70[(unsigned __int8)v305];
            v222 = dword_180B68[2 * BYTE2(v402) + 1];
            v773 = BYTE2(v437);
            v400 = v220 ^ dword_180B68[2 * BYTE2(v402)];
            v407 = v221 ^ v222;
            v223 = &qword_17EB70[BYTE2(v296)];
            v224 = dword_17DB68[2 * HIBYTE(v420) + 1]
                 ^ *(_DWORD *)(v125 + 8 * v716 + 4)
                 ^ *((_DWORD *)v292 - 1)
                 ^ *((_DWORD *)v223 - 1);
            v225 = dword_17DB68[2 * HIBYTE(v420)]
                 ^ *(_DWORD *)(v125 + 8 * v716)
                 ^ *((_DWORD *)v292 - 2)
                 ^ *((_DWORD *)v223 - 2);
            v293 = BYTE2(v453);
            v226 = (unsigned __int8)v296;
            v227 = HIDWORD(qword_17F368[HIBYTE(v498)]) ^ v224 ^ *((_DWORD *)v551 - 1);
            v228 = v225 ^ LODWORD(qword_17F368[HIBYTE(v498)]) ^ *((_DWORD *)v551 - 2);
            v717 = 8 * HIBYTE(v296) + 1569632;
            v799 = (unsigned __int8)v428;
            v552 = &qword_17E370[BYTE1(v428)];
            v229 = v228 ^ dword_180368[2 * v505] ^ dword_180B68[2 * v211];
            v542 = v227 ^ dword_180368[2 * v505 + 1] ^ dword_180B68[2 * v211 + 1];
            v230 = &qword_17EB70[BYTE2(v472)];
            LOWORD(v224) = v420;
            v417 = v229;
            v781 = BYTE1(v224);
            v618 = &qword_17FB70[(unsigned __int8)v224];
            v297 = (unsigned __int8)v319;
            v744 = 8 * HIBYTE(v319) + 1569632;
            v231 = *((_DWORD *)v559 - 2);
            v808 = (unsigned __int8)v446;
            v232 = *(_DWORD *)(v125 + 8 * v731 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v437) + 1]
                 ^ *((_DWORD *)v315 - 1)
                 ^ *(_DWORD *)(v209 - 4)
                 ^ HIDWORD(qword_17F368[HIBYTE(v322)])
                 ^ *((_DWORD *)v559 - 1);
            v560 = &qword_17E370[BYTE1(v446)];
            v790 = BYTE1(v437);
            v626 = &qword_17FB70[(unsigned __int8)v437];
            v425 = v231
                 ^ *(_DWORD *)(v125 + 8 * v731)
                 ^ dword_17DB68[2 * HIBYTE(v437)]
                 ^ *((_DWORD *)v315 - 2)
                 ^ *(_DWORD *)(v209 - 8)
                 ^ LODWORD(qword_17F368[HIBYTE(v322)])
                 ^ dword_180368[2 * v696]
                 ^ dword_180B68[2 * BYTE2(v305)];
            v501 = v232 ^ dword_180368[2 * v696 + 1] ^ dword_180B68[2 * BYTE2(v305) + 1];
            v306 = BYTE1(v453);
            v233 = *((_DWORD *)v510 - 2)
                 ^ *(_DWORD *)(v125 + 8 * v749)
                 ^ dword_17DB68[2 * HIBYTE(v453)]
                 ^ *(_DWORD *)(HIDWORD(v209) - 8);
            v234 = *(_DWORD *)(v125 + 8 * v749 + 4)
                 ^ dword_17DB68[2 * HIBYTE(v453) + 1]
                 ^ *((_DWORD *)v510 - 1)
                 ^ *(_DWORD *)(HIDWORD(v209) - 4);
            v689 = &qword_17FB70[(unsigned __int8)v453];
            v316 = (unsigned __int8)v472;
            v511 = &qword_17E370[BYTE1(v472)];
            v756 = BYTE1(v480);
            v697 = &qword_17FB70[(unsigned __int8)v480];
            v434 = *((_DWORD *)v570 - 2)
                 ^ v233
                 ^ LODWORD(qword_17F368[HIBYTE(v460)])
                 ^ dword_180368[2 * v217]
                 ^ dword_180B68[2 * v216];
            v235 = *(v584 - 1);
            v450 = HIDWORD(qword_17F368[HIBYTE(v460)])
                 ^ v234
                 ^ *((_DWORD *)v570 - 1)
                 ^ dword_180368[2 * v217 + 1]
                 ^ dword_180B68[2 * v216 + 1];
            v236 = dword_17DB68[2 * HIBYTE(v480)] ^ *(_DWORD *)(v125 + 8 * v760) ^ *((_DWORD *)v335 - 2);
            v237 = dword_17DB68[2 * HIBYTE(v480) + 1] ^ *(_DWORD *)(v125 + 8 * v760 + 4) ^ *((_DWORD *)v335 - 1);
            v238 = *((_DWORD *)v577 - 2);
            v239 = *((_DWORD *)v577 - 1);
            v336 = (unsigned __int8)v487;
            v578 = &qword_17E370[BYTE1(v487)];
            v585 = &qword_17EB70[BYTE2(v322)];
            v240 = BYTE2(v271);
            v632 = &qword_17E370[BYTE1(v498)];
            HIDWORD(v235) ^= v237 ^ v239 ^ HIDWORD(qword_17F368[HIBYTE(v286)]) ^ dword_180368[2 * v769 + 1];
            v639 = &qword_17EB70[BYTE2(v460)];
            v703 = &qword_17E370[BYTE1(v460)];
            v241 = &dword_180B68[2 * v293];
            v443 = v235
                 ^ v236
                 ^ v238
                 ^ LODWORD(qword_17F368[HIBYTE(v286)])
                 ^ dword_180368[2 * v769]
                 ^ dword_180B68[2 * v773];
            v320 = BYTE1(v494);
            v458 = HIDWORD(v235) ^ dword_180B68[2 * v773 + 1];
            v725 = &qword_17FB70[(unsigned __int8)v494];
            v294 = BYTE2(v326);
            HIDWORD(v235) = *(_DWORD *)(v648 + 12);
            v327 = BYTE1(v326);
            v242 = dword_17DB68[2 * v778]
                 ^ *(_DWORD *)(v125 + 8 * v226)
                 ^ *((_DWORD *)v552 - 2)
                 ^ *((_DWORD *)v230 - 2)
                 ^ *(_DWORD *)(v648 + 8);
            v649 = &qword_17E370[BYTE1(v322)];
            v243 = *(_DWORD *)(v125 + 8 * v226 + 4)
                 ^ dword_17DB68[2 * v778 + 1]
                 ^ *((_DWORD *)v552 - 1)
                 ^ *((_DWORD *)v230 - 1)
                 ^ HIDWORD(v235)
                 ^ *((_DWORD *)v600 - 1);
            v244 = v242 ^ *((_DWORD *)v600 - 2);
            v601 = &qword_17EB70[BYTE2(v286)];
            v732 = &qword_17E370[BYTE1(v286)];
            v470 = v244 ^ dword_180368[2 * v781] ^ *v241;
            HIDWORD(v235) = (unsigned __int8)v271;
            v272 = BYTE1(v271);
            v750 = &qword_17FB70[HIDWORD(v235)];
            LODWORD(v209) = dword_180B68[2 * BYTE2(v480)];
            v245 = dword_180B68[2 * BYTE2(v480) + 1];
            v477 = v243 ^ dword_180368[2 * v781 + 1] ^ v241[1];
            HIDWORD(v235) = dword_17DB68[2 * v785 + 1] ^ *(_DWORD *)(v125 + 8 * v297 + 4);
            v246 = *(_DWORD *)(v125 + 8 * v297) ^ dword_17DB68[2 * v785];
            v287 = BYTE2(v466);
            v298 = BYTE1(v466);
            LODWORD(v235) = &qword_17EB70[BYTE2(v487)];
            v483 = *(_DWORD *)(v657 + 12)
                 ^ HIDWORD(v235)
                 ^ *((_DWORD *)v560 - 1)
                 ^ *(_DWORD *)(v235 - 4)
                 ^ *((_DWORD *)v663 - 1)
                 ^ dword_180368[2 * v790 + 1]
                 ^ v245;
            v465 = v246
                 ^ *((_DWORD *)v560 - 2)
                 ^ *(_DWORD *)(v235 - 8)
                 ^ *(_DWORD *)(v657 + 8)
                 ^ *((_DWORD *)v663 - 2)
                 ^ dword_180368[2 * v790]
                 ^ v209;
            LODWORD(v209) = &dword_180368[2 * BYTE1(v494)];
            v606 = (_DWORD *)(v125 + 8 * (unsigned __int8)v498);
            v492 = *(_QWORD *)&dword_17DB68[2 * v804]
                 ^ *(_QWORD *)(v125 + 8 * v799)
                 ^ *(v511 - 1)
                 ^ qword_17EB70[BYTE2(v498) - 1]
                 ^ *(_QWORD *)(v668 + 8)
                 ^ *(v618 - 1)
                 ^ *(_QWORD *)&dword_180368[2 * v306]
                 ^ *(_QWORD *)&dword_180B68[2 * BYTE2(v494)];
            v658 = (_DWORD *)(v125 + 8 * (unsigned __int8)v322);
            v247 = *(_DWORD *)(v125 + 8 * v316 + 4) ^ dword_17DB68[2 * v521 + 1];
            v248 = *(_DWORD *)(v125 + 8 * v316) ^ dword_17DB68[2 * v521];
            v507 = dword_17DB68[2 * v812 + 1]
                 ^ *(_DWORD *)(v125 + 8 * v808 + 4)
                 ^ *((_DWORD *)v578 - 1)
                 ^ *((_DWORD *)v585 - 1)
                 ^ *(_DWORD *)(v674 + 12)
                 ^ *((_DWORD *)v626 - 1)
                 ^ dword_180368[2 * v756 + 1]
                 ^ dword_180B68[2 * v240 + 1];
            v312 = *(_DWORD *)(v125 + 8 * v808)
                 ^ dword_17DB68[2 * v812]
                 ^ *((_DWORD *)v578 - 2)
                 ^ *((_DWORD *)v585 - 2)
                 ^ *(_DWORD *)(v674 + 8)
                 ^ *((_DWORD *)v626 - 2)
                 ^ dword_180368[2 * v756]
                 ^ dword_180B68[2 * v240];
            HIDWORD(v209) = dword_17DB68[2 * v528] ^ *(_DWORD *)(v125 + 8 * v336);
            v553 = dword_180368[2 * v272 + 1];
            v249 = *(_DWORD *)(v125 + 8 * v336 + 4) ^ dword_17DB68[2 * v528 + 1];
            v250 = v247
                 ^ *((_DWORD *)v632 - 1)
                 ^ *((_DWORD *)v639 - 1)
                 ^ *(_DWORD *)(v684 + 12)
                 ^ *((_DWORD *)v689 - 1)
                 ^ *(_DWORD *)(v209 + 4);
            v529 = dword_180368[2 * v272];
            v251 = HIDWORD(v209)
                 ^ *((_DWORD *)v649 - 2)
                 ^ *((_DWORD *)v601 - 2)
                 ^ *(_DWORD *)(v277 + 8)
                 ^ *((_DWORD *)v697 - 2);
            v561 = dword_180B68[2 * v287];
            v252 = *v606
                 ^ dword_17DB68[2 * v534]
                 ^ *((_DWORD *)v703 - 2)
                 ^ *((_DWORD *)v710 - 2)
                 ^ *(_DWORD *)(v717 + 8)
                 ^ *((_DWORD *)v725 - 2)
                 ^ dword_180368[2 * v327];
            v253 = dword_180B68[2 * v366];
            v331 = v606[1]
                 ^ dword_17DB68[2 * v534 + 1]
                 ^ *((_DWORD *)v703 - 1)
                 ^ *((_DWORD *)v710 - 1)
                 ^ *(_DWORD *)(v717 + 12)
                 ^ *((_DWORD *)v725 - 1)
                 ^ dword_180368[2 * v327 + 1]
                 ^ dword_180B68[2 * v366 + 1];
            v124 = dword_17DB68[2 * v539]
                 ^ *v658
                 ^ *((_DWORD *)v732 - 2)
                 ^ *((_DWORD *)v738 - 2)
                 ^ *(_DWORD *)(v744 + 8)
                 ^ *((_DWORD *)v750 - 2)
                 ^ dword_180368[2 * v298]
                 ^ dword_180B68[2 * v351];
            v270 = v250 ^ dword_180B68[2 * v294 + 1];
            v126 = v658[1]
                 ^ dword_17DB68[2 * v539 + 1]
                 ^ *((_DWORD *)v732 - 1)
                 ^ *((_DWORD *)v738 - 1)
                 ^ *(_DWORD *)(v744 + 12)
                 ^ *((_DWORD *)v750 - 1)
                 ^ dword_180368[2 * v298 + 1]
                 ^ dword_180B68[2 * v351 + 1];
            v122 = *((_DWORD *)v639 - 2)
                 ^ v248
                 ^ *((_DWORD *)v632 - 2)
                 ^ *(_DWORD *)(v684 + 8)
                 ^ *((_DWORD *)v689 - 2)
                 ^ dword_180368[2 * v320]
                 ^ dword_180B68[2 * v294];
            v275 = v249
                 ^ *((_DWORD *)v649 - 1)
                 ^ *((_DWORD *)v601 - 1)
                 ^ *(_DWORD *)(v277 + 12)
                 ^ *((_DWORD *)v697 - 1)
                 ^ v553
                 ^ dword_180B68[2 * v287 + 1];
            v283 = v252 ^ v253;
            v123 = v251 ^ v529 ^ v561;
          }
          while ( v268 != 0xF1FFFFFFFFFFFFFFLL );
          v5 = v125;
          v254 = v357;
          v255 = &v844;
          v875 = v370;
          v256 = &v875;
          v873 = v357;
          v876 = v375;
          v874 = v516;
          v877 = v381;
          v878 = v391;
          v879 = v400;
          v880 = v407;
          v881 = v417;
          v882 = v542;
          v883 = v425;
          v884 = v501;
          v885 = v434;
          v886 = v450;
          v887 = v443;
          v888 = v458;
          v896 = v122;
          v889 = v470;
          v897 = v270;
          v890 = v477;
          v899 = v275;
          v900 = v252 ^ v253;
          v257 = v516;
          v891 = v465;
          v902 = v124;
          v903 = v126;
          v892 = v483;
          v898 = v251 ^ v529 ^ v561;
          v901 = v331;
          v893 = v492;
          v258 = v840;
          v259 = v586;
          v894 = v312;
          v895 = v507;
          while ( 1 )
          {
            v262 = *(_DWORD *)(v258 + 8);
            v258 += 8;
            v263 = *(_DWORD *)(v258 + 4);
            *(_DWORD *)v258 = v262 ^ v259 ^ v254;
            *(_DWORD *)(v258 + 4) = v263 ^ v257 ^ HIDWORD(v259);
            if ( &dest[120] == (_BYTE *)v258 )
              break;
            v260 = *v255;
            v256 += 2;
            v261 = v255[1];
            v255 += 2;
            v254 = *(v256 - 2);
            v257 = *(v256 - 1);
            v259 = __PAIR64__(v261, v260);
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
    result = memcpy(v841, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
