__int64 __fastcall sub_1033A4(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r6
  __int64 v6; // r4
  size_t v7; // r6
  __int64 v8; // r4
  size_t v9; // r2
  char *v10; // r6
  int v11; // r6
  int v12; // r1
  int v13; // r12
  unsigned int v14; // r4
  unsigned int v15; // r7
  unsigned int v16; // r5
  unsigned int v17; // lr
  unsigned int v18; // r9
  _DWORD *v19; // r3
  _QWORD *v20; // lr
  _QWORD *v21; // r4
  _QWORD *v22; // r12
  int v23; // r2
  char *v24; // r7
  int v25; // r3
  int v26; // r1
  _QWORD *v27; // r4
  int v28; // r1
  _QWORD *v29; // lr
  int v30; // r2
  int v31; // r6
  int v32; // r7
  int v33; // r12
  int v34; // r9
  _QWORD *v35; // r1
  int v36; // r6
  int v37; // r12
  _QWORD *v38; // r11
  int v39; // r5
  int v40; // r2
  int v41; // lr
  int v42; // r3
  _QWORD *v43; // r9
  int v44; // lr
  int v45; // r6
  int v46; // r5
  int v47; // lr
  int v48; // r2
  int v49; // r5
  int v50; // lr
  int v51; // r2
  int v52; // r5
  int v53; // r12
  int v54; // r2
  int v55; // r3
  int v56; // r2
  int v57; // r1
  int v58; // r3
  int v59; // r2
  int v60; // r3
  int v61; // r2
  int v62; // r3
  int v63; // r4
  int v64; // r2
  int v65; // r3
  int v66; // r11
  int v67; // r6
  int v68; // r9
  _DWORD *v69; // r5
  int v70; // r12
  int v71; // lr
  int v72; // r1
  int v73; // lr
  int v74; // r11
  int v75; // r12
  int v76; // r11
  int v77; // r4
  int v78; // r3
  int v79; // lr
  int v80; // r3
  int v81; // r12
  int v82; // r6
  int v83; // r5
  int v84; // r12
  int v85; // r2
  int v86; // r10
  unsigned int v87; // r12
  _QWORD *v88; // r3
  _QWORD *v89; // r1
  int v90; // r10
  int *v91; // r3
  int v92; // r2
  int v93; // r3
  int v94; // r2
  bool v95; // zf
  unsigned __int8 v96; // r7
  int v97; // r3
  _QWORD *v98; // lr
  _QWORD *v99; // r12
  int v100; // r9
  int v101; // r10
  int v102; // r2
  _QWORD *v103; // r1
  int v104; // r3
  int v105; // r2
  int v106; // r4
  _QWORD *v107; // r1
  int v108; // r10
  int v109; // r2
  int v110; // r11
  int v111; // r5
  int v112; // r9
  int v113; // r6
  int v114; // r2
  int v115; // r11
  int v116; // r3
  int v117; // lr
  int v118; // r5
  int v119; // r3
  int v120; // r2
  int v121; // r2
  int v122; // r7
  int v123; // r5
  int v124; // r10
  int v125; // r4
  int v126; // r2
  int v127; // r3
  __int64 v128; // r2
  int v129; // r12
  int v130; // lr
  int v131; // r5
  int v132; // r9
  int v133; // lr
  int v134; // r12
  int v135; // lr
  int v136; // r12
  int v137; // lr
  int v138; // r12
  int v139; // lr
  int v140; // r4
  int v141; // lr
  __int64 v142; // r4
  int v143; // r1
  int v144; // r10
  int v145; // r7
  int v146; // r9
  int v147; // r6
  int v148; // r1
  int v149; // r10
  int v150; // r7
  int v151; // lr
  void **v152; // r3
  int v153; // r4
  int *v154; // r1
  unsigned int v155; // t1
  unsigned int v156; // r2
  int *v157; // r1
  char *v158; // r3
  int v159; // r2
  int v160; // r0
  __int64 result; // r0
  int v162; // r3
  int v163; // r3
  __int64 v164; // [sp+0h] [bp-344h]
  unsigned int v165; // [sp+10h] [bp-334h]
  unsigned int v166; // [sp+10h] [bp-334h]
  _DWORD *v167; // [sp+10h] [bp-334h]
  int v168; // [sp+10h] [bp-334h]
  int v169; // [sp+14h] [bp-330h]
  unsigned int v170; // [sp+14h] [bp-330h]
  unsigned int v171; // [sp+14h] [bp-330h]
  int v172; // [sp+14h] [bp-330h]
  int v173; // [sp+14h] [bp-330h]
  __int64 v174; // [sp+18h] [bp-32Ch]
  unsigned int v175; // [sp+18h] [bp-32Ch]
  int v176; // [sp+18h] [bp-32Ch]
  int v177; // [sp+18h] [bp-32Ch]
  int v178; // [sp+18h] [bp-32Ch]
  unsigned int v179; // [sp+1Ch] [bp-328h]
  int v180; // [sp+1Ch] [bp-328h]
  _DWORD *v181; // [sp+1Ch] [bp-328h]
  int v182; // [sp+20h] [bp-324h]
  unsigned int v183; // [sp+20h] [bp-324h]
  _QWORD *v184; // [sp+20h] [bp-324h]
  unsigned int v185; // [sp+20h] [bp-324h]
  unsigned int v186; // [sp+24h] [bp-320h]
  int v187; // [sp+24h] [bp-320h]
  int v188; // [sp+24h] [bp-320h]
  unsigned int v189; // [sp+24h] [bp-320h]
  int v190; // [sp+24h] [bp-320h]
  int v191; // [sp+24h] [bp-320h]
  int v192; // [sp+24h] [bp-320h]
  unsigned int v193; // [sp+28h] [bp-31Ch]
  unsigned int v194; // [sp+28h] [bp-31Ch]
  int v195; // [sp+28h] [bp-31Ch]
  _DWORD *v196; // [sp+28h] [bp-31Ch]
  unsigned int v197; // [sp+2Ch] [bp-318h]
  unsigned int v198; // [sp+2Ch] [bp-318h]
  unsigned int v199; // [sp+30h] [bp-314h]
  unsigned int v200; // [sp+30h] [bp-314h]
  int v201; // [sp+30h] [bp-314h]
  _QWORD *v202; // [sp+30h] [bp-314h]
  unsigned int v203; // [sp+34h] [bp-310h]
  unsigned int v204; // [sp+34h] [bp-310h]
  int v205; // [sp+34h] [bp-310h]
  int v206; // [sp+34h] [bp-310h]
  int v207; // [sp+34h] [bp-310h]
  unsigned int v208; // [sp+38h] [bp-30Ch]
  _QWORD *v209; // [sp+38h] [bp-30Ch]
  unsigned int v210; // [sp+38h] [bp-30Ch]
  int v211; // [sp+38h] [bp-30Ch]
  int v212; // [sp+38h] [bp-30Ch]
  int v213; // [sp+38h] [bp-30Ch]
  int v214; // [sp+38h] [bp-30Ch]
  int v215; // [sp+3Ch] [bp-308h]
  unsigned int v216; // [sp+3Ch] [bp-308h]
  unsigned int v217; // [sp+3Ch] [bp-308h]
  unsigned int v218; // [sp+40h] [bp-304h]
  unsigned int v219; // [sp+40h] [bp-304h]
  int v220; // [sp+40h] [bp-304h]
  int v221; // [sp+44h] [bp-300h]
  unsigned int v222; // [sp+44h] [bp-300h]
  unsigned int v223; // [sp+44h] [bp-300h]
  int v224; // [sp+44h] [bp-300h]
  int v225; // [sp+44h] [bp-300h]
  int v226; // [sp+44h] [bp-300h]
  int v227; // [sp+48h] [bp-2FCh]
  unsigned int v228; // [sp+48h] [bp-2FCh]
  unsigned int v229; // [sp+48h] [bp-2FCh]
  int v230; // [sp+48h] [bp-2FCh]
  __int64 v231; // [sp+4Ch] [bp-2F8h]
  unsigned int v232; // [sp+4Ch] [bp-2F8h]
  unsigned int v233; // [sp+4Ch] [bp-2F8h]
  int v234; // [sp+4Ch] [bp-2F8h]
  unsigned int v235; // [sp+50h] [bp-2F4h]
  unsigned int v236; // [sp+50h] [bp-2F4h]
  int v237; // [sp+50h] [bp-2F4h]
  __int64 v238; // [sp+54h] [bp-2F0h]
  unsigned int v239; // [sp+54h] [bp-2F0h]
  unsigned int v240; // [sp+54h] [bp-2F0h]
  int v241; // [sp+54h] [bp-2F0h]
  unsigned int v242; // [sp+58h] [bp-2ECh]
  int v243; // [sp+58h] [bp-2ECh]
  unsigned int v244; // [sp+58h] [bp-2ECh]
  _QWORD *v245; // [sp+58h] [bp-2ECh]
  __int64 v246; // [sp+5Ch] [bp-2E8h]
  unsigned int v247; // [sp+5Ch] [bp-2E8h]
  int v248; // [sp+5Ch] [bp-2E8h]
  unsigned int v249; // [sp+5Ch] [bp-2E8h]
  _QWORD *v250; // [sp+5Ch] [bp-2E8h]
  int v251; // [sp+5Ch] [bp-2E8h]
  unsigned int v252; // [sp+60h] [bp-2E4h]
  _QWORD *v253; // [sp+60h] [bp-2E4h]
  int *v254; // [sp+60h] [bp-2E4h]
  unsigned int v255; // [sp+60h] [bp-2E4h]
  int v256; // [sp+60h] [bp-2E4h]
  int v257; // [sp+64h] [bp-2E0h]
  unsigned int v258; // [sp+64h] [bp-2E0h]
  int v259; // [sp+64h] [bp-2E0h]
  unsigned int v260; // [sp+64h] [bp-2E0h]
  int v261; // [sp+64h] [bp-2E0h]
  char *v262; // [sp+68h] [bp-2DCh]
  int v263; // [sp+68h] [bp-2DCh]
  int v264; // [sp+68h] [bp-2DCh]
  unsigned int v265; // [sp+68h] [bp-2DCh]
  int v266; // [sp+6Ch] [bp-2D8h]
  unsigned int v267; // [sp+6Ch] [bp-2D8h]
  _QWORD *v268; // [sp+6Ch] [bp-2D8h]
  int v269; // [sp+6Ch] [bp-2D8h]
  unsigned int v270; // [sp+6Ch] [bp-2D8h]
  unsigned int v271; // [sp+70h] [bp-2D4h]
  int v272; // [sp+70h] [bp-2D4h]
  unsigned int v273; // [sp+70h] [bp-2D4h]
  _QWORD *v274; // [sp+70h] [bp-2D4h]
  unsigned int v275; // [sp+74h] [bp-2D0h]
  int v276; // [sp+74h] [bp-2D0h]
  int v277; // [sp+74h] [bp-2D0h]
  int v278; // [sp+74h] [bp-2D0h]
  unsigned int v279; // [sp+74h] [bp-2D0h]
  int v280; // [sp+78h] [bp-2CCh]
  unsigned int v281; // [sp+78h] [bp-2CCh]
  int v282; // [sp+78h] [bp-2CCh]
  char *v283; // [sp+78h] [bp-2CCh]
  int v284; // [sp+78h] [bp-2CCh]
  unsigned int v285; // [sp+78h] [bp-2CCh]
  int v286; // [sp+7Ch] [bp-2C8h]
  int v287; // [sp+7Ch] [bp-2C8h]
  int v288; // [sp+7Ch] [bp-2C8h]
  int v289; // [sp+7Ch] [bp-2C8h]
  unsigned int v290; // [sp+80h] [bp-2C4h]
  unsigned int v291; // [sp+80h] [bp-2C4h]
  int v292; // [sp+80h] [bp-2C4h]
  int v293; // [sp+84h] [bp-2C0h]
  unsigned int v294; // [sp+84h] [bp-2C0h]
  int v295; // [sp+84h] [bp-2C0h]
  _QWORD *v296; // [sp+84h] [bp-2C0h]
  unsigned int v297; // [sp+84h] [bp-2C0h]
  int v298; // [sp+88h] [bp-2BCh]
  unsigned int v299; // [sp+88h] [bp-2BCh]
  int v300; // [sp+88h] [bp-2BCh]
  int v301; // [sp+88h] [bp-2BCh]
  unsigned int v302; // [sp+88h] [bp-2BCh]
  int v303; // [sp+8Ch] [bp-2B8h]
  unsigned int v304; // [sp+8Ch] [bp-2B8h]
  int v305; // [sp+8Ch] [bp-2B8h]
  int v306; // [sp+8Ch] [bp-2B8h]
  unsigned int v307; // [sp+8Ch] [bp-2B8h]
  int v308; // [sp+90h] [bp-2B4h]
  int v309; // [sp+90h] [bp-2B4h]
  int v310; // [sp+90h] [bp-2B4h]
  _QWORD *v311; // [sp+90h] [bp-2B4h]
  __int64 v312; // [sp+94h] [bp-2B0h]
  int v313; // [sp+94h] [bp-2B0h]
  int v314; // [sp+94h] [bp-2B0h]
  int v315; // [sp+98h] [bp-2ACh]
  int v316; // [sp+98h] [bp-2ACh]
  unsigned int v317; // [sp+98h] [bp-2ACh]
  int v318; // [sp+9Ch] [bp-2A8h]
  int v319; // [sp+9Ch] [bp-2A8h]
  int v320; // [sp+9Ch] [bp-2A8h]
  int v321; // [sp+A0h] [bp-2A4h]
  int v322; // [sp+A0h] [bp-2A4h]
  int v323; // [sp+A0h] [bp-2A4h]
  int v324; // [sp+A4h] [bp-2A0h]
  int v325; // [sp+A4h] [bp-2A0h]
  int v326; // [sp+A8h] [bp-29Ch]
  int v327; // [sp+A8h] [bp-29Ch]
  unsigned int v328; // [sp+ACh] [bp-298h]
  unsigned int v329; // [sp+ACh] [bp-298h]
  int v330; // [sp+ACh] [bp-298h]
  unsigned int v331; // [sp+B0h] [bp-294h]
  char *v332; // [sp+B4h] [bp-290h]
  _QWORD *v333; // [sp+B4h] [bp-290h]
  int v334; // [sp+B4h] [bp-290h]
  unsigned int v335; // [sp+B4h] [bp-290h]
  unsigned int v336; // [sp+B8h] [bp-28Ch]
  unsigned int v337; // [sp+B8h] [bp-28Ch]
  int v338; // [sp+B8h] [bp-28Ch]
  _QWORD *v339; // [sp+BCh] [bp-288h]
  _QWORD *v340; // [sp+BCh] [bp-288h]
  int v341; // [sp+BCh] [bp-288h]
  unsigned int v342; // [sp+BCh] [bp-288h]
  int v343; // [sp+C0h] [bp-284h]
  unsigned int v344; // [sp+C0h] [bp-284h]
  _QWORD *v345; // [sp+C4h] [bp-280h]
  int v346; // [sp+C4h] [bp-280h]
  unsigned int v347; // [sp+C4h] [bp-280h]
  int v348; // [sp+C8h] [bp-27Ch]
  _QWORD *v349; // [sp+C8h] [bp-27Ch]
  int v350; // [sp+C8h] [bp-27Ch]
  char *v351; // [sp+C8h] [bp-27Ch]
  _QWORD *v352; // [sp+C8h] [bp-27Ch]
  __int64 v353; // [sp+CCh] [bp-278h]
  char *v354; // [sp+CCh] [bp-278h]
  _QWORD *v355; // [sp+CCh] [bp-278h]
  int v356; // [sp+CCh] [bp-278h]
  int v357; // [sp+CCh] [bp-278h]
  _QWORD *v358; // [sp+D0h] [bp-274h]
  unsigned int v359; // [sp+D0h] [bp-274h]
  int v360; // [sp+D0h] [bp-274h]
  unsigned int v361; // [sp+D4h] [bp-270h]
  char *v362; // [sp+D4h] [bp-270h]
  _QWORD *v363; // [sp+D4h] [bp-270h]
  _QWORD *v364; // [sp+D4h] [bp-270h]
  int v365; // [sp+D4h] [bp-270h]
  int v366; // [sp+D8h] [bp-26Ch]
  char *v367; // [sp+D8h] [bp-26Ch]
  _QWORD *v368; // [sp+D8h] [bp-26Ch]
  _QWORD *v369; // [sp+D8h] [bp-26Ch]
  char *v370; // [sp+DCh] [bp-268h]
  _QWORD *v371; // [sp+DCh] [bp-268h]
  _QWORD *v372; // [sp+DCh] [bp-268h]
  unsigned int v373; // [sp+E0h] [bp-264h]
  _QWORD *v374; // [sp+E0h] [bp-264h]
  _QWORD *v375; // [sp+E0h] [bp-264h]
  int v376; // [sp+E0h] [bp-264h]
  _QWORD *v377; // [sp+E0h] [bp-264h]
  _QWORD *v378; // [sp+E0h] [bp-264h]
  _QWORD *v379; // [sp+E0h] [bp-264h]
  _QWORD *v380; // [sp+E4h] [bp-260h]
  _QWORD *v381; // [sp+E4h] [bp-260h]
  int v382; // [sp+E4h] [bp-260h]
  _QWORD *v383; // [sp+E4h] [bp-260h]
  _QWORD *v384; // [sp+E4h] [bp-260h]
  _DWORD *v385; // [sp+E4h] [bp-260h]
  char *v386; // [sp+E8h] [bp-25Ch]
  _QWORD *v387; // [sp+E8h] [bp-25Ch]
  _QWORD *v388; // [sp+E8h] [bp-25Ch]
  _QWORD *v389; // [sp+E8h] [bp-25Ch]
  _DWORD *v390; // [sp+E8h] [bp-25Ch]
  _QWORD *v391; // [sp+ECh] [bp-258h]
  _QWORD *v392; // [sp+ECh] [bp-258h]
  _DWORD *v393; // [sp+ECh] [bp-258h]
  _QWORD *v394; // [sp+ECh] [bp-258h]
  _QWORD *v395; // [sp+F0h] [bp-254h]
  _QWORD *v396; // [sp+F0h] [bp-254h]
  char *v397; // [sp+F4h] [bp-250h]
  char *v398; // [sp+F4h] [bp-250h]
  _QWORD *v399; // [sp+F4h] [bp-250h]
  _QWORD *v400; // [sp+F8h] [bp-24Ch]
  _QWORD *v401; // [sp+F8h] [bp-24Ch]
  _QWORD *v402; // [sp+F8h] [bp-24Ch]
  int v403; // [sp+FCh] [bp-248h]
  _QWORD *v404; // [sp+FCh] [bp-248h]
  _QWORD *v405; // [sp+FCh] [bp-248h]
  char *v406; // [sp+100h] [bp-244h]
  int v407; // [sp+100h] [bp-244h]
  _QWORD *v408; // [sp+100h] [bp-244h]
  _QWORD *v409; // [sp+100h] [bp-244h]
  _QWORD *v410; // [sp+104h] [bp-240h]
  char *v411; // [sp+104h] [bp-240h]
  _QWORD *v412; // [sp+104h] [bp-240h]
  _QWORD *v413; // [sp+108h] [bp-23Ch]
  _DWORD *v414; // [sp+108h] [bp-23Ch]
  _QWORD *v415; // [sp+108h] [bp-23Ch]
  _QWORD *v416; // [sp+108h] [bp-23Ch]
  int v417; // [sp+10Ch] [bp-238h]
  _QWORD *v418; // [sp+10Ch] [bp-238h]
  _QWORD *v419; // [sp+10Ch] [bp-238h]
  char *v420; // [sp+110h] [bp-234h]
  char *v421; // [sp+110h] [bp-234h]
  _QWORD *v422; // [sp+110h] [bp-234h]
  int v423; // [sp+114h] [bp-230h]
  _QWORD *v424; // [sp+114h] [bp-230h]
  _QWORD *v425; // [sp+114h] [bp-230h]
  _QWORD *v426; // [sp+114h] [bp-230h]
  int v427; // [sp+118h] [bp-22Ch]
  _QWORD *v428; // [sp+118h] [bp-22Ch]
  _QWORD *v429; // [sp+118h] [bp-22Ch]
  char *v430; // [sp+11Ch] [bp-228h]
  char *v431; // [sp+11Ch] [bp-228h]
  _QWORD *v432; // [sp+11Ch] [bp-228h]
  _QWORD *v433; // [sp+120h] [bp-224h]
  int v434; // [sp+120h] [bp-224h]
  char *v435; // [sp+124h] [bp-220h]
  char *v436; // [sp+124h] [bp-220h]
  int v437; // [sp+128h] [bp-21Ch]
  _QWORD *v438; // [sp+128h] [bp-21Ch]
  _QWORD *v439; // [sp+12Ch] [bp-218h]
  char *v440; // [sp+12Ch] [bp-218h]
  char *v441; // [sp+130h] [bp-214h]
  _QWORD *v442; // [sp+134h] [bp-210h]
  char *v443; // [sp+134h] [bp-210h]
  int v444; // [sp+138h] [bp-20Ch]
  _QWORD *v445; // [sp+138h] [bp-20Ch]
  _DWORD *v446; // [sp+138h] [bp-20Ch]
  int v447; // [sp+13Ch] [bp-208h]
  _QWORD *v448; // [sp+13Ch] [bp-208h]
  char *v449; // [sp+13Ch] [bp-208h]
  char *v450; // [sp+140h] [bp-204h]
  _DWORD *v451; // [sp+140h] [bp-204h]
  char *v452; // [sp+144h] [bp-200h]
  char *v453; // [sp+144h] [bp-200h]
  int v454; // [sp+148h] [bp-1FCh]
  _QWORD *v455; // [sp+148h] [bp-1FCh]
  _DWORD *v456; // [sp+148h] [bp-1FCh]
  int v457; // [sp+14Ch] [bp-1F8h]
  _QWORD *v458; // [sp+14Ch] [bp-1F8h]
  char *v459; // [sp+14Ch] [bp-1F8h]
  _QWORD *v460; // [sp+150h] [bp-1F4h]
  char *v461; // [sp+150h] [bp-1F4h]
  unsigned int v462; // [sp+154h] [bp-1F0h]
  _QWORD *v463; // [sp+154h] [bp-1F0h]
  _DWORD *v464; // [sp+154h] [bp-1F0h]
  int v465; // [sp+158h] [bp-1ECh]
  _QWORD *v466; // [sp+158h] [bp-1ECh]
  unsigned int v467; // [sp+158h] [bp-1ECh]
  int v468; // [sp+158h] [bp-1ECh]
  _QWORD *v469; // [sp+158h] [bp-1ECh]
  int v470; // [sp+15Ch] [bp-1E8h]
  _QWORD *v471; // [sp+15Ch] [bp-1E8h]
  _DWORD *v472; // [sp+15Ch] [bp-1E8h]
  char *v473; // [sp+160h] [bp-1E4h]
  int v474; // [sp+160h] [bp-1E4h]
  int v475; // [sp+160h] [bp-1E4h]
  _QWORD *v476; // [sp+160h] [bp-1E4h]
  int v477; // [sp+164h] [bp-1E0h]
  char *v478; // [sp+164h] [bp-1E0h]
  unsigned int v479; // [sp+168h] [bp-1DCh]
  int v480; // [sp+168h] [bp-1DCh]
  int v481; // [sp+168h] [bp-1DCh]
  _QWORD *v482; // [sp+168h] [bp-1DCh]
  int v483; // [sp+16Ch] [bp-1D8h]
  int v484; // [sp+16Ch] [bp-1D8h]
  _QWORD *v485; // [sp+16Ch] [bp-1D8h]
  unsigned int v486; // [sp+170h] [bp-1D4h]
  int v487; // [sp+170h] [bp-1D4h]
  _DWORD *v488; // [sp+170h] [bp-1D4h]
  int v489; // [sp+174h] [bp-1D0h]
  int v490; // [sp+174h] [bp-1D0h]
  _QWORD *v491; // [sp+174h] [bp-1D0h]
  int v492; // [sp+178h] [bp-1CCh]
  int v493; // [sp+178h] [bp-1CCh]
  char *v494; // [sp+178h] [bp-1CCh]
  int v495; // [sp+17Ch] [bp-1C8h]
  int v496; // [sp+180h] [bp-1C4h]
  int v497; // [sp+180h] [bp-1C4h]
  int v498; // [sp+184h] [bp-1C0h]
  int v499; // [sp+188h] [bp-1BCh]
  int v500; // [sp+18Ch] [bp-1B8h]
  int v501; // [sp+190h] [bp-1B4h]
  unsigned int v502; // [sp+194h] [bp-1B0h]
  void *v504; // [sp+1B0h] [bp-194h] BYREF
  int v505; // [sp+1B4h] [bp-190h]
  _BYTE dest[128]; // [sp+1B8h] [bp-18Ch] BYREF
  _QWORD v507[16]; // [sp+238h] [bp-10Ch] BYREF
  char v508[140]; // [sp+2B8h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v504 = a4;
  v505 = a1 + 272;
  v6 = *(_QWORD *)(a1 + 264);
  v508[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x77 )
  {
    v7 = 256 - v5;
    v8 = v6 + 2;
  }
  else
  {
    v7 = 128 - v5;
    v8 = v6 + 1;
  }
  memset(&v508[1], 0, v7 - 9);
  v508[v7 - 8] = HIBYTE(v8);
  v9 = v7;
  v10 = &v508[v7 - 8];
  v10[5] = BYTE2(v8);
  v10[6] = BYTE1(v8);
  v10[4] = BYTE3(v8);
  v10[1] = BYTE6(v8);
  v10[2] = BYTE5(v8);
  v10[3] = BYTE4(v8);
  v10[7] = v8;
  sph_groestl384_0(a1, v508, v9);
  memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
  memcpy(v507, dest, sizeof(v507));
  v353 = v507[0];
  v286 = HIDWORD(v507[1]);
  v312 = v507[2];
  v348 = HIDWORD(v507[3]);
  v293 = v507[3];
  v303 = v507[4];
  v164 = 0;
  v318 = HIDWORD(v507[4]);
  v321 = HIDWORD(v507[5]);
  v280 = v507[5];
  v298 = HIDWORD(v507[6]);
  v266 = v507[6];
  v324 = HIDWORD(v507[7]);
  v227 = v507[7];
  v182 = v507[8];
  v11 = v507[14];
  v12 = v507[15];
  v326 = HIDWORD(v507[8]);
  v13 = HIDWORD(v507[15]);
  v328 = HIDWORD(v507[9]);
  v215 = v507[9];
  v221 = HIDWORD(v507[10]);
  v169 = v507[10];
  v231 = v507[11];
  v238 = v507[12];
  v246 = v507[13];
  v257 = HIDWORD(v507[14]);
  v308 = v507[1];
  do
  {
    v174 = v353 ^ v164;
    v271 = HIDWORD(v312) ^ ((unsigned __int64)(v164 + 32) >> 32);
    v186 = v348 ^ ((unsigned __int64)(v164 + 48) >> 32);
    v14 = v303 ^ (v164 + 64);
    v193 = v318 ^ ((unsigned __int64)(v164 + 64) >> 32);
    v275 = v280 ^ (v164 + 80);
    v165 = v321 ^ ((unsigned __int64)(v164 + 80) >> 32);
    v197 = v266 ^ (v164 + 96);
    v199 = ((unsigned __int64)(v164 + 96) >> 32) ^ v298;
    v203 = v227 ^ (v164 + 112);
    v208 = v324 ^ ((unsigned __int64)(v164 + 112) >> 32);
    v281 = v182 ^ (v164 + 128);
    v216 = v215 ^ (v164 + 144);
    v218 = v169 ^ (v164 + 160);
    v228 = v231 ^ (v164 + 176);
    v15 = HIDWORD(v231) ^ ((unsigned __int64)(v164 + 176) >> 32);
    v232 = v238 ^ (v164 + 192);
    v16 = HIDWORD(v238) ^ ((unsigned __int64)(v164 + 192) >> 32);
    v235 = v246 ^ (v164 + 208);
    v17 = HIDWORD(v246) ^ ((unsigned __int64)(v164 + 208) >> 32);
    v239 = (v164 + 224) ^ v11;
    v252 = ((unsigned __int64)(v164 + 240) >> 32) ^ v13;
    v242 = v257 ^ ((unsigned __int64)(v164 + 224) >> 32);
    v247 = (v164 + 240) ^ v12;
    v183 = v308 ^ (v164 + 16);
    v18 = (v164 + 32) ^ v312;
    v258 = v293 ^ (v164 + 48);
    v170 = v328 ^ ((unsigned __int64)(v164 + 144) >> 32);
    v222 = v221 ^ ((unsigned __int64)(v164 + 160) >> 32);
    v304 = HIBYTE(v17);
    v373 = v14;
    v299 = v17;
    v290 = v15;
    v331 = HIBYTE(v199);
    v336 = HIBYTE(v208);
    v462 = (unsigned int)(HIDWORD(v353) ^ HIDWORD(v164)) >> 24;
    v294 = v16;
    v343 = (v326 ^ ((unsigned __int64)(v164 + 128) >> 32)) >> 24;
    v16 >>= 24;
    v267 = v286 ^ ((unsigned __int64)(v164 + 16) >> 32);
    v479 = HIBYTE(v267);
    v486 = HIBYTE(v271);
    v329 = HIBYTE(v165);
    v19 = &dword_161D58[2 * HIBYTE(v15)];
    v332 = (char *)&unk_163550 + 8 * HIBYTE(v14);
    v354 = (char *)&unk_163550 + 8 * HIBYTE(v275);
    HIDWORD(v312) = *v19;
    v370 = (char *)&unk_163550 + 8 * HIBYTE(v197);
    v386 = (char *)&unk_163550 + 8 * HIBYTE(v203);
    v397 = (char *)&unk_163550 + 8 * HIBYTE(v216);
    v262 = (char *)&unk_163550 + 8 * HIBYTE(v281);
    v406 = (char *)&unk_163550 + 8 * HIBYTE(v218);
    v420 = (char *)&unk_163550 + 8 * HIBYTE(v228);
    v430 = (char *)&unk_163550 + 8 * HIBYTE(v232);
    v450 = (char *)&unk_163550 + 8 * HIBYTE(v247);
    v441 = (char *)&unk_163550 + 8 * HIBYTE(v239);
    v435 = (char *)&unk_163550 + 8 * HIBYTE(v235);
    v452 = (char *)&unk_163550 + 8 * BYTE3(v174);
    v20 = &qword_162D60[BYTE2(v18)];
    v21 = &qword_162560[BYTE1(v183)];
    v22 = &qword_163D60[(unsigned __int8)v193];
    v339 = &qword_163D60[(unsigned __int8)v165];
    v358 = &qword_163D60[(unsigned __int8)v199];
    v23 = HIDWORD(qword_161558[(unsigned __int8)v174])
        ^ ((unsigned __int64)(v164 + 1) >> 32)
        ^ v19[1]
        ^ *((_DWORD *)v21 - 1)
        ^ *((_DWORD *)v20 - 1);
    v24 = (char *)&unk_163550 + 8 * HIBYTE(v258);
    v25 = BYTE2(v208);
    v26 = LODWORD(qword_161558[(unsigned __int8)v174]) ^ (v164 + 1) ^ HIDWORD(v312) ^ *((_DWORD *)v21 - 2);
    v366 = BYTE2(v165);
    v27 = &qword_162560[BYTE1(v18)];
    v28 = v26 ^ *((_DWORD *)v20 - 2);
    v29 = &qword_162D60[BYTE2(v258)];
    v417 = (unsigned __int8)((v164 + 32) ^ v312);
    v473 = (char *)&unk_163550 + 8 * HIBYTE(v18);
    v309 = BYTE1(v208);
    v209 = &qword_163D60[(unsigned __int8)(v324 ^ ((unsigned __int64)(v164 + 112) >> 32))];
    v287 = (unsigned __int8)((v326 ^ ((unsigned __int64)(v164 + 128) >> 32)) >> 16);
    v315 = (unsigned __int8)((unsigned __int16)(v326 ^ ((unsigned __int64)(v164 + 128) >> 32)) >> 8);
    v391 = &qword_163D60[(unsigned __int8)(v326 ^ ((unsigned __int64)(v164 + 128) >> 32))];
    v423 = (unsigned __int8)v258;
    v403 = dword_164558[2 * BYTE1(v199) + 1];
    v349 = &qword_162560[BYTE1(v258)];
    v259 = dword_164558[2 * BYTE1(v199)];
    v30 = v23
        ^ *((_DWORD *)v24 + 3)
        ^ *((_DWORD *)v22 - 1)
        ^ dword_164558[2 * BYTE1(v165) + 1]
        ^ dword_164D58[2 * BYTE2(v199) + 1];
    v166 = v28
         ^ *((_DWORD *)v24 + 2)
         ^ *((_DWORD *)v22 - 2)
         ^ dword_164558[2 * BYTE1(v165)]
         ^ dword_164D58[2 * BYTE2(v199)];
    v31 = *((_DWORD *)v339 - 2);
    v200 = v30;
    v32 = *((_DWORD *)v339 - 1);
    v33 = *((_DWORD *)v332 + 2);
    v34 = *((_DWORD *)v332 + 3);
    v35 = &qword_162D60[BYTE2(v373)];
    v454 = (unsigned __int8)v373;
    v333 = &qword_162560[BYTE1(v373)];
    v340 = &qword_162D60[BYTE2(v275)];
    v465 = (unsigned __int8)v275;
    v374 = &qword_162560[BYTE1(v275)];
    v380 = &qword_162D60[BYTE2(v197)];
    v457 = BYTE1(v170);
    v276 = *((_DWORD *)v358 - 2);
    v36 = v31
        ^ v33
        ^ LODWORD(qword_161558[(unsigned __int8)v183])
        ^ dword_161D58[2 * v16]
        ^ (v164 + 17)
        ^ *((_DWORD *)v27 - 2)
        ^ *((_DWORD *)v29 - 2)
        ^ v259;
    v427 = *((_DWORD *)v209 - 2);
    v260 = v403
         ^ v32
         ^ v34
         ^ HIDWORD(qword_161558[(unsigned __int8)v183])
         ^ dword_161D58[2 * v16 + 1]
         ^ ((unsigned __int64)(v164 + 17) >> 32)
         ^ *((_DWORD *)v27 - 1)
         ^ *((_DWORD *)v29 - 1)
         ^ dword_164D58[2 * v25 + 1];
    v437 = *((_DWORD *)v209 - 1);
    v210 = v36 ^ dword_164D58[2 * v25];
    v447 = dword_164D58[2 * BYTE2(v170) + 1];
    v319 = *((_DWORD *)v370 + 3);
    v37 = *((_DWORD *)v370 + 2);
    v477 = (unsigned __int8)v197;
    v444 = dword_164D58[2 * BYTE2(v170)];
    v38 = &qword_162560[BYTE1(v197)];
    v39 = LODWORD(qword_161558[v423]) ^ dword_161D58[2 * HIBYTE(v242)];
    v40 = dword_161D58[2 * HIBYTE(v242) + 1] ^ HIDWORD(qword_161558[v423]) ^ ((unsigned __int64)(v164 + 49) >> 32);
    v41 = LODWORD(qword_161558[v417])
        ^ dword_161D58[2 * v304]
        ^ (v164 + 33)
        ^ *((_DWORD *)v349 - 2)
        ^ *((_DWORD *)v35 - 2)
        ^ *((_DWORD *)v354 + 2);
    v345 = &qword_162D60[BYTE2(v203)];
    v42 = HIDWORD(qword_161558[v417])
        ^ dword_161D58[2 * v304 + 1]
        ^ ((unsigned __int64)(v164 + 33) >> 32)
        ^ *((_DWORD *)v349 - 1)
        ^ *((_DWORD *)v35 - 1)
        ^ *((_DWORD *)v354 + 3)
        ^ *((_DWORD *)v358 - 1);
    v355 = &qword_163D60[(unsigned __int8)v170];
    v359 = HIBYTE(v170);
    v470 = BYTE1(v222);
    v483 = (unsigned __int8)v203;
    v371 = &qword_162560[BYTE1(v203)];
    v395 = &qword_162D60[BYTE2(v281)];
    v361 = HIBYTE(v222);
    v43 = &qword_163D60[(unsigned __int8)v222];
    v44 = v41 ^ v276;
    v277 = (unsigned __int8)v281;
    v400 = &qword_162560[BYTE1(v281)];
    v410 = &qword_163D60[(unsigned __int8)v290];
    v404 = &qword_162D60[BYTE2(v216)];
    v45 = BYTE2(v294);
    v489 = BYTE1(v294);
    v198 = v42 ^ dword_164558[2 * v309 + 1] ^ dword_164D58[2 * v287 + 1];
    v424 = &qword_163D60[(unsigned __int8)v294];
    v492 = BYTE2(v299);
    v295 = (unsigned __int8)v216;
    v413 = &qword_162560[BYTE1(v216)];
    v171 = v44 ^ dword_164558[2 * v309] ^ dword_164D58[2 * v287];
    v418 = &qword_162D60[BYTE2(v218)];
    v282 = BYTE1(v299);
    v433 = &qword_163D60[(unsigned __int8)v299];
    v288 = BYTE2(v242);
    v204 = v39
         ^ (v164 + 49)
         ^ *((_DWORD *)v333 - 2)
         ^ *((_DWORD *)v340 - 2)
         ^ v37
         ^ v427
         ^ dword_164558[2 * v315]
         ^ v444;
    v217 = v40 ^ *((_DWORD *)v333 - 1) ^ *((_DWORD *)v340 - 1) ^ v319 ^ v437 ^ dword_164558[2 * v315 + 1] ^ v447;
    v310 = (unsigned __int8)v218;
    v428 = &qword_162560[BYTE1(v218)];
    v46 = *((_DWORD *)v374 - 1)
        ^ dword_161D58[2 * HIBYTE(v252) + 1]
        ^ HIDWORD(qword_161558[v454])
        ^ ((unsigned __int64)(v164 + 65) >> 32);
    v47 = LODWORD(qword_161558[v454]) ^ dword_161D58[2 * HIBYTE(v252)] ^ (v164 + 65) ^ *((_DWORD *)v374 - 2);
    v375 = &qword_162D60[BYTE2(v228)];
    v48 = (unsigned __int8)v242;
    v243 = BYTE1(v242);
    v438 = &qword_163D60[v48];
    v49 = v46 ^ *((_DWORD *)v380 - 1);
    v300 = BYTE2(v252);
    v50 = v47 ^ *((_DWORD *)v380 - 2);
    v305 = BYTE6(v174);
    v320 = (unsigned __int8)v228;
    v381 = &qword_162560[BYTE1(v228)];
    v51 = *((_DWORD *)v386 + 2);
    v52 = v49 ^ *((_DWORD *)v386 + 3);
    v387 = &qword_162D60[BYTE2(v232)];
    v313 = BYTE1(v252);
    v442 = &qword_163D60[(unsigned __int8)v252];
    v53 = *((_DWORD *)v391 - 1) ^ v52 ^ dword_164558[2 * v457 + 1];
    v316 = BYTE5(v174);
    v54 = *((_DWORD *)v391 - 2) ^ v50 ^ v51 ^ dword_164558[2 * v457] ^ dword_164D58[2 * BYTE2(v222)];
    v253 = &qword_163D60[BYTE4(v174)];
    v334 = (unsigned __int8)v232;
    v392 = &qword_162560[BYTE1(v232)];
    v219 = v53 ^ dword_164D58[2 * BYTE2(v222) + 1];
    v439 = &qword_162D60[BYTE2(v235)];
    v322 = BYTE2(v267);
    v179 = v54;
    v55 = dword_161D58[2 * v462] ^ (v164 + 81) ^ LODWORD(qword_161558[v465]) ^ *((_DWORD *)v38 - 2);
    v56 = dword_161D58[2 * v462 + 1]
        ^ ((unsigned __int64)(v164 + 81) >> 32)
        ^ HIDWORD(qword_161558[v465])
        ^ *((_DWORD *)v38 - 1);
    v341 = BYTE1(v267);
    v57 = *((_DWORD *)v345 - 1);
    v460 = &qword_163D60[(unsigned __int8)v267];
    LOWORD(v38) = v271;
    v58 = v55 ^ *((_DWORD *)v345 - 2);
    v272 = BYTE2(v271);
    v346 = BYTE1(v38);
    v268 = &qword_163D60[(unsigned __int8)v38];
    v59 = v56 ^ v57 ^ *((_DWORD *)v262 + 3);
    v60 = v58 ^ *((_DWORD *)v262 + 2);
    v350 = BYTE2(v186);
    v263 = (unsigned __int8)v235;
    v445 = &qword_162560[BYTE1(v235)];
    v61 = v59 ^ *((_DWORD *)v355 - 1);
    v62 = v60 ^ *((_DWORD *)v355 - 2);
    v448 = &qword_162D60[BYTE2(v239)];
    v356 = (unsigned __int8)v239;
    v455 = &qword_162560[BYTE1(v239)];
    v223 = dword_164558[2 * BYTE1(v222) + 1] ^ v61 ^ dword_164D58[2 * BYTE2(v290) + 1];
    v458 = &qword_162D60[BYTE2(v247)];
    v463 = &qword_162D60[BYTE2(v174)];
    v63 = v62 ^ dword_164558[2 * v470] ^ dword_164D58[2 * BYTE2(v290)];
    v471 = &qword_162560[BYTE1(v174)];
    v175 = v63;
    v466 = &qword_162560[BYTE1(v247)];
    v229 = LODWORD(qword_161558[v477])
         ^ dword_161D58[2 * v479]
         ^ (v164 + 97)
         ^ *((_DWORD *)v371 - 2)
         ^ *((_DWORD *)v395 - 2)
         ^ *((_DWORD *)v397 + 2)
         ^ *((_DWORD *)v43 - 2)
         ^ dword_164558[2 * BYTE1(v290)]
         ^ dword_164D58[2 * v45];
    v64 = LODWORD(qword_161558[v483]) ^ dword_161D58[2 * v486];
    v291 = HIDWORD(qword_161558[v477])
         ^ dword_161D58[2 * v479 + 1]
         ^ ((unsigned __int64)(v164 + 97) >> 32)
         ^ *((_DWORD *)v371 - 1)
         ^ *((_DWORD *)v395 - 1)
         ^ *((_DWORD *)v397 + 3)
         ^ *((_DWORD *)v43 - 1)
         ^ dword_164558[2 * BYTE1(v290) + 1]
         ^ dword_164D58[2 * v45 + 1];
    v236 = HIDWORD(qword_161558[v483])
         ^ dword_161D58[2 * v486 + 1]
         ^ ((unsigned __int64)(v164 + 113) >> 32)
         ^ *((_DWORD *)v400 - 1)
         ^ *((_DWORD *)v404 - 1)
         ^ *((_DWORD *)v406 + 3)
         ^ *((_DWORD *)v410 - 1)
         ^ dword_164558[2 * v489 + 1]
         ^ dword_164D58[2 * v492 + 1];
    v487 = dword_164558[2 * v243 + 1];
    v233 = v64
         ^ (v164 + 113)
         ^ *((_DWORD *)v400 - 2)
         ^ *((_DWORD *)v404 - 2)
         ^ *((_DWORD *)v406 + 2)
         ^ *((_DWORD *)v410 - 2)
         ^ dword_164558[2 * v489]
         ^ dword_164D58[2 * v492];
    v484 = dword_164558[2 * v243];
    v490 = dword_164D58[2 * v300];
    v493 = dword_164D58[2 * v300 + 1];
    v65 = *((_DWORD *)v420 + 3)
        ^ HIDWORD(qword_161558[v277])
        ^ dword_161D58[2 * HIBYTE(v186) + 1]
        ^ ((unsigned __int64)(v164 + 129) >> 32)
        ^ *((_DWORD *)v413 - 1)
        ^ *((_DWORD *)v418 - 1);
    v66 = *((_DWORD *)v418 - 2)
        ^ LODWORD(qword_161558[v277])
        ^ dword_161D58[2 * HIBYTE(v186)]
        ^ (v164 + 129)
        ^ *((_DWORD *)v413 - 2)
        ^ *((_DWORD *)v420 + 2);
    v414 = &dword_164D58[2 * BYTE2(v186)];
    v240 = v66 ^ *((_DWORD *)v424 - 2) ^ dword_164558[2 * v282] ^ dword_164D58[2 * v288];
    v244 = v65 ^ *((_DWORD *)v424 - 1) ^ dword_164558[2 * v282 + 1] ^ dword_164D58[2 * v288 + 1];
    v67 = dword_164D58[2 * v305];
    v68 = *((_DWORD *)v375 - 2)
        ^ dword_161D58[2 * HIBYTE(v193)]
        ^ LODWORD(qword_161558[v295])
        ^ (v164 + 145)
        ^ *((_DWORD *)v428 - 2)
        ^ *((_DWORD *)v430 + 2)
        ^ *((_DWORD *)v433 - 2);
    v69 = &dword_164D58[2 * v305];
    v306 = *((_DWORD *)v375 - 1)
         ^ dword_161D58[2 * HIBYTE(v193) + 1]
         ^ HIDWORD(qword_161558[v295])
         ^ ((unsigned __int64)(v164 + 145) >> 32)
         ^ *((_DWORD *)v428 - 1)
         ^ *((_DWORD *)v430 + 3)
         ^ *((_DWORD *)v433 - 1);
    v70 = dword_161D58[2 * v329 + 1];
    v71 = dword_161D58[2 * v329];
    v330 = dword_164558[2 * v313];
    v376 = dword_164558[2 * v313 + 1];
    v72 = v67 ^ LODWORD(qword_161558[v310]) ^ (v164 + 161) ^ v71;
    v301 = v69[1] ^ HIDWORD(qword_161558[v310]) ^ (__CFADD__((_DWORD)v164, 161) + HIDWORD(v164)) ^ v70;
    v296 = &qword_162D60[BYTE2(v183)];
    v283 = (char *)&unk_163550 + 8 * HIBYTE(v183);
    v73 = *((_DWORD *)v253 - 2);
    v74 = (unsigned __int8)v186;
    v187 = BYTE1(v186);
    v75 = *((_DWORD *)v253 - 1);
    v184 = &qword_163D60[v74];
    v76 = dword_164D58[2 * v272];
    v314 = v301 ^ *((_DWORD *)v381 - 1) ^ *((_DWORD *)v387 - 1) ^ *((_DWORD *)v435 + 3);
    v254 = &dword_164D58[2 * BYTE2(v193)];
    v77 = qword_161558[v263];
    v78 = HIDWORD(qword_161558[v263]);
    v327 = HIDWORD(qword_161558[v334])
         ^ v75
         ^ ((unsigned __int64)(v164 + 193) >> 32)
         ^ dword_161D58[2 * v336 + 1]
         ^ *((_DWORD *)v445 - 1)
         ^ *((_DWORD *)v448 - 1)
         ^ *((_DWORD *)v450 + 3);
    v264 = LODWORD(qword_161558[v334])
         ^ v73
         ^ (v164 + 193)
         ^ dword_161D58[2 * v336]
         ^ *((_DWORD *)v445 - 2)
         ^ *((_DWORD *)v448 - 2);
    v79 = *((_DWORD *)v452 + 3) ^ v78;
    v80 = HIDWORD(qword_161558[(unsigned __int8)v247]) ^ *((_DWORD *)v471 - 1) ^ ((unsigned __int64)(v164 + 241) >> 32);
    v278 = *((_DWORD *)v283 + 3);
    v81 = *((_DWORD *)v463 - 2)
        ^ LODWORD(qword_161558[v356])
        ^ (v164 + 225)
        ^ dword_161D58[2 * v359]
        ^ *((_DWORD *)v466 - 2)
        ^ *((_DWORD *)v283 + 2);
    v82 = *((_DWORD *)v184 - 1);
    v83 = dword_164558[2 * v187 + 1];
    v284 = *((_DWORD *)v268 - 1);
    v84 = v81 ^ *((_DWORD *)v268 - 2) ^ dword_164558[2 * v187];
    v188 = dword_164558[2 * BYTE1(v193) + 1];
    v85 = *((_DWORD *)v471 - 2)
        ^ LODWORD(qword_161558[(unsigned __int8)v247])
        ^ (v164 + 241)
        ^ dword_161D58[2 * v361]
        ^ *((_DWORD *)v296 - 2)
        ^ *((_DWORD *)v473 + 2)
        ^ *((_DWORD *)v184 - 2)
        ^ dword_164558[2 * BYTE1(v193)];
    v269 = v254[1];
    v86 = *v254;
    v248 = HIDWORD(qword_161558[v356])
         ^ *((_DWORD *)v463 - 1)
         ^ ((unsigned __int64)(v164 + 225) >> 32)
         ^ dword_161D58[2 * v359 + 1]
         ^ *((_DWORD *)v466 - 1)
         ^ v278
         ^ v284
         ^ v83;
    v185 = v68 ^ v484 ^ v490;
    v194 = v72 ^ *((_DWORD *)v381 - 2) ^ *((_DWORD *)v387 - 2) ^ *((_DWORD *)v435 + 2) ^ *((_DWORD *)v438 - 2) ^ v330;
    v255 = LODWORD(qword_161558[v320])
         ^ dword_164558[2 * v316]
         ^ (v164 + 177)
         ^ dword_161D58[2 * v331]
         ^ *((_DWORD *)v392 - 2)
         ^ *((_DWORD *)v439 - 2)
         ^ *((_DWORD *)v441 + 2)
         ^ *((_DWORD *)v442 - 2)
         ^ dword_164D58[2 * v322];
    v467 = v327 ^ dword_164558[2 * v341 + 1] ^ dword_164D58[2 * v272 + 1];
    v273 = v79
         ^ ((unsigned __int64)(v164 + 209) >> 32)
         ^ dword_161D58[2 * v343 + 1]
         ^ *((_DWORD *)v455 - 1)
         ^ *((_DWORD *)v458 - 1)
         ^ *((_DWORD *)v460 - 1)
         ^ dword_164558[2 * v346 + 1]
         ^ v414[1];
    v302 = v84 ^ v86;
    v285 = v80
         ^ dword_161D58[2 * v361 + 1]
         ^ *((_DWORD *)v296 - 1)
         ^ *((_DWORD *)v473 + 3)
         ^ v82
         ^ v188
         ^ dword_164D58[2 * v366 + 1];
    v87 = v248 ^ v269;
    v265 = v264 ^ *((_DWORD *)v450 + 2) ^ dword_164558[2 * v341] ^ v76;
    v270 = v77
         ^ *((_DWORD *)v452 + 2)
         ^ (v164 + 209)
         ^ dword_161D58[2 * v343]
         ^ *((_DWORD *)v455 - 2)
         ^ *((_DWORD *)v458 - 2)
         ^ *((_DWORD *)v460 - 2)
         ^ dword_164558[2 * v346]
         ^ dword_164D58[2 * v350];
    v279 = v85 ^ dword_164D58[2 * v366];
    v189 = v306 ^ v487 ^ v493;
    v249 = v314 ^ *((_DWORD *)v438 - 1) ^ v376;
    v297 = dword_164558[2 * v316 + 1]
         ^ HIDWORD(qword_161558[v320])
         ^ ((unsigned __int64)(v164 + 177) >> 32)
         ^ dword_161D58[2 * v331 + 1]
         ^ *((_DWORD *)v392 - 1)
         ^ *((_DWORD *)v439 - 1)
         ^ *((_DWORD *)v441 + 3)
         ^ *((_DWORD *)v442 - 1)
         ^ dword_164D58[2 * v322 + 1];
    v337 = HIBYTE(v291);
    v317 = HIBYTE(v87);
    v307 = v87;
    v342 = HIBYTE(v236);
    v344 = HIBYTE(v244);
    v335 = HIBYTE(v223);
    v347 = HIBYTE(v189);
    v362 = (char *)&unk_163550 + 8 * HIBYTE(v179);
    v398 = (char *)&unk_163550 + 8 * HIBYTE(v229);
    v351 = (char *)&unk_163550 + 8 * HIBYTE(v204);
    v421 = (char *)&unk_163550 + 8 * HIBYTE(v240);
    v367 = (char *)&unk_163550 + 8 * HIBYTE(v175);
    v393 = &dword_161D58[2 * HIBYTE(v87)];
    v431 = (char *)&unk_163550 + 8 * HIBYTE(v185);
    v411 = (char *)&unk_163550 + 8 * HIBYTE(v233);
    v436 = (char *)&unk_163550 + 8 * HIBYTE(v194);
    v443 = (char *)&unk_163550 + 8 * HIBYTE(v265);
    v440 = (char *)&unk_163550 + 8 * HIBYTE(v255);
    v502 = HIBYTE(v249);
    v449 = (char *)&unk_163550 + 8 * HIBYTE(v270);
    v459 = (char *)&unk_163550 + 8 * HIBYTE(v279);
    v456 = &dword_161D58[2 * HIBYTE(v236)];
    v451 = &dword_161D58[2 * HIBYTE(v291)];
    v453 = (char *)&unk_163550 + 8 * HIBYTE(v302);
    v464 = &dword_161D58[2 * HIBYTE(v244)];
    v472 = &dword_161D58[2 * HIBYTE(v189)];
    v488 = &dword_161D58[2 * HIBYTE(v249)];
    v446 = &dword_161D58[2 * HIBYTE(v223)];
    v461 = (char *)&unk_163550 + 8 * HIBYTE(v166);
    v494 = (char *)&unk_163550 + 8 * HIBYTE(v171);
    v478 = (char *)&unk_163550 + 8 * HIBYTE(v210);
    v88 = &qword_163D60[(unsigned __int8)v219];
    v89 = &qword_162560[BYTE1(v210)];
    v90 = BYTE2(v291);
    v382 = BYTE1(v291);
    v388 = &qword_163D60[(unsigned __int8)v291];
    v360 = *((_DWORD *)v88 - 2);
    v407 = *((_DWORD *)v88 - 1);
    v164 += 2;
    v91 = &dword_161D58[2 * HIBYTE(v297)];
    v92 = *v91;
    v93 = v91[1];
    v94 = v92 ^ dword_164558[2 * BYTE1(v223)];
    v95 = HIDWORD(v164) == 0;
    v96 = v210;
    if ( !HIDWORD(v164) )
      v95 = (_DWORD)v164 == 14;
    v97 = v93 ^ dword_164558[2 * BYTE1(v223) + 1] ^ HIDWORD(qword_161558[(unsigned __int8)v166]);
    v491 = &qword_162D60[BYTE2(v210)];
    v292 = BYTE2(v223);
    v98 = &qword_163D60[(unsigned __int8)v223];
    v99 = &qword_162560[BYTE1(v171)];
    v311 = &qword_162D60[BYTE2(v204)];
    v100 = dword_164D58[2 * v90 + 1];
    v357 = dword_164D58[2 * v90];
    v224 = (unsigned __int8)v204;
    v101 = *((_DWORD *)v89 - 1);
    v377 = &qword_162560[BYTE1(v204)];
    v102 = v94 ^ LODWORD(qword_161558[(unsigned __int8)v166]) ^ *((_DWORD *)v89 - 2);
    v103 = &qword_162D60[BYTE2(v171)];
    v480 = dword_164558[2 * v382];
    v289 = dword_164558[2 * v382 + 1];
    v383 = &qword_162D60[BYTE2(v179)];
    v104 = v97 ^ v101 ^ *((_DWORD *)v103 - 1) ^ *((_DWORD *)v351 + 3);
    v105 = *((_DWORD *)v351 + 2) ^ *((_DWORD *)v103 - 2) ^ v102;
    v205 = BYTE1(v236);
    v401 = &qword_163D60[(unsigned __int8)v236];
    v106 = qword_161558[(unsigned __int8)v210];
    v211 = BYTE2(v244);
    v107 = &qword_162560[BYTE1(v179)];
    v108 = dword_164D58[2 * BYTE2(v236)];
    v109 = v105 ^ v360;
    v110 = dword_164D58[2 * BYTE2(v236) + 1];
    HIDWORD(v353) = v104 ^ v407 ^ v100;
    v352 = &qword_162D60[BYTE2(v175)];
    v111 = BYTE1(v244);
    v415 = &qword_163D60[(unsigned __int8)v244];
    v112 = BYTE2(v189);
    LODWORD(v353) = v109 ^ v357;
    v237 = (unsigned __int8)v175;
    v245 = &qword_162560[BYTE1(v175)];
    v408 = &qword_162D60[BYTE2(v229)];
    v176 = BYTE1(v189);
    v425 = &qword_163D60[(unsigned __int8)v189];
    v190 = BYTE2(v249);
    v286 = *((_DWORD *)v99 - 1)
         ^ HIDWORD(qword_161558[v96])
         ^ *((_DWORD *)v98 - 1)
         ^ dword_161D58[2 * HIBYTE(v467) + 1]
         ^ *((_DWORD *)v311 - 1)
         ^ *((_DWORD *)v362 + 3)
         ^ v289
         ^ v110;
    v308 = *((_DWORD *)v99 - 2)
         ^ v106
         ^ *((_DWORD *)v98 - 2)
         ^ dword_161D58[2 * HIBYTE(v467)]
         ^ *((_DWORD *)v311 - 2)
         ^ *((_DWORD *)v362 + 2)
         ^ v480
         ^ v108;
    v113 = dword_164558[2 * v205];
    v114 = *((_DWORD *)v383 - 2)
         ^ LODWORD(qword_161558[(unsigned __int8)v171])
         ^ *((_DWORD *)v367 + 2)
         ^ dword_161D58[2 * HIBYTE(v273)]
         ^ *((_DWORD *)v377 - 2);
    v115 = dword_164558[2 * v111 + 1];
    v116 = HIDWORD(qword_161558[(unsigned __int8)v171])
         ^ *((_DWORD *)v367 + 3)
         ^ dword_161D58[2 * HIBYTE(v273) + 1]
         ^ *((_DWORD *)v377 - 1)
         ^ *((_DWORD *)v383 - 1)
         ^ *((_DWORD *)v388 - 1)
         ^ dword_164558[2 * v205 + 1];
    v474 = dword_164558[2 * v111];
    v206 = (unsigned __int8)v229;
    v117 = dword_161D58[2 * v317];
    v363 = &qword_162560[BYTE1(v229)];
    v368 = &qword_162D60[BYTE2(v233)];
    v172 = BYTE1(v249);
    v378 = &qword_163D60[(unsigned __int8)v249];
    LODWORD(v312) = v114 ^ *((_DWORD *)v388 - 2) ^ v113 ^ dword_164D58[2 * v211];
    v496 = BYTE2(v297);
    HIDWORD(v312) = v116 ^ dword_164D58[2 * v211 + 1];
    v118 = *((_DWORD *)v401 - 2);
    v498 = (unsigned __int8)v233;
    v250 = &qword_162560[BYTE1(v233)];
    v372 = &qword_162D60[BYTE2(v240)];
    v119 = *((_DWORD *)v352 - 2) ^ LODWORD(qword_161558[v224]) ^ v117 ^ *((_DWORD *)v107 - 2) ^ *((_DWORD *)v398 + 2);
    v120 = *((_DWORD *)v352 - 1) ^ HIDWORD(qword_161558[v224]) ^ v393[1];
    v212 = BYTE1(v297);
    v225 = BYTE2(v467);
    v121 = v120 ^ *((_DWORD *)v107 - 1) ^ *((_DWORD *)v398 + 3) ^ *((_DWORD *)v401 - 1);
    v394 = &qword_163D60[(unsigned __int8)v297];
    v230 = (unsigned __int8)v240;
    v384 = &qword_162560[BYTE1(v240)];
    v402 = &qword_163D60[(unsigned __int8)v467];
    v389 = &qword_162D60[BYTE2(v185)];
    v499 = BYTE1(v467);
    v500 = BYTE2(v273);
    v396 = &qword_162560[BYTE1(v185)];
    v399 = &qword_162D60[BYTE2(v194)];
    v348 = v121 ^ v115 ^ dword_164D58[2 * v112 + 1];
    v293 = v119 ^ v118 ^ v474 ^ dword_164D58[2 * v112];
    v122 = dword_164D58[2 * v190 + 1];
    v123 = dword_164558[2 * v176 + 1];
    v124 = dword_164558[2 * v176];
    v125 = dword_164D58[2 * v190];
    v126 = *((_DWORD *)v411 + 3)
         ^ HIDWORD(qword_161558[(unsigned __int8)v179])
         ^ *((_DWORD *)v245 - 1)
         ^ dword_161D58[2 * HIBYTE(v285) + 1]
         ^ *((_DWORD *)v408 - 1);
    v127 = LODWORD(qword_161558[(unsigned __int8)v179])
         ^ *((_DWORD *)v245 - 2)
         ^ dword_161D58[2 * HIBYTE(v285)]
         ^ *((_DWORD *)v408 - 2)
         ^ *((_DWORD *)v411 + 2);
    v468 = dword_164558[2 * v172 + 1];
    v323 = dword_164558[2 * v172];
    v177 = BYTE1(v273);
    v409 = &qword_163D60[(unsigned __int8)v273];
    v180 = BYTE2(v307);
    v475 = dword_164D58[2 * v496];
    v234 = (unsigned __int8)v194;
    v481 = dword_164D58[2 * v496 + 1];
    v274 = &qword_162560[BYTE1(v194)];
    v405 = &qword_162D60[BYTE2(v255)];
    v191 = BYTE1(v307);
    v412 = &qword_163D60[(unsigned __int8)v307];
    v501 = BYTE2(v285);
    v195 = BYTE2(v200);
    v303 = v127 ^ *((_DWORD *)v415 - 2) ^ v124 ^ v125;
    v318 = v123 ^ v126 ^ *((_DWORD *)v415 - 1) ^ v122;
    v128 = *(v363 - 1);
    v129 = HIDWORD(qword_161558[v237])
         ^ dword_161D58[2 * HIBYTE(v200) + 1]
         ^ HIDWORD(v128)
         ^ *((_DWORD *)v368 - 1)
         ^ *((_DWORD *)v421 + 3);
    v130 = LODWORD(qword_161558[v237])
         ^ dword_161D58[2 * HIBYTE(v200)]
         ^ v128
         ^ *((_DWORD *)v368 - 2)
         ^ *((_DWORD *)v421 + 2)
         ^ *((_DWORD *)v425 - 2);
    v131 = dword_164558[2 * v212 + 1];
    LODWORD(v128) = LODWORD(qword_161558[v206]) ^ dword_161D58[2 * HIBYTE(v260)];
    v325 = dword_164558[2 * v212];
    v132 = HIDWORD(qword_161558[v206]) ^ dword_161D58[2 * HIBYTE(v260) + 1];
    v497 = dword_164D58[2 * v225 + 1];
    v495 = dword_164D58[2 * v225];
    v213 = (unsigned __int8)v255;
    v364 = &qword_162560[BYTE1(v255)];
    v369 = &qword_162D60[BYTE2(v265)];
    v207 = BYTE1(v285);
    v422 = &qword_163D60[(unsigned __int8)v285];
    HIDWORD(v128) = &qword_163D60[(unsigned __int8)v200];
    v201 = BYTE1(v200);
    v173 = HIDWORD(v128);
    v416 = &qword_162560[BYTE1(v265)];
    v419 = &qword_162D60[BYTE2(v270)];
    v226 = BYTE2(v260);
    v133 = v130 ^ v323;
    v321 = v129 ^ *((_DWORD *)v425 - 1) ^ v468 ^ v481;
    v134 = *((_DWORD *)v250 - 2);
    v280 = v133 ^ v475;
    v426 = &qword_162560[BYTE1(v270)];
    v135 = *((_DWORD *)v250 - 1) ^ v132;
    v251 = (unsigned __int8)v270;
    v429 = &qword_162D60[BYTE2(v302)];
    v241 = BYTE1(v260);
    v136 = v134 ^ v128 ^ *((_DWORD *)v372 - 2);
    LODWORD(v128) = &qword_163D60[(unsigned __int8)v260];
    v261 = (unsigned __int8)v302;
    v434 = v128;
    LODWORD(v128) = *((_DWORD *)v431 + 2);
    v137 = v135 ^ *((_DWORD *)v372 - 1) ^ *((_DWORD *)v431 + 3);
    v432 = &qword_162560[BYTE1(v302)];
    v138 = v136 ^ v128 ^ *((_DWORD *)v378 - 2);
    v139 = v137 ^ *((_DWORD *)v378 - 1) ^ v131;
    v379 = &qword_162D60[BYTE2(v279)];
    v482 = &qword_163D60[(unsigned __int8)v198];
    v256 = BYTE2(v217);
    v469 = &qword_162D60[BYTE2(v166)];
    v485 = &qword_162560[BYTE1(v166)];
    v298 = v139 ^ v497;
    v266 = v138 ^ v325 ^ v495;
    v476 = &qword_162560[BYTE1(v279)];
    v140 = HIDWORD(qword_161558[v230]) ^ dword_161D58[2 * HIBYTE(v217) + 1];
    v141 = LODWORD(qword_161558[v230]) ^ dword_161D58[2 * HIBYTE(v217)];
    v324 = HIDWORD(qword_161558[v498])
         ^ dword_161D58[2 * HIBYTE(v198) + 1]
         ^ *((_DWORD *)v384 - 1)
         ^ *((_DWORD *)v389 - 1)
         ^ *((_DWORD *)v436 + 3)
         ^ *((_DWORD *)v394 - 1)
         ^ dword_164558[2 * v499 + 1]
         ^ dword_164D58[2 * v500 + 1];
    v227 = *((_DWORD *)v384 - 2)
         ^ LODWORD(qword_161558[v498])
         ^ dword_161D58[2 * HIBYTE(v198)]
         ^ *((_DWORD *)v389 - 2)
         ^ *((_DWORD *)v436 + 2)
         ^ *((_DWORD *)v394 - 2)
         ^ dword_164558[2 * v499]
         ^ dword_164D58[2 * v500];
    LODWORD(v128) = HIDWORD(qword_161558[(unsigned __int8)v185]) ^ dword_161D58[2 * HIBYTE(v219) + 1];
    HIDWORD(v128) = qword_161558[(unsigned __int8)v185];
    v167 = &dword_164558[2 * v201];
    v385 = &dword_164558[2 * BYTE1(v198)];
    v326 = *((_DWORD *)v399 - 1)
         ^ *((_DWORD *)v396 - 1)
         ^ v140
         ^ *((_DWORD *)v440 + 3)
         ^ *((_DWORD *)v402 - 1)
         ^ dword_164558[2 * v177 + 1]
         ^ dword_164D58[2 * v180 + 1];
    v390 = &dword_164D58[2 * BYTE2(v217)];
    v182 = *((_DWORD *)v396 - 2)
         ^ v141
         ^ *((_DWORD *)v399 - 2)
         ^ *((_DWORD *)v440 + 2)
         ^ *((_DWORD *)v402 - 2)
         ^ dword_164558[2 * v177]
         ^ dword_164D58[2 * v180];
    v142 = *(v409 - 1);
    v143 = *((_DWORD *)v405 - 2)
         ^ HIDWORD(v128)
         ^ dword_161D58[2 * HIBYTE(v219)]
         ^ *((_DWORD *)v274 - 2)
         ^ *((_DWORD *)v443 + 2)
         ^ v142;
    v144 = dword_161D58[2 * v337];
    v328 = v128
         ^ *((_DWORD *)v274 - 1)
         ^ *((_DWORD *)v405 - 1)
         ^ *((_DWORD *)v443 + 3)
         ^ HIDWORD(v142)
         ^ dword_164558[2 * v191 + 1]
         ^ dword_164D58[2 * v501 + 1];
    LODWORD(v142) = BYTE1(v217);
    v145 = v201;
    v202 = &qword_163D60[(unsigned __int8)v217];
    v215 = v143 ^ dword_164558[2 * v191] ^ dword_164D58[2 * v501];
    HIDWORD(v128) = dword_164D58[2 * v195 + 1] ^ HIDWORD(qword_161558[v234]) ^ v446[1] ^ *((_DWORD *)v364 - 1);
    v146 = dword_164D58[2 * v195] ^ LODWORD(qword_161558[v234]) ^ dword_161D58[2 * v335] ^ *((_DWORD *)v364 - 2);
    v365 = v142;
    v196 = &dword_164558[2 * v142];
    v338 = dword_164D58[2 * v226 + 1];
    v147 = v167[1] ^ HIDWORD(qword_161558[v213]) ^ v451[1];
    v168 = BYTE2(v219);
    v178 = BYTE1(v219);
    v148 = BYTE2(v219);
    v220 = dword_164D58[2 * v226];
    v181 = &dword_164D58[2 * v148];
    LODWORD(v142) = *(_DWORD *)(v173 - 4)
                  ^ HIDWORD(qword_161558[(unsigned __int8)v265])
                  ^ v456[1]
                  ^ *((_DWORD *)v426 - 1)
                  ^ *((_DWORD *)v429 - 1)
                  ^ *((_DWORD *)v459 + 3)
                  ^ dword_164558[2 * v241 + 1];
    v192 = *(_DWORD *)(v173 - 8)
         ^ LODWORD(qword_161558[(unsigned __int8)v265])
         ^ dword_161D58[2 * v342]
         ^ *((_DWORD *)v426 - 2)
         ^ *((_DWORD *)v429 - 2)
         ^ *((_DWORD *)v459 + 2)
         ^ dword_164558[2 * v241];
    v221 = HIDWORD(v128)
         ^ *((_DWORD *)v369 - 1)
         ^ *((_DWORD *)v449 + 3)
         ^ *((_DWORD *)v412 - 1)
         ^ dword_164558[2 * v207 + 1];
    v169 = v146 ^ *((_DWORD *)v369 - 2) ^ *((_DWORD *)v449 + 2) ^ *((_DWORD *)v412 - 2) ^ dword_164558[2 * v207];
    HIDWORD(v231) = v147
                  ^ *((_DWORD *)v416 - 1)
                  ^ *((_DWORD *)v419 - 1)
                  ^ *((_DWORD *)v453 + 3)
                  ^ *((_DWORD *)v422 - 1)
                  ^ v338;
    LODWORD(v231) = dword_164558[2 * v145]
                  ^ LODWORD(qword_161558[v213])
                  ^ v144
                  ^ *((_DWORD *)v416 - 2)
                  ^ *((_DWORD *)v419 - 2)
                  ^ *((_DWORD *)v453 + 2)
                  ^ *((_DWORD *)v422 - 2)
                  ^ v220;
    v149 = *((_DWORD *)v461 + 3)
         ^ HIDWORD(qword_161558[v251])
         ^ v464[1]
         ^ *((_DWORD *)v432 - 1)
         ^ *((_DWORD *)v379 - 1)
         ^ *(_DWORD *)(v434 - 4)
         ^ v385[1];
    v214 = v390[1];
    LODWORD(v238) = v192 ^ dword_164D58[2 * BYTE2(v198)];
    HIDWORD(v238) = v142 ^ dword_164D58[2 * BYTE2(v198) + 1];
    v11 = *((_DWORD *)v469 - 2)
        ^ LODWORD(qword_161558[v261])
        ^ dword_161D58[2 * v347]
        ^ *((_DWORD *)v476 - 2)
        ^ *((_DWORD *)v478 + 2)
        ^ *((_DWORD *)v482 - 2)
        ^ dword_164558[2 * v365]
        ^ dword_164D58[2 * v168];
    LODWORD(v142) = dword_164D58[2 * v256];
    HIDWORD(v246) = v149 ^ v214;
    v12 = LODWORD(qword_161558[(unsigned __int8)v279])
        ^ *((_DWORD *)v485 - 2)
        ^ dword_164D58[2 * v292]
        ^ dword_161D58[2 * v502]
        ^ *((_DWORD *)v491 - 2)
        ^ *((_DWORD *)v494 + 2)
        ^ *((_DWORD *)v202 - 2)
        ^ dword_164558[2 * v178];
    LODWORD(v246) = LODWORD(qword_161558[v251])
                  ^ *((_DWORD *)v461 + 2)
                  ^ dword_161D58[2 * v344]
                  ^ *((_DWORD *)v432 - 2)
                  ^ *((_DWORD *)v379 - 2)
                  ^ *(_DWORD *)(v434 - 8)
                  ^ *v385
                  ^ v142;
    v257 = HIDWORD(qword_161558[v261])
         ^ *((_DWORD *)v469 - 1)
         ^ v472[1]
         ^ *((_DWORD *)v476 - 1)
         ^ *((_DWORD *)v478 + 3)
         ^ *((_DWORD *)v482 - 1)
         ^ v196[1]
         ^ v181[1];
    v13 = *((_DWORD *)v494 + 3)
        ^ v488[1]
        ^ HIDWORD(qword_161558[(unsigned __int8)v279])
        ^ *((_DWORD *)v485 - 1)
        ^ dword_164D58[2 * v292 + 1]
        ^ *((_DWORD *)v491 - 1)
        ^ *((_DWORD *)v202 - 1)
        ^ dword_164558[2 * v178 + 1];
  }
  while ( !v95 );
  v150 = LODWORD(qword_161558[(unsigned __int8)v279])
       ^ *((_DWORD *)v485 - 2)
       ^ dword_164D58[2 * v292]
       ^ dword_161D58[2 * v502]
       ^ *((_DWORD *)v491 - 2)
       ^ *((_DWORD *)v494 + 2)
       ^ *((_DWORD *)v202 - 2)
       ^ dword_164558[2 * v178];
  v151 = v353;
  v152 = &v504;
  v153 = HIDWORD(v353);
  v154 = (int *)&v507[1];
  v507[1] = __PAIR64__(v286, v308);
  v507[0] = v353;
  v507[2] = v312;
  v507[3] = __PAIR64__(v348, v293);
  v507[4] = __PAIR64__(v318, v303);
  v507[5] = __PAIR64__(v321, v280);
  v507[6] = __PAIR64__(v298, v266);
  v507[7] = __PAIR64__(v324, v227);
  HIDWORD(v507[13]) = v149 ^ v214;
  v507[14] = __PAIR64__(v257, v11);
  v507[8] = __PAIR64__(v326, v182);
  v507[15] = __PAIR64__(v13, v150);
  v507[9] = __PAIR64__(v328, v215);
  v507[10] = __PAIR64__(v221, v169);
  v507[11] = v231;
  v507[12] = v238;
  LODWORD(v507[13]) = v246;
  while ( 1 )
  {
    v155 = (unsigned int)v152[2];
    v152 += 2;
    v156 = (unsigned int)v152[1];
    *v152 = (void *)(v155 ^ v151);
    v152[1] = (void *)(v156 ^ v153);
    if ( &dest[120] == (_BYTE *)v152 )
      break;
    v151 = *v154;
    v154 += 2;
    v153 = *(v154 - 1);
  }
  v157 = (int *)&dest[64];
  v158 = v508;
  do
  {
    v159 = *v157;
    v157 += 2;
    v160 = *(v157 - 1);
    v158 += 8;
    *((_DWORD *)v158 - 2) = v159;
    *((_DWORD *)v158 - 1) = v160;
  }
  while ( v507 != (_QWORD *)v157 );
  memcpy(v504, &v508[64 - n], n);
  result = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v162 = a1 + 128;
  do
  {
    *(_QWORD *)(v162 + 8) = 0;
    v162 += 8;
  }
  while ( a1 + 248 != v162 );
  v163 = v505;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  *(_QWORD *)(v163 - 8) = 0;
  return result;
}
