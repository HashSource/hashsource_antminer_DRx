unsigned int __fastcall sub_106E6C(_DWORD *a1, char a2, char a3, _WORD *a4, int a5)
{
  int v6; // lr
  int v7; // r6
  int v8; // r11
  int v9; // r10
  int v10; // r0
  int v11; // r12
  int v12; // r9
  int v13; // r1
  int v14; // r8
  int v15; // lr
  int v16; // r7
  int v17; // r4
  int v18; // r3
  int v19; // r9
  int v20; // r10
  int v21; // r11
  int v22; // r12
  int v23; // r5
  int v24; // r8
  int v25; // r11
  int v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // lr
  int v30; // r9
  int v31; // lr
  int v32; // r5
  int v33; // r2
  int v34; // r2
  int v35; // r3
  int v36; // lr
  int v37; // lr
  int v38; // r1
  int v39; // r10
  int v40; // r7
  int v41; // r4
  int v42; // r8
  int v43; // r6
  int v44; // r5
  int v45; // r11
  int v46; // r2
  int v47; // r3
  int v48; // r12
  int v49; // r4
  int v50; // lr
  int v51; // r0
  int v52; // r4
  int v53; // r10
  int v54; // r8
  int v55; // r5
  int v56; // r6
  int v57; // r7
  int v58; // r9
  int v59; // t2
  int v60; // r2
  int v61; // r1
  int v62; // r11
  int v63; // lr
  int v64; // r3
  int v65; // r2
  int v66; // r4
  int v67; // r2
  int v68; // r8
  int v69; // r9
  int v70; // r10
  int v71; // r6
  int v72; // r1
  int v73; // r11
  int v74; // r5
  int v75; // r0
  int v76; // r2
  int v77; // lr
  int v78; // r10
  int v79; // r4
  int v80; // r12
  int v81; // r9
  int v82; // r7
  int v83; // r0
  int v84; // r12
  int v85; // r1
  int v86; // r8
  int v87; // r4
  int v88; // r11
  int v89; // r7
  int v90; // r5
  int v91; // lr
  int v92; // r3
  int v93; // r9
  int v94; // r8
  int v95; // r2
  int v96; // r1
  int v97; // r10
  int v98; // r11
  int v99; // r12
  int v100; // r6
  int v101; // lr
  int v102; // r0
  int v103; // r3
  int v104; // r0
  int v105; // r5
  int v106; // r0
  int v107; // r4
  int v108; // r2
  int v109; // r10
  int v110; // r11
  int v111; // r8
  int v112; // r7
  int v113; // r9
  int v114; // r6
  int v115; // r4
  int v116; // lr
  int v117; // r5
  int v118; // r12
  int v119; // r3
  int v120; // r9
  int v121; // r2
  int v122; // r3
  int v123; // r3
  int v124; // r6
  int v125; // r12
  int v126; // r5
  int v127; // r10
  int v128; // r1
  int v129; // r0
  int v130; // r11
  int v131; // r1
  int v132; // r0
  int v133; // r0
  int v134; // r2
  int v135; // r3
  int v136; // r4
  int v137; // r11
  int v138; // r7
  int v139; // r1
  int v140; // r0
  int v141; // r9
  int v142; // lr
  int v143; // r6
  int v144; // r6
  int v145; // r8
  int v146; // r5
  int v147; // lr
  int v148; // r10
  int v149; // r3
  int v150; // r8
  int v151; // r4
  int v152; // r3
  int v153; // r11
  int v154; // r9
  int v155; // r2
  int v156; // r6
  int v157; // r7
  int v158; // r5
  int v159; // r1
  int v160; // lr
  int v161; // r10
  int v162; // r3
  int v163; // r12
  int v164; // r9
  int v165; // r12
  int v166; // r0
  int v167; // r4
  int v168; // r2
  int v169; // r11
  int v170; // r3
  int v171; // r10
  int v172; // r8
  int v173; // r6
  int v174; // r1
  int v175; // r5
  int v176; // r3
  int v177; // r9
  int v178; // lr
  int v179; // r11
  int v180; // r12
  int v181; // r0
  int v182; // r1
  int v183; // r2
  int v184; // r4
  int v185; // r3
  int v186; // r8
  int v187; // r10
  int v188; // r7
  int v189; // lr
  int v190; // r1
  int v191; // r12
  int v192; // r1
  int v193; // r1
  int v194; // r0
  int v195; // r2
  int v196; // r5
  int v197; // r3
  int v198; // r4
  int v199; // r8
  int v200; // r4
  int v201; // r7
  int v202; // r11
  int v203; // r3
  int v204; // r9
  int v205; // r6
  int v206; // r1
  int v207; // r10
  int v208; // r0
  int v209; // r5
  int v210; // lr
  int v211; // r10
  int v212; // r3
  int v213; // r8
  int v214; // r4
  int v215; // r3
  int v216; // r11
  int v217; // r9
  int v218; // r2
  int v219; // r6
  int v220; // r7
  int v221; // r10
  int v222; // r1
  int v223; // r5
  int v224; // r1
  int v225; // lr
  int v226; // r3
  int v227; // r12
  int v228; // r9
  int v229; // r1
  int v230; // r12
  int v231; // r0
  int v232; // r4
  int v233; // r2
  int v234; // r11
  int v235; // r3
  int v236; // r10
  int v237; // r8
  int v238; // r6
  int v239; // r5
  int v240; // lr
  int v241; // r11
  int v242; // r12
  int v243; // r0
  int v244; // r9
  int v245; // r1
  int v246; // r2
  int v247; // r4
  int v248; // r3
  int v249; // r8
  int v250; // r10
  int v251; // r7
  int v252; // lr
  int v253; // r1
  int v254; // r12
  int v255; // r1
  int v256; // r1
  int v257; // r0
  int v258; // r2
  int v259; // r5
  int v260; // r7
  int v261; // r3
  int v262; // r4
  int v263; // r8
  int v264; // r4
  int v265; // r11
  int v266; // r3
  int v267; // r9
  int v268; // r6
  int v269; // r1
  int v270; // r10
  int v271; // r0
  int v272; // r5
  int v273; // lr
  int v274; // r10
  int v275; // r3
  int v276; // r8
  int v277; // r4
  int v278; // r3
  int v279; // r11
  int v280; // r9
  int v281; // r2
  int v282; // r6
  int v283; // r7
  int v284; // r10
  int v285; // r1
  int v286; // r5
  int v287; // r1
  int v288; // lr
  int v289; // r3
  int v290; // r12
  int v291; // r9
  int v292; // r1
  int v293; // r12
  int v294; // r0
  int v295; // r4
  int v296; // r2
  int v297; // r11
  int v298; // r3
  int v299; // r10
  int v300; // r8
  int v301; // r6
  int v302; // lr
  int v303; // r5
  int v304; // r11
  int v305; // r3
  int v306; // r9
  int v307; // r7
  int v308; // r12
  int v309; // r1
  int v310; // r2
  int v311; // r4
  int v312; // r3
  int v313; // r8
  int v314; // r10
  int v315; // r7
  int v316; // lr
  int v317; // r1
  int v318; // r12
  int v319; // r1
  int v320; // r1
  int v321; // r0
  int v322; // r2
  int v323; // r5
  int v324; // r7
  int v325; // r3
  int v326; // r4
  int v327; // r8
  int v328; // r4
  int v329; // r11
  int v330; // r3
  int v331; // r9
  int v332; // r6
  int v333; // r1
  int v334; // r10
  int v335; // r0
  int v336; // r5
  int v337; // lr
  int v338; // r10
  int v339; // r3
  int v340; // r8
  int v341; // r4
  int v342; // r3
  int v343; // r11
  int v344; // r9
  int v345; // r2
  int v346; // r6
  int v347; // r7
  int v348; // r10
  int v349; // r1
  int v350; // r5
  int v351; // r1
  int v352; // lr
  int v353; // r3
  int v354; // r12
  int v355; // r9
  int v356; // r1
  int v357; // r12
  int v358; // r0
  int v359; // r4
  int v360; // r2
  int v361; // r11
  int v362; // r3
  int v363; // r10
  int v364; // r8
  int v365; // r6
  int v366; // r1
  int v367; // r5
  int v368; // r3
  int v369; // r9
  int v370; // lr
  int v371; // r11
  int v372; // r7
  int v373; // r12
  int v374; // r1
  int v375; // r2
  int v376; // r4
  int v377; // r3
  int v378; // r8
  int v379; // r10
  int v380; // r7
  int v381; // lr
  int v382; // r1
  int v383; // r12
  int v384; // r1
  int v385; // r1
  int v386; // r0
  int v387; // r2
  int v388; // r5
  int v389; // r3
  int v390; // r8
  int v391; // r4
  int v392; // r7
  int v393; // r11
  int v394; // r3
  int v395; // r9
  int v396; // r6
  int v397; // r1
  int v398; // r10
  int v399; // r0
  int v400; // r5
  int v401; // lr
  int v402; // r10
  int v403; // r3
  int v404; // r8
  int v405; // r4
  int v406; // r3
  int v407; // r11
  int v408; // r9
  int v409; // r2
  int v410; // r6
  int v411; // r7
  int v412; // r10
  int v413; // r1
  int v414; // r5
  int v415; // r1
  int v416; // lr
  int v417; // r3
  int v418; // r12
  int v419; // r9
  int v420; // r1
  int v421; // r12
  int v422; // r0
  int v423; // r4
  int v424; // r2
  int v425; // r11
  int v426; // r3
  int v427; // r10
  int v428; // r8
  int v429; // r6
  int v430; // r5
  int v431; // lr
  int v432; // r11
  int v433; // r12
  int v434; // r0
  int v435; // r9
  int v436; // r1
  int v437; // r2
  int v438; // r4
  int v439; // r3
  int v440; // r8
  int v441; // r10
  int v442; // r7
  int v443; // lr
  int v444; // r1
  int v445; // r1
  int v446; // lr
  int v447; // r5
  int v448; // r0
  int v449; // r3
  int v450; // r4
  int v451; // r8
  int v452; // r4
  int v453; // r10
  int v454; // r11
  int v455; // r3
  int v456; // r9
  int v457; // r7
  int v458; // r12
  int v459; // r6
  int v460; // r1
  int v461; // r5
  int v462; // lr
  int v463; // r0
  int v464; // r12
  int v465; // r12
  int v466; // r9
  int v467; // r2
  int v468; // r4
  int v469; // r3
  int v470; // r8
  int v471; // r10
  int v472; // r11
  int v473; // r2
  int v474; // r7
  int v475; // r6
  int v476; // r1
  int v477; // lr
  int v478; // r1
  int v479; // r3
  int v480; // r0
  int v481; // r10
  int v482; // r0
  int v483; // r1
  int v484; // r0
  int v485; // r9
  int v486; // r0
  int v487; // r0
  int v488; // r4
  int v489; // r6
  int v490; // r5
  int v491; // r11
  int v492; // r8
  int v493; // r7
  int v494; // r1
  int v495; // r12
  int v496; // r2
  int v497; // lr
  int v498; // r0
  int v499; // r12
  int v500; // r3
  int v501; // r2
  _WORD *v502; // r3
  unsigned int v503; // r2
  _DWORD *i; // lr
  unsigned int v505; // t1
  unsigned int result; // r0
  int v507; // [sp+0h] [bp-84h]
  int v508; // [sp+4h] [bp-80h]
  int v509; // [sp+4h] [bp-80h]
  int v510; // [sp+4h] [bp-80h]
  int v511; // [sp+4h] [bp-80h]
  int v512; // [sp+4h] [bp-80h]
  int v513; // [sp+4h] [bp-80h]
  int v514; // [sp+4h] [bp-80h]
  int v515; // [sp+4h] [bp-80h]
  int v516; // [sp+4h] [bp-80h]
  int v517; // [sp+4h] [bp-80h]
  int v518; // [sp+4h] [bp-80h]
  int v519; // [sp+4h] [bp-80h]
  int v520; // [sp+4h] [bp-80h]
  int v521; // [sp+4h] [bp-80h]
  int v522; // [sp+4h] [bp-80h]
  int v523; // [sp+4h] [bp-80h]
  int v524; // [sp+4h] [bp-80h]
  int v525; // [sp+4h] [bp-80h]
  int v526; // [sp+4h] [bp-80h]
  int v527; // [sp+4h] [bp-80h]
  int v528; // [sp+4h] [bp-80h]
  int v529; // [sp+4h] [bp-80h]
  int v530; // [sp+4h] [bp-80h]
  int v531; // [sp+4h] [bp-80h]
  int v532; // [sp+4h] [bp-80h]
  int v533; // [sp+4h] [bp-80h]
  int v534; // [sp+4h] [bp-80h]
  int v535; // [sp+4h] [bp-80h]
  int v536; // [sp+4h] [bp-80h]
  int v537; // [sp+4h] [bp-80h]
  int v538; // [sp+4h] [bp-80h]
  int v539; // [sp+8h] [bp-7Ch]
  int v540; // [sp+8h] [bp-7Ch]
  int v541; // [sp+8h] [bp-7Ch]
  int v542; // [sp+8h] [bp-7Ch]
  int v543; // [sp+8h] [bp-7Ch]
  int v544; // [sp+8h] [bp-7Ch]
  int v545; // [sp+8h] [bp-7Ch]
  int v546; // [sp+8h] [bp-7Ch]
  int v547; // [sp+8h] [bp-7Ch]
  int v548; // [sp+8h] [bp-7Ch]
  int v549; // [sp+8h] [bp-7Ch]
  int v550; // [sp+8h] [bp-7Ch]
  int v551; // [sp+8h] [bp-7Ch]
  int v552; // [sp+8h] [bp-7Ch]
  int v553; // [sp+8h] [bp-7Ch]
  int v554; // [sp+8h] [bp-7Ch]
  int v555; // [sp+8h] [bp-7Ch]
  int v556; // [sp+8h] [bp-7Ch]
  int v557; // [sp+8h] [bp-7Ch]
  int v558; // [sp+8h] [bp-7Ch]
  int v559; // [sp+8h] [bp-7Ch]
  int v560; // [sp+8h] [bp-7Ch]
  int v561; // [sp+8h] [bp-7Ch]
  int v562; // [sp+8h] [bp-7Ch]
  int v563; // [sp+8h] [bp-7Ch]
  int v564; // [sp+8h] [bp-7Ch]
  int v565; // [sp+8h] [bp-7Ch]
  int v566; // [sp+8h] [bp-7Ch]
  int v567; // [sp+8h] [bp-7Ch]
  int v568; // [sp+8h] [bp-7Ch]
  int v569; // [sp+8h] [bp-7Ch]
  int v570; // [sp+Ch] [bp-78h]
  int v571; // [sp+Ch] [bp-78h]
  int v572; // [sp+Ch] [bp-78h]
  int v573; // [sp+Ch] [bp-78h]
  int v574; // [sp+Ch] [bp-78h]
  int v575; // [sp+Ch] [bp-78h]
  int v576; // [sp+Ch] [bp-78h]
  int v577; // [sp+Ch] [bp-78h]
  int v578; // [sp+Ch] [bp-78h]
  int v579; // [sp+Ch] [bp-78h]
  int v580; // [sp+Ch] [bp-78h]
  int v581; // [sp+Ch] [bp-78h]
  int v582; // [sp+Ch] [bp-78h]
  int v583; // [sp+Ch] [bp-78h]
  int v584; // [sp+Ch] [bp-78h]
  int v585; // [sp+Ch] [bp-78h]
  int v586; // [sp+Ch] [bp-78h]
  int v587; // [sp+Ch] [bp-78h]
  int v588; // [sp+Ch] [bp-78h]
  int v589; // [sp+Ch] [bp-78h]
  int v590; // [sp+Ch] [bp-78h]
  int v591; // [sp+Ch] [bp-78h]
  int v592; // [sp+Ch] [bp-78h]
  int v593; // [sp+Ch] [bp-78h]
  int v594; // [sp+Ch] [bp-78h]
  int v595; // [sp+Ch] [bp-78h]
  int v596; // [sp+Ch] [bp-78h]
  int v597; // [sp+Ch] [bp-78h]
  int v598; // [sp+Ch] [bp-78h]
  int v599; // [sp+Ch] [bp-78h]
  int v600; // [sp+10h] [bp-74h]
  int v601; // [sp+10h] [bp-74h]
  int v602; // [sp+10h] [bp-74h]
  int v603; // [sp+10h] [bp-74h]
  int v604; // [sp+10h] [bp-74h]
  int v605; // [sp+10h] [bp-74h]
  int v606; // [sp+10h] [bp-74h]
  int v607; // [sp+10h] [bp-74h]
  int v608; // [sp+10h] [bp-74h]
  int v609; // [sp+10h] [bp-74h]
  int v610; // [sp+10h] [bp-74h]
  int v611; // [sp+10h] [bp-74h]
  int v612; // [sp+10h] [bp-74h]
  int v613; // [sp+10h] [bp-74h]
  int v614; // [sp+10h] [bp-74h]
  int v615; // [sp+10h] [bp-74h]
  int v616; // [sp+10h] [bp-74h]
  int v617; // [sp+10h] [bp-74h]
  int v618; // [sp+10h] [bp-74h]
  int v619; // [sp+10h] [bp-74h]
  int v620; // [sp+10h] [bp-74h]
  int v621; // [sp+10h] [bp-74h]
  int v622; // [sp+10h] [bp-74h]
  int v623; // [sp+10h] [bp-74h]
  int v624; // [sp+10h] [bp-74h]
  int v625; // [sp+10h] [bp-74h]
  int v626; // [sp+10h] [bp-74h]
  int v627; // [sp+10h] [bp-74h]
  int v628; // [sp+10h] [bp-74h]
  int v629; // [sp+14h] [bp-70h]
  int v630; // [sp+14h] [bp-70h]
  int v631; // [sp+14h] [bp-70h]
  int v632; // [sp+14h] [bp-70h]
  int v633; // [sp+14h] [bp-70h]
  int v634; // [sp+14h] [bp-70h]
  int v635; // [sp+14h] [bp-70h]
  int v636; // [sp+14h] [bp-70h]
  int v637; // [sp+14h] [bp-70h]
  int v638; // [sp+14h] [bp-70h]
  int v639; // [sp+14h] [bp-70h]
  int v640; // [sp+14h] [bp-70h]
  int v641; // [sp+14h] [bp-70h]
  int v642; // [sp+14h] [bp-70h]
  int v643; // [sp+14h] [bp-70h]
  int v644; // [sp+14h] [bp-70h]
  int v645; // [sp+14h] [bp-70h]
  int v646; // [sp+14h] [bp-70h]
  int v647; // [sp+14h] [bp-70h]
  int v648; // [sp+14h] [bp-70h]
  int v649; // [sp+14h] [bp-70h]
  int v650; // [sp+14h] [bp-70h]
  int v651; // [sp+14h] [bp-70h]
  int v652; // [sp+14h] [bp-70h]
  int v653; // [sp+14h] [bp-70h]
  int v654; // [sp+14h] [bp-70h]
  int v655; // [sp+14h] [bp-70h]
  int v656; // [sp+14h] [bp-70h]
  int v657; // [sp+14h] [bp-70h]
  int v658; // [sp+14h] [bp-70h]
  int v659; // [sp+14h] [bp-70h]
  int v660; // [sp+18h] [bp-6Ch]
  int v661; // [sp+18h] [bp-6Ch]
  int v662; // [sp+18h] [bp-6Ch]
  int v663; // [sp+18h] [bp-6Ch]
  int v664; // [sp+18h] [bp-6Ch]
  int v665; // [sp+18h] [bp-6Ch]
  int v666; // [sp+18h] [bp-6Ch]
  int v667; // [sp+18h] [bp-6Ch]
  int v668; // [sp+18h] [bp-6Ch]
  int v669; // [sp+18h] [bp-6Ch]
  int v670; // [sp+18h] [bp-6Ch]
  int v671; // [sp+18h] [bp-6Ch]
  int v672; // [sp+18h] [bp-6Ch]
  int v673; // [sp+18h] [bp-6Ch]
  int v674; // [sp+18h] [bp-6Ch]
  int v675; // [sp+18h] [bp-6Ch]
  int v676; // [sp+18h] [bp-6Ch]
  int v677; // [sp+18h] [bp-6Ch]
  int v678; // [sp+18h] [bp-6Ch]
  int v679; // [sp+18h] [bp-6Ch]
  int v680; // [sp+18h] [bp-6Ch]
  int v681; // [sp+18h] [bp-6Ch]
  int v682; // [sp+18h] [bp-6Ch]
  int v683; // [sp+18h] [bp-6Ch]
  int v684; // [sp+18h] [bp-6Ch]
  int v685; // [sp+18h] [bp-6Ch]
  int v686; // [sp+18h] [bp-6Ch]
  int v687; // [sp+18h] [bp-6Ch]
  int v688; // [sp+1Ch] [bp-68h]
  int v689; // [sp+1Ch] [bp-68h]
  int v690; // [sp+1Ch] [bp-68h]
  int v691; // [sp+1Ch] [bp-68h]
  int v692; // [sp+1Ch] [bp-68h]
  int v693; // [sp+1Ch] [bp-68h]
  int v694; // [sp+1Ch] [bp-68h]
  int v695; // [sp+1Ch] [bp-68h]
  int v696; // [sp+1Ch] [bp-68h]
  int v697; // [sp+1Ch] [bp-68h]
  int v698; // [sp+1Ch] [bp-68h]
  int v699; // [sp+1Ch] [bp-68h]
  int v700; // [sp+1Ch] [bp-68h]
  int v701; // [sp+1Ch] [bp-68h]
  int v702; // [sp+1Ch] [bp-68h]
  int v703; // [sp+1Ch] [bp-68h]
  int v704; // [sp+1Ch] [bp-68h]
  int v705; // [sp+1Ch] [bp-68h]
  int v706; // [sp+1Ch] [bp-68h]
  int v707; // [sp+1Ch] [bp-68h]
  int v708; // [sp+1Ch] [bp-68h]
  int v709; // [sp+1Ch] [bp-68h]
  int v710; // [sp+1Ch] [bp-68h]
  int v711; // [sp+1Ch] [bp-68h]
  int v712; // [sp+1Ch] [bp-68h]
  int v713; // [sp+1Ch] [bp-68h]
  int v714; // [sp+1Ch] [bp-68h]
  int v715; // [sp+1Ch] [bp-68h]
  int v716; // [sp+1Ch] [bp-68h]
  int v717; // [sp+20h] [bp-64h]
  int v718; // [sp+20h] [bp-64h]
  int v719; // [sp+20h] [bp-64h]
  int v720; // [sp+20h] [bp-64h]
  int v721; // [sp+20h] [bp-64h]
  int v722; // [sp+20h] [bp-64h]
  int v723; // [sp+20h] [bp-64h]
  int v724; // [sp+20h] [bp-64h]
  int v725; // [sp+20h] [bp-64h]
  int v726; // [sp+20h] [bp-64h]
  int v727; // [sp+20h] [bp-64h]
  int v728; // [sp+20h] [bp-64h]
  int v729; // [sp+20h] [bp-64h]
  int v730; // [sp+20h] [bp-64h]
  int v731; // [sp+20h] [bp-64h]
  int v732; // [sp+20h] [bp-64h]
  int v733; // [sp+20h] [bp-64h]
  int v734; // [sp+20h] [bp-64h]
  int v735; // [sp+20h] [bp-64h]
  int v736; // [sp+20h] [bp-64h]
  int v737; // [sp+20h] [bp-64h]
  int v738; // [sp+20h] [bp-64h]
  int v739; // [sp+20h] [bp-64h]
  int v740; // [sp+20h] [bp-64h]
  int v741; // [sp+20h] [bp-64h]
  int v742; // [sp+20h] [bp-64h]
  int v743; // [sp+20h] [bp-64h]
  int v744; // [sp+20h] [bp-64h]
  int v745; // [sp+20h] [bp-64h]
  int v746; // [sp+24h] [bp-60h]
  int v747; // [sp+24h] [bp-60h]
  int v748; // [sp+24h] [bp-60h]
  int v749; // [sp+24h] [bp-60h]
  int v750; // [sp+24h] [bp-60h]
  int v751; // [sp+24h] [bp-60h]
  int v752; // [sp+24h] [bp-60h]
  int v753; // [sp+24h] [bp-60h]
  int v754; // [sp+24h] [bp-60h]
  int v755; // [sp+24h] [bp-60h]
  int v756; // [sp+24h] [bp-60h]
  int v757; // [sp+24h] [bp-60h]
  int v758; // [sp+24h] [bp-60h]
  int v759; // [sp+24h] [bp-60h]
  int v760; // [sp+24h] [bp-60h]
  int v761; // [sp+24h] [bp-60h]
  int v762; // [sp+24h] [bp-60h]
  int v763; // [sp+24h] [bp-60h]
  int v764; // [sp+24h] [bp-60h]
  int v765; // [sp+24h] [bp-60h]
  int v766; // [sp+24h] [bp-60h]
  int v767; // [sp+24h] [bp-60h]
  int v768; // [sp+24h] [bp-60h]
  int v769; // [sp+24h] [bp-60h]
  int v770; // [sp+24h] [bp-60h]
  int v771; // [sp+24h] [bp-60h]
  int v772; // [sp+24h] [bp-60h]
  int v773; // [sp+24h] [bp-60h]
  int v774; // [sp+28h] [bp-5Ch]
  int v775; // [sp+28h] [bp-5Ch]
  int v776; // [sp+28h] [bp-5Ch]
  int v777; // [sp+28h] [bp-5Ch]
  int v778; // [sp+28h] [bp-5Ch]
  int v779; // [sp+28h] [bp-5Ch]
  int v780; // [sp+28h] [bp-5Ch]
  int v781; // [sp+28h] [bp-5Ch]
  int v782; // [sp+28h] [bp-5Ch]
  int v783; // [sp+28h] [bp-5Ch]
  int v784; // [sp+28h] [bp-5Ch]
  int v785; // [sp+28h] [bp-5Ch]
  int v786; // [sp+28h] [bp-5Ch]
  int v787; // [sp+28h] [bp-5Ch]
  int v788; // [sp+28h] [bp-5Ch]
  int v789; // [sp+28h] [bp-5Ch]
  int v790; // [sp+28h] [bp-5Ch]
  int v791; // [sp+28h] [bp-5Ch]
  int v792; // [sp+28h] [bp-5Ch]
  int v793; // [sp+28h] [bp-5Ch]
  int v794; // [sp+28h] [bp-5Ch]
  int v795; // [sp+28h] [bp-5Ch]
  int v796; // [sp+28h] [bp-5Ch]
  int v797; // [sp+28h] [bp-5Ch]
  int v798; // [sp+28h] [bp-5Ch]
  int v799; // [sp+28h] [bp-5Ch]
  int v800; // [sp+28h] [bp-5Ch]
  int v801; // [sp+28h] [bp-5Ch]
  int v802; // [sp+28h] [bp-5Ch]
  int v803; // [sp+2Ch] [bp-58h]
  int v804; // [sp+2Ch] [bp-58h]
  int v805; // [sp+2Ch] [bp-58h]
  int v806; // [sp+2Ch] [bp-58h]
  int v807; // [sp+2Ch] [bp-58h]
  int v808; // [sp+2Ch] [bp-58h]
  int v809; // [sp+2Ch] [bp-58h]
  int v810; // [sp+2Ch] [bp-58h]
  int v811; // [sp+2Ch] [bp-58h]
  int v812; // [sp+2Ch] [bp-58h]
  int v813; // [sp+2Ch] [bp-58h]
  int v814; // [sp+2Ch] [bp-58h]
  int v815; // [sp+2Ch] [bp-58h]
  int v816; // [sp+2Ch] [bp-58h]
  int v817; // [sp+2Ch] [bp-58h]
  int v818; // [sp+2Ch] [bp-58h]
  int v819; // [sp+2Ch] [bp-58h]
  int v820; // [sp+2Ch] [bp-58h]
  int v821; // [sp+2Ch] [bp-58h]
  int v822; // [sp+2Ch] [bp-58h]
  int v823; // [sp+2Ch] [bp-58h]
  int v824; // [sp+2Ch] [bp-58h]
  int v825; // [sp+2Ch] [bp-58h]
  int v826; // [sp+2Ch] [bp-58h]
  int v827; // [sp+2Ch] [bp-58h]
  int v828; // [sp+30h] [bp-54h]
  int v829; // [sp+30h] [bp-54h]
  int v830; // [sp+30h] [bp-54h]
  int v831; // [sp+30h] [bp-54h]
  int v832; // [sp+30h] [bp-54h]
  int v833; // [sp+30h] [bp-54h]
  int v834; // [sp+30h] [bp-54h]
  int v835; // [sp+30h] [bp-54h]
  int v836; // [sp+30h] [bp-54h]
  int v837; // [sp+30h] [bp-54h]
  int v838; // [sp+30h] [bp-54h]
  int v839; // [sp+30h] [bp-54h]
  int v840; // [sp+30h] [bp-54h]
  int v841; // [sp+30h] [bp-54h]
  int v842; // [sp+30h] [bp-54h]
  int v843; // [sp+30h] [bp-54h]
  int v844; // [sp+30h] [bp-54h]
  int v845; // [sp+30h] [bp-54h]
  int v846; // [sp+30h] [bp-54h]
  int v847; // [sp+30h] [bp-54h]
  int v848; // [sp+30h] [bp-54h]
  int v849; // [sp+30h] [bp-54h]
  int v850; // [sp+30h] [bp-54h]
  int v851; // [sp+30h] [bp-54h]
  int v852; // [sp+30h] [bp-54h]
  int v853; // [sp+30h] [bp-54h]
  int v854; // [sp+30h] [bp-54h]
  int v855; // [sp+30h] [bp-54h]
  int v856; // [sp+34h] [bp-50h]
  int v857; // [sp+34h] [bp-50h]
  int v858; // [sp+34h] [bp-50h]
  int v859; // [sp+34h] [bp-50h]
  int v860; // [sp+34h] [bp-50h]
  int v861; // [sp+34h] [bp-50h]
  int v862; // [sp+34h] [bp-50h]
  int v863; // [sp+34h] [bp-50h]
  int v864; // [sp+34h] [bp-50h]
  int v865; // [sp+34h] [bp-50h]
  int v866; // [sp+34h] [bp-50h]
  int v867; // [sp+34h] [bp-50h]
  int v868; // [sp+34h] [bp-50h]
  int v869; // [sp+34h] [bp-50h]
  int v870; // [sp+34h] [bp-50h]
  int v871; // [sp+34h] [bp-50h]
  int v872; // [sp+34h] [bp-50h]
  int v873; // [sp+34h] [bp-50h]
  int v874; // [sp+34h] [bp-50h]
  int v875; // [sp+34h] [bp-50h]
  int v876; // [sp+34h] [bp-50h]
  int v877; // [sp+34h] [bp-50h]
  int v878; // [sp+34h] [bp-50h]
  int v879; // [sp+34h] [bp-50h]
  int v880; // [sp+34h] [bp-50h]
  int v881; // [sp+34h] [bp-50h]
  int v882; // [sp+34h] [bp-50h]
  int v883; // [sp+34h] [bp-50h]
  int v884; // [sp+38h] [bp-4Ch]
  int v885; // [sp+38h] [bp-4Ch]
  int v886; // [sp+38h] [bp-4Ch]
  int v887; // [sp+38h] [bp-4Ch]
  int v888; // [sp+38h] [bp-4Ch]
  int v889; // [sp+38h] [bp-4Ch]
  int v890; // [sp+38h] [bp-4Ch]
  int v891; // [sp+38h] [bp-4Ch]
  int v892; // [sp+38h] [bp-4Ch]
  int v893; // [sp+38h] [bp-4Ch]
  int v894; // [sp+38h] [bp-4Ch]
  int v895; // [sp+38h] [bp-4Ch]
  int v896; // [sp+38h] [bp-4Ch]
  int v897; // [sp+38h] [bp-4Ch]
  int v898; // [sp+38h] [bp-4Ch]
  int v899; // [sp+38h] [bp-4Ch]
  int v900; // [sp+38h] [bp-4Ch]
  int v901; // [sp+38h] [bp-4Ch]
  int v902; // [sp+38h] [bp-4Ch]
  int v903; // [sp+38h] [bp-4Ch]
  int v904; // [sp+38h] [bp-4Ch]
  int v905; // [sp+38h] [bp-4Ch]
  int v906; // [sp+38h] [bp-4Ch]
  int v907; // [sp+38h] [bp-4Ch]
  int v908; // [sp+38h] [bp-4Ch]
  int v909; // [sp+38h] [bp-4Ch]
  int v910; // [sp+3Ch] [bp-48h]
  int v911; // [sp+3Ch] [bp-48h]
  int v912; // [sp+3Ch] [bp-48h]
  int v913; // [sp+3Ch] [bp-48h]
  int v914; // [sp+3Ch] [bp-48h]
  int v915; // [sp+3Ch] [bp-48h]
  int v916; // [sp+3Ch] [bp-48h]
  int v917; // [sp+3Ch] [bp-48h]
  int v918; // [sp+3Ch] [bp-48h]
  int v919; // [sp+3Ch] [bp-48h]
  int v920; // [sp+3Ch] [bp-48h]
  int v921; // [sp+3Ch] [bp-48h]
  int v922; // [sp+3Ch] [bp-48h]
  int v923; // [sp+3Ch] [bp-48h]
  int v924; // [sp+3Ch] [bp-48h]
  int v925; // [sp+3Ch] [bp-48h]
  int v926; // [sp+3Ch] [bp-48h]
  int v927; // [sp+3Ch] [bp-48h]
  int v928; // [sp+3Ch] [bp-48h]
  int v929; // [sp+3Ch] [bp-48h]
  int v930; // [sp+3Ch] [bp-48h]
  int v931; // [sp+3Ch] [bp-48h]
  int v932; // [sp+3Ch] [bp-48h]
  int v933; // [sp+3Ch] [bp-48h]
  int v934; // [sp+3Ch] [bp-48h]
  int v935; // [sp+3Ch] [bp-48h]
  int v936; // [sp+3Ch] [bp-48h]
  int v937; // [sp+40h] [bp-44h]
  int v938; // [sp+40h] [bp-44h]
  int v939; // [sp+40h] [bp-44h]
  int v940; // [sp+40h] [bp-44h]
  int v941; // [sp+40h] [bp-44h]
  int v942; // [sp+40h] [bp-44h]
  int v943; // [sp+40h] [bp-44h]
  int v944; // [sp+40h] [bp-44h]
  int v945; // [sp+40h] [bp-44h]
  int v946; // [sp+40h] [bp-44h]
  int v947; // [sp+40h] [bp-44h]
  int v948; // [sp+40h] [bp-44h]
  int v949; // [sp+40h] [bp-44h]
  int v950; // [sp+40h] [bp-44h]
  int v951; // [sp+40h] [bp-44h]
  int v952; // [sp+40h] [bp-44h]
  int v953; // [sp+40h] [bp-44h]
  int v954; // [sp+40h] [bp-44h]
  int v955; // [sp+40h] [bp-44h]
  int v956; // [sp+40h] [bp-44h]
  int v957; // [sp+40h] [bp-44h]
  int v958; // [sp+40h] [bp-44h]
  int v959; // [sp+40h] [bp-44h]
  int v960; // [sp+40h] [bp-44h]
  int v961; // [sp+40h] [bp-44h]
  int v962; // [sp+40h] [bp-44h]
  int v963; // [sp+40h] [bp-44h]
  int v964; // [sp+40h] [bp-44h]
  int v965; // [sp+44h] [bp-40h]
  int v966; // [sp+44h] [bp-40h]
  int v967; // [sp+44h] [bp-40h]
  int v968; // [sp+44h] [bp-40h]
  int v969; // [sp+44h] [bp-40h]
  int v970; // [sp+44h] [bp-40h]
  int v971; // [sp+44h] [bp-40h]
  int v972; // [sp+44h] [bp-40h]
  int v973; // [sp+44h] [bp-40h]
  int v974; // [sp+44h] [bp-40h]
  int v975; // [sp+44h] [bp-40h]
  int v976; // [sp+44h] [bp-40h]
  int v977; // [sp+44h] [bp-40h]
  int v978; // [sp+44h] [bp-40h]
  int v979; // [sp+44h] [bp-40h]
  int v980; // [sp+44h] [bp-40h]
  int v981; // [sp+44h] [bp-40h]
  int v982; // [sp+44h] [bp-40h]
  int v983; // [sp+44h] [bp-40h]
  int v984; // [sp+44h] [bp-40h]
  int v985; // [sp+44h] [bp-40h]
  int v986; // [sp+44h] [bp-40h]
  int v987; // [sp+44h] [bp-40h]
  int v988; // [sp+44h] [bp-40h]
  int v989; // [sp+44h] [bp-40h]
  int v990; // [sp+44h] [bp-40h]
  int v991; // [sp+44h] [bp-40h]
  int v992; // [sp+44h] [bp-40h]
  int v993; // [sp+48h] [bp-3Ch]
  int v994; // [sp+48h] [bp-3Ch]
  int v995; // [sp+48h] [bp-3Ch]
  int v996; // [sp+48h] [bp-3Ch]
  int v997; // [sp+48h] [bp-3Ch]
  int v998; // [sp+48h] [bp-3Ch]
  int v999; // [sp+48h] [bp-3Ch]
  int v1000; // [sp+48h] [bp-3Ch]
  int v1001; // [sp+48h] [bp-3Ch]
  int v1002; // [sp+48h] [bp-3Ch]
  int v1003; // [sp+48h] [bp-3Ch]
  int v1004; // [sp+48h] [bp-3Ch]
  int v1005; // [sp+48h] [bp-3Ch]
  int v1006; // [sp+48h] [bp-3Ch]
  int v1007; // [sp+48h] [bp-3Ch]
  int v1008; // [sp+48h] [bp-3Ch]
  int v1009; // [sp+48h] [bp-3Ch]
  int v1010; // [sp+48h] [bp-3Ch]
  int v1011; // [sp+48h] [bp-3Ch]
  int v1012; // [sp+48h] [bp-3Ch]
  int v1013; // [sp+48h] [bp-3Ch]
  int v1014; // [sp+48h] [bp-3Ch]
  int v1015; // [sp+48h] [bp-3Ch]
  int v1016; // [sp+48h] [bp-3Ch]
  int v1017; // [sp+48h] [bp-3Ch]
  int v1018; // [sp+48h] [bp-3Ch]
  int v1019; // [sp+48h] [bp-3Ch]
  int v1020; // [sp+4Ch] [bp-38h]
  int v1021; // [sp+4Ch] [bp-38h]
  int v1022; // [sp+4Ch] [bp-38h]
  int v1023; // [sp+4Ch] [bp-38h]
  int v1024; // [sp+4Ch] [bp-38h]
  int v1025; // [sp+4Ch] [bp-38h]
  int v1026; // [sp+4Ch] [bp-38h]
  int v1027; // [sp+4Ch] [bp-38h]
  int v1028; // [sp+4Ch] [bp-38h]
  int v1029; // [sp+4Ch] [bp-38h]
  int v1030; // [sp+4Ch] [bp-38h]
  int v1031; // [sp+4Ch] [bp-38h]
  int v1032; // [sp+4Ch] [bp-38h]
  int v1033; // [sp+4Ch] [bp-38h]
  int v1034; // [sp+4Ch] [bp-38h]
  int v1035; // [sp+4Ch] [bp-38h]
  int v1036; // [sp+4Ch] [bp-38h]
  int v1037; // [sp+4Ch] [bp-38h]
  int v1038; // [sp+4Ch] [bp-38h]
  int v1039; // [sp+4Ch] [bp-38h]
  int v1040; // [sp+4Ch] [bp-38h]
  int v1041; // [sp+4Ch] [bp-38h]
  int v1042; // [sp+4Ch] [bp-38h]
  int v1043; // [sp+4Ch] [bp-38h]
  int v1044; // [sp+50h] [bp-34h]
  int v1045; // [sp+50h] [bp-34h]
  int v1046; // [sp+50h] [bp-34h]
  int v1047; // [sp+50h] [bp-34h]
  int v1048; // [sp+50h] [bp-34h]
  int v1049; // [sp+50h] [bp-34h]
  int v1050; // [sp+50h] [bp-34h]
  int v1051; // [sp+50h] [bp-34h]
  int v1052; // [sp+50h] [bp-34h]
  int v1053; // [sp+50h] [bp-34h]
  int v1054; // [sp+50h] [bp-34h]
  int v1055; // [sp+50h] [bp-34h]
  int v1056; // [sp+50h] [bp-34h]
  int v1057; // [sp+50h] [bp-34h]
  int v1058; // [sp+50h] [bp-34h]
  int v1059; // [sp+50h] [bp-34h]
  int v1060; // [sp+50h] [bp-34h]
  int v1061; // [sp+50h] [bp-34h]
  int v1062; // [sp+50h] [bp-34h]
  int v1063; // [sp+50h] [bp-34h]
  int v1064; // [sp+50h] [bp-34h]
  int v1065; // [sp+50h] [bp-34h]
  int v1066; // [sp+50h] [bp-34h]
  int v1067; // [sp+50h] [bp-34h]
  int v1068; // [sp+54h] [bp-30h]
  int v1069; // [sp+54h] [bp-30h]
  int v1070; // [sp+54h] [bp-30h]
  int v1071; // [sp+54h] [bp-30h]
  int v1072; // [sp+54h] [bp-30h]
  int v1073; // [sp+54h] [bp-30h]
  int v1074; // [sp+54h] [bp-30h]
  int v1075; // [sp+54h] [bp-30h]
  int v1076; // [sp+54h] [bp-30h]
  int v1077; // [sp+54h] [bp-30h]
  int v1078; // [sp+54h] [bp-30h]
  int v1079; // [sp+54h] [bp-30h]
  int v1080; // [sp+54h] [bp-30h]
  int v1081; // [sp+54h] [bp-30h]
  int v1082; // [sp+54h] [bp-30h]
  int v1083; // [sp+54h] [bp-30h]
  int v1084; // [sp+54h] [bp-30h]
  int v1085; // [sp+54h] [bp-30h]
  int v1086; // [sp+54h] [bp-30h]
  int v1087; // [sp+54h] [bp-30h]
  int v1088; // [sp+54h] [bp-30h]
  int v1089; // [sp+54h] [bp-30h]
  int v1090; // [sp+54h] [bp-30h]
  int v1091; // [sp+54h] [bp-30h]
  int v1092; // [sp+58h] [bp-2Ch]
  int v1093; // [sp+58h] [bp-2Ch]
  int v1094; // [sp+58h] [bp-2Ch]
  int v1095; // [sp+58h] [bp-2Ch]
  int v1096; // [sp+58h] [bp-2Ch]
  int v1097; // [sp+58h] [bp-2Ch]
  int v1098; // [sp+58h] [bp-2Ch]
  int v1099; // [sp+58h] [bp-2Ch]
  int v1100; // [sp+58h] [bp-2Ch]
  int v1101; // [sp+58h] [bp-2Ch]
  int v1102; // [sp+58h] [bp-2Ch]
  int v1103; // [sp+58h] [bp-2Ch]
  int v1104; // [sp+58h] [bp-2Ch]
  int v1105; // [sp+58h] [bp-2Ch]
  int v1106; // [sp+58h] [bp-2Ch]
  int v1107; // [sp+58h] [bp-2Ch]
  int v1108; // [sp+58h] [bp-2Ch]
  int v1109; // [sp+58h] [bp-2Ch]
  int v1110; // [sp+58h] [bp-2Ch]
  int v1111; // [sp+5Ch] [bp-28h]
  int v1112; // [sp+5Ch] [bp-28h]
  int v1113; // [sp+5Ch] [bp-28h]
  int v1114; // [sp+5Ch] [bp-28h]
  int v1115; // [sp+5Ch] [bp-28h]
  int v1116; // [sp+5Ch] [bp-28h]
  int v1117; // [sp+5Ch] [bp-28h]
  int v1118; // [sp+5Ch] [bp-28h]
  int v1119; // [sp+5Ch] [bp-28h]
  int v1120; // [sp+5Ch] [bp-28h]
  int v1121; // [sp+5Ch] [bp-28h]
  int v1122; // [sp+5Ch] [bp-28h]
  int v1123; // [sp+5Ch] [bp-28h]
  int v1124; // [sp+5Ch] [bp-28h]
  int v1125; // [sp+5Ch] [bp-28h]
  int v1126; // [sp+5Ch] [bp-28h]
  int v1127; // [sp+60h] [bp-24h]
  int v1128; // [sp+60h] [bp-24h]
  int v1129; // [sp+60h] [bp-24h]
  int v1130; // [sp+60h] [bp-24h]
  int v1131; // [sp+60h] [bp-24h]
  int v1132; // [sp+60h] [bp-24h]
  int v1133; // [sp+64h] [bp-20h]
  int v1134; // [sp+64h] [bp-20h]
  int v1135; // [sp+68h] [bp-1Ch]
  int v1136; // [sp+68h] [bp-1Ch]
  int v1137; // [sp+68h] [bp-1Ch]
  int v1138; // [sp+6Ch] [bp-18h]
  int v1139; // [sp+70h] [bp-14h]
  int v1140; // [sp+74h] [bp-10h]

  v6 = a1[8];
  *((_BYTE *)a1 + v6) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v6 + 1, 0, 31 - v6);
  v507 = 0;
  v746 = a1[20];
  v774 = a1[21];
  v803 = a1[22];
  v1068 = a1[18];
  v828 = a1[23];
  v1135 = a1[19];
  v856 = a1[24];
  v570 = a1[30];
  v600 = a1[38];
  v539 = a1[40];
  v508 = a1[9] ^ *a1;
  v629 = a1[10] ^ a1[1];
  v993 = a1[32];
  v660 = a1[13] ^ a1[4];
  v1020 = a1[31];
  v884 = a1[26];
  v7 = a1[39];
  v688 = a1[14] ^ a1[5];
  v937 = a1[27];
  v8 = a1[25];
  v9 = a1[35];
  v10 = a1[15] ^ a1[6];
  v965 = a1[29];
  v11 = a1[11] ^ a1[2];
  v717 = a1[16] ^ a1[7];
  v12 = a1[33];
  v13 = a1[37];
  v14 = a1[36];
  v15 = a1[17];
  v910 = a1[28];
  v16 = a1[34];
  v17 = a1[12] ^ a1[3];
  v18 = v1135;
  while ( 1 )
  {
    v19 = v15 + v12;
    v20 = v18 + v9;
    v1044 = v508 + v8;
    v885 = v629 + v884;
    v21 = v11 + v937;
    v22 = v20 ^ __ROR4__(v11, 25);
    v938 = v21;
    v911 = v17 + v910;
    v966 = v660 + v965;
    v571 = v688 + v570;
    v1021 = v10 + v1020;
    v994 = v717 + v993;
    v23 = v1068;
    v24 = v746 + v14;
    v1069 = v1068 + v16;
    v1092 = v774 + v13;
    v25 = v803 + v600;
    v26 = v828 + v7;
    v27 = v26 ^ __ROR4__(v10, 25);
    v28 = v856 + v539;
    v540 = v1044 ^ __ROR4__(v15, 25);
    v29 = v19 ^ __ROR4__(v508, 25);
    v30 = v19 + v22;
    v1111 = v29;
    v509 = v885 ^ __ROR4__(v23, 25);
    v31 = v746;
    v747 = v24 ^ __ROR4__(v17, 25);
    v1127 = v1069 ^ __ROR4__(v629, 25);
    v601 = v938 ^ __ROR4__(v18, 25);
    v630 = v911 ^ __ROR4__(v31, 25);
    v32 = v966 ^ __ROR4__(v774, 25);
    v33 = v660;
    v661 = v1021 ^ __ROR4__(v828, 25);
    v34 = v1092 ^ __ROR4__(v33, 25);
    v35 = v571 ^ __ROR4__(v803, 25);
    v36 = v688;
    v689 = v994 ^ __ROR4__(v856, 25);
    v718 = v28 ^ __ROR4__(v717, 25);
    v37 = v25 ^ __ROR4__(v36, 25);
    v38 = v28 + v37;
    v775 = v938 + v540;
    v829 = v1044 + v601;
    v939 = v20 + v1111;
    v804 = v911 + v509;
    v39 = v885 + v630;
    v912 = v24 + v1127;
    v40 = v1069 + v747;
    v857 = v1021 + v32;
    v41 = v966;
    v967 = v26 + v34;
    v42 = v41 + v661;
    v1022 = v1092 + v27;
    v572 = v571 + v689;
    v43 = v994 + v35;
    v44 = v775 ^ __ROR4__(v32, 21);
    v45 = v25 + v718;
    v995 = v857 ^ __ROR4__(v540, 21);
    v541 = (v1044 + v601) ^ __ROR4__(v661, 21);
    v662 = v30 ^ __ROR4__(v27, 21);
    v602 = v42 ^ __ROR4__(v601, 21);
    v46 = v939 ^ __ROR4__(v34, 21);
    v1070 = (v1092 + v27) ^ __ROR4__(v22, 21);
    v1045 = v967 ^ __ROR4__(v1111, 21);
    v47 = v804 ^ __ROR4__(v35, 21);
    v48 = v43 ^ __ROR4__(v509, 21);
    v510 = (v885 + v630) ^ __ROR4__(v689, 21);
    v49 = v718;
    v719 = v804 + v44;
    v631 = v572 ^ __ROR4__(v630, 21);
    v1093 = v775 + v47;
    v50 = v912 ^ __ROR4__(v37, 21);
    v690 = v40 ^ __ROR4__(v49, 21);
    v776 = v43 + v995;
    v51 = v38 ^ __ROR4__(v1127, 21);
    v805 = v857 + v48;
    v52 = v45 ^ __ROR4__(v747, 21);
    v53 = v39 + v541;
    v748 = v829 + v510;
    v573 = v572 + v602;
    v830 = v42 + v631;
    v54 = v912 + v46;
    v55 = (v912 + v46) ^ __ROR4__(v44, 25);
    v858 = v939 + v50;
    v56 = v38 + v1045;
    v886 = v967 + v51;
    v57 = v40 + v662;
    v58 = v30 + v690;
    v913 = v45 + v1070;
    v59 = __ROR4__(v46, 25);
    v60 = v939 + v50;
    v61 = v1022 + v52;
    v940 = v719 ^ v59;
    v62 = v1093;
    v1023 = v60 ^ __ROR4__(v47, 25);
    v63 = v1093 ^ __ROR4__(v50, 25);
    v968 = v776 ^ __ROR4__(v1045, 25);
    v1046 = v56 ^ __ROR4__(v995, 25);
    v996 = v805 ^ __ROR4__(v51, 25);
    v1094 = v886 ^ __ROR4__(v48, 25);
    v1112 = v53 ^ __ROR4__(v662, 25);
    v542 = v57 ^ __ROR4__(v541, 25);
    v64 = v748 ^ __ROR4__(v690, 25);
    v65 = v1070;
    v1071 = v57 + v55;
    v663 = v58 ^ __ROR4__(v510, 25);
    v511 = v573 ^ __ROR4__(v65, 25);
    v603 = v913 ^ __ROR4__(v602, 25);
    v66 = v830 ^ __ROR4__(v52, 25);
    v632 = v61 ^ __ROR4__(v631, 25);
    v67 = v53 + (v719 ^ v59);
    v720 = v719 + v1112;
    v68 = v54 + v542;
    v691 = v748 + v63;
    v69 = v58 + v1023;
    v749 = v62 + v64;
    v859 = v858 + v663;
    v70 = v573 + v968;
    v1128 = v776 + v511;
    v914 = v913 + v1046;
    v71 = v56 + v603;
    v574 = v830 + v996;
    v777 = v805 + v66;
    v72 = v61 + v1094;
    v73 = v886 + v632;
    v806 = v67 ^ __ROR4__(v968, 21);
    v831 = v70 ^ __ROR4__(v940, 21);
    v512 = v720 ^ __ROR4__(v511, 21);
    v887 = v1128 ^ __ROR4__(v1112, 21);
    v941 = (v57 + v55) ^ __ROR4__(v1046, 21);
    v74 = v914 ^ __ROR4__(v55, 21);
    v604 = v68 ^ __ROR4__(v603, 21);
    v1047 = v71 ^ __ROR4__(v542, 21);
    v75 = v691 ^ __ROR4__(v996, 21);
    v76 = v67 + v75;
    v77 = v574 ^ __ROR4__(v63, 21);
    v78 = v70 + v77;
    v79 = v749 ^ __ROR4__(v66, 21);
    v543 = v777 ^ __ROR4__(v64, 21);
    v80 = v69 ^ __ROR4__(v1094, 21);
    v969 = v72 ^ __ROR4__(v1023, 21);
    v633 = v859 ^ __ROR4__(v632, 21);
    v664 = v73 ^ __ROR4__(v663, 21);
    v692 = v691 + v806;
    v997 = v574 + v831;
    v1113 = v749 + v512;
    v575 = v720 + v79;
    v721 = v777 + v887;
    v750 = v1128 + v543;
    v81 = v69 + v941;
    v778 = v72 + v74;
    v82 = v1071 + v80;
    v83 = (v1071 + v80) ^ __ROR4__(v75, 25);
    v84 = v76 ^ __ROR4__(v80, 25);
    v915 = v914 + v969;
    v1072 = v83;
    v85 = v859 + v604;
    v86 = v68 + v633;
    v87 = v86 ^ __ROR4__(v79, 25);
    v88 = v73 + v1047;
    v89 = v82 + v87;
    v860 = v71 + v664;
    v942 = v692 ^ __ROR4__(v941, 25);
    v1024 = v81 ^ __ROR4__(v806, 25);
    v1095 = v778 ^ __ROR4__(v831, 25);
    v90 = v997 ^ __ROR4__(v74, 25);
    v807 = v78 ^ __ROR4__(v969, 25);
    v605 = v1113 ^ __ROR4__(v604, 25);
    v91 = v915 ^ __ROR4__(v77, 25);
    v832 = v85 ^ __ROR4__(v512, 25);
    v513 = v575 ^ __ROR4__(v633, 25);
    v634 = v721 ^ __ROR4__(v1047, 25);
    v888 = v88 ^ __ROR4__(v887, 25);
    v665 = (v1128 + v543) ^ __ROR4__(v664, 25);
    v92 = v860 ^ __ROR4__(v543, 25);
    v544 = v1113 + v942;
    v693 = v692 + v605;
    v1048 = v85 + v1024;
    v93 = v81 + v832;
    v576 = v575 + v84;
    v94 = v86 + v83;
    v970 = v76 + v513;
    v95 = v721 + v90;
    v722 = v997 + v634;
    v96 = v88 + v1095;
    v779 = v778 + v888;
    v97 = v78 + v665;
    v98 = v750 + v807;
    v99 = (v750 + v807) ^ __ROR4__(v84, 21);
    v100 = v860 + v91;
    v101 = v94 ^ __ROR4__(v91, 21);
    v102 = v915 + v92;
    v103 = v89 ^ __ROR4__(v92, 21);
    v751 = v102;
    v861 = (v1113 + v942) ^ __ROR4__(v90, 21);
    v916 = v95 ^ __ROR4__(v942, 21);
    v104 = v997 + v634;
    v635 = v693 ^ __ROR4__(v634, 21);
    v943 = v104 ^ __ROR4__(v605, 21);
    v998 = v1048 ^ __ROR4__(v1095, 21);
    v1025 = v96 ^ __ROR4__(v1024, 21);
    v889 = v93 ^ __ROR4__(v888, 21);
    v833 = v779 ^ __ROR4__(v832, 21);
    v105 = v576 ^ __ROR4__(v807, 21);
    v606 = v970 ^ __ROR4__(v665, 21);
    v514 = v97 ^ __ROR4__(v513, 21);
    v106 = v100 ^ __ROR4__(v1072, 21);
    v107 = v751 ^ __ROR4__(v87, 21);
    v577 = v576 + v861;
    v545 = v544 + v105;
    v808 = v98 + v916;
    v1073 = v95 + v99;
    v108 = v970 + v635;
    v694 = v693 + v606;
    v109 = v97 + v943;
    v110 = v722 + v514;
    v111 = v94 + v998;
    v723 = v1048 + v101;
    v971 = v100 + v1025;
    v1049 = v96 + v106;
    v112 = v89 + v889;
    v113 = v93 + v103;
    v752 = v751 + v833;
    v114 = v779 + v107;
    v115 = v110 ^ __ROR4__(v107, 25);
    v780 = v577 ^ __ROR4__(v998, 25);
    v999 = v111 ^ __ROR4__(v861, 25);
    v116 = v545 ^ __ROR4__(v101, 25);
    v117 = v723 ^ __ROR4__(v105, 25);
    v1114 = v808 ^ __ROR4__(v1025, 25);
    v917 = v971 ^ __ROR4__(v916, 25);
    v862 = v1073 ^ __ROR4__(v106, 25);
    v118 = (v96 + v106) ^ __ROR4__(v99, 25);
    v1096 = v108 ^ __ROR4__(v889, 25);
    v890 = v112 ^ __ROR4__(v635, 25);
    v636 = v694 ^ __ROR4__(v103, 25);
    v119 = v113 ^ __ROR4__(v606, 25);
    v120 = v113 + v117;
    v666 = v119;
    v607 = v109 ^ __ROR4__(v833, 25);
    v834 = v752 ^ __ROR4__(v943, 25);
    v121 = v108 + v780;
    v122 = v514;
    v515 = v577 + v1096;
    v123 = v114 ^ __ROR4__(v122, 25);
    v124 = v114 + v118;
    v125 = v120 ^ __ROR4__(v118, 21);
    v944 = v112 + v999;
    v126 = v124 ^ __ROR4__(v117, 21);
    v1026 = v111 + v890;
    v1129 = v694 + v116;
    v546 = v545 + v636;
    v724 = v723 + v666;
    v578 = v808 + v607;
    v127 = v109 + v1114;
    v753 = v752 + v917;
    v128 = v971;
    v972 = v121 ^ __ROR4__(v1114, 21);
    v129 = v1049;
    v809 = v128 + v834;
    v130 = v110 + v862;
    v1050 = v127 ^ __ROR4__(v780, 21);
    v695 = v1073 + v115;
    v131 = v129 + v123;
    v608 = v515 ^ __ROR4__(v607, 21);
    v1074 = v578 ^ __ROR4__(v1096, 21);
    v918 = (v112 + v999) ^ __ROR4__(v917, 21);
    v132 = v834;
    v1097 = v753 ^ __ROR4__(v999, 21);
    v835 = v130 ^ __ROR4__(v116, 21);
    v1000 = (v111 + v890) ^ __ROR4__(v132, 21);
    v891 = v809 ^ __ROR4__(v890, 21);
    v133 = v1129 ^ __ROR4__(v862, 21);
    v134 = v121 + v133;
    v781 = v546 ^ __ROR4__(v115, 21);
    v637 = v695 ^ __ROR4__(v636, 21);
    v135 = v724 ^ __ROR4__(v123, 21);
    v136 = v131 ^ __ROR4__(v666, 21);
    v667 = v1129 + v972;
    v863 = v130 + v1050;
    v1130 = v546 + v608;
    v1115 = v127 + v835;
    v137 = v515 + v781;
    v516 = v695 + v1074;
    v547 = v578 + v637;
    v138 = v944 + v125;
    v139 = v131 + v891;
    v140 = (v944 + v125) ^ __ROR4__(v133, 25);
    v141 = v120 + v918;
    v142 = v809 + v136;
    v810 = v134 ^ __ROR4__(v125, 25);
    v579 = v124 + v1097;
    v696 = v753 + v126;
    v143 = v724;
    v725 = v142;
    v144 = v143 + v1000;
    v145 = v1026 + v135;
    v754 = v667 ^ __ROR4__(v918, 25);
    v945 = v141 ^ __ROR4__(v972, 25);
    v919 = v863 ^ __ROR4__(v1097, 25);
    v1027 = v579 ^ __ROR4__(v1050, 25);
    v146 = (v127 + v835) ^ __ROR4__(v126, 25);
    v147 = v696 ^ __ROR4__(v835, 25);
    v836 = v1130 ^ __ROR4__(v1000, 25);
    v148 = v608;
    v609 = v137 ^ __ROR4__(v135, 25);
    v149 = v145 ^ __ROR4__(v781, 25);
    v973 = v144 ^ __ROR4__(v148, 25);
    v150 = v145 + v140;
    v1001 = v149;
    v782 = v516 ^ __ROR4__(v891, 25);
    v892 = v139 ^ __ROR4__(v1074, 25);
    v151 = v547 ^ __ROR4__(v136, 25);
    v152 = v725 ^ __ROR4__(v637, 25);
    v638 = v1130 + v754;
    v668 = v667 + v836;
    v153 = v137 + v810;
    v1051 = v144 + v945;
    v154 = v141 + v973;
    v155 = v134 + v609;
    v156 = v138 + v1001;
    v517 = v516 + v919;
    v157 = v863 + v782;
    v864 = v139 + v1027;
    v1075 = v579 + v892;
    v548 = v547 + v146;
    v158 = v153 ^ __ROR4__(v146, 21);
    v159 = v725 + v147;
    v160 = v150 ^ __ROR4__(v147, 21);
    v697 = v696 + v152;
    v161 = v1115 + v151;
    v162 = v156 ^ __ROR4__(v152, 21);
    v726 = (v1130 + v754) ^ __ROR4__(v919, 21);
    v920 = v517 ^ __ROR4__(v754, 21);
    v755 = v668 ^ __ROR4__(v782, 21);
    v837 = v157 ^ __ROR4__(v836, 21);
    v1028 = v1051 ^ __ROR4__(v1027, 21);
    v946 = v864 ^ __ROR4__(v945, 21);
    v163 = v154 ^ __ROR4__(v892, 21);
    v164 = v154 + v162;
    v893 = v163;
    v783 = v155 ^ __ROR4__(v151, 21);
    v974 = v1075 ^ __ROR4__(v973, 21);
    v610 = (v1115 + v151) ^ __ROR4__(v609, 21);
    v165 = v548 ^ __ROR4__(v810, 21);
    v166 = v159 ^ __ROR4__(v140, 21);
    v167 = v697 ^ __ROR4__(v1001, 21);
    v811 = v153 + v726;
    v639 = v638 + v158;
    v549 = v548 + v920;
    v518 = v517 + v165;
    v168 = v155 + v755;
    v169 = v668 + v783;
    v170 = (v668 + v783) ^ __ROR4__(v162, 25);
    v171 = v161 + v837;
    v669 = v157 + v610;
    v172 = v150 + v1028;
    v1002 = v1051 + v160;
    v580 = v159 + v946;
    v865 = v864 + v166;
    v173 = v156 + v893;
    v698 = v697 + v974;
    v1052 = v1075 + v167;
    v1029 = v811 ^ __ROR4__(v1028, 25);
    v174 = v726;
    v175 = v1002 ^ __ROR4__(v158, 25);
    v727 = v170;
    v1076 = v172 ^ __ROR4__(v174, 25);
    v176 = v164 ^ __ROR4__(v783, 25);
    v177 = v164 + v175;
    v784 = v176;
    v178 = v639 ^ __ROR4__(v160, 25);
    v179 = v169 + v178;
    v1116 = v549 ^ __ROR4__(v946, 25);
    v947 = v580 ^ __ROR4__(v920, 25);
    v921 = v518 ^ __ROR4__(v166, 25);
    v180 = v865 ^ __ROR4__(v165, 25);
    v181 = v168 ^ __ROR4__(v893, 25);
    v894 = v173 ^ __ROR4__(v755, 25);
    v756 = v171 ^ __ROR4__(v974, 25);
    v182 = v610;
    v838 = v698 ^ __ROR4__(v837, 25);
    v183 = v168 + v1029;
    v611 = v811 + v181;
    v184 = v669 ^ __ROR4__(v167, 25);
    v812 = v173 + v1076;
    v185 = v1052 ^ __ROR4__(v182, 25);
    v186 = v172 + v894;
    v640 = v639 + v727;
    v975 = v1002 + v784;
    v187 = v171 + v1116;
    v550 = v549 + v756;
    v699 = v698 + v947;
    v1003 = v580 + v838;
    v519 = v518 + v184;
    v188 = v669 + v921;
    v189 = (v669 + v921) ^ __ROR4__(v178, 21);
    v670 = v183 ^ __ROR4__(v1116, 21);
    v190 = v1052 + v180;
    v191 = v177 ^ __ROR4__(v180, 21);
    v581 = v190;
    v192 = v865;
    v866 = v187 ^ __ROR4__(v1029, 21);
    v193 = v192 + v185;
    v757 = v611 ^ __ROR4__(v756, 21);
    v1030 = v550 ^ __ROR4__(v181, 21);
    v948 = (v173 + v1076) ^ __ROR4__(v947, 21);
    v1077 = v699 ^ __ROR4__(v1076, 21);
    v1053 = v186 ^ __ROR4__(v838, 21);
    v1098 = v1003 ^ __ROR4__(v894, 21);
    v194 = v179 ^ __ROR4__(v921, 21);
    v195 = v183 + v194;
    v839 = v640 ^ __ROR4__(v184, 21);
    v728 = v519 ^ __ROR4__(v727, 21);
    v196 = v581 ^ __ROR4__(v175, 21);
    v197 = v975 ^ __ROR4__(v185, 21);
    v198 = v784;
    v199 = v186 + v197;
    v785 = v179 + v670;
    v200 = v193 ^ __ROR4__(v198, 21);
    v201 = v188 + v866;
    v922 = v187 + v189;
    v1117 = v640 + v757;
    v202 = v611 + v839;
    v203 = (v611 + v839) ^ __ROR4__(v197, 25);
    v520 = v519 + v1030;
    v551 = v550 + v728;
    v204 = v177 + v948;
    v612 = v812 + v191;
    v582 = v581 + v1077;
    v641 = v699 + v196;
    v205 = v975 + v1053;
    v206 = v193 + v1098;
    v700 = v1003 + v200;
    v813 = v785 ^ __ROR4__(v948, 25);
    v207 = v670;
    v671 = v195 ^ __ROR4__(v191, 25);
    v208 = v612 ^ __ROR4__(v194, 25);
    v976 = v204 ^ __ROR4__(v207, 25);
    v949 = v201 ^ __ROR4__(v1077, 25);
    v1078 = v582 ^ __ROR4__(v866, 25);
    v209 = v922 ^ __ROR4__(v196, 25);
    v210 = v641 ^ __ROR4__(v189, 25);
    v867 = v1117 ^ __ROR4__(v1053, 25);
    v211 = v757;
    v758 = v203;
    v212 = v199 ^ __ROR4__(v839, 25);
    v895 = v205 ^ __ROR4__(v211, 25);
    v213 = v199 + v208;
    v1004 = v212;
    v840 = v520 ^ __ROR4__(v1098, 25);
    v1031 = v206 ^ __ROR4__(v1030, 25);
    v214 = v551 ^ __ROR4__(v200, 25);
    v215 = v700 ^ __ROR4__(v728, 25);
    v729 = v1117 + v813;
    v786 = v785 + v867;
    v1054 = v205 + v976;
    v216 = v202 + v671;
    v217 = v204 + v895;
    v218 = v195 + v758;
    v219 = v612 + v1004;
    v521 = v520 + v949;
    v220 = v201 + v840;
    v613 = v206 + v1078;
    v221 = v922 + v214;
    v1099 = v582 + v1031;
    v222 = v551 + v209;
    v223 = v216 ^ __ROR4__(v209, 21);
    v552 = v222;
    v224 = v700 + v210;
    v225 = v213 ^ __ROR4__(v210, 21);
    v583 = v224;
    v642 = v641 + v215;
    v226 = v219 ^ __ROR4__(v215, 21);
    v701 = (v1117 + v813) ^ __ROR4__(v949, 21);
    v923 = v521 ^ __ROR4__(v813, 21);
    v814 = v786 ^ __ROR4__(v840, 21);
    v841 = v220 ^ __ROR4__(v867, 21);
    v868 = v1054 ^ __ROR4__(v1078, 21);
    v977 = v613 ^ __ROR4__(v976, 21);
    v227 = v217 ^ __ROR4__(v1031, 21);
    v228 = v217 + v226;
    v950 = v227;
    v229 = v671;
    v672 = v218 ^ __ROR4__(v214, 21);
    v896 = v1099 ^ __ROR4__(v895, 21);
    v759 = v221 ^ __ROR4__(v758, 21);
    v230 = v552 ^ __ROR4__(v229, 21);
    v231 = v583 ^ __ROR4__(v208, 21);
    v232 = v642 ^ __ROR4__(v1004, 21);
    v1005 = v216 + v701;
    v730 = v729 + v223;
    v553 = v552 + v923;
    v522 = v521 + v230;
    v233 = v218 + v814;
    v234 = v786 + v672;
    v235 = (v786 + v672) ^ __ROR4__(v226, 25);
    v236 = v221 + v841;
    v787 = v220 + v759;
    v237 = v213 + v868;
    v1032 = v1054 + v225;
    v584 = v583 + v977;
    v614 = v613 + v231;
    v238 = v219 + v950;
    v643 = v642 + v896;
    v1055 = v1099 + v232;
    v869 = v1005 ^ __ROR4__(v868, 25);
    v239 = v1032 ^ __ROR4__(v223, 25);
    v1079 = v237 ^ __ROR4__(v701, 25);
    v240 = v730 ^ __ROR4__(v225, 25);
    v241 = v234 + v240;
    v1118 = v553 ^ __ROR4__(v977, 25);
    v978 = v584 ^ __ROR4__(v923, 25);
    v924 = v522 ^ __ROR4__(v231, 25);
    v702 = v235;
    v242 = v614 ^ __ROR4__(v230, 25);
    v243 = v233 ^ __ROR4__(v950, 25);
    v951 = v228 ^ __ROR4__(v672, 25);
    v244 = v228 + v239;
    v815 = v238 ^ __ROR4__(v814, 25);
    v673 = v236 ^ __ROR4__(v896, 25);
    v245 = v759;
    v842 = v643 ^ __ROR4__(v841, 25);
    v246 = v233 + v869;
    v760 = v1005 + v243;
    v247 = v787 ^ __ROR4__(v232, 25);
    v897 = v238 + v1079;
    v248 = v1055 ^ __ROR4__(v245, 25);
    v249 = v237 + v815;
    v731 = v730 + v702;
    v1006 = v1032 + v951;
    v554 = v553 + v673;
    v250 = v236 + v1118;
    v644 = v643 + v978;
    v1033 = v584 + v842;
    v523 = v522 + v247;
    v251 = v787 + v924;
    v252 = (v787 + v924) ^ __ROR4__(v240, 21);
    v253 = v1055 + v242;
    v254 = v244 ^ __ROR4__(v242, 21);
    v585 = v253;
    v255 = v614;
    v615 = v246 ^ __ROR4__(v1118, 21);
    v870 = v250 ^ __ROR4__(v869, 21);
    v256 = v255 + v248;
    v674 = v760 ^ __ROR4__(v673, 21);
    v1056 = v554 ^ __ROR4__(v243, 21);
    v979 = (v238 + v1079) ^ __ROR4__(v978, 21);
    v1080 = v644 ^ __ROR4__(v1079, 21);
    v843 = v249 ^ __ROR4__(v842, 21);
    v1100 = v1033 ^ __ROR4__(v815, 21);
    v257 = v241 ^ __ROR4__(v924, 21);
    v788 = v731 ^ __ROR4__(v247, 21);
    v258 = v246 + v257;
    v703 = v523 ^ __ROR4__(v702, 21);
    v925 = v241 + v615;
    v259 = v585 ^ __ROR4__(v239, 21);
    v260 = v251 + v870;
    v261 = v1006 ^ __ROR4__(v248, 21);
    v262 = v951;
    v952 = v250 + v252;
    v263 = v249 + v261;
    v264 = v256 ^ __ROR4__(v262, 21);
    v1119 = v731 + v674;
    v265 = v760 + v788;
    v266 = (v760 + v788) ^ __ROR4__(v261, 25);
    v524 = v523 + v1056;
    v555 = v554 + v703;
    v267 = v244 + v979;
    v732 = v897 + v254;
    v586 = v585 + v1080;
    v645 = v644 + v259;
    v268 = v1006 + v843;
    v269 = v256 + v1100;
    v761 = v1033 + v264;
    v270 = v615;
    v616 = v258 ^ __ROR4__(v254, 25);
    v898 = v925 ^ __ROR4__(v979, 25);
    v1007 = v267 ^ __ROR4__(v270, 25);
    v271 = v732 ^ __ROR4__(v257, 25);
    v980 = v260 ^ __ROR4__(v1080, 25);
    v1034 = v586 ^ __ROR4__(v870, 25);
    v272 = v952 ^ __ROR4__(v259, 25);
    v273 = v645 ^ __ROR4__(v252, 25);
    v816 = v1119 ^ __ROR4__(v843, 25);
    v274 = v674;
    v675 = v266;
    v275 = v263 ^ __ROR4__(v788, 25);
    v844 = v268 ^ __ROR4__(v274, 25);
    v276 = v263 + v271;
    v871 = v275;
    v789 = v524 ^ __ROR4__(v1100, 25);
    v1057 = v269 ^ __ROR4__(v1056, 25);
    v277 = v555 ^ __ROR4__(v264, 25);
    v278 = v761 ^ __ROR4__(v703, 25);
    v704 = v1119 + v898;
    v926 = v925 + v816;
    v279 = v265 + v616;
    v1081 = v268 + v1007;
    v280 = v267 + v844;
    v281 = v258 + v675;
    v282 = v732 + v871;
    v525 = v524 + v980;
    v283 = v260 + v789;
    v733 = v269 + v1034;
    v284 = v952 + v277;
    v1101 = v586 + v1057;
    v285 = v555 + v272;
    v286 = v279 ^ __ROR4__(v272, 21);
    v556 = v285;
    v287 = v761 + v273;
    v288 = v276 ^ __ROR4__(v273, 21);
    v587 = v287;
    v646 = v645 + v278;
    v289 = v282 ^ __ROR4__(v278, 21);
    v762 = (v1119 + v898) ^ __ROR4__(v980, 21);
    v899 = v525 ^ __ROR4__(v898, 21);
    v790 = v926 ^ __ROR4__(v789, 21);
    v817 = v283 ^ __ROR4__(v816, 21);
    v953 = v1081 ^ __ROR4__(v1034, 21);
    v1008 = v733 ^ __ROR4__(v1007, 21);
    v290 = v280 ^ __ROR4__(v1057, 21);
    v291 = v280 + v289;
    v981 = v290;
    v292 = v616;
    v617 = v281 ^ __ROR4__(v277, 21);
    v845 = v1101 ^ __ROR4__(v844, 21);
    v676 = v284 ^ __ROR4__(v675, 21);
    v293 = v556 ^ __ROR4__(v292, 21);
    v294 = v587 ^ __ROR4__(v271, 21);
    v295 = v646 ^ __ROR4__(v871, 21);
    v872 = v279 + v762;
    v705 = v704 + v286;
    v557 = v556 + v899;
    v526 = v525 + v293;
    v296 = v281 + v790;
    v297 = v926 + v617;
    v298 = (v926 + v617) ^ __ROR4__(v289, 25);
    v299 = v284 + v817;
    v927 = v283 + v676;
    v300 = v276 + v953;
    v1035 = v1081 + v288;
    v588 = v587 + v1008;
    v734 = v733 + v294;
    v301 = v282 + v981;
    v647 = v646 + v845;
    v1058 = v1101 + v295;
    v954 = v872 ^ __ROR4__(v953, 25);
    v1082 = v300 ^ __ROR4__(v762, 25);
    v763 = v298;
    v302 = v705 ^ __ROR4__(v288, 25);
    v303 = v1035 ^ __ROR4__(v286, 25);
    v304 = v297 + v302;
    v305 = v291 ^ __ROR4__(v617, 25);
    v306 = v291 + v303;
    v1120 = v557 ^ __ROR4__(v1008, 25);
    v1009 = v588 ^ __ROR4__(v899, 25);
    v307 = v981;
    v982 = v305;
    v900 = v526 ^ __ROR4__(v294, 25);
    v308 = v734 ^ __ROR4__(v293, 25);
    v1102 = v296 ^ __ROR4__(v307, 25);
    v791 = v301 ^ __ROR4__(v790, 25);
    v618 = v299 ^ __ROR4__(v845, 25);
    v309 = v676;
    v818 = v647 ^ __ROR4__(v817, 25);
    v310 = v296 + v954;
    v677 = v872 + v1102;
    v311 = v927 ^ __ROR4__(v295, 25);
    v846 = v301 + v1082;
    v312 = v1058 ^ __ROR4__(v309, 25);
    v313 = v300 + v791;
    v706 = v705 + v763;
    v873 = v1035 + v982;
    v314 = v299 + v1120;
    v558 = v557 + v618;
    v648 = v647 + v1009;
    v1036 = v588 + v818;
    v527 = v526 + v311;
    v315 = v927 + v900;
    v316 = (v927 + v900) ^ __ROR4__(v302, 21);
    v317 = v1058 + v308;
    v318 = v306 ^ __ROR4__(v308, 21);
    v589 = v317;
    v319 = v734;
    v735 = v310 ^ __ROR4__(v1120, 21);
    v928 = v314 ^ __ROR4__(v954, 21);
    v320 = v319 + v312;
    v619 = v677 ^ __ROR4__(v618, 21);
    v955 = v558 ^ __ROR4__(v1102, 21);
    v1010 = (v301 + v1082) ^ __ROR4__(v1009, 21);
    v1083 = v648 ^ __ROR4__(v1082, 21);
    v1059 = v313 ^ __ROR4__(v818, 21);
    v1103 = v1036 ^ __ROR4__(v791, 21);
    v321 = v304 ^ __ROR4__(v900, 21);
    v322 = v310 + v321;
    v792 = v706 ^ __ROR4__(v311, 21);
    v764 = v527 ^ __ROR4__(v763, 21);
    v901 = v304 + v735;
    v323 = v589 ^ __ROR4__(v303, 21);
    v324 = v315 + v928;
    v325 = v873 ^ __ROR4__(v312, 21);
    v326 = v982;
    v983 = v314 + v316;
    v327 = v313 + v325;
    v328 = v320 ^ __ROR4__(v326, 21);
    v1121 = v706 + v619;
    v329 = v677 + v792;
    v330 = (v677 + v792) ^ __ROR4__(v325, 25);
    v528 = v527 + v955;
    v559 = v558 + v764;
    v331 = v306 + v1010;
    v678 = v846 + v318;
    v590 = v589 + v1083;
    v649 = v648 + v323;
    v332 = v873 + v1059;
    v333 = v320 + v1103;
    v707 = v1036 + v328;
    v334 = v735;
    v736 = v322 ^ __ROR4__(v318, 25);
    v847 = v901 ^ __ROR4__(v1010, 25);
    v1011 = v331 ^ __ROR4__(v334, 25);
    v335 = v678 ^ __ROR4__(v321, 25);
    v874 = v324 ^ __ROR4__(v1083, 25);
    v1084 = v590 ^ __ROR4__(v928, 25);
    v336 = v983 ^ __ROR4__(v323, 25);
    v337 = v649 ^ __ROR4__(v316, 25);
    v819 = v1121 ^ __ROR4__(v1059, 25);
    v338 = v619;
    v620 = v330;
    v339 = v327 ^ __ROR4__(v792, 25);
    v929 = v332 ^ __ROR4__(v338, 25);
    v340 = v327 + v335;
    v1037 = v339;
    v793 = v528 ^ __ROR4__(v1103, 25);
    v956 = v333 ^ __ROR4__(v955, 25);
    v341 = v559 ^ __ROR4__(v328, 25);
    v342 = v707 ^ __ROR4__(v764, 25);
    v765 = v1121 + v847;
    v902 = v901 + v819;
    v343 = v329 + v736;
    v1060 = v332 + v1011;
    v344 = v331 + v929;
    v345 = v322 + v620;
    v346 = v678 + v1037;
    v529 = v528 + v874;
    v347 = v324 + v793;
    v679 = v333 + v1084;
    v348 = v983 + v341;
    v1104 = v590 + v956;
    v349 = v559 + v336;
    v350 = v343 ^ __ROR4__(v336, 21);
    v560 = v349;
    v351 = v707 + v337;
    v352 = v340 ^ __ROR4__(v337, 21);
    v591 = v351;
    v650 = v649 + v342;
    v353 = v346 ^ __ROR4__(v342, 21);
    v708 = (v1121 + v847) ^ __ROR4__(v874, 21);
    v848 = v529 ^ __ROR4__(v847, 21);
    v794 = v902 ^ __ROR4__(v793, 21);
    v820 = v347 ^ __ROR4__(v819, 21);
    v875 = v1060 ^ __ROR4__(v1084, 21);
    v984 = v679 ^ __ROR4__(v1011, 21);
    v354 = v344 ^ __ROR4__(v956, 21);
    v355 = v344 + v353;
    v957 = v354;
    v356 = v736;
    v737 = v345 ^ __ROR4__(v341, 21);
    v930 = v1104 ^ __ROR4__(v929, 21);
    v621 = v348 ^ __ROR4__(v620, 21);
    v357 = v560 ^ __ROR4__(v356, 21);
    v358 = v591 ^ __ROR4__(v335, 21);
    v359 = v650 ^ __ROR4__(v1037, 21);
    v1012 = v343 + v708;
    v766 = v765 + v350;
    v561 = v560 + v848;
    v530 = v529 + v357;
    v360 = v345 + v794;
    v361 = v902 + v737;
    v362 = (v902 + v737) ^ __ROR4__(v353, 25);
    v363 = v348 + v820;
    v903 = v347 + v621;
    v364 = v340 + v875;
    v1038 = v1060 + v352;
    v592 = v591 + v984;
    v680 = v679 + v358;
    v365 = v346 + v957;
    v651 = v650 + v930;
    v1061 = v1104 + v359;
    v876 = v1012 ^ __ROR4__(v875, 25);
    v366 = v708;
    v367 = v1038 ^ __ROR4__(v350, 25);
    v709 = v362;
    v1085 = v364 ^ __ROR4__(v366, 25);
    v368 = v355 ^ __ROR4__(v737, 25);
    v369 = v355 + v367;
    v370 = v766 ^ __ROR4__(v352, 25);
    v371 = v361 + v370;
    v1122 = v561 ^ __ROR4__(v984, 25);
    v985 = v592 ^ __ROR4__(v848, 25);
    v372 = v957;
    v958 = v368;
    v849 = v530 ^ __ROR4__(v358, 25);
    v373 = v680 ^ __ROR4__(v357, 25);
    v795 = v365 ^ __ROR4__(v794, 25);
    v738 = v363 ^ __ROR4__(v930, 25);
    v1105 = v360 ^ __ROR4__(v372, 25);
    v374 = v621;
    v821 = v651 ^ __ROR4__(v820, 25);
    v375 = v360 + v876;
    v622 = v1012 + v1105;
    v376 = v903 ^ __ROR4__(v359, 25);
    v931 = v365 + v1085;
    v377 = v1061 ^ __ROR4__(v374, 25);
    v378 = v364 + v795;
    v767 = v766 + v709;
    v1013 = v1038 + v958;
    v379 = v363 + v1122;
    v562 = v561 + v738;
    v652 = v651 + v985;
    v1039 = v592 + v821;
    v531 = v530 + v376;
    v380 = v903 + v849;
    v381 = (v903 + v849) ^ __ROR4__(v370, 21);
    v382 = v1061 + v373;
    v383 = v369 ^ __ROR4__(v373, 21);
    v593 = v382;
    v384 = v680;
    v681 = v375 ^ __ROR4__(v1122, 21);
    v877 = v379 ^ __ROR4__(v876, 21);
    v385 = v384 + v377;
    v739 = v622 ^ __ROR4__(v738, 21);
    v904 = v562 ^ __ROR4__(v1105, 21);
    v986 = (v365 + v1085) ^ __ROR4__(v985, 21);
    v1086 = v652 ^ __ROR4__(v1085, 21);
    v1062 = v378 ^ __ROR4__(v821, 21);
    v1106 = v1039 ^ __ROR4__(v795, 21);
    v386 = v371 ^ __ROR4__(v849, 21);
    v387 = v375 + v386;
    v796 = v767 ^ __ROR4__(v376, 21);
    v710 = v531 ^ __ROR4__(v709, 21);
    v388 = v593 ^ __ROR4__(v367, 21);
    v389 = v1013 ^ __ROR4__(v377, 21);
    v390 = v378 + v389;
    v850 = v371 + v681;
    v391 = v385 ^ __ROR4__(v958, 21);
    v392 = v380 + v877;
    v959 = v379 + v381;
    v1123 = v767 + v739;
    v393 = v622 + v796;
    v394 = (v622 + v796) ^ __ROR4__(v389, 25);
    v532 = v531 + v904;
    v563 = v562 + v710;
    v395 = v369 + v986;
    v623 = v931 + v383;
    v594 = v593 + v1086;
    v653 = v652 + v388;
    v396 = v1013 + v1062;
    v397 = v385 + v1106;
    v768 = v1039 + v391;
    v932 = v850 ^ __ROR4__(v986, 25);
    v398 = v681;
    v682 = v387 ^ __ROR4__(v383, 25);
    v399 = v623 ^ __ROR4__(v386, 25);
    v1014 = v395 ^ __ROR4__(v398, 25);
    v987 = v392 ^ __ROR4__(v1086, 25);
    v1087 = v594 ^ __ROR4__(v877, 25);
    v400 = v959 ^ __ROR4__(v388, 25);
    v401 = v653 ^ __ROR4__(v381, 25);
    v822 = v1123 ^ __ROR4__(v1062, 25);
    v402 = v739;
    v740 = v394;
    v403 = v390 ^ __ROR4__(v796, 25);
    v878 = v396 ^ __ROR4__(v402, 25);
    v404 = v390 + v399;
    v1040 = v403;
    v797 = v532 ^ __ROR4__(v1106, 25);
    v905 = v397 ^ __ROR4__(v904, 25);
    v405 = v563 ^ __ROR4__(v391, 25);
    v406 = v768 ^ __ROR4__(v710, 25);
    v711 = v1123 + v932;
    v851 = v850 + v822;
    v1063 = v396 + v1014;
    v407 = v393 + v682;
    v408 = v395 + v878;
    v409 = v387 + v740;
    v410 = v623 + v1040;
    v533 = v532 + v987;
    v411 = v392 + v797;
    v624 = v397 + v1087;
    v412 = v959 + v405;
    v1107 = v594 + v905;
    v413 = v563 + v400;
    v414 = v407 ^ __ROR4__(v400, 21);
    v564 = v413;
    v415 = v768 + v401;
    v416 = v404 ^ __ROR4__(v401, 21);
    v595 = v415;
    v654 = v653 + v406;
    v417 = v410 ^ __ROR4__(v406, 21);
    v769 = (v1123 + v932) ^ __ROR4__(v987, 21);
    v933 = v533 ^ __ROR4__(v932, 21);
    v798 = v851 ^ __ROR4__(v797, 21);
    v823 = v411 ^ __ROR4__(v822, 21);
    v960 = v1063 ^ __ROR4__(v1087, 21);
    v988 = v624 ^ __ROR4__(v1014, 21);
    v418 = v408 ^ __ROR4__(v905, 21);
    v419 = v408 + v417;
    v906 = v418;
    v420 = v682;
    v683 = v409 ^ __ROR4__(v405, 21);
    v879 = v1107 ^ __ROR4__(v878, 21);
    v741 = v412 ^ __ROR4__(v740, 21);
    v421 = v564 ^ __ROR4__(v420, 21);
    v422 = v595 ^ __ROR4__(v399, 21);
    v423 = v654 ^ __ROR4__(v1040, 21);
    v1015 = v407 + v769;
    v712 = v711 + v414;
    v565 = v564 + v933;
    v534 = v533 + v421;
    v424 = v409 + v798;
    v425 = v851 + v683;
    v426 = (v851 + v683) ^ __ROR4__(v417, 25);
    v427 = v412 + v823;
    v852 = v411 + v741;
    v428 = v404 + v960;
    v1041 = v1063 + v416;
    v596 = v595 + v988;
    v625 = v624 + v422;
    v429 = v410 + v906;
    v655 = v654 + v879;
    v1064 = v1107 + v423;
    v961 = v1015 ^ __ROR4__(v960, 25);
    v430 = v1041 ^ __ROR4__(v414, 25);
    v1088 = v428 ^ __ROR4__(v769, 25);
    v431 = v712 ^ __ROR4__(v416, 25);
    v432 = v425 + v431;
    v1124 = v565 ^ __ROR4__(v988, 25);
    v989 = v596 ^ __ROR4__(v933, 25);
    v934 = v534 ^ __ROR4__(v422, 25);
    v770 = v426;
    v433 = v625 ^ __ROR4__(v421, 25);
    v434 = v424 ^ __ROR4__(v906, 25);
    v907 = v419 ^ __ROR4__(v683, 25);
    v435 = v419 + v430;
    v799 = v429 ^ __ROR4__(v798, 25);
    v684 = v427 ^ __ROR4__(v879, 25);
    v436 = v741;
    v824 = v655 ^ __ROR4__(v823, 25);
    v437 = v424 + v961;
    v742 = v1015 + v434;
    v438 = v852 ^ __ROR4__(v423, 25);
    v880 = v429 + v1088;
    v439 = v1064 ^ __ROR4__(v436, 25);
    v440 = v428 + v799;
    v713 = v712 + v770;
    v1016 = v1041 + v907;
    v566 = v565 + v684;
    v441 = v427 + v1124;
    v656 = v655 + v989;
    v1042 = v596 + v824;
    v535 = v534 + v438;
    v442 = v852 + v934;
    v443 = (v852 + v934) ^ __ROR4__(v431, 21);
    v597 = v1064 + v433;
    v444 = v625;
    v626 = v437 ^ __ROR4__(v1124, 21);
    v853 = v441 ^ __ROR4__(v961, 21);
    v445 = v444 + v439;
    v685 = v742 ^ __ROR4__(v684, 21);
    v962 = v566 ^ __ROR4__(v434, 21);
    v990 = (v429 + v1088) ^ __ROR4__(v989, 21);
    v1089 = v656 ^ __ROR4__(v1088, 21);
    v1065 = v440 ^ __ROR4__(v824, 21);
    v1108 = v1042 ^ __ROR4__(v799, 21);
    v825 = v443;
    v446 = v435 ^ __ROR4__(v433, 21);
    v800 = v713 ^ __ROR4__(v438, 21);
    v447 = v597 ^ __ROR4__(v430, 21);
    v448 = v432 ^ __ROR4__(v934, 21);
    v1125 = v437 + v448;
    v771 = v535 ^ __ROR4__(v770, 21);
    v1133 = v441 + v825;
    v449 = v1016 ^ __ROR4__(v439, 21);
    v450 = v907;
    v908 = v432 + v626;
    v451 = v440 + v449;
    v452 = v445 ^ __ROR4__(v450, 21);
    v453 = v713 + v685;
    v1131 = v442 + v853;
    v454 = v742 + v800;
    v455 = (v742 + v800) ^ __ROR4__(v449, 25);
    v536 = v535 + v962;
    v456 = v435 + v990;
    v567 = v566 + v771;
    v457 = v880 + v446;
    v458 = v1016;
    v1017 = v597 + v1089;
    v598 = v656 + v447;
    v459 = v458 + v1065;
    v460 = v445 + v1108;
    v657 = v1042 + v452;
    v714 = v908 ^ __ROR4__(v990, 25);
    v935 = (v880 + v446) ^ __ROR4__(v448, 25);
    v881 = v456 ^ __ROR4__(v626, 25);
    v627 = (v437 + v448) ^ __ROR4__(v446, 25);
    v743 = v1131 ^ __ROR4__(v1089, 25);
    v854 = v1017 ^ __ROR4__(v853, 25);
    v461 = v1133 ^ __ROR4__(v447, 25);
    v462 = v598 ^ __ROR4__(v825, 25);
    v463 = v453 ^ __ROR4__(v1065, 25);
    v464 = v685;
    v686 = v455;
    v465 = v459 ^ __ROR4__(v464, 25);
    v466 = v456 + v465;
    v826 = v451 ^ __ROR4__(v800, 25);
    v467 = v1042 + v452;
    v801 = v536 ^ __ROR4__(v1108, 25);
    v963 = v460 ^ __ROR4__(v962, 25);
    v468 = v567 ^ __ROR4__(v452, 25);
    v469 = v467 ^ __ROR4__(v771, 25);
    v772 = v453 + v714;
    v909 = v908 + v463;
    v470 = v451 + v935;
    v471 = v459 + v881;
    v472 = v454 + v627;
    v473 = v1125 + v686;
    v474 = v457 + v826;
    v537 = v536 + v743;
    v991 = v1131 + v801;
    v475 = v460 + v854;
    v1043 = v1017 + v963;
    v568 = v567 + v461;
    v1018 = v1133 + v468;
    v476 = v657 + v462;
    v477 = v470 ^ __ROR4__(v462, 21);
    v658 = v476;
    v478 = v598 + v469;
    v479 = v474 ^ __ROR4__(v469, 21);
    v599 = v478;
    v744 = v772 ^ __ROR4__(v743, 21);
    v1066 = v537 ^ __ROR4__(v714, 21);
    v715 = v909 ^ __ROR4__(v801, 21);
    v1090 = (v1131 + v801) ^ __ROR4__(v463, 21);
    v480 = v471 ^ __ROR4__(v854, 21);
    v481 = v471 + v477;
    v1109 = v480;
    v882 = v475 ^ __ROR4__(v881, 21);
    v482 = v963;
    v483 = v627;
    v628 = (v1125 + v686) ^ __ROR4__(v468, 21);
    v964 = v1043 ^ __ROR4__(v465, 21);
    v484 = v466 ^ __ROR4__(v482, 21);
    v485 = v466 + v479;
    v855 = v484;
    v486 = v935;
    v802 = v568 ^ __ROR4__(v483, 21);
    v687 = (v1133 + v468) ^ __ROR4__(v686, 21);
    v936 = v472 ^ __ROR4__(v461, 21);
    v487 = v658 ^ __ROR4__(v486, 21);
    v488 = v599 ^ __ROR4__(v826, 21);
    v489 = v475 + v487;
    v490 = v472 + v744;
    v773 = v772 + v936;
    v569 = v568 + v1066;
    v827 = v537 + v802;
    v538 = v473 + v715;
    v491 = v909 + v628;
    v1019 = v1018 + v1090;
    v492 = v470 + v1109;
    v992 = v991 + v687;
    v1126 = v490 ^ __ROR4__(v1109, 25);
    v659 = v658 + v882;
    v493 = v474 + v855;
    v1110 = v599 + v964;
    v494 = v1043 + v488;
    v1134 = v492 ^ __ROR4__(v744, 25);
    v495 = v882;
    v496 = v1066;
    v883 = (v909 + v628) ^ __ROR4__(v479, 25);
    v745 = v773 ^ __ROR4__(v477, 25);
    v1136 = v481 ^ __ROR4__(v936, 25);
    v1138 = v485 ^ __ROR4__(v628, 25);
    v1132 = v569 ^ __ROR4__(v495, 25);
    v1067 = v827 ^ __ROR4__(v487, 25);
    v497 = v659 ^ __ROR4__(v496, 25);
    v1139 = v489 ^ __ROR4__(v802, 25);
    v498 = v538 ^ __ROR4__(v855, 25);
    v716 = v493 ^ __ROR4__(v715, 25);
    v499 = v1019 ^ __ROR4__(v964, 25);
    v500 = (v599 + v964) ^ __ROR4__(v1090, 25);
    v1091 = v992 ^ __ROR4__(v488, 25);
    v1140 = (v1043 + v488) ^ __ROR4__(v687, 25);
    v884 = v538 + v1126;
    v910 = v490 + v498;
    v16 = v493 + v1134;
    v14 = v492 + v716;
    v8 = v491 + v745;
    v937 = v773 + v883;
    v12 = v485 + v1136;
    v9 = v481 + v1138;
    v570 = v1019 + v1132;
    v993 = v569 + v499;
    v600 = v1110 + v497;
    v15 = v16 ^ __ROR4__(v497, 21);
    v501 = v659 + v500;
    v18 = v14 ^ __ROR4__(v500, 21);
    v539 = v501;
    v965 = v992 + v1067;
    v1020 = v827 + v1091;
    v13 = v494 + v1139;
    v7 = v489 + v1140;
    v508 = (v538 + v1126) ^ __ROR4__(v1132, 21);
    v660 = v570 ^ __ROR4__(v1126, 21);
    v11 = (v490 + v498) ^ __ROR4__(v499, 21);
    v10 = v993 ^ __ROR4__(v498, 21);
    v774 = v600 ^ __ROR4__(v1134, 21);
    v828 = v501 ^ __ROR4__(v716, 21);
    v629 = v8 ^ __ROR4__(v1067, 21);
    v688 = v965 ^ __ROR4__(v745, 21);
    v17 = (v773 + v883) ^ __ROR4__(v1091, 21);
    v717 = (v827 + v1091) ^ __ROR4__(v883, 21);
    v1068 = v12 ^ __ROR4__(v1139, 21);
    v803 = v13 ^ __ROR4__(v1136, 21);
    v746 = v9 ^ __ROR4__(v1140, 21);
    v856 = v7 ^ __ROR4__(v1138, 21);
    if ( v507 )
      break;
    v539 = v501 ^ 1;
LABEL_2:
    ++v507;
  }
  if ( v507 != 10 )
    goto LABEL_2;
  a1[10] = v629;
  a1[11] = v11;
  a1[12] = v17;
  a1[13] = v660;
  v1137 = v18;
  a1[9] = v508;
  a1[14] = v688;
  v502 = a4;
  a1[15] = v10;
  a1[26] = v884;
  a1[29] = v965;
  a1[16] = v717;
  a1[34] = v16;
  a1[17] = v15;
  a1[18] = v1068;
  a1[30] = v570;
  a1[31] = v1020;
  a1[19] = v1137;
  a1[32] = v993;
  a1[25] = v8;
  a1[20] = v746;
  a1[27] = v937;
  a1[28] = v910;
  a1[21] = v774;
  a1[33] = v12;
  a1[35] = v9;
  a1[22] = v803;
  a1[23] = v828;
  a1[24] = v856;
  a1[36] = v14;
  a1[39] = v7;
  a1[37] = v13;
  a1[40] = v501;
  v503 = v508;
  a1[38] = v600;
  for ( i = a1 + 9; ; ++i )
  {
    result = HIWORD(v503);
    *v502 = v503;
    v502 += 2;
    *((_BYTE *)v502 - 2) = BYTE2(v503);
    *((_BYTE *)v502 - 1) = HIBYTE(v503);
    if ( &a4[2 * a5] == v502 )
      break;
    v505 = i[1];
    v503 = v505;
  }
  return result;
}
