int __fastcall sub_11E40(int *a1, int a2, int *a3)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r10
  _DWORD *v8; // r3
  int *v9; // r2
  unsigned int v10; // lr
  unsigned int v11; // r12
  unsigned int v12; // r1
  unsigned int v13; // t1
  int v14; // r3
  int *v15; // r5
  int v16; // r7
  int i; // r3
  int v18; // r4
  int v19; // r3
  int v20; // r9
  int v21; // r7
  int v22; // r11
  int v23; // r0
  int v24; // r8
  int v25; // r2
  int v26; // r10
  int v27; // r1
  int v28; // r5
  bool v29; // zf
  int v30; // r11
  int v31; // r7
  int v32; // r9
  int v33; // r6
  int v34; // r3
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r5
  int v39; // r4
  int v40; // r12
  int v41; // lr
  int v42; // r7
  int v43; // lr
  int v44; // r6
  int v45; // r9
  int v46; // r11
  int v47; // r4
  int v48; // r12
  int v49; // r2
  int v50; // r1
  int v51; // r5
  int v52; // r8
  int v53; // r10
  int v54; // r2
  int v55; // r11
  int v56; // r9
  int v57; // lr
  int v58; // r5
  int v59; // r7
  int v60; // r6
  int v61; // r1
  int v62; // r3
  int v63; // r0
  int v64; // r3
  int v65; // r9
  int v66; // r7
  int v67; // r11
  int v68; // r0
  int v69; // r8
  int v70; // r2
  int v71; // r10
  int v72; // r1
  int v73; // r5
  int v74; // r4
  int v75; // r11
  int v76; // r7
  int v77; // r9
  int v78; // r6
  int v79; // r3
  int v80; // r0
  int v81; // r1
  int v82; // r2
  int v83; // r5
  int v84; // r4
  int v85; // r12
  int v86; // lr
  int v87; // lr
  int v88; // r9
  int v89; // r7
  int v90; // r11
  int v91; // r10
  int v92; // r4
  int v93; // r6
  int v94; // r1
  int v95; // r5
  int v96; // r8
  int v97; // r10
  int v98; // r11
  int v99; // r9
  int v100; // r7
  int v101; // lr
  int v102; // r6
  int v103; // r5
  int v104; // r12
  int v105; // r1
  int v106; // r0
  int v107; // r3
  int v108; // r2
  __int16 v109; // r2
  int *v110; // r1
  int v111; // r0
  __int64 v112; // t1
  int v113; // lr
  int v114; // r10
  int v115; // r2
  int v116; // r9
  int v117; // r11
  int v118; // r3
  int v119; // r6
  int v120; // r4
  int v121; // r5
  int v122; // r8
  int v123; // r10
  int v124; // r11
  int v125; // r9
  int v126; // r6
  int v127; // lr
  int v128; // r7
  int v129; // r5
  int v130; // r2
  int v131; // r3
  int v132; // r12
  int v133; // r1
  int v134; // r0
  int v135; // r7
  int v136; // r0
  int v137; // r2
  int v138; // r4
  int v139; // r9
  int v140; // r7
  int v141; // r11
  int v142; // r10
  int v143; // r6
  int v144; // r1
  int v145; // r5
  int v146; // lr
  int v147; // r8
  int v148; // r10
  int v149; // r1
  int v150; // r11
  int v151; // r7
  int v152; // r9
  int v153; // r5
  int v154; // r6
  int v155; // r12
  int v156; // lr
  int v157; // r0
  int v158; // r3
  int v159; // r2
  int *v160; // r12
  int v161; // lr
  __int64 v162; // t1
  int v163; // r10
  int v164; // r2
  int v165; // r9
  int v166; // r11
  int v167; // lr
  int v168; // r6
  int v169; // r3
  int v170; // r4
  int v171; // r5
  int v172; // r8
  int v173; // r10
  int v174; // r11
  int v175; // r9
  int v176; // r3
  int v177; // r6
  int v178; // r7
  int v179; // lr
  int v180; // r5
  int v181; // r2
  int v182; // r12
  int v183; // r1
  int v184; // r0
  int v185; // r7
  int v186; // r0
  int v187; // r12
  int v188; // r2
  int v189; // r5
  int v190; // r12
  int v191; // r9
  int v192; // r7
  int v193; // r11
  int v194; // r10
  int v195; // r4
  int v196; // r6
  int v197; // r1
  int v198; // r8
  int v199; // lr
  int v200; // r10
  int v201; // r9
  int v202; // r11
  int v203; // r7
  int v204; // r1
  int v205; // r5
  int v206; // r6
  int v207; // lr
  int v208; // r12
  int v209; // r0
  int v210; // r3
  int v211; // r2
  int v212; // r6
  int v213; // r1
  int v214; // r2
  int v215; // r3
  int v216; // r0
  int v217; // r1
  int v218; // r2
  int v219; // r3
  int v220; // r0
  int v221; // r1
  int v222; // r2
  int v223; // r3
  int v224; // r12
  int v225; // r3
  int v227; // [sp+4h] [bp-2C8h]
  int v228; // [sp+4h] [bp-2C8h]
  int v229; // [sp+4h] [bp-2C8h]
  int v230; // [sp+4h] [bp-2C8h]
  int v231; // [sp+4h] [bp-2C8h]
  int v232; // [sp+4h] [bp-2C8h]
  int v233; // [sp+4h] [bp-2C8h]
  int v234; // [sp+4h] [bp-2C8h]
  int v235; // [sp+4h] [bp-2C8h]
  int v236; // [sp+4h] [bp-2C8h]
  int v237; // [sp+4h] [bp-2C8h]
  int v238; // [sp+8h] [bp-2C4h]
  int v239; // [sp+8h] [bp-2C4h]
  int v240; // [sp+8h] [bp-2C4h]
  int v241; // [sp+8h] [bp-2C4h]
  int v242; // [sp+8h] [bp-2C4h]
  int v243; // [sp+8h] [bp-2C4h]
  int v244; // [sp+8h] [bp-2C4h]
  int v245; // [sp+8h] [bp-2C4h]
  int v246; // [sp+8h] [bp-2C4h]
  int v247; // [sp+8h] [bp-2C4h]
  int v248; // [sp+Ch] [bp-2C0h]
  int v249; // [sp+Ch] [bp-2C0h]
  int v250; // [sp+Ch] [bp-2C0h]
  int v251; // [sp+Ch] [bp-2C0h]
  int v252; // [sp+Ch] [bp-2C0h]
  int v253; // [sp+Ch] [bp-2C0h]
  int v254; // [sp+Ch] [bp-2C0h]
  int v255; // [sp+Ch] [bp-2C0h]
  int v256; // [sp+10h] [bp-2BCh]
  int v257; // [sp+10h] [bp-2BCh]
  int v258; // [sp+10h] [bp-2BCh]
  int v259; // [sp+10h] [bp-2BCh]
  int v260; // [sp+10h] [bp-2BCh]
  int v261; // [sp+10h] [bp-2BCh]
  int v262; // [sp+10h] [bp-2BCh]
  int v263; // [sp+10h] [bp-2BCh]
  int v264; // [sp+14h] [bp-2B8h]
  int v265; // [sp+14h] [bp-2B8h]
  int v266; // [sp+14h] [bp-2B8h]
  int v267; // [sp+14h] [bp-2B8h]
  int v268; // [sp+14h] [bp-2B8h]
  int v269; // [sp+14h] [bp-2B8h]
  int v270; // [sp+14h] [bp-2B8h]
  int v271; // [sp+14h] [bp-2B8h]
  int v272; // [sp+18h] [bp-2B4h]
  int v273; // [sp+18h] [bp-2B4h]
  int v274; // [sp+18h] [bp-2B4h]
  int v275; // [sp+18h] [bp-2B4h]
  int v276; // [sp+18h] [bp-2B4h]
  int v277; // [sp+18h] [bp-2B4h]
  int v278; // [sp+18h] [bp-2B4h]
  int v279; // [sp+18h] [bp-2B4h]
  int v280; // [sp+1Ch] [bp-2B0h]
  int v281; // [sp+1Ch] [bp-2B0h]
  int v282; // [sp+1Ch] [bp-2B0h]
  int v283; // [sp+1Ch] [bp-2B0h]
  int v284; // [sp+1Ch] [bp-2B0h]
  int v285; // [sp+1Ch] [bp-2B0h]
  int v286; // [sp+1Ch] [bp-2B0h]
  int v287; // [sp+1Ch] [bp-2B0h]
  int v288; // [sp+20h] [bp-2ACh]
  int v289; // [sp+20h] [bp-2ACh]
  int v290; // [sp+20h] [bp-2ACh]
  int v291; // [sp+20h] [bp-2ACh]
  int v292; // [sp+20h] [bp-2ACh]
  int v293; // [sp+20h] [bp-2ACh]
  int v294; // [sp+20h] [bp-2ACh]
  int v295; // [sp+20h] [bp-2ACh]
  int v296; // [sp+24h] [bp-2A8h]
  int v297; // [sp+24h] [bp-2A8h]
  int v298; // [sp+24h] [bp-2A8h]
  int v299; // [sp+24h] [bp-2A8h]
  int v300; // [sp+24h] [bp-2A8h]
  int v301; // [sp+24h] [bp-2A8h]
  int v302; // [sp+24h] [bp-2A8h]
  int v303; // [sp+24h] [bp-2A8h]
  int v304; // [sp+28h] [bp-2A4h]
  int v305; // [sp+28h] [bp-2A4h]
  int v306; // [sp+28h] [bp-2A4h]
  int v307; // [sp+28h] [bp-2A4h]
  int v308; // [sp+28h] [bp-2A4h]
  int v309; // [sp+28h] [bp-2A4h]
  int v310; // [sp+28h] [bp-2A4h]
  int v311; // [sp+28h] [bp-2A4h]
  int v312; // [sp+2Ch] [bp-2A0h]
  int v313; // [sp+2Ch] [bp-2A0h]
  int v314; // [sp+2Ch] [bp-2A0h]
  int v315; // [sp+2Ch] [bp-2A0h]
  int v316; // [sp+2Ch] [bp-2A0h]
  int v317; // [sp+2Ch] [bp-2A0h]
  int v318; // [sp+30h] [bp-29Ch]
  int v319; // [sp+30h] [bp-29Ch]
  int v320; // [sp+30h] [bp-29Ch]
  int v321; // [sp+30h] [bp-29Ch]
  int v322; // [sp+30h] [bp-29Ch]
  int v323; // [sp+30h] [bp-29Ch]
  int v324; // [sp+34h] [bp-298h]
  int v325; // [sp+34h] [bp-298h]
  int v326; // [sp+34h] [bp-298h]
  int v327; // [sp+34h] [bp-298h]
  int v328; // [sp+34h] [bp-298h]
  int v329; // [sp+34h] [bp-298h]
  int v330; // [sp+38h] [bp-294h]
  int v331; // [sp+38h] [bp-294h]
  int v332; // [sp+38h] [bp-294h]
  int v333; // [sp+38h] [bp-294h]
  int v334; // [sp+38h] [bp-294h]
  int v335; // [sp+38h] [bp-294h]
  int v336; // [sp+3Ch] [bp-290h]
  int v337; // [sp+3Ch] [bp-290h]
  int v338; // [sp+3Ch] [bp-290h]
  int v339; // [sp+3Ch] [bp-290h]
  int v340; // [sp+3Ch] [bp-290h]
  int v341; // [sp+3Ch] [bp-290h]
  int v342; // [sp+40h] [bp-28Ch]
  int v343; // [sp+40h] [bp-28Ch]
  int v344; // [sp+40h] [bp-28Ch]
  int v345; // [sp+40h] [bp-28Ch]
  int v346; // [sp+40h] [bp-28Ch]
  int v347; // [sp+40h] [bp-28Ch]
  int v348; // [sp+44h] [bp-288h]
  int v349; // [sp+44h] [bp-288h]
  int v350; // [sp+44h] [bp-288h]
  int v351; // [sp+44h] [bp-288h]
  int v352; // [sp+44h] [bp-288h]
  int v353; // [sp+44h] [bp-288h]
  int v354; // [sp+48h] [bp-284h]
  int v355; // [sp+48h] [bp-284h]
  int v356; // [sp+48h] [bp-284h]
  int v357; // [sp+48h] [bp-284h]
  int v358; // [sp+48h] [bp-284h]
  int v359; // [sp+48h] [bp-284h]
  int v360; // [sp+4Ch] [bp-280h]
  int v361; // [sp+4Ch] [bp-280h]
  int v362; // [sp+4Ch] [bp-280h]
  int v363; // [sp+4Ch] [bp-280h]
  int v364; // [sp+4Ch] [bp-280h]
  int v365; // [sp+4Ch] [bp-280h]
  int v366; // [sp+50h] [bp-27Ch]
  int v367; // [sp+50h] [bp-27Ch]
  int v368; // [sp+50h] [bp-27Ch]
  int v369; // [sp+50h] [bp-27Ch]
  int v370; // [sp+50h] [bp-27Ch]
  int v371; // [sp+50h] [bp-27Ch]
  int v372; // [sp+54h] [bp-278h]
  int v373; // [sp+54h] [bp-278h]
  int v374; // [sp+54h] [bp-278h]
  int v375; // [sp+54h] [bp-278h]
  int v376; // [sp+54h] [bp-278h]
  int v377; // [sp+54h] [bp-278h]
  int v378; // [sp+58h] [bp-274h]
  int v379; // [sp+58h] [bp-274h]
  int v380; // [sp+58h] [bp-274h]
  int v381; // [sp+58h] [bp-274h]
  int v382; // [sp+58h] [bp-274h]
  int v383; // [sp+58h] [bp-274h]
  int v384; // [sp+5Ch] [bp-270h]
  int v385; // [sp+5Ch] [bp-270h]
  int v386; // [sp+5Ch] [bp-270h]
  int v387; // [sp+5Ch] [bp-270h]
  int v388; // [sp+5Ch] [bp-270h]
  int v389; // [sp+5Ch] [bp-270h]
  int v390; // [sp+60h] [bp-26Ch]
  int v391; // [sp+60h] [bp-26Ch]
  int v392; // [sp+60h] [bp-26Ch]
  int v393; // [sp+60h] [bp-26Ch]
  int v394; // [sp+60h] [bp-26Ch]
  int v395; // [sp+60h] [bp-26Ch]
  int v396; // [sp+64h] [bp-268h]
  int v397; // [sp+64h] [bp-268h]
  int v398; // [sp+64h] [bp-268h]
  int v399; // [sp+64h] [bp-268h]
  int v400; // [sp+64h] [bp-268h]
  int v401; // [sp+64h] [bp-268h]
  int v402; // [sp+68h] [bp-264h]
  int v403; // [sp+68h] [bp-264h]
  int v404; // [sp+68h] [bp-264h]
  int v405; // [sp+68h] [bp-264h]
  int v406; // [sp+68h] [bp-264h]
  int v407; // [sp+68h] [bp-264h]
  int v408; // [sp+6Ch] [bp-260h]
  int v409; // [sp+6Ch] [bp-260h]
  int v410; // [sp+6Ch] [bp-260h]
  int v411; // [sp+6Ch] [bp-260h]
  int v412; // [sp+6Ch] [bp-260h]
  int v413; // [sp+6Ch] [bp-260h]
  int v414; // [sp+70h] [bp-25Ch]
  int v415; // [sp+70h] [bp-25Ch]
  int v416; // [sp+70h] [bp-25Ch]
  int v417; // [sp+70h] [bp-25Ch]
  int v418; // [sp+70h] [bp-25Ch]
  int v419; // [sp+70h] [bp-25Ch]
  int v420; // [sp+74h] [bp-258h]
  int v421; // [sp+74h] [bp-258h]
  int v422; // [sp+74h] [bp-258h]
  int v423; // [sp+74h] [bp-258h]
  int v424; // [sp+74h] [bp-258h]
  int v425; // [sp+74h] [bp-258h]
  int v426; // [sp+78h] [bp-254h]
  int v427; // [sp+78h] [bp-254h]
  int v428; // [sp+78h] [bp-254h]
  int v429; // [sp+78h] [bp-254h]
  int v430; // [sp+78h] [bp-254h]
  int v431; // [sp+78h] [bp-254h]
  int v432; // [sp+7Ch] [bp-250h]
  int v433; // [sp+7Ch] [bp-250h]
  int v434; // [sp+7Ch] [bp-250h]
  int v435; // [sp+7Ch] [bp-250h]
  int v436; // [sp+7Ch] [bp-250h]
  int v437; // [sp+7Ch] [bp-250h]
  int v438; // [sp+80h] [bp-24Ch]
  int v439; // [sp+80h] [bp-24Ch]
  int v440; // [sp+80h] [bp-24Ch]
  int v441; // [sp+80h] [bp-24Ch]
  int v442; // [sp+80h] [bp-24Ch]
  int v443; // [sp+80h] [bp-24Ch]
  int v444; // [sp+80h] [bp-24Ch]
  int v445; // [sp+80h] [bp-24Ch]
  int v446; // [sp+84h] [bp-248h]
  int v447; // [sp+84h] [bp-248h]
  int v448; // [sp+84h] [bp-248h]
  int v449; // [sp+84h] [bp-248h]
  int v450; // [sp+84h] [bp-248h]
  int v451; // [sp+84h] [bp-248h]
  int v452; // [sp+88h] [bp-244h]
  int v453; // [sp+88h] [bp-244h]
  int v454; // [sp+88h] [bp-244h]
  int v455; // [sp+88h] [bp-244h]
  int v456; // [sp+88h] [bp-244h]
  int v457; // [sp+88h] [bp-244h]
  int v458; // [sp+88h] [bp-244h]
  int v459; // [sp+88h] [bp-244h]
  int v460; // [sp+8Ch] [bp-240h]
  int v461; // [sp+8Ch] [bp-240h]
  int v462; // [sp+8Ch] [bp-240h]
  int v463; // [sp+8Ch] [bp-240h]
  int v464; // [sp+8Ch] [bp-240h]
  int v465; // [sp+8Ch] [bp-240h]
  int v466; // [sp+90h] [bp-23Ch]
  int v467; // [sp+90h] [bp-23Ch]
  int v468; // [sp+90h] [bp-23Ch]
  int v469; // [sp+90h] [bp-23Ch]
  int v470; // [sp+90h] [bp-23Ch]
  int v471; // [sp+90h] [bp-23Ch]
  int v472; // [sp+94h] [bp-238h]
  int v473; // [sp+94h] [bp-238h]
  int v474; // [sp+94h] [bp-238h]
  int v475; // [sp+94h] [bp-238h]
  int v476; // [sp+98h] [bp-234h]
  int v477; // [sp+98h] [bp-234h]
  int v478; // [sp+98h] [bp-234h]
  int v479; // [sp+98h] [bp-234h]
  int v480; // [sp+98h] [bp-234h]
  int v481; // [sp+98h] [bp-234h]
  int v482; // [sp+9Ch] [bp-230h]
  int v483; // [sp+9Ch] [bp-230h]
  int v484; // [sp+9Ch] [bp-230h]
  int v485; // [sp+9Ch] [bp-230h]
  int v486; // [sp+A0h] [bp-22Ch]
  int v487; // [sp+A0h] [bp-22Ch]
  int v488; // [sp+A0h] [bp-22Ch]
  int v489; // [sp+A0h] [bp-22Ch]
  int v490; // [sp+A0h] [bp-22Ch]
  int v491; // [sp+A0h] [bp-22Ch]
  int v492; // [sp+A4h] [bp-228h]
  int v493; // [sp+A4h] [bp-228h]
  int v494; // [sp+A4h] [bp-228h]
  int v495; // [sp+A4h] [bp-228h]
  int v496; // [sp+A8h] [bp-224h]
  int v497; // [sp+A8h] [bp-224h]
  int v498; // [sp+A8h] [bp-224h]
  int v499; // [sp+A8h] [bp-224h]
  int v500; // [sp+A8h] [bp-224h]
  int v501; // [sp+A8h] [bp-224h]
  char *dest; // [sp+ACh] [bp-220h]
  int desta; // [sp+ACh] [bp-220h]
  int v504; // [sp+B0h] [bp-21Ch]
  char *v505; // [sp+B4h] [bp-218h]
  char *v506; // [sp+B8h] [bp-214h]
  int *v509; // [sp+C0h] [bp-20Ch]
  int v511; // [sp+C8h] [bp-204h] BYREF
  int v512; // [sp+CCh] [bp-200h]
  int v513; // [sp+D0h] [bp-1FCh]
  int v514; // [sp+D4h] [bp-1F8h]
  int v515; // [sp+D8h] [bp-1F4h]
  int v516; // [sp+DCh] [bp-1F0h]
  int v517; // [sp+E0h] [bp-1ECh]
  int v518; // [sp+E4h] [bp-1E8h]
  _DWORD v519[8]; // [sp+E8h] [bp-1E4h]
  int v520; // [sp+108h] [bp-1C4h] BYREF
  int v521; // [sp+10Ch] [bp-1C0h]
  int v522; // [sp+110h] [bp-1BCh]
  int v523; // [sp+114h] [bp-1B8h]
  int v524; // [sp+118h] [bp-1B4h]
  int v525; // [sp+11Ch] [bp-1B0h]
  int v526; // [sp+120h] [bp-1ACh]
  int v527; // [sp+124h] [bp-1A8h]
  int v528[8]; // [sp+128h] [bp-1A4h] BYREF
  int v529; // [sp+148h] [bp-184h] BYREF
  int v530; // [sp+14Ch] [bp-180h]
  int v531; // [sp+150h] [bp-17Ch]
  int v532; // [sp+154h] [bp-178h]
  int v533; // [sp+158h] [bp-174h]
  int v534; // [sp+15Ch] [bp-170h]
  int v535; // [sp+160h] [bp-16Ch]
  int v536; // [sp+164h] [bp-168h]
  _DWORD v537[8]; // [sp+168h] [bp-164h] BYREF
  int v538; // [sp+188h] [bp-144h] BYREF
  int v539; // [sp+18Ch] [bp-140h]
  int v540; // [sp+190h] [bp-13Ch]
  int v541; // [sp+194h] [bp-138h]
  int v542; // [sp+198h] [bp-134h]
  int v543; // [sp+19Ch] [bp-130h]
  int v544; // [sp+1A0h] [bp-12Ch]
  int v545; // [sp+1A4h] [bp-128h]
  int v546[4]; // [sp+1A8h] [bp-124h] BYREF
  int v547; // [sp+1B8h] [bp-114h] BYREF
  int v548; // [sp+1E8h] [bp-E4h] BYREF
  int v549; // [sp+1ECh] [bp-E0h]
  int v550; // [sp+1F0h] [bp-DCh]
  int v551; // [sp+1F4h] [bp-D8h]
  int v552; // [sp+1F8h] [bp-D4h]
  int v553; // [sp+1FCh] [bp-D0h]
  int v554; // [sp+200h] [bp-CCh]
  int v555; // [sp+204h] [bp-C8h]
  int v556[16]; // [sp+208h] [bp-C4h] BYREF
  int src[32]; // [sp+248h] [bp-84h] BYREF
  char v558; // [sp+2C8h] [bp-4h] BYREF

  dest = (char *)((a2 + 63) & 0xFFFFFFC0);
  v511 = 1779033703;
  v512 = -1150833019;
  v513 = 1013904242;
  v514 = -1521486534;
  v515 = 1359893119;
  v516 = -1694144372;
  v517 = 528734635;
  v518 = 1541459225;
  sub_F840(&v511, a1, 1);
  v3 = a1[16];
  v509 = a1 + 16;
  v4 = v509[1];
  v5 = v509[2];
  v6 = v509[3];
  v529 = v3;
  v530 = v4;
  v531 = v5;
  v532 = v6;
  v533 = 128;
  v534 = 0;
  v535 = 0;
  v536 = 0;
  v505 = dest;
  memset(v537, 0, 28);
  v537[7] = -2147352576;
  sub_F840(&v511, &v529, 1);
  v541 = -1521486534;
  v542 = 1359893119;
  v519[0] = v511;
  v519[1] = v512;
  v519[2] = v513;
  v519[3] = v514;
  v538 = 1779033703;
  v7 = 0;
  v539 = -1150833019;
  v540 = 1013904242;
  v543 = -1694144372;
  v544 = 528734635;
  v545 = 1541459225;
  v519[4] = v515;
  v519[5] = v516;
  v519[6] = v517;
  v519[7] = v518;
  do
  {
    *(int *)((char *)&v529 + v7 * 4) = v519[v7] ^ 0x36363636;
    ++v7;
  }
  while ( v7 != 8 );
  memset(v537, 54, sizeof(v537));
  sub_F840(&v538, &v529, 0);
  sub_F840(&v538, a1, 1);
  v8 = &unk_49E74;
  v9 = &v547;
  v10 = a1[17];
  v11 = a1[18];
  v546[0] = bswap32(a1[16]);
  v12 = a1[19];
  v546[1] = bswap32(v10);
  v546[2] = bswap32(v11);
  v546[3] = bswap32(v12);
  do
  {
    v13 = v8[1];
    ++v8;
    v9[1] = bswap32(v13);
    ++v9;
  }
  while ( v8 != (_DWORD *)&unk_49EA0 );
  v14 = 0;
  v548 = 1779033703;
  v549 = -1150833019;
  v550 = 1013904242;
  v551 = -1521486534;
  v552 = 1359893119;
  v553 = -1694144372;
  v554 = 528734635;
  v555 = 1541459225;
  do
  {
    *(int *)((char *)&v529 + v14 * 4) = v519[v14] ^ 0x5C5C5C5C;
    ++v14;
  }
  while ( v14 != 8 );
  memset(v537, 92, sizeof(v537));
  sub_F840(&v548, &v529, 0);
  v15 = src;
  v16 = 0;
  v556[8] = 0x80000000;
  memset(&v556[9], 0, 24);
  v556[15] = 768;
  do
  {
    ++v16;
    v520 = v538;
    v521 = v539;
    v522 = v540;
    v523 = v541;
    v547 = v16;
    v524 = v542;
    v525 = v543;
    v526 = v544;
    v527 = v545;
    sub_F840(&v520, v546, 0);
    v556[0] = v520;
    v556[1] = v521;
    v556[2] = v522;
    v556[3] = v523;
    v556[4] = v524;
    v556[5] = v525;
    v556[6] = v526;
    v556[7] = v527;
    v528[0] = v548;
    v528[1] = v549;
    v528[2] = v550;
    v528[3] = v551;
    v528[4] = v552;
    v528[5] = v553;
    v528[6] = v554;
    v528[7] = v555;
    sub_F840(v528, v556, 0);
    for ( i = 0; i != 8; ++i )
      v15[i] = bswap32(v528[i]);
    v15 += 8;
  }
  while ( v16 != 4 );
  v318 = src[0];
  v506 = dest + 0x20000;
  v312 = src[16];
  v324 = src[1];
  v414 = src[17];
  v330 = src[2];
  v420 = src[18];
  v336 = src[3];
  v426 = src[19];
  v342 = src[4];
  v432 = src[20];
  v348 = src[5];
  v438 = src[21];
  v354 = src[6];
  v446 = src[22];
  v360 = src[7];
  v452 = src[23];
  v366 = src[8];
  v460 = src[24];
  v372 = src[9];
  v466 = src[25];
  v378 = src[10];
  v472 = src[26];
  v384 = src[11];
  v476 = src[27];
  v390 = src[12];
  v482 = src[28];
  v396 = src[13];
  v486 = src[29];
  v402 = src[14];
  v492 = src[30];
  v408 = src[15];
  v496 = src[31];
  do
  {
    memcpy(dest, src, 0x80u);
    v319 = v312 ^ v318;
    v325 = v414 ^ v324;
    v331 = v420 ^ v330;
    v337 = v426 ^ v336;
    v343 = v432 ^ v342;
    v349 = v438 ^ v348;
    v355 = v446 ^ v354;
    v361 = v452 ^ v360;
    v367 = v460 ^ v366;
    v373 = v466 ^ v372;
    v379 = v472 ^ v378;
    v385 = v476 ^ v384;
    v264 = v385;
    v397 = v486 ^ v396;
    v409 = v496 ^ v408;
    v288 = v397;
    v18 = v409;
    v256 = v355;
    v19 = v492 ^ v402;
    v20 = v361;
    v21 = v331;
    v22 = v367;
    v23 = v337;
    v24 = v379;
    v25 = v373;
    v26 = v325;
    v27 = v343;
    v28 = v319;
    v391 = v482 ^ v390;
    v248 = v391;
    v403 = v492 ^ v402;
    v296 = v349;
    v304 = 4;
    do
    {
      v227 = v27 ^ __ROR4__(v248 + v28, 25);
      v272 = v19 ^ __ROR4__(v256 + v24, 25);
      v29 = v304-- == 1;
      v238 = v25 ^ __ROR4__(v26 + v296, 25);
      v280 = v23 ^ __ROR4__(v264 + v18, 25);
      v30 = v22 ^ __ROR4__(v227 + v28, 23);
      v31 = v21 ^ __ROR4__(v272 + v24, 23);
      v32 = v20 ^ __ROR4__(v280 + v18, 23);
      v33 = v248 ^ __ROR4__(v30 + v227, 19);
      v34 = v288 ^ __ROR4__(v238 + v296, 23);
      v35 = v264 ^ __ROR4__(v32 + v280, 19);
      v36 = v256 ^ __ROR4__(v31 + v272, 19);
      v37 = v26 ^ __ROR4__(v34 + v238, 19);
      v38 = v28 ^ __ROR4__(v33 + v30, 14);
      v39 = v18 ^ __ROR4__(v35 + v32, 14);
      v40 = v24 ^ __ROR4__(v36 + v31, 14);
      v41 = v296 ^ __ROR4__(v37 + v34, 14);
      v248 = v33 ^ __ROR4__(v39 + v272, 25);
      v264 = v35 ^ __ROR4__(v40 + v238, 25);
      v256 = v36 ^ __ROR4__(v41 + v227, 25);
      v26 = v37 ^ __ROR4__(v38 + v280, 25);
      v22 = v30 ^ __ROR4__(v264 + v40, 23);
      v20 = v32 ^ __ROR4__(v256 + v41, 23);
      v21 = v31 ^ __ROR4__(v26 + v38, 23);
      v288 = v34 ^ __ROR4__(v248 + v39, 23);
      v23 = v280 ^ __ROR4__(v21 + v26, 19);
      v27 = v227 ^ __ROR4__(v20 + v256, 19);
      v25 = v238 ^ __ROR4__(v22 + v264, 19);
      v19 = v272 ^ __ROR4__(v288 + v248, 19);
      v28 = v38 ^ __ROR4__(v23 + v21, 14);
      v296 = v41 ^ __ROR4__(v27 + v20, 14);
      v24 = v40 ^ __ROR4__(v25 + v22, 14);
      v18 = v39 ^ __ROR4__(v19 + v288, 14);
    }
    while ( !v29 );
    v320 = v28 + v319;
    v326 = v26 + v325;
    v332 = v21 + v331;
    v338 = v23 + v337;
    v344 = v27 + v343;
    v350 = v296 + v349;
    v356 = v256 + v355;
    v362 = v20 + v361;
    v380 = v24 + v379;
    v368 = v22 + v367;
    v374 = v25 + v373;
    v386 = v264 + v385;
    v392 = v248 + v391;
    v398 = v288 + v397;
    v404 = v19 + v403;
    v410 = v18 + v409;
    v415 = v326 ^ v414;
    v421 = v332 ^ v420;
    v427 = v338 ^ v426;
    v433 = v344 ^ v432;
    v504 = v320 ^ v312;
    v439 = v350 ^ v438;
    v447 = v356 ^ v446;
    v453 = v362 ^ v452;
    v461 = v368 ^ v460;
    v467 = v374 ^ v466;
    v473 = v380 ^ v472;
    v493 = v404 ^ v492;
    v42 = v493;
    v257 = v415;
    v313 = 4;
    v483 = v392 ^ v482;
    v497 = v410 ^ v496;
    v43 = v398 ^ v486;
    v477 = v386 ^ v476;
    v487 = v398 ^ v486;
    v265 = v477;
    v281 = v473;
    v44 = v453;
    v45 = v421;
    v46 = v461;
    v47 = v497;
    v48 = v447;
    v49 = v467;
    v273 = v439;
    v50 = v433;
    v51 = v483;
    src[0] = v320;
    v305 = v427;
    v52 = v504;
    src[1] = v326;
    src[2] = v332;
    src[3] = v338;
    src[4] = v344;
    src[5] = v350;
    src[6] = v356;
    src[7] = v362;
    src[8] = v368;
    src[9] = v374;
    src[10] = v380;
    src[11] = v386;
    src[12] = v392;
    src[13] = v398;
    src[14] = v404;
    src[15] = v410;
    do
    {
      v249 = v50 ^ __ROR4__(v51 + v52, 25);
      v239 = v42 ^ __ROR4__(v48 + v281, 25);
      v29 = v313-- == 1;
      v53 = v305 ^ __ROR4__(v265 + v47, 25);
      v228 = v49 ^ __ROR4__(v257 + v273, 25);
      v54 = v44 ^ __ROR4__(v53 + v47, 23);
      v55 = v46 ^ __ROR4__(v249 + v52, 23);
      v56 = v45 ^ __ROR4__(v239 + v281, 23);
      v57 = v43 ^ __ROR4__(v228 + v273, 23);
      v58 = v51 ^ __ROR4__(v55 + v249, 19);
      v59 = v265 ^ __ROR4__(v54 + v53, 19);
      v60 = v48 ^ __ROR4__(v56 + v239, 19);
      v61 = v257 ^ __ROR4__(v57 + v228, 19);
      v297 = v47 ^ __ROR4__(v59 + v54, 14);
      v62 = v281 ^ __ROR4__(v60 + v56, 14);
      v289 = v52 ^ __ROR4__(v58 + v55, 14);
      v63 = v273 ^ __ROR4__(v61 + v57, 14);
      v51 = v58 ^ __ROR4__(v297 + v239, 25);
      v265 = v59 ^ __ROR4__(v62 + v228, 25);
      v48 = v60 ^ __ROR4__(v63 + v249, 25);
      v257 = v61 ^ __ROR4__(v289 + v53, 25);
      v46 = v55 ^ __ROR4__(v265 + v62, 23);
      v44 = v54 ^ __ROR4__(v48 + v63, 23);
      v45 = v56 ^ __ROR4__(v257 + v289, 23);
      v43 = v57 ^ __ROR4__(v51 + v297, 23);
      v305 = v53 ^ __ROR4__(v45 + v257, 19);
      v42 = v239 ^ __ROR4__(v43 + v51, 19);
      v50 = v249 ^ __ROR4__(v44 + v48, 19);
      v49 = v228 ^ __ROR4__(v46 + v265, 19);
      v52 = v289 ^ __ROR4__(v305 + v45, 14);
      v273 = v63 ^ __ROR4__(v50 + v44, 14);
      v281 = v62 ^ __ROR4__(v49 + v46, 14);
      v47 = v297 ^ __ROR4__(v42 + v43, 14);
    }
    while ( !v29 );
    v314 = v52 + v504;
    v416 = v257 + v415;
    v428 = v305 + v427;
    v434 = v50 + v433;
    v422 = v45 + v421;
    v454 = v44 + v453;
    v440 = v273 + v439;
    v448 = v48 + v447;
    v468 = v49 + v467;
    v488 = v43 + v487;
    v462 = v46 + v461;
    v474 = v281 + v473;
    v478 = v265 + v477;
    v484 = v51 + v483;
    v494 = v42 + v493;
    v498 = v47 + v497;
    src[16] = v52 + v504;
    src[17] = v416;
    src[18] = v422;
    src[19] = v428;
    src[20] = v434;
    src[21] = v440;
    src[22] = v448;
    src[23] = v454;
    src[24] = v462;
    src[25] = v468;
    src[26] = v474;
    src[27] = v478;
    src[28] = v484;
    src[29] = v488;
    src[30] = v494;
    src[31] = v498;
    memcpy(dest + 128, src, 0x80u);
    v321 = (v52 + v504) ^ v320;
    v327 = v416 ^ v326;
    v333 = v422 ^ v332;
    v339 = v428 ^ v338;
    v345 = v434 ^ v344;
    v351 = v440 ^ v350;
    v357 = v448 ^ v356;
    v363 = v454 ^ v362;
    v369 = v462 ^ v368;
    v375 = v468 ^ v374;
    v381 = v474 ^ v380;
    v387 = v478 ^ v386;
    v393 = v484 ^ v392;
    v399 = v488 ^ v398;
    v405 = v494 ^ v404;
    v64 = v405;
    v290 = v399;
    v258 = v357;
    v65 = v363;
    v66 = v333;
    v67 = v369;
    v68 = v339;
    v69 = v381;
    v70 = v375;
    v71 = v327;
    v72 = v345;
    v73 = v321;
    v411 = v498 ^ v410;
    v266 = v387;
    v74 = v411;
    v298 = v351;
    v250 = v393;
    v306 = 4;
    do
    {
      v229 = v72 ^ __ROR4__(v250 + v73, 25);
      v274 = v64 ^ __ROR4__(v258 + v69, 25);
      v29 = v306-- == 1;
      v240 = v70 ^ __ROR4__(v71 + v298, 25);
      v282 = v68 ^ __ROR4__(v266 + v74, 25);
      v75 = v67 ^ __ROR4__(v229 + v73, 23);
      v76 = v66 ^ __ROR4__(v274 + v69, 23);
      v77 = v65 ^ __ROR4__(v282 + v74, 23);
      v78 = v250 ^ __ROR4__(v75 + v229, 19);
      v79 = v290 ^ __ROR4__(v240 + v298, 23);
      v80 = v266 ^ __ROR4__(v77 + v282, 19);
      v81 = v258 ^ __ROR4__(v76 + v274, 19);
      v82 = v71 ^ __ROR4__(v79 + v240, 19);
      v83 = v73 ^ __ROR4__(v78 + v75, 14);
      v84 = v74 ^ __ROR4__(v80 + v77, 14);
      v85 = v69 ^ __ROR4__(v81 + v76, 14);
      v86 = v298 ^ __ROR4__(v82 + v79, 14);
      v250 = v78 ^ __ROR4__(v84 + v274, 25);
      v266 = v80 ^ __ROR4__(v85 + v240, 25);
      v258 = v81 ^ __ROR4__(v86 + v229, 25);
      v71 = v82 ^ __ROR4__(v83 + v282, 25);
      v67 = v75 ^ __ROR4__(v266 + v85, 23);
      v65 = v77 ^ __ROR4__(v258 + v86, 23);
      v66 = v76 ^ __ROR4__(v71 + v83, 23);
      v290 = v79 ^ __ROR4__(v250 + v84, 23);
      v68 = v282 ^ __ROR4__(v66 + v71, 19);
      v72 = v229 ^ __ROR4__(v65 + v258, 19);
      v70 = v240 ^ __ROR4__(v67 + v266, 19);
      v64 = v274 ^ __ROR4__(v290 + v250, 19);
      v73 = v83 ^ __ROR4__(v68 + v66, 14);
      v298 = v86 ^ __ROR4__(v72 + v65, 14);
      v69 = v85 ^ __ROR4__(v70 + v67, 14);
      v74 = v84 ^ __ROR4__(v64 + v290, 14);
    }
    while ( !v29 );
    v318 = v73 + v321;
    v324 = v71 + v327;
    v330 = v66 + v333;
    v336 = v68 + v339;
    v342 = v72 + v345;
    v348 = v298 + v351;
    v354 = v258 + v357;
    v360 = v65 + v363;
    v378 = v69 + v381;
    v366 = v67 + v369;
    v372 = v70 + v375;
    v384 = v266 + v387;
    v390 = v250 + v393;
    v396 = v290 + v399;
    v402 = v64 + v405;
    v408 = v74 + v411;
    v417 = v324 ^ v416;
    v423 = v330 ^ v422;
    v429 = v336 ^ v428;
    v435 = v342 ^ v434;
    v315 = v318 ^ v314;
    v441 = v348 ^ v440;
    v449 = v354 ^ v448;
    v455 = v360 ^ v454;
    v463 = v366 ^ v462;
    v469 = v372 ^ v468;
    v475 = v378 ^ v474;
    v485 = v390 ^ v484;
    v495 = v402 ^ v494;
    v499 = v408 ^ v498;
    v87 = v396 ^ v488;
    v479 = v384 ^ v478;
    v489 = v396 ^ v488;
    v267 = v449;
    v291 = v475;
    v259 = v417;
    v88 = v455;
    v89 = v423;
    v90 = v463;
    v91 = v429;
    v92 = v499;
    v93 = v469;
    v283 = v441;
    v94 = v435;
    v307 = 4;
    v251 = v485;
    v95 = v479;
    src[0] = v318;
    src[1] = v324;
    src[2] = v330;
    src[3] = v336;
    src[4] = v342;
    src[5] = v348;
    src[6] = v354;
    src[7] = v360;
    src[8] = v366;
    src[9] = v372;
    src[10] = v378;
    src[11] = v384;
    src[12] = v390;
    src[13] = v396;
    src[14] = v402;
    src[15] = v408;
    v241 = v495;
    v96 = v315;
    do
    {
      v230 = v94 ^ __ROR4__(v251 + v96, 25);
      v29 = v307-- == 1;
      v97 = v91 ^ __ROR4__(v95 + v92, 25);
      v275 = v241 ^ __ROR4__(v267 + v291, 25);
      v242 = v93 ^ __ROR4__(v259 + v283, 25);
      v98 = v90 ^ __ROR4__(v230 + v96, 23);
      v99 = v88 ^ __ROR4__(v97 + v92, 23);
      v100 = v89 ^ __ROR4__(v275 + v291, 23);
      v101 = v87 ^ __ROR4__(v242 + v283, 23);
      v102 = v251 ^ __ROR4__(v98 + v230, 19);
      v103 = v95 ^ __ROR4__(v99 + v97, 19);
      v104 = v267 ^ __ROR4__(v100 + v275, 19);
      v105 = v259 ^ __ROR4__(v101 + v242, 19);
      v106 = v96 ^ __ROR4__(v102 + v98, 14);
      v299 = v92 ^ __ROR4__(v103 + v99, 14);
      v107 = v291 ^ __ROR4__(v104 + v100, 14);
      v108 = v283 ^ __ROR4__(v105 + v101, 14);
      v95 = v103 ^ __ROR4__(v107 + v242, 25);
      v251 = v102 ^ __ROR4__(v299 + v275, 25);
      v267 = v104 ^ __ROR4__(v108 + v230, 25);
      v259 = v105 ^ __ROR4__(v106 + v97, 25);
      v90 = v98 ^ __ROR4__(v95 + v107, 23);
      v88 = v99 ^ __ROR4__(v267 + v108, 23);
      v89 = v100 ^ __ROR4__(v259 + v106, 23);
      v87 = v101 ^ __ROR4__(v251 + v299, 23);
      v91 = v97 ^ __ROR4__(v89 + v259, 19);
      v94 = v230 ^ __ROR4__(v88 + v267, 19);
      v93 = v242 ^ __ROR4__(v90 + v95, 19);
      v241 = v275 ^ __ROR4__(v87 + v251, 19);
      v96 = v106 ^ __ROR4__(v91 + v89, 14);
      v291 = v107 ^ __ROR4__(v93 + v90, 14);
      v283 = v108 ^ __ROR4__(v94 + v88, 14);
      v92 = v299 ^ __ROR4__(v241 + v87, 14);
    }
    while ( !v29 );
    v312 = v96 + v315;
    dest += 256;
    src[16] = v312;
    v420 = v89 + v423;
    v414 = v259 + v417;
    src[17] = v414;
    src[18] = v420;
    v426 = v91 + v429;
    src[19] = v426;
    v438 = v283 + v441;
    src[21] = v438;
    v432 = v94 + v435;
    src[20] = v432;
    v452 = v88 + v455;
    v446 = v267 + v449;
    src[22] = v446;
    v460 = v90 + v463;
    v466 = v93 + v469;
    src[23] = v452;
    v476 = v95 + v479;
    src[27] = v476;
    src[24] = v460;
    v472 = v291 + v475;
    src[25] = v466;
    src[26] = v472;
    v482 = v251 + v485;
    v486 = v87 + v489;
    src[28] = v482;
    v492 = v241 + v495;
    src[29] = v486;
    v496 = v92 + v499;
    src[30] = v492;
    src[31] = v496;
  }
  while ( dest != v506 );
  v109 = v312;
  desta = 512;
  do
  {
    v110 = src;
    v111 = (int)&v505[128 * (v109 & 0x3FF) - 8];
    do
    {
      v112 = *(_QWORD *)(v111 + 8);
      v111 += 8;
      *(_QWORD *)v110 ^= v112;
      v110 += 2;
    }
    while ( v110 != (int *)&v558 );
    v346 = src[18] ^ src[2];
    v334 = src[17] ^ src[1];
    v322 = src[16] ^ src[0];
    v370 = src[20] ^ src[4];
    v358 = src[19] ^ src[3];
    v308 = 4;
    v260 = src[17] ^ src[1];
    v382 = src[21] ^ src[5];
    v113 = src[18] ^ src[2];
    v114 = src[19] ^ src[3];
    v394 = src[22] ^ src[6];
    v406 = src[23] ^ src[7];
    v418 = src[24] ^ src[8];
    v442 = src[26] ^ src[10];
    v268 = src[22] ^ src[6];
    v456 = src[27] ^ src[11];
    v284 = src[21] ^ src[5];
    v115 = src[25] ^ src[9];
    v116 = src[23] ^ src[7];
    v117 = src[24] ^ src[8];
    v292 = src[26] ^ src[10];
    v470 = src[28] ^ src[12];
    v480 = src[29] ^ src[13];
    v118 = src[30] ^ src[14];
    v119 = src[29] ^ src[13];
    v120 = src[31] ^ src[15];
    v252 = src[28] ^ src[12];
    v121 = src[27] ^ src[11];
    v231 = src[20] ^ src[4];
    v122 = src[16] ^ src[0];
    v490 = src[30] ^ src[14];
    v500 = src[31] ^ src[15];
    do
    {
      v29 = v308-- == 1;
      v123 = v114 ^ __ROR4__(v121 + v120, 25);
      v232 = v231 ^ __ROR4__(v252 + v122, 25);
      v276 = v118 ^ __ROR4__(v268 + v292, 25);
      v243 = v115 ^ __ROR4__(v260 + v284, 25);
      v124 = v117 ^ __ROR4__(v232 + v122, 23);
      v125 = v116 ^ __ROR4__(v123 + v120, 23);
      v126 = v119 ^ __ROR4__(v243 + v284, 23);
      v127 = v113 ^ __ROR4__(v276 + v292, 23);
      v128 = v252 ^ __ROR4__(v124 + v232, 19);
      v129 = v121 ^ __ROR4__(v125 + v123, 19);
      v130 = v268 ^ __ROR4__(v127 + v276, 19);
      v131 = v260 ^ __ROR4__(v126 + v243, 19);
      v300 = v120 ^ __ROR4__(v129 + v125, 14);
      v132 = v122 ^ __ROR4__(v128 + v124, 14);
      v133 = v292 ^ __ROR4__(v130 + v127, 14);
      v134 = v284 ^ __ROR4__(v131 + v126, 14);
      v121 = v129 ^ __ROR4__(v133 + v243, 25);
      v252 = v128 ^ __ROR4__(v300 + v276, 25);
      v268 = v130 ^ __ROR4__(v134 + v232, 25);
      v260 = v131 ^ __ROR4__(v132 + v123, 25);
      v117 = v124 ^ __ROR4__(v121 + v133, 23);
      v116 = v125 ^ __ROR4__(v268 + v134, 23);
      v113 = v127 ^ __ROR4__(v260 + v132, 23);
      v119 = v126 ^ __ROR4__(v252 + v300, 23);
      v114 = v123 ^ __ROR4__(v113 + v260, 19);
      v231 = v232 ^ __ROR4__(v116 + v268, 19);
      v115 = v243 ^ __ROR4__(v117 + v121, 19);
      v118 = v276 ^ __ROR4__(v119 + v252, 19);
      v122 = v132 ^ __ROR4__(v114 + v113, 14);
      v135 = v134 ^ __ROR4__(v231 + v116, 14);
      v284 = v135;
      v120 = v300 ^ __ROR4__(v118 + v119, 14);
      v292 = v133 ^ __ROR4__(v115 + v117, 14);
    }
    while ( !v29 );
    src[0] = v122 + v322;
    v136 = v260 + v334;
    src[4] = v231 + v370;
    src[5] = v135 + v382;
    src[6] = v268 + v394;
    src[7] = v116 + v406;
    v137 = v115 + (src[25] ^ src[9]);
    src[10] = v292 + v442;
    src[12] = v252 + v470;
    src[13] = v119 + v480;
    src[8] = v117 + v418;
    src[11] = v121 + v456;
    src[14] = v118 + v490;
    src[15] = v120 + v500;
    v316 = (v122 + v322) ^ src[16];
    v328 = (v260 + v334) ^ src[17];
    v340 = (v113 + v346) ^ src[18];
    v352 = (v114 + v358) ^ src[19];
    v364 = (v231 + v370) ^ src[20];
    v376 = (v135 + v382) ^ src[21];
    v388 = (v268 + v394) ^ src[22];
    v400 = (v116 + v406) ^ src[23];
    v412 = (v117 + v418) ^ src[24];
    v424 = v137 ^ src[25];
    v430 = (v292 + v442) ^ src[26];
    v436 = (v121 + v456) ^ src[27];
    v443 = (v252 + v470) ^ src[28];
    v457 = (v118 + v490) ^ src[30];
    v253 = v436;
    v138 = (v120 + v500) ^ src[31];
    v139 = (v119 + v480) ^ src[29];
    v464 = v138;
    v269 = v388;
    v293 = v430;
    v450 = v139;
    v261 = v328;
    v285 = v376;
    src[3] = v114 + v358;
    v140 = v340;
    v141 = v412;
    v142 = v352;
    v143 = v137 ^ src[25];
    v144 = v364;
    v145 = v443;
    v309 = 4;
    src[1] = v136;
    src[2] = v113 + v346;
    src[9] = v137;
    v244 = v457;
    v146 = v400;
    v147 = v316;
    do
    {
      v233 = v144 ^ __ROR4__(v145 + v147, 25);
      v29 = v309-- == 1;
      v148 = v142 ^ __ROR4__(v253 + v138, 25);
      v277 = v244 ^ __ROR4__(v269 + v293, 25);
      v149 = v146 ^ __ROR4__(v148 + v138, 23);
      v245 = v143 ^ __ROR4__(v261 + v285, 25);
      v150 = v141 ^ __ROR4__(v233 + v147, 23);
      v151 = v140 ^ __ROR4__(v277 + v293, 23);
      v152 = v139 ^ __ROR4__(v245 + v285, 23);
      v153 = v145 ^ __ROR4__(v150 + v233, 19);
      v154 = v253 ^ __ROR4__(v149 + v148, 19);
      v155 = v261 ^ __ROR4__(v152 + v245, 19);
      v156 = v269 ^ __ROR4__(v151 + v277, 19);
      v301 = v138 ^ __ROR4__(v154 + v149, 14);
      v157 = v147 ^ __ROR4__(v153 + v150, 14);
      v158 = v293 ^ __ROR4__(v156 + v151, 14);
      v159 = v285 ^ __ROR4__(v155 + v152, 14);
      v145 = v153 ^ __ROR4__(v301 + v277, 25);
      v253 = v154 ^ __ROR4__(v158 + v245, 25);
      v261 = v155 ^ __ROR4__(v157 + v148, 25);
      v269 = v156 ^ __ROR4__(v159 + v233, 25);
      v141 = v150 ^ __ROR4__(v253 + v158, 23);
      v146 = v149 ^ __ROR4__(v269 + v159, 23);
      v140 = v151 ^ __ROR4__(v261 + v157, 23);
      v139 = v152 ^ __ROR4__(v145 + v301, 23);
      v142 = v148 ^ __ROR4__(v140 + v261, 19);
      v144 = v233 ^ __ROR4__(v146 + v269, 19);
      v143 = v245 ^ __ROR4__(v141 + v253, 19);
      v244 = v277 ^ __ROR4__(v139 + v145, 19);
      v147 = v157 ^ __ROR4__(v142 + v140, 14);
      v293 = v158 ^ __ROR4__(v143 + v141, 14);
      v285 = v159 ^ __ROR4__(v144 + v146, 14);
      v138 = v301 ^ __ROR4__(v244 + v139, 14);
    }
    while ( !v29 );
    v234 = v146;
    src[16] = v147 + v316;
    src[17] = v261 + v328;
    v160 = src;
    src[18] = v140 + v340;
    src[19] = v142 + v352;
    v161 = (int)&v505[128 * ((v147 + v316) & 0x3FF) - 8];
    src[20] = v144 + v364;
    src[21] = v285 + v376;
    src[22] = v269 + v388;
    src[23] = v234 + v400;
    src[24] = v141 + v412;
    src[25] = v143 + v424;
    src[26] = v293 + v430;
    src[27] = v253 + v436;
    src[28] = v145 + v443;
    src[29] = v139 + v450;
    src[30] = v244 + v457;
    src[31] = v138 + v464;
    do
    {
      v162 = *(_QWORD *)(v161 + 8);
      v161 += 8;
      *(_QWORD *)v160 ^= v162;
      v160 += 2;
    }
    while ( v160 != (int *)&v558 );
    v335 = src[17] ^ src[1];
    v323 = src[16] ^ src[0];
    v371 = src[20] ^ src[4];
    v310 = 4;
    v262 = src[17] ^ src[1];
    v163 = src[19] ^ src[3];
    v359 = src[19] ^ src[3];
    v383 = src[21] ^ src[5];
    v347 = src[18] ^ src[2];
    v395 = src[22] ^ src[6];
    v407 = src[23] ^ src[7];
    v419 = src[24] ^ src[8];
    v444 = src[26] ^ src[10];
    v286 = src[21] ^ src[5];
    v270 = src[22] ^ src[6];
    v458 = src[27] ^ src[11];
    v164 = src[25] ^ src[9];
    v294 = src[26] ^ src[10];
    v165 = src[23] ^ src[7];
    v166 = src[24] ^ src[8];
    v471 = src[28] ^ src[12];
    v481 = src[29] ^ src[13];
    v167 = src[28] ^ src[12];
    v168 = src[29] ^ src[13];
    v169 = src[30] ^ src[14];
    v254 = src[27] ^ src[11];
    v170 = src[31] ^ src[15];
    v235 = src[20] ^ src[4];
    v171 = src[18] ^ src[2];
    v172 = src[16] ^ src[0];
    v491 = src[30] ^ src[14];
    v501 = src[31] ^ src[15];
    do
    {
      v278 = v169 ^ __ROR4__(v294 + v270, 25);
      v29 = v310-- == 1;
      v173 = v163 ^ __ROR4__(v170 + v254, 25);
      v236 = v235 ^ __ROR4__(v172 + v167, 25);
      v246 = v164 ^ __ROR4__(v286 + v262, 25);
      v174 = v166 ^ __ROR4__(v236 + v172, 23);
      v175 = v165 ^ __ROR4__(v173 + v170, 23);
      v176 = v171 ^ __ROR4__(v278 + v294, 23);
      v177 = v168 ^ __ROR4__(v246 + v286, 23);
      v178 = v254 ^ __ROR4__(v175 + v173, 19);
      v179 = v167 ^ __ROR4__(v174 + v236, 19);
      v180 = v270 ^ __ROR4__(v176 + v278, 19);
      v181 = v262 ^ __ROR4__(v177 + v246, 19);
      v302 = v170 ^ __ROR4__(v178 + v175, 14);
      v182 = v172 ^ __ROR4__(v179 + v174, 14);
      v183 = v294 ^ __ROR4__(v180 + v176, 14);
      v184 = v286 ^ __ROR4__(v181 + v177, 14);
      v167 = v179 ^ __ROR4__(v302 + v278, 25);
      v254 = v178 ^ __ROR4__(v183 + v246, 25);
      v262 = v181 ^ __ROR4__(v182 + v173, 25);
      v270 = v180 ^ __ROR4__(v184 + v236, 25);
      v165 = v175 ^ __ROR4__(v270 + v184, 23);
      v166 = v174 ^ __ROR4__(v254 + v183, 23);
      v171 = v176 ^ __ROR4__(v262 + v182, 23);
      v168 = v177 ^ __ROR4__(v167 + v302, 23);
      v163 = v173 ^ __ROR4__(v171 + v262, 19);
      v235 = v236 ^ __ROR4__(v165 + v270, 19);
      v164 = v246 ^ __ROR4__(v166 + v254, 19);
      v169 = v278 ^ __ROR4__(v168 + v167, 19);
      v172 = v182 ^ __ROR4__(v163 + v171, 14);
      v185 = v184 ^ __ROR4__(v235 + v165, 14);
      v286 = v185;
      v170 = v302 ^ __ROR4__(v169 + v168, 14);
      v294 = v183 ^ __ROR4__(v164 + v166, 14);
    }
    while ( !v29 );
    src[0] = v172 + v323;
    v186 = v262 + v335;
    v187 = v171 + v347;
    src[3] = v163 + v359;
    src[4] = v235 + v371;
    src[5] = v185 + v383;
    src[7] = v165 + v407;
    v188 = v164 + (src[25] ^ src[9]);
    src[6] = v270 + v395;
    src[10] = v294 + v444;
    src[12] = v167 + v471;
    src[8] = v166 + v419;
    src[11] = v254 + v458;
    src[13] = v168 + v481;
    src[14] = v169 + v491;
    src[15] = v170 + v501;
    v317 = (v172 + v323) ^ src[16];
    v329 = (v262 + v335) ^ src[17];
    v341 = (v171 + v347) ^ src[18];
    v353 = (v163 + v359) ^ src[19];
    v365 = (v235 + v371) ^ src[20];
    v377 = (v185 + v383) ^ src[21];
    v389 = (v270 + v395) ^ src[22];
    v401 = (v165 + v407) ^ src[23];
    v413 = (v166 + v419) ^ src[24];
    v425 = v188 ^ src[25];
    v431 = (v294 + v444) ^ src[26];
    v437 = (v254 + v458) ^ src[27];
    v445 = (v167 + v471) ^ src[28];
    v451 = (v168 + v481) ^ src[29];
    v189 = v437;
    v263 = v389;
    v459 = (v169 + v491) ^ src[30];
    v271 = v329;
    v287 = v377;
    v465 = (v170 + v501) ^ src[31];
    v295 = v317;
    src[2] = v187;
    v190 = v459;
    v191 = v401;
    v192 = v341;
    v193 = v413;
    v194 = v353;
    v195 = v465;
    v196 = v188 ^ src[25];
    v197 = v365;
    v311 = 4;
    src[1] = v186;
    src[9] = v188;
    v255 = v445;
    v198 = v431;
    v199 = v451;
    do
    {
      v237 = v197 ^ __ROR4__(v295 + v255, 25);
      v279 = v190 ^ __ROR4__(v198 + v263, 25);
      v200 = v194 ^ __ROR4__(v195 + v189, 25);
      v29 = v311-- == 1;
      v201 = v191 ^ __ROR4__(v200 + v195, 23);
      v202 = v193 ^ __ROR4__(v237 + v295, 23);
      v247 = v196 ^ __ROR4__(v287 + v271, 25);
      v203 = v192 ^ __ROR4__(v279 + v198, 23);
      v204 = v199 ^ __ROR4__(v247 + v287, 23);
      v205 = v189 ^ __ROR4__(v201 + v200, 19);
      v206 = v255 ^ __ROR4__(v202 + v237, 19);
      v207 = v263 ^ __ROR4__(v203 + v279, 19);
      v208 = v271 ^ __ROR4__(v204 + v247, 19);
      v209 = v295 ^ __ROR4__(v206 + v202, 14);
      v303 = v195 ^ __ROR4__(v205 + v201, 14);
      v210 = v198 ^ __ROR4__(v207 + v203, 14);
      v211 = v287 ^ __ROR4__(v208 + v204, 14);
      v189 = v205 ^ __ROR4__(v210 + v247, 25);
      v255 = v206 ^ __ROR4__(v303 + v279, 25);
      v212 = v208 ^ __ROR4__(v209 + v200, 25);
      v263 = v207 ^ __ROR4__(v211 + v237, 25);
      v191 = v201 ^ __ROR4__(v263 + v211, 23);
      v192 = v203 ^ __ROR4__(v212 + v209, 23);
      v193 = v202 ^ __ROR4__(v189 + v210, 23);
      v271 = v212;
      v199 = v204 ^ __ROR4__(v255 + v303, 23);
      v194 = v200 ^ __ROR4__(v192 + v212, 19);
      v196 = v247 ^ __ROR4__(v193 + v189, 19);
      v197 = v237 ^ __ROR4__(v191 + v263, 19);
      v190 = v279 ^ __ROR4__(v199 + v255, 19);
      v295 = v209 ^ __ROR4__(v194 + v192, 14);
      v287 = v211 ^ __ROR4__(v197 + v191, 14);
      v198 = v210 ^ __ROR4__(v196 + v193, 14);
      v195 = v303 ^ __ROR4__(v190 + v199, 14);
    }
    while ( !v29 );
    v29 = desta-- == 1;
    v109 = v295 + v317;
    src[17] = v271 + v329;
    src[18] = v192 + v341;
    src[19] = v194 + v353;
    src[20] = v197 + v365;
    src[21] = v287 + v377;
    src[23] = v191 + v401;
    src[22] = v263 + v389;
    src[24] = v193 + v413;
    src[25] = v196 + v425;
    src[26] = v198 + v431;
    src[16] = v295 + v317;
    src[27] = v189 + v437;
    src[29] = v199 + v451;
    src[28] = v255 + v445;
    src[30] = v190 + v459;
    src[31] = v195 + v465;
  }
  while ( !v29 );
  v529 = 1779033703;
  v530 = -1150833019;
  v531 = 1013904242;
  v532 = -1521486534;
  v533 = 1359893119;
  v534 = -1694144372;
  v535 = 528734635;
  v536 = 1541459225;
  sub_F840(&v529, a1, 1);
  v213 = v509[1];
  v214 = v509[2];
  v215 = v509[3];
  v548 = *v509;
  v549 = v213;
  v550 = v214;
  v551 = v215;
  v552 = 128;
  v553 = 0;
  v554 = 0;
  v555 = 0;
  memset(v556, 0, 28);
  v556[7] = -2147352576;
  sub_F840(&v529, &v548, 1);
  v216 = v529;
  v217 = v530;
  v218 = v531;
  v219 = v532;
  a3[6] = 528734635;
  v538 = v216;
  v539 = v217;
  v540 = v218;
  v541 = v219;
  v220 = v533;
  v221 = v534;
  v222 = v535;
  v223 = v536;
  *a3 = 1779033703;
  a3[1] = -1150833019;
  a3[2] = 1013904242;
  a3[3] = -1521486534;
  a3[4] = 1359893119;
  a3[5] = -1694144372;
  a3[7] = 1541459225;
  v224 = desta;
  v542 = v220;
  v543 = v221;
  v544 = v222;
  v545 = v223;
  do
  {
    *(int *)((char *)&v548 + v224) = *(int *)((char *)&v538 + v224) ^ 0x5C5C5C5C;
    v224 += 4;
  }
  while ( v224 != 32 );
  memset(v556, 92, 32);
  sub_F840(a3, &v548, 0);
  v225 = 0;
  v529 = 1779033703;
  v530 = -1150833019;
  v531 = 1013904242;
  v532 = -1521486534;
  v533 = 1359893119;
  v534 = -1694144372;
  v535 = 528734635;
  v536 = 1541459225;
  do
  {
    *(int *)((char *)&v548 + v225) = *(int *)((char *)&v538 + v225) ^ 0x36363636;
    v225 += 4;
  }
  while ( v225 != 32 );
  memset(v556, 54, 32);
  sub_F840(&v529, &v548, 0);
  sub_F840(&v529, src, 1);
  sub_F840(&v529, &src[16], 1);
  sub_F840(&v529, dword_49EC4, 0);
  v548 = v529;
  v549 = v530;
  v550 = v531;
  v551 = v532;
  v552 = v533;
  v553 = v534;
  v554 = v535;
  v555 = v536;
  v556[0] = 0x80000000;
  memset(&v556[1], 0, 24);
  v556[7] = 768;
  return sub_F840(a3, &v548, 0);
}
