unsigned int __fastcall sph_blake224_0(unsigned int *a1, char *a2, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  unsigned int v5; // r1
  unsigned int result; // r0
  char *v7; // r0
  bool v8; // cf
  unsigned int v9; // r0
  unsigned int v10; // lr
  unsigned int v11; // r3
  int v12; // r10
  int v13; // r8
  int v14; // r1
  unsigned int v15; // r3
  int v16; // r2
  int v17; // r9
  int v18; // r12
  int v19; // r6
  int v20; // r4
  int v21; // r11
  int v22; // r7
  unsigned int v23; // r0
  int v24; // lr
  int v25; // r3
  int v26; // r9
  int v27; // r8
  int v28; // r12
  int v29; // r2
  int v30; // r1
  int v31; // r4
  int v32; // r11
  int v33; // lr
  int v34; // r7
  int v35; // r6
  int v36; // r8
  int v37; // r5
  int v38; // r3
  int v39; // r0
  int v40; // r1
  int v41; // r10
  int v42; // r6
  int v43; // lr
  int v44; // r7
  int v45; // r5
  int v46; // r12
  int v47; // r9
  int v48; // r8
  int v49; // r1
  int v50; // r3
  int v51; // r0
  int v52; // r10
  int v53; // r2
  int v54; // r11
  int v55; // r6
  int v56; // r8
  int v57; // r4
  int v58; // r10
  int v59; // r7
  int v60; // r5
  int v61; // r0
  int v62; // r11
  int v63; // r9
  int v64; // r6
  int v65; // r12
  int v66; // r3
  int v67; // r1
  int v68; // r4
  int v69; // r5
  int v70; // r7
  int v71; // lr
  int v72; // r10
  int v73; // r12
  int v74; // r1
  int v75; // r0
  int v76; // r3
  int v77; // r9
  int v78; // r3
  int v79; // r2
  int v80; // r6
  int v81; // r11
  int v82; // r7
  int v83; // r5
  int v84; // r12
  int v85; // r9
  int v86; // r4
  int v87; // r3
  int v88; // r0
  int v89; // r8
  int v90; // r2
  int v91; // r1
  int v92; // r11
  int v93; // r10
  int v94; // lr
  int v95; // r7
  int v96; // r5
  int v97; // r12
  int v98; // r9
  int v99; // r0
  int v100; // r8
  int v101; // r2
  int v102; // r1
  int v103; // r6
  int v104; // r3
  int v105; // r10
  int v106; // r6
  int v107; // r4
  int v108; // r7
  int v109; // r11
  int v110; // lr
  int v111; // r8
  int v112; // r10
  int v113; // r11
  int v114; // r6
  int v115; // r12
  int v116; // r0
  int v117; // r9
  int v118; // r8
  int v119; // r4
  int v120; // r1
  int v121; // r10
  int v122; // r11
  int v123; // r6
  int v124; // r7
  int v125; // lr
  int v126; // r5
  int v127; // r0
  int v128; // lr
  int v129; // r9
  int v130; // r3
  int v131; // r12
  int v132; // r2
  int v133; // r1
  int v134; // r4
  int v135; // r5
  int v136; // lr
  int v137; // r7
  int v138; // r8
  int v139; // r0
  int v140; // r1
  int v141; // r9
  int v142; // r3
  int v143; // r6
  int v144; // r10
  int v145; // r4
  int v146; // r7
  int v147; // r5
  int v148; // r2
  int v149; // lr
  int v150; // r9
  int v151; // r10
  int v152; // r8
  int v153; // r12
  int v154; // r4
  int v155; // r1
  int v156; // r3
  int v157; // r6
  int v158; // r7
  int v159; // r8
  int v160; // r11
  int v161; // r5
  int v162; // r0
  int v163; // r10
  int v164; // lr
  int v165; // r1
  int v166; // r12
  int v167; // r9
  int v168; // r11
  int v169; // r2
  int v170; // r6
  int v171; // r5
  int v172; // r8
  int v173; // r10
  int v174; // r7
  int v175; // r0
  int v176; // lr
  int v177; // r12
  int v178; // r9
  int v179; // t2
  int v180; // r4
  int v181; // r11
  int v182; // r2
  int v183; // r5
  int v184; // r6
  int v185; // lr
  int v186; // r9
  int v187; // r0
  int v188; // r12
  int v189; // r4
  int v190; // r8
  int v191; // r10
  int v192; // r7
  int v193; // r2
  int v194; // r6
  int v195; // lr
  int v196; // r2
  int v197; // r0
  int v198; // r11
  int v199; // r5
  int v200; // r9
  int v201; // r3
  int v202; // lr
  int v203; // r12
  int v204; // r2
  int v205; // r5
  int v206; // r1
  int v207; // r4
  int v208; // r6
  int v209; // r10
  int v210; // r11
  int v211; // lr
  int v212; // r0
  int v213; // r7
  int v214; // r3
  int v215; // r5
  int v216; // r2
  int v217; // r12
  int v218; // r10
  int v219; // r4
  int v220; // r6
  int v221; // r1
  int v222; // r11
  int v223; // lr
  int v224; // r11
  int v225; // r8
  int v226; // r0
  int v227; // r3
  int v228; // r5
  int v229; // r1
  int v230; // r9
  int v231; // r12
  int v232; // r6
  int v233; // r2
  int v234; // r4
  int v235; // r11
  int v236; // lr
  int v237; // r0
  int v238; // r5
  int v239; // r4
  int v240; // r3
  int v241; // r7
  int v242; // r12
  int v243; // r9
  int v244; // r8
  int v245; // r2
  int v246; // r1
  int v247; // r6
  int v248; // r5
  int v249; // r0
  int v250; // r3
  int v251; // r11
  int v252; // r8
  int v253; // r10
  int v254; // lr
  int v255; // r12
  int v256; // r4
  int v257; // r9
  int v258; // r6
  int v259; // r7
  int v260; // r1
  int v261; // r11
  int v262; // r3
  int v263; // r8
  int v264; // r5
  int v265; // lr
  int v266; // r12
  int v267; // r10
  int v268; // r0
  int v269; // r4
  int v270; // r1
  int v271; // r3
  int v272; // r2
  int v273; // r6
  int v274; // r8
  int v275; // lr
  int v276; // r9
  int v277; // r0
  int v278; // r5
  int v279; // r1
  int v280; // r12
  int v281; // r5
  int v282; // r4
  int v283; // r11
  int v284; // r3
  int v285; // r1
  int v286; // r2
  int v287; // r9
  int v288; // lr
  int v289; // r10
  int v290; // r8
  int v291; // r5
  int v292; // r1
  int v293; // r7
  int v294; // r0
  int v295; // r12
  int v296; // r2
  int v297; // r6
  int v298; // r3
  int v299; // r11
  int v300; // r0
  int v301; // r1
  int v302; // r8
  int v303; // r12
  int v304; // r9
  int v305; // r4
  int v306; // r7
  int v307; // r10
  int v308; // r5
  int v309; // r6
  int v310; // r5
  int v311; // r3
  int v312; // r8
  int v313; // r1
  int v314; // r4
  unsigned int v315; // r11
  int v316; // r12
  int v317; // r9
  int v318; // r0
  int v319; // lr
  int v320; // t2
  int v321; // r3
  int v322; // r2
  int v323; // r10
  int v324; // r11
  int v325; // r12
  int v326; // r0
  int v327; // r6
  int v328; // r8
  int v329; // r7
  int v330; // lr
  int v331; // r5
  int v332; // r1
  int v333; // r9
  int v334; // r3
  int v335; // r6
  int v336; // r10
  int v337; // r3
  int v338; // lr
  int v339; // r8
  int v340; // r2
  int v341; // r11
  int v342; // r4
  int v343; // r0
  int v344; // r1
  int v345; // r7
  int v346; // r12
  int v347; // r5
  int v348; // r10
  int v349; // r2
  int v350; // lr
  int v351; // r3
  int v352; // r1
  int v353; // r9
  int v354; // r8
  int v355; // r12
  int v356; // r4
  int v357; // r11
  int v358; // r5
  int v359; // r2
  int v360; // r7
  int v361; // r6
  int v362; // r3
  int v363; // r1
  int v364; // r5
  int v365; // r11
  int v366; // r10
  int v367; // r8
  int v368; // lr
  int v369; // r0
  int v370; // r9
  int v371; // r10
  int v372; // r4
  int v373; // r2
  int v374; // r1
  int v375; // r3
  int v376; // r7
  int v377; // r5
  int v378; // r4
  int v379; // r8
  int v380; // r6
  int v381; // lr
  int v382; // r12
  int v383; // r1
  int v384; // r3
  int v385; // r2
  int v386; // r9
  int v387; // r7
  int v388; // r5
  int v389; // r12
  int v390; // r8
  int v391; // r4
  int v392; // r6
  int v393; // r0
  int v394; // r2
  int v395; // r3
  int v396; // r1
  int v397; // r9
  int v398; // r11
  int v399; // r8
  int v400; // lr
  int v401; // r7
  int v402; // r12
  int v403; // r6
  int v404; // lr
  int v405; // t2
  int v406; // r0
  int v407; // r2
  int v408; // r10
  int v409; // r3
  int v410; // r1
  int v411; // r6
  int v412; // r7
  int v413; // r12
  int v414; // r11
  int v415; // r8
  int v416; // r9
  int v417; // r5
  int v418; // lr
  int v419; // r0
  int v420; // r6
  int v421; // r10
  int v422; // r3
  int v423; // r1
  int v424; // r11
  int v425; // r12
  int v426; // r2
  int v427; // r7
  int v428; // lr
  int v429; // r8
  int v430; // r6
  int v431; // r3
  int v432; // r1
  int v433; // r2
  int v434; // r5
  int v435; // r2
  int v436; // r9
  int v437; // r11
  int v438; // r0
  int v439; // r7
  int v440; // r12
  int v441; // r12
  int v442; // r4
  int v443; // r10
  int v444; // lr
  int v445; // r3
  int v446; // r2
  int v447; // r5
  int v448; // r0
  int v449; // r12
  int v450; // r6
  int v451; // r11
  int v452; // r7
  int v453; // r8
  int v454; // lr
  int v455; // r10
  int v456; // r1
  int v457; // r3
  int v458; // r4
  int v459; // r9
  int v460; // r2
  int v461; // r6
  int v462; // r5
  int v463; // r11
  int v464; // r0
  int v465; // r6
  int v466; // r1
  int v467; // r8
  int v468; // r7
  int v469; // lr
  int v470; // r4
  int v471; // r2
  int v472; // r5
  int v473; // r9
  int v474; // r10
  int v475; // r3
  int v476; // r1
  int v477; // r11
  int v478; // r6
  int v479; // r8
  int v480; // r10
  int v481; // r12
  int v482; // r2
  int v483; // r4
  int v484; // r0
  int v485; // r5
  int v486; // t2
  int v487; // r8
  int v488; // r3
  int v489; // r1
  int v490; // r4
  int v491; // r10
  int v492; // r3
  int v493; // r10
  int v494; // r1
  int v495; // r7
  int v496; // lr
  int v497; // r5
  int v498; // r2
  int v499; // r9
  int v500; // r12
  int v501; // r8
  int v502; // r0
  int v503; // r6
  int v504; // r3
  int v505; // r10
  int v506; // r1
  int v507; // r4
  int v508; // r12
  int v509; // r11
  int v510; // r6
  int v511; // lr
  int v512; // r0
  int v513; // r2
  int v514; // r5
  int v515; // r7
  int v516; // r10
  int v517; // r1
  unsigned int v518; // r11
  int v519; // r6
  int v520; // lr
  int v521; // r9
  int v522; // r12
  int v523; // r4
  int v524; // r7
  int v525; // r8
  int v526; // r0
  int v527; // r5
  int v528; // r11
  int v529; // r10
  int v530; // r6
  int v531; // r9
  int v532; // r2
  int v533; // r1
  int v534; // r3
  int v535; // r2
  int v536; // lr
  int v537; // r4
  int v538; // r12
  int v539; // r9
  int v540; // r8
  int v541; // r0
  int v542; // r2
  int v543; // r3
  int v544; // r5
  int v545; // r8
  int v546; // r1
  int v547; // r4
  int v548; // r10
  int v549; // r7
  int v550; // r12
  int v551; // r0
  int v552; // r6
  int v553; // r2
  int v554; // r9
  int v555; // r5
  int v556; // r10
  int v557; // r3
  int v558; // r8
  int v559; // r4
  int v560; // r1
  int v561; // r7
  int v562; // r12
  int v563; // r0
  int v564; // r6
  int v565; // r9
  int v566; // r11
  int v567; // lr
  int v568; // r2
  int v569; // r10
  int v570; // r3
  int v571; // r1
  int v572; // r7
  int v573; // r6
  int v574; // r8
  int v575; // r0
  int v576; // r12
  int v577; // lr
  int v578; // r4
  int v579; // r2
  int v580; // r5
  int v581; // r11
  int v582; // r10
  int v583; // r7
  int v584; // r3
  int v585; // r1
  int v586; // r9
  int v587; // r12
  int v588; // r2
  int v589; // r8
  int v590; // r11
  int v591; // r0
  int v592; // lr
  int v593; // r10
  int v594; // r4
  int v595; // r5
  int v596; // r3
  int v597; // r8
  int v598; // r1
  int v599; // r4
  int v600; // r6
  int v601; // r11
  int v602; // r0
  int v603; // r12
  int v604; // r5
  int v605; // r9
  int v606; // lr
  int v607; // r2
  int v608; // r8
  int v609; // r4
  int v610; // r10
  int v611; // r1
  int v612; // r3
  int v613; // r6
  int v614; // r7
  int v615; // r0
  int v616; // r8
  int v617; // lr
  int v618; // r12
  int v619; // r11
  int v620; // r4
  int v621; // r8
  int v622; // r2
  int v623; // r10
  int v624; // r3
  int v625; // r1
  int v626; // r5
  unsigned int v627; // r6
  int v628; // r0
  int v629; // r4
  int v630; // r7
  int v631; // r9
  int v632; // r12
  int v633; // lr
  int v634; // r11
  int v635; // r10
  int v636; // r2
  int v637; // r2
  int v638; // r3
  int v639; // r1
  int v640; // r6
  int v641; // r7
  int v642; // r5
  int v643; // r8
  int v644; // r12
  int v645; // r0
  int v646; // r8
  int v647; // r4
  int v648; // lr
  int v649; // r11
  int v650; // r2
  int v651; // r10
  int v652; // r9
  int v653; // r1
  int v654; // r3
  int v655; // r5
  int v656; // r6
  int v657; // lr
  int v658; // r7
  int v659; // r11
  int v660; // r9
  int v661; // r8
  int v662; // r12
  int v663; // r4
  int v664; // r10
  int v665; // r2
  int v666; // r1
  int v667; // r3
  int v668; // r5
  int v669; // r6
  int v670; // lr
  int v671; // r7
  int v672; // r11
  int v673; // r2
  int v674; // r12
  int v675; // r8
  int v676; // r4
  int v677; // r0
  int v678; // r11
  int v679; // r1
  int v680; // r9
  int v681; // r10
  int v682; // r2
  int v683; // r5
  int v684; // r7
  int v685; // r0
  int v686; // r4
  int v687; // r8
  int v688; // r6
  int v689; // lr
  int v690; // r12
  int v691; // r11
  int v692; // r2
  int v693; // r3
  int v694; // r9
  int v695; // r1
  int v696; // r6
  int v697; // r7
  int v698; // r12
  int v699; // r4
  int v700; // r5
  int v701; // r8
  int v702; // r0
  int v703; // lr
  int v704; // r11
  int v705; // r2
  int v706; // r3
  int v707; // r9
  int v708; // r1
  int v709; // r6
  int v710; // r7
  int v711; // r0
  int v712; // r5
  int v713; // r12
  int v714; // lr
  int v715; // r8
  int v716; // r4
  int v717; // r10
  int v718; // r3
  int v719; // r9
  int v720; // r1
  int v721; // r2
  int v722; // r8
  int v723; // r11
  int v724; // r4
  int v725; // r2
  size_t n; // [sp+4h] [bp-1E8h]
  int v729; // [sp+8h] [bp-1E4h]
  int v730; // [sp+8h] [bp-1E4h]
  int v731; // [sp+8h] [bp-1E4h]
  int v732; // [sp+8h] [bp-1E4h]
  int v733; // [sp+8h] [bp-1E4h]
  int v734; // [sp+8h] [bp-1E4h]
  int v735; // [sp+8h] [bp-1E4h]
  int v736; // [sp+8h] [bp-1E4h]
  int v737; // [sp+8h] [bp-1E4h]
  int v738; // [sp+8h] [bp-1E4h]
  int v739; // [sp+8h] [bp-1E4h]
  int v740; // [sp+8h] [bp-1E4h]
  int v741; // [sp+8h] [bp-1E4h]
  int v742; // [sp+8h] [bp-1E4h]
  int v743; // [sp+8h] [bp-1E4h]
  int v744; // [sp+8h] [bp-1E4h]
  int v745; // [sp+8h] [bp-1E4h]
  int v746; // [sp+14h] [bp-1D8h]
  int v747; // [sp+14h] [bp-1D8h]
  int v748; // [sp+14h] [bp-1D8h]
  int v749; // [sp+14h] [bp-1D8h]
  int v750; // [sp+14h] [bp-1D8h]
  int v751; // [sp+14h] [bp-1D8h]
  int v752; // [sp+14h] [bp-1D8h]
  int v753; // [sp+14h] [bp-1D8h]
  int v754; // [sp+14h] [bp-1D8h]
  int v755; // [sp+14h] [bp-1D8h]
  int v756; // [sp+14h] [bp-1D8h]
  int v757; // [sp+14h] [bp-1D8h]
  int v758; // [sp+14h] [bp-1D8h]
  int v759; // [sp+14h] [bp-1D8h]
  int v760; // [sp+14h] [bp-1D8h]
  int v761; // [sp+14h] [bp-1D8h]
  int v762; // [sp+14h] [bp-1D8h]
  int v763; // [sp+14h] [bp-1D8h]
  int v764; // [sp+18h] [bp-1D4h]
  int v765; // [sp+18h] [bp-1D4h]
  int v766; // [sp+18h] [bp-1D4h]
  int v767; // [sp+18h] [bp-1D4h]
  int v768; // [sp+18h] [bp-1D4h]
  int v769; // [sp+18h] [bp-1D4h]
  int v770; // [sp+18h] [bp-1D4h]
  int v771; // [sp+18h] [bp-1D4h]
  int v772; // [sp+18h] [bp-1D4h]
  int v773; // [sp+18h] [bp-1D4h]
  int v774; // [sp+18h] [bp-1D4h]
  int v775; // [sp+20h] [bp-1CCh]
  unsigned int v776; // [sp+20h] [bp-1CCh]
  int v777; // [sp+20h] [bp-1CCh]
  int v778; // [sp+20h] [bp-1CCh]
  int v779; // [sp+20h] [bp-1CCh]
  int v780; // [sp+20h] [bp-1CCh]
  int v781; // [sp+20h] [bp-1CCh]
  int v782; // [sp+20h] [bp-1CCh]
  int v783; // [sp+20h] [bp-1CCh]
  int v784; // [sp+20h] [bp-1CCh]
  int v785; // [sp+20h] [bp-1CCh]
  int v786; // [sp+20h] [bp-1CCh]
  int v787; // [sp+24h] [bp-1C8h]
  unsigned int v788; // [sp+24h] [bp-1C8h]
  int v789; // [sp+24h] [bp-1C8h]
  int v790; // [sp+24h] [bp-1C8h]
  int v791; // [sp+24h] [bp-1C8h]
  unsigned int v792; // [sp+28h] [bp-1C4h]
  int v793; // [sp+28h] [bp-1C4h]
  unsigned int v794; // [sp+2Ch] [bp-1C0h]
  int v795; // [sp+2Ch] [bp-1C0h]
  int v796; // [sp+2Ch] [bp-1C0h]
  unsigned int v797; // [sp+30h] [bp-1BCh]
  int v798; // [sp+38h] [bp-1B4h]
  unsigned int v799; // [sp+38h] [bp-1B4h]
  int v800; // [sp+38h] [bp-1B4h]
  int v801; // [sp+38h] [bp-1B4h]
  int v802; // [sp+38h] [bp-1B4h]
  unsigned int v803; // [sp+3Ch] [bp-1B0h]
  int v804; // [sp+3Ch] [bp-1B0h]
  unsigned int v805; // [sp+40h] [bp-1ACh]
  int v806; // [sp+40h] [bp-1ACh]
  int v807; // [sp+40h] [bp-1ACh]
  int v808; // [sp+40h] [bp-1ACh]
  int v809; // [sp+44h] [bp-1A8h]
  unsigned int v810; // [sp+44h] [bp-1A8h]
  int v811; // [sp+44h] [bp-1A8h]
  int v812; // [sp+44h] [bp-1A8h]
  int v813; // [sp+44h] [bp-1A8h]
  unsigned int v814; // [sp+48h] [bp-1A4h]
  int v815; // [sp+48h] [bp-1A4h]
  int v816; // [sp+48h] [bp-1A4h]
  int v817; // [sp+48h] [bp-1A4h]
  int v818; // [sp+48h] [bp-1A4h]
  int v819; // [sp+48h] [bp-1A4h]
  int v820; // [sp+54h] [bp-198h]
  int v821; // [sp+54h] [bp-198h]
  int v822; // [sp+54h] [bp-198h]
  int v823; // [sp+54h] [bp-198h]
  int v824; // [sp+54h] [bp-198h]
  int v825; // [sp+58h] [bp-194h]
  int v826; // [sp+5Ch] [bp-190h]
  int v827; // [sp+5Ch] [bp-190h]
  unsigned int v828; // [sp+60h] [bp-18Ch]
  unsigned int v829; // [sp+64h] [bp-188h]
  int v830; // [sp+64h] [bp-188h]
  int v831; // [sp+64h] [bp-188h]
  unsigned int v832; // [sp+68h] [bp-184h]
  unsigned int v833; // [sp+6Ch] [bp-180h]
  int v834; // [sp+70h] [bp-17Ch]
  int v835; // [sp+70h] [bp-17Ch]
  int v836; // [sp+70h] [bp-17Ch]
  int v837; // [sp+70h] [bp-17Ch]
  int v838; // [sp+70h] [bp-17Ch]
  int v839; // [sp+70h] [bp-17Ch]
  int v840; // [sp+70h] [bp-17Ch]
  int v841; // [sp+74h] [bp-178h]
  int v842; // [sp+74h] [bp-178h]
  int v843; // [sp+74h] [bp-178h]
  int v844; // [sp+74h] [bp-178h]
  int v845; // [sp+74h] [bp-178h]
  int v846; // [sp+74h] [bp-178h]
  int v847; // [sp+74h] [bp-178h]
  int v848; // [sp+74h] [bp-178h]
  char *src; // [sp+7Ch] [bp-170h]
  unsigned int v850; // [sp+80h] [bp-16Ch]
  unsigned int v851; // [sp+84h] [bp-168h]
  int v852; // [sp+84h] [bp-168h]
  int v853; // [sp+88h] [bp-164h]
  int v854; // [sp+88h] [bp-164h]
  int v855; // [sp+88h] [bp-164h]
  unsigned int v856; // [sp+88h] [bp-164h]
  unsigned int v857; // [sp+8Ch] [bp-160h]
  unsigned int v858; // [sp+90h] [bp-15Ch]
  unsigned int v859; // [sp+94h] [bp-158h]
  unsigned int v860; // [sp+98h] [bp-154h]
  unsigned int v861; // [sp+9Ch] [bp-150h]
  unsigned int v862; // [sp+A0h] [bp-14Ch]
  unsigned int v863; // [sp+A4h] [bp-148h]
  unsigned int v864; // [sp+A8h] [bp-144h]
  unsigned int v865; // [sp+ACh] [bp-140h]
  unsigned int v866; // [sp+B0h] [bp-13Ch]
  unsigned int v867; // [sp+B4h] [bp-138h]
  size_t v868; // [sp+B8h] [bp-134h]
  unsigned int v869; // [sp+BCh] [bp-130h]
  int v870; // [sp+C0h] [bp-12Ch]
  int v871; // [sp+C0h] [bp-12Ch]
  unsigned int v872; // [sp+C0h] [bp-12Ch]
  int v873; // [sp+C4h] [bp-128h]
  int v874; // [sp+C4h] [bp-128h]
  int v875; // [sp+C4h] [bp-128h]
  int v876; // [sp+C4h] [bp-128h]
  int v877; // [sp+C8h] [bp-124h]
  int v878; // [sp+C8h] [bp-124h]
  int v879; // [sp+C8h] [bp-124h]
  int v880; // [sp+C8h] [bp-124h]
  int v881; // [sp+C8h] [bp-124h]
  int v882; // [sp+C8h] [bp-124h]
  int v883; // [sp+C8h] [bp-124h]
  int v884; // [sp+C8h] [bp-124h]
  int v885; // [sp+C8h] [bp-124h]
  int v886; // [sp+C8h] [bp-124h]
  int v887; // [sp+C8h] [bp-124h]
  int v888; // [sp+C8h] [bp-124h]
  int v889; // [sp+C8h] [bp-124h]
  int v890; // [sp+C8h] [bp-124h]
  int v891; // [sp+C8h] [bp-124h]
  int v892; // [sp+C8h] [bp-124h]
  int v893; // [sp+CCh] [bp-120h]
  int v894; // [sp+CCh] [bp-120h]
  int v895; // [sp+CCh] [bp-120h]
  int v896; // [sp+CCh] [bp-120h]
  int v897; // [sp+CCh] [bp-120h]
  int v898; // [sp+CCh] [bp-120h]
  int v899; // [sp+CCh] [bp-120h]
  int v900; // [sp+CCh] [bp-120h]
  int v901; // [sp+CCh] [bp-120h]
  int v902; // [sp+CCh] [bp-120h]
  int v903; // [sp+CCh] [bp-120h]
  int v904; // [sp+CCh] [bp-120h]
  int v905; // [sp+CCh] [bp-120h]
  int v906; // [sp+CCh] [bp-120h]
  int v907; // [sp+CCh] [bp-120h]
  int v908; // [sp+CCh] [bp-120h]
  int v909; // [sp+D0h] [bp-11Ch]
  int v910; // [sp+D0h] [bp-11Ch]
  int v911; // [sp+D0h] [bp-11Ch]
  int v912; // [sp+D0h] [bp-11Ch]
  int v913; // [sp+D0h] [bp-11Ch]
  int v914; // [sp+D0h] [bp-11Ch]
  int v915; // [sp+D0h] [bp-11Ch]
  int v916; // [sp+D0h] [bp-11Ch]
  int v917; // [sp+D0h] [bp-11Ch]
  int v918; // [sp+D0h] [bp-11Ch]
  int v919; // [sp+D0h] [bp-11Ch]
  int v920; // [sp+D0h] [bp-11Ch]
  int v921; // [sp+D0h] [bp-11Ch]
  int v922; // [sp+D0h] [bp-11Ch]
  int v923; // [sp+D0h] [bp-11Ch]
  int v924; // [sp+D0h] [bp-11Ch]
  int v925; // [sp+D0h] [bp-11Ch]
  int v926; // [sp+D0h] [bp-11Ch]
  int v927; // [sp+D0h] [bp-11Ch]
  int v928; // [sp+D0h] [bp-11Ch]
  int v929; // [sp+D0h] [bp-11Ch]
  int v930; // [sp+D0h] [bp-11Ch]
  int v931; // [sp+D4h] [bp-118h]
  int v932; // [sp+D4h] [bp-118h]
  int v933; // [sp+D4h] [bp-118h]
  int v934; // [sp+D4h] [bp-118h]
  int v935; // [sp+D4h] [bp-118h]
  int v936; // [sp+D4h] [bp-118h]
  int v937; // [sp+D4h] [bp-118h]
  int v938; // [sp+D4h] [bp-118h]
  int v939; // [sp+D4h] [bp-118h]
  int v940; // [sp+D4h] [bp-118h]
  int v941; // [sp+D4h] [bp-118h]
  int v942; // [sp+D4h] [bp-118h]
  int v943; // [sp+D4h] [bp-118h]
  int v944; // [sp+D4h] [bp-118h]
  int v945; // [sp+D8h] [bp-114h]
  int v946; // [sp+D8h] [bp-114h]
  int v947; // [sp+D8h] [bp-114h]
  int v948; // [sp+D8h] [bp-114h]
  int v949; // [sp+D8h] [bp-114h]
  int v950; // [sp+D8h] [bp-114h]
  int v951; // [sp+D8h] [bp-114h]
  int v952; // [sp+D8h] [bp-114h]
  int v953; // [sp+D8h] [bp-114h]
  int v954; // [sp+D8h] [bp-114h]
  int v955; // [sp+DCh] [bp-110h]
  int v956; // [sp+DCh] [bp-110h]
  int v957; // [sp+DCh] [bp-110h]
  int v958; // [sp+DCh] [bp-110h]
  int v959; // [sp+DCh] [bp-110h]
  int v960; // [sp+DCh] [bp-110h]
  int v961; // [sp+DCh] [bp-110h]
  unsigned int v962; // [sp+E0h] [bp-10Ch]
  unsigned int v963; // [sp+E4h] [bp-108h]
  unsigned int v964; // [sp+E8h] [bp-104h]
  int v965; // [sp+ECh] [bp-100h]
  unsigned int v966; // [sp+F0h] [bp-FCh]
  int v967; // [sp+F8h] [bp-F4h]
  int v968; // [sp+FCh] [bp-F0h]
  int v969; // [sp+100h] [bp-ECh]
  unsigned int v970; // [sp+104h] [bp-E8h]
  int v971; // [sp+10Ch] [bp-E0h]
  int v972; // [sp+110h] [bp-DCh]
  unsigned int v973; // [sp+114h] [bp-D8h]
  int v974; // [sp+118h] [bp-D4h]
  unsigned int v975; // [sp+11Ch] [bp-D0h]
  int v976; // [sp+120h] [bp-CCh]
  unsigned int v977; // [sp+128h] [bp-C4h]
  int v978; // [sp+12Ch] [bp-C0h]
  int v979; // [sp+130h] [bp-BCh]
  int v980; // [sp+134h] [bp-B8h]
  int v981; // [sp+140h] [bp-ACh]
  int v982; // [sp+144h] [bp-A8h]
  unsigned int v983; // [sp+148h] [bp-A4h]
  int v984; // [sp+14Ch] [bp-A0h]
  int v985; // [sp+150h] [bp-9Ch]
  int v986; // [sp+154h] [bp-98h]
  unsigned int v987; // [sp+158h] [bp-94h]
  int v988; // [sp+15Ch] [bp-90h]
  int v989; // [sp+160h] [bp-8Ch]
  int v990; // [sp+164h] [bp-88h]
  unsigned int v991; // [sp+16Ch] [bp-80h]
  unsigned int v992; // [sp+170h] [bp-7Ch]
  int v993; // [sp+174h] [bp-78h]
  int v994; // [sp+178h] [bp-74h]
  int v995; // [sp+17Ch] [bp-70h]
  int v996; // [sp+180h] [bp-6Ch]
  int v997; // [sp+180h] [bp-6Ch]
  int v998; // [sp+184h] [bp-68h]
  unsigned int v999; // [sp+184h] [bp-68h]
  unsigned int v1000; // [sp+188h] [bp-64h]
  int v1001; // [sp+18Ch] [bp-60h]
  int v1002; // [sp+190h] [bp-5Ch]
  unsigned int v1003; // [sp+194h] [bp-58h]
  int v1004; // [sp+198h] [bp-54h]
  int v1005; // [sp+19Ch] [bp-50h]
  unsigned int v1006; // [sp+1A0h] [bp-4Ch]
  int v1007; // [sp+1A4h] [bp-48h]
  unsigned int v1008; // [sp+1ACh] [bp-40h]
  int v1009; // [sp+1B0h] [bp-3Ch]
  unsigned int v1010; // [sp+1C4h] [bp-28h]
  unsigned int v1011; // [sp+1C8h] [bp-24h]
  unsigned int v1012; // [sp+1D0h] [bp-1Ch]
  int v1013; // [sp+1D4h] [bp-18h]
  int v1014; // [sp+1D8h] [bp-14h]
  int v1015; // [sp+1DCh] [bp-10h]
  int v1016; // [sp+1E0h] [bp-Ch]

  v3 = a1[16];
  v4 = 64 - v3;
  n = a3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    result = (unsigned int)memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v3 + n;
  }
  else
  {
    v5 = a1[25];
    result = a1[27];
    v862 = a1[17];
    v991 = a1[25];
    v992 = a1[27];
    v861 = a1[18];
    v867 = a1[19];
    v866 = a1[20];
    v860 = a1[21];
    v859 = a1[22];
    v858 = a1[23];
    v857 = a1[24];
    v864 = a1[26];
    v865 = a1[28];
    v863 = a1[29];
    v868 = a1[30];
    if ( a3 )
    {
      v1005 = v5 ^ 0x243F6A88;
      v1006 = result ^ 0x13198A2E;
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v7 = (char *)a1 + v3;
        v3 += v4;
        result = (unsigned int)memcpy(v7, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 64 )
        {
          v8 = __CFADD__(v863, 512);
          v863 += 512;
          if ( v8 )
            ++v868;
          v9 = bswap32(a1[6]);
          v1000 = v9 ^ 0xEC4E6C89;
          v10 = v866 + v857 + (v9 ^ 0xEC4E6C89);
          v11 = bswap32(a1[4]);
          v1007 = v11 ^ 0x299F31D0;
          v12 = __ROR4__(v868 ^ 0xEC4E6C89 ^ v10, 16);
          v814 = bswap32(a1[2]);
          v968 = v814 ^ 0x3707344;
          v13 = v867 + v858 + (v11 ^ 0x299F31D0);
          v851 = v9;
          v805 = v11;
          v797 = bswap32(*a1);
          v14 = __ROR4__(v868 ^ 0x82EFA98 ^ v13, 16);
          v15 = v862 + v860 + (v797 ^ 0x85A308D3);
          v16 = __ROR4__(v863 ^ 0xA4093822 ^ v15, 16);
          v17 = __ROR4__(v863 ^ 0x299F31D0 ^ (v861 + v859 + (v814 ^ 0x3707344)), 16);
          v18 = (v864 ^ 0x85A308D3) + v17;
          v809 = (v865 ^ 0x3707344) + v12;
          v833 = bswap32(a1[7]);
          v19 = __ROR4__(v809 ^ v857, 12);
          v20 = v1005 + v16;
          v21 = v1006 + v14;
          v1001 = v833 ^ 0x82EFA98;
          v22 = __ROR4__(v18 ^ v859, 12);
          v803 = bswap32(a1[5]);
          v792 = bswap32(a1[3]);
          v794 = bswap32(a1[1]);
          v23 = (v833 ^ 0x82EFA98) + v10;
          v24 = __ROR4__((v1005 + v16) ^ v860, 12);
          v729 = __ROR4__((v1006 + v14) ^ v858, 12);
          v775 = v19 + v23;
          v970 = v803 ^ 0xA4093822;
          v969 = v792 ^ 0x13198A2E;
          v967 = v794 ^ 0x243F6A88;
          v787 = __ROR4__(v12 ^ (v19 + v23), 8);
          v798 = v22 + (v792 ^ 0x13198A2E) + v861 + v859 + (v814 ^ 0x3707344);
          v25 = v24 + (v794 ^ 0x243F6A88) + v15;
          v26 = __ROR4__(v17 ^ v798, 8);
          v27 = v729 + (v803 ^ 0xA4093822) + v13;
          v28 = v18 + v26;
          v29 = __ROR4__(v16 ^ v25, 8);
          v30 = __ROR4__(v14 ^ v27, 8);
          v31 = v20 + v29;
          v32 = v21 + v30;
          v33 = __ROR4__(v24 ^ v31, 7);
          v34 = __ROR4__(v22 ^ v28, 7);
          v820 = v809 + v787;
          v35 = __ROR4__(v19 ^ (v809 + v787), 7);
          v850 = bswap32(a1[12]);
          v962 = v850 ^ 0xC97C50DD;
          v36 = v35 + (v850 ^ 0xC97C50DD) + v27;
          v829 = bswap32(a1[14]);
          v37 = __ROR4__(v729 ^ v32, 7);
          v832 = bswap32(a1[8]);
          v810 = bswap32(a1[10]);
          v869 = v829 ^ 0xB5470917;
          v972 = v810 ^ 0x34E90C6C;
          v877 = __ROR4__(v26 ^ v36, 16);
          v38 = v34 + (v832 ^ 0x38D01377) + v25;
          v39 = v37 + (v810 ^ 0x34E90C6C) + v798;
          v909 = v33 + (v829 ^ 0xB5470917) + v775;
          v40 = __ROR4__(v30 ^ v909, 16);
          v873 = __ROR4__(v29 ^ v39, 16);
          v828 = bswap32(a1[13]);
          v41 = __ROR4__(v787 ^ v38, 16);
          v931 = v28 + v40;
          v870 = v32 + v41;
          v42 = __ROR4__(v35 ^ (v31 + v877), 12);
          v963 = v828 ^ 0xC0AC29B7;
          v776 = bswap32(a1[15]);
          v43 = __ROR4__(v33 ^ (v28 + v40), 12);
          v44 = __ROR4__(v34 ^ (v32 + v41), 12);
          v799 = bswap32(a1[9]);
          v788 = bswap32(a1[11]);
          v45 = __ROR4__(v37 ^ (v820 + v873), 12);
          v46 = v42 + (v828 ^ 0xC0AC29B7) + v36;
          v974 = v776 ^ 0x3F84D5B5;
          v971 = v799 ^ 0x452821E6;
          v47 = __ROR4__(v877 ^ v46, 8);
          v973 = v788 ^ 0xBE5466CF;
          v48 = v43 + (v776 ^ 0x3F84D5B5) + v909;
          v49 = __ROR4__(v40 ^ v48, 8);
          v50 = v44 + (v799 ^ 0x452821E6) + v38;
          v51 = v45 + (v788 ^ 0xBE5466CF) + v39;
          v52 = __ROR4__(v41 ^ v50, 8);
          v53 = __ROR4__(v873 ^ v51, 8);
          v910 = v31 + v877 + v47;
          v54 = v820 + v873 + v53;
          v55 = __ROR4__(v42 ^ v910, 7);
          v874 = v931 + v49;
          v56 = v55 + (v828 ^ 0x82EFA98) + v48;
          v57 = v870 + v52;
          v58 = __ROR4__(v52 ^ v56, 16);
          v878 = __ROR4__(v43 ^ (v931 + v49), 7);
          v59 = __ROR4__(v44 ^ v57, 7);
          v60 = __ROR4__(v45 ^ v54, 7);
          v975 = v799 ^ 0xB5470917;
          v1002 = v805 ^ 0x452821E6;
          v61 = v59 + (v805 ^ 0x452821E6) + v51;
          v964 = v829 ^ 0xBE5466CF;
          v932 = v878 + (v829 ^ 0xBE5466CF) + v50;
          v62 = v54 + v58;
          v63 = __ROR4__(v47 ^ v61, 16);
          v64 = __ROR4__(v55 ^ v62, 12);
          v65 = v60 + (v799 ^ 0xB5470917) + v46;
          v1008 = v851 ^ 0xC97C50DD;
          v66 = v874;
          v875 = __ROR4__(v53 ^ v932, 16);
          v893 = v64 + (v851 ^ 0xC97C50DD) + v56;
          v871 = v66 + v63;
          v67 = __ROR4__(v49 ^ v65, 16);
          v68 = v57 + v67;
          v69 = __ROR4__(v60 ^ v68, 12);
          v911 = v910 + v875;
          v70 = __ROR4__(v59 ^ (v66 + v63), 12);
          v976 = v776 ^ 0x38D01377;
          v71 = __ROR4__(v878 ^ v911, 12);
          v966 = v832 ^ 0xA4093822;
          v72 = __ROR4__(v58 ^ v893, 8);
          v73 = v69 + (v776 ^ 0x38D01377) + v65;
          v74 = __ROR4__(v67 ^ v73, 8);
          v965 = v810 ^ 0x3F84D5B5;
          v75 = v70 + (v832 ^ 0xA4093822) + v61;
          v76 = (v810 ^ 0x3F84D5B5) + v932;
          v933 = v62 + v72;
          v77 = __ROR4__(v63 ^ v75, 8);
          v879 = v68 + v74;
          v78 = v71 + v76;
          v79 = __ROR4__(v875 ^ v78, 8);
          v80 = __ROR4__(v64 ^ (v62 + v72), 7);
          v81 = v871 + v77;
          v977 = v788 ^ 0xEC4E6C89;
          v82 = __ROR4__(v70 ^ (v871 + v77), 7);
          v876 = __ROR4__(v71 ^ (v911 + v79), 7);
          v83 = __ROR4__(v69 ^ (v68 + v74), 7);
          v84 = v80 + (v788 ^ 0xEC4E6C89) + v73;
          v978 = v803 ^ 0x3707344;
          v85 = __ROR4__(v77 ^ v84, 16);
          v86 = v911 + v79 + v85;
          v872 = v794 ^ 0xC0AC29B7;
          v912 = __ROR4__(v80 ^ v86, 12);
          v87 = v82 + (v794 ^ 0xC0AC29B7) + v78;
          v88 = v83 + (v797 ^ 0x13198A2E) + v75;
          v89 = v876 + (v803 ^ 0x3707344) + v893;
          v894 = __ROR4__(v72 ^ v87, 16);
          v90 = __ROR4__(v79 ^ v88, 16);
          v91 = __ROR4__(v74 ^ v89, 16);
          v92 = v81 + v91;
          v93 = v879 + v894;
          v94 = __ROR4__(v876 ^ v92, 12);
          v95 = __ROR4__(v82 ^ (v879 + v894), 12);
          v880 = v933 + v90;
          v934 = v93;
          v96 = __ROR4__(v83 ^ v880, 12);
          v97 = v912 + (v833 ^ 0x34E90C6C) + v84;
          v98 = __ROR4__(v85 ^ v97, 8);
          v979 = v792 ^ 0x299F31D0;
          v945 = v86 + v98;
          v1009 = v814 ^ 0x243F6A88;
          v99 = v96 + (v814 ^ 0x243F6A88) + v88;
          v100 = v94 + (v792 ^ 0x299F31D0) + v89;
          v101 = __ROR4__(v90 ^ v99, 8);
          v102 = __ROR4__(v91 ^ v100, 8);
          v103 = v912;
          v104 = v95 + (v850 ^ 0x85A308D3) + v87;
          v913 = v92 + v102;
          v105 = __ROR4__(v894 ^ v104, 8);
          v106 = __ROR4__(v103 ^ (v86 + v98), 7);
          v983 = v776 ^ 0xC97C50DD;
          v107 = v934 + v105;
          v108 = __ROR4__(v95 ^ (v934 + v105), 7);
          v109 = v880 + v101;
          v881 = __ROR4__(v96 ^ (v880 + v101), 7);
          v110 = __ROR4__(v94 ^ v913, 7);
          v111 = v106 + (v776 ^ 0xC97C50DD) + v100;
          v981 = v803 ^ 0x13198A2E;
          v112 = __ROR4__(v105 ^ v111, 16);
          v113 = v109 + v112;
          v114 = __ROR4__(v106 ^ v113, 12);
          v980 = v788 ^ 0x452821E6;
          v935 = v110 + (v788 ^ 0x452821E6) + v104;
          v115 = v881 + (v803 ^ 0x13198A2E) + v97;
          v116 = v108 + (v850 ^ 0x243F6A88) + v99;
          v117 = __ROR4__(v98 ^ v116, 16);
          v895 = __ROR4__(v102 ^ v115, 16);
          v118 = v114 + (v828 ^ 0xB5470917) + v111;
          v119 = v107 + v895;
          v120 = v913;
          v914 = __ROR4__(v101 ^ v935, 16);
          v121 = __ROR4__(v112 ^ v118, 8);
          v122 = v113 + v121;
          v955 = v120 + v117;
          v123 = __ROR4__(v114 ^ v122, 7);
          v124 = __ROR4__(v108 ^ (v120 + v117), 12);
          v125 = v110 ^ (v945 + v914);
          v946 = v945 + v914;
          v126 = __ROR4__(v881 ^ v119, 12);
          v982 = v814 ^ 0x299F31D0;
          v127 = v124 + (v797 ^ 0xC0AC29B7) + v116;
          v128 = __ROR4__(v125, 12);
          v129 = __ROR4__(v117 ^ v127, 8);
          v130 = v128 + (v832 ^ 0x34E90C6C) + v935;
          v131 = v126 + (v814 ^ 0x299F31D0) + v115;
          v132 = __ROR4__(v914 ^ v130, 8);
          v133 = __ROR4__(v895 ^ v131, 8);
          v134 = v119 + v133;
          v896 = v955 + v129;
          v135 = __ROR4__(v126 ^ v134, 7);
          v136 = __ROR4__(v128 ^ (v946 + v132), 7);
          v137 = __ROR4__(v124 ^ (v955 + v129), 7);
          v936 = v123 + (v833 ^ 0x85A308D3) + v131;
          v1011 = v799 ^ 0xA4093822;
          v138 = v136 + (v799 ^ 0xA4093822) + v118;
          v984 = v792 ^ 0x82EFA98;
          v139 = v135 + (v792 ^ 0x82EFA98) + v127;
          v140 = __ROR4__(v133 ^ v138, 16);
          v141 = __ROR4__(v129 ^ v936, 16);
          v947 = v946 + v132 + v141;
          v142 = v137 + (v810 ^ 0x3F84D5B5) + v130;
          v882 = __ROR4__(v132 ^ v139, 16);
          v143 = __ROR4__(v123 ^ v947, 12);
          v1010 = v794 ^ 0xEC4E6C89;
          v144 = __ROR4__(v121 ^ v142, 16);
          v915 = v896 + v140;
          v145 = v134 + v144;
          v146 = __ROR4__(v137 ^ v145, 12);
          v147 = __ROR4__(v135 ^ (v122 + v882), 12);
          v148 = v896 + v140;
          v897 = v143 + (v794 ^ 0xEC4E6C89) + v936;
          v149 = __ROR4__(v136 ^ v148, 12);
          v986 = v805 ^ 0x38D01377;
          v985 = v851 ^ 0x3707344;
          v937 = v146 + (v829 ^ 0xBE5466CF) + v142;
          v150 = __ROR4__(v141 ^ v897, 8);
          v151 = __ROR4__(v144 ^ v937, 8);
          v152 = v149 + (v805 ^ 0x38D01377) + v138;
          v153 = v147 + (v851 ^ 0x3707344) + v139;
          v154 = v145 + v151;
          v155 = __ROR4__(v140 ^ v152, 8);
          v948 = v947 + v150;
          v156 = __ROR4__(v882 ^ v153, 8);
          v157 = __ROR4__(v143 ^ v948, 7);
          v916 = v915 + v155;
          v158 = __ROR4__(v146 ^ v154, 7);
          v1013 = v788 ^ 0x3F84D5B5;
          v159 = v157 + (v788 ^ 0x3F84D5B5) + v152;
          v160 = v122 + v882 + v156;
          v161 = __ROR4__(v147 ^ v160, 7);
          v162 = __ROR4__(v149 ^ v916, 7);
          v987 = v792 ^ 0x85A308D3;
          v163 = __ROR4__(v151 ^ v159, 16);
          v164 = v161 + (v828 ^ 0xC0AC29B7) + v897;
          v165 = __ROR4__(v155 ^ v164, 16);
          v166 = v158 + (v792 ^ 0x85A308D3) + v153;
          v167 = __ROR4__(v150 ^ v166, 16);
          v938 = v162 + (v833 ^ 0x38D01377) + v937;
          v956 = v160 + v163;
          v168 = v154 + v165;
          v169 = __ROR4__(v156 ^ v938, 16);
          v170 = __ROR4__(v157 ^ v956, 12);
          v171 = __ROR4__(v161 ^ (v154 + v165), 12);
          v1014 = v829 ^ 0x34E90C6C;
          v172 = v170 + (v829 ^ 0x34E90C6C) + v159;
          v173 = __ROR4__(v163 ^ v172, 8);
          v898 = v916 + v167;
          v883 = v948 + v169;
          v174 = __ROR4__(v158 ^ (v916 + v167), 12);
          v175 = __ROR4__(v162 ^ (v948 + v169), 12);
          v988 = v794 ^ 0x3707344;
          v1012 = v799 ^ 0xEC4E6C89;
          v176 = v171 + (v850 ^ 0xC97C50DD) + v164;
          v177 = v174 + (v794 ^ 0x3707344) + v166;
          v178 = __ROR4__(v167 ^ v177, 8);
          v179 = __ROR4__(v165 ^ v176, 8);
          v180 = v175 + (v799 ^ 0xEC4E6C89) + v938;
          v181 = v168 + v179;
          v182 = __ROR4__(v169 ^ v180, 8);
          v949 = v956 + v173;
          v183 = __ROR4__(v171 ^ v181, 7);
          v184 = __ROR4__(v170 ^ (v956 + v173), 7);
          v1016 = v805 ^ 0x243F6A88;
          v185 = v184 + (v805 ^ 0x243F6A88) + v176;
          v899 = v898 + v178;
          v186 = __ROR4__(v178 ^ v185, 16);
          v884 = v883 + v182;
          v917 = __ROR4__(v174 ^ v899, 7);
          v187 = __ROR4__(v175 ^ v884, 7);
          v990 = v776 ^ 0x452821E6;
          v1015 = v814 ^ 0x82EFA98;
          v1003 = v803 ^ 0xBE5466CF;
          v188 = v183 + (v803 ^ 0xBE5466CF) + v177;
          v189 = v917 + (v814 ^ 0x82EFA98) + v180;
          v190 = v187 + (v776 ^ 0x452821E6) + v172;
          v939 = __ROR4__(v182 ^ v188, 16);
          v191 = __ROR4__(v173 ^ v189, 16);
          v192 = v884 + v186;
          v193 = v899;
          v194 = __ROR4__(v184 ^ (v884 + v186), 12);
          v885 = v181 + v191;
          v900 = __ROR4__(v179 ^ v190, 16);
          v195 = v194 + (v797 ^ 0xA4093822) + v185;
          v196 = v193 + v900;
          v197 = __ROR4__(v187 ^ v196, 12);
          v993 = v196;
          v198 = v949 + v939;
          v199 = v183 ^ (v949 + v939);
          v200 = __ROR4__(v186 ^ v195, 8);
          v201 = __ROR4__(v917 ^ v885, 12);
          v950 = v195;
          v989 = v851 ^ 0x13198A2E;
          v202 = __ROR4__(v199, 12);
          v1004 = v810 ^ 0x299F31D0;
          v203 = v202 + (v810 ^ 0x299F31D0) + v188;
          v204 = __ROR4__(v939 ^ v203, 8);
          v205 = v197 + (v832 ^ 0xB5470917) + v190;
          v957 = v192 + v200;
          v206 = __ROR4__(v900 ^ v205, 8);
          v207 = v201 + (v851 ^ 0x13198A2E) + v189;
          v208 = __ROR4__(v194 ^ (v192 + v200), 7);
          v209 = __ROR4__(v191 ^ v207, 8);
          v918 = v993 + v206;
          v210 = v198 + v204;
          v211 = __ROR4__(v202 ^ v210, 7);
          v940 = v208 + (v810 ^ 0xB5470917) + v205;
          v886 = v885 + v209;
          v212 = __ROR4__(v197 ^ (v993 + v206), 7);
          v213 = v212 + (v799 ^ 0x243F6A88) + v207;
          v214 = __ROR4__(v201 ^ v886, 7);
          v215 = v211 + (v814 ^ 0xA4093822) + v950;
          v216 = __ROR4__(v204 ^ v213, 16);
          v217 = v214 + (v803 ^ 0xEC4E6C89) + v203;
          v218 = __ROR4__(v209 ^ v940, 16);
          v219 = __ROR4__(v200 ^ v217, 16);
          v994 = v210 + v218;
          v220 = __ROR4__(v208 ^ (v210 + v218), 12);
          v221 = __ROR4__(v206 ^ v215, 16);
          v919 = v918 + v219;
          v222 = v957;
          v958 = v886 + v221;
          v223 = __ROR4__(v211 ^ (v886 + v221), 12);
          v224 = v222 + v216;
          v225 = v220 + (v776 ^ 0xBE5466CF) + v940;
          v226 = __ROR4__(v212 ^ v224, 12);
          v227 = __ROR4__(v214 ^ v919, 12);
          v228 = v223 + (v805 ^ 0x13198A2E) + v215;
          v229 = __ROR4__(v221 ^ v228, 8);
          v230 = v226 + (v797 ^ 0x38D01377) + v213;
          v995 = __ROR4__(v218 ^ v225, 8);
          v231 = v227 + (v833 ^ 0x299F31D0) + v217;
          v232 = __ROR4__(v220 ^ (v994 + v995), 7);
          v233 = __ROR4__(v216 ^ v230, 8);
          v234 = __ROR4__(v219 ^ v231, 8);
          v235 = v224 + v233;
          v236 = __ROR4__(v223 ^ (v958 + v229), 7);
          v237 = __ROR4__(v226 ^ v235, 7);
          v238 = v232 + (v851 ^ 0x452821E6) + v228;
          v920 = v919 + v234;
          v239 = __ROR4__(v234 ^ v238, 16);
          v951 = v958 + v229;
          v240 = __ROR4__(v227 ^ v920, 7);
          v241 = v240 + (v829 ^ 0x85A308D3) + v230;
          v242 = v236 + (v788 ^ 0xC0AC29B7) + v231;
          v243 = __ROR4__(v995 ^ v241, 16);
          v244 = v237 + (v792 ^ 0xC97C50DD) + v225;
          v245 = __ROR4__(v233 ^ v242, 16);
          v998 = v235 + v239;
          v246 = __ROR4__(v229 ^ v244, 16);
          v247 = __ROR4__(v232 ^ (v235 + v239), 12);
          v959 = v920 + v246;
          v941 = v994 + v995 + v245;
          v921 = v951 + v243;
          v248 = v247 + (v832 ^ 0x82EFA98) + v238;
          v249 = __ROR4__(v237 ^ v959, 12);
          v250 = __ROR4__(v240 ^ (v951 + v243), 12);
          v251 = __ROR4__(v236 ^ v941, 12);
          v252 = v249 + (v828 ^ 0x3707344) + v244;
          v253 = v250 + (v794 ^ 0x3F84D5B5) + v241;
          v254 = __ROR4__(v239 ^ v248, 8);
          v255 = v251 + (v850 ^ 0x34E90C6C) + v242;
          v256 = __ROR4__(v246 ^ v252, 8);
          v257 = __ROR4__(v243 ^ v253, 8);
          v952 = __ROR4__(v245 ^ v255, 8);
          v996 = v998 + v254;
          v258 = __ROR4__(v247 ^ (v998 + v254), 7);
          v960 = v959 + v256;
          v259 = v258 + (v832 ^ 0x3707344) + v252;
          v901 = v921 + v257;
          v260 = v941 + v952;
          v261 = __ROR4__(v251 ^ (v941 + v952), 7);
          v262 = __ROR4__(v250 ^ (v921 + v257), 7);
          v942 = __ROR4__(v249 ^ v960, 7);
          v263 = v262 + (v851 ^ 0xBE5466CF) + v255;
          v264 = v261 + (v797 ^ 0x34E90C6C) + v248;
          v265 = __ROR4__(v254 ^ v263, 16);
          v999 = v814 ^ 0xC0AC29B7;
          v266 = v942 + (v814 ^ 0xC0AC29B7) + v253;
          v267 = __ROR4__(v257 ^ v259, 16);
          v268 = __ROR4__(v256 ^ v264, 16);
          v269 = __ROR4__(v952 ^ v266, 16);
          v270 = v260 + v267;
          v922 = __ROR4__(v258 ^ v270, 12);
          v953 = v960 + v265;
          v271 = __ROR4__(v262 ^ (v960 + v265), 12);
          v902 = v901 + v268;
          v841 = v996 + v269;
          v272 = __ROR4__(v261 ^ v902, 12);
          v273 = __ROR4__(v942 ^ (v996 + v269), 12);
          v943 = v922 + (v792 ^ 0x452821E6) + v259;
          v274 = v271 + (v810 ^ 0x82EFA98) + v263;
          v275 = __ROR4__(v265 ^ v274, 8);
          v276 = v272 + (v788 ^ 0x243F6A88) + v264;
          v277 = __ROR4__(v268 ^ v276, 8);
          v961 = __ROR4__(v267 ^ v943, 8);
          v278 = v270 + v961;
          v279 = v922;
          v923 = v278;
          v997 = v850 ^ 0x13198A2E;
          v280 = v273 + (v850 ^ 0x13198A2E) + v266;
          v281 = __ROR4__(v279 ^ v278, 7);
          v282 = __ROR4__(v269 ^ v280, 8);
          v283 = v953 + v275;
          v284 = __ROR4__(v271 ^ (v953 + v275), 7);
          v285 = v841;
          v842 = v902 + v277;
          v286 = __ROR4__(v272 ^ (v902 + v277), 7);
          v287 = v281 + (v776 ^ 0x3F84D5B5) + v276;
          v834 = __ROR4__(v273 ^ (v285 + v282), 7);
          v288 = __ROR4__(v275 ^ v287, 16);
          v289 = v285 + v282 + v288;
          v290 = v286 + (v833 ^ 0x299F31D0) + v274;
          v291 = __ROR4__(v281 ^ v289, 12);
          v292 = v284 + (v805 ^ 0xC97C50DD) + v280;
          v293 = v834 + (v794 ^ 0x38D01377) + v943;
          v903 = __ROR4__(v282 ^ v290, 16);
          v294 = __ROR4__(v277 ^ v293, 16);
          v295 = __ROR4__(v961 ^ v292, 16);
          v296 = __ROR4__(v286 ^ (v923 + v903), 12);
          v843 = v842 + v295;
          v924 = v923 + v903;
          v954 = v283 + v294;
          v887 = v291 + (v829 ^ 0xB5470917) + v287;
          v297 = __ROR4__(v834 ^ (v283 + v294), 12);
          v298 = __ROR4__(v284 ^ v843, 12);
          v299 = v297 + (v799 ^ 0x85A308D3) + v293;
          v300 = __ROR4__(v294 ^ v299, 8);
          v301 = v298 + (v828 ^ 0xA4093822) + v292;
          v302 = v296 + (v803 ^ 0xEC4E6C89) + v290;
          v303 = __ROR4__(v295 ^ v301, 8);
          v304 = __ROR4__(v288 ^ v887, 8);
          v944 = v289 + v304;
          v305 = __ROR4__(v903 ^ v302, 8);
          v904 = v304;
          v306 = v924 + v305;
          v307 = __ROR4__(v291 ^ (v289 + v304), 7);
          v308 = v843;
          v844 = v954 + v300;
          v309 = __ROR4__(v297 ^ (v954 + v300), 7);
          v835 = __ROR4__(v296 ^ (v924 + v305), 7);
          v310 = v308 + v303;
          v311 = __ROR4__(v298 ^ v310, 7);
          v312 = v311 + (v794 ^ 0xB5470917) + v302;
          v313 = v309 + (v850 ^ 0x299F31D0) + v301;
          v314 = __ROR4__(v305 ^ v313, 16);
          v315 = (v805 ^ 0xBE5466CF) + v307 + v299;
          v316 = __ROR4__(v303 ^ v315, 16);
          v317 = v835 + (v829 ^ 0xC97C50DD) + v887;
          v318 = __ROR4__(v300 ^ v317, 16);
          v925 = v306 + v316;
          v319 = __ROR4__(v904 ^ v312, 16);
          v320 = __ROR4__(v307 ^ (v306 + v316), 12);
          v888 = v310 + v318;
          v321 = __ROR4__(v311 ^ (v844 + v319), 12);
          v905 = v844 + v319;
          v322 = __ROR4__(v835 ^ (v310 + v318), 12);
          v323 = v322 + (v828 ^ 0x3F84D5B5) + v317;
          v324 = v320 + (v810 ^ 0xA4093822) + v315;
          v325 = __ROR4__(v316 ^ v324, 8);
          v326 = __ROR4__(v318 ^ v323, 8);
          v327 = __ROR4__(v309 ^ (v944 + v314), 12);
          v328 = v321 + (v776 ^ 0x85A308D3) + v312;
          v329 = v327 + (v803 ^ 0xC0AC29B7) + v313;
          v330 = __ROR4__(v319 ^ v328, 8);
          v836 = __ROR4__(v314 ^ v329, 8);
          v926 = v925 + v325;
          v889 = v888 + v326;
          v331 = __ROR4__(v320 ^ v926, 7);
          v853 = v905 + v330;
          v332 = v944 + v314 + v836;
          v845 = __ROR4__(v322 ^ v889, 7);
          v333 = v321 ^ (v905 + v330);
          v334 = v327 ^ v332;
          v335 = __ROR4__(v333, 7);
          v336 = v331 + (v799 ^ 0x13198A2E) + v323;
          v337 = __ROR4__(v334, 7);
          v338 = __ROR4__(v330 ^ v336, 16);
          v339 = v845 + (v851 ^ 0x3707344) + v328;
          v340 = v332 + v338;
          v341 = v337 + (v832 ^ 0x34E90C6C) + v324;
          v342 = __ROR4__(v836 ^ v339, 16);
          v343 = __ROR4__(v326 ^ v341, 16);
          v344 = v926 + v342;
          v927 = v340;
          v906 = v344;
          v345 = v335 + (v797 ^ 0xEC4E6C89) + v329;
          v346 = __ROR4__(v325 ^ v345, 16);
          v347 = __ROR4__(v331 ^ v340, 12);
          v854 = v853 + v343;
          v837 = v889 + v346;
          v348 = v347 + (v814 ^ 0x38D01377) + v336;
          v349 = __ROR4__(v845 ^ v344, 12);
          v350 = __ROR4__(v338 ^ v348, 8);
          v351 = __ROR4__(v337 ^ v854, 12);
          v352 = __ROR4__(v335 ^ (v889 + v346), 12);
          v353 = v352 + (v833 ^ 0x243F6A88) + v345;
          v354 = v349 + (v792 ^ 0x82EFA98) + v339;
          v355 = __ROR4__(v346 ^ v353, 8);
          v356 = __ROR4__(v342 ^ v354, 8);
          v357 = v351 + (v788 ^ 0x452821E6) + v341;
          v358 = v347 ^ (v927 + v350);
          v928 = v927 + v350;
          v846 = __ROR4__(v343 ^ v357, 8);
          v359 = __ROR4__(v349 ^ (v906 + v356), 7);
          v360 = v854 + v846;
          v361 = __ROR4__(v358, 7);
          v362 = __ROR4__(v351 ^ (v854 + v846), 7);
          v363 = __ROR4__(v352 ^ (v837 + v355), 7);
          v364 = v359 + (v850 ^ 0x85A308D3) + v348;
          v365 = (v792 ^ 0x38D01377) + v361 + v357;
          v366 = __ROR4__(v355 ^ v365, 16);
          v367 = v363 + (v833 ^ 0x3F84D5B5) + v354;
          v890 = v906 + v356 + v366;
          v368 = __ROR4__(v350 ^ v367, 16);
          v369 = __ROR4__(v846 ^ v364, 16);
          v370 = v362 + (v828 ^ 0x34E90C6C) + v353;
          v847 = v366;
          v371 = v837 + v355 + v369;
          v372 = __ROR4__(v356 ^ v370, 16);
          v907 = v360 + v368;
          v373 = __ROR4__(v359 ^ v371, 12);
          v838 = v928 + v372;
          v374 = __ROR4__(v363 ^ (v360 + v368), 12);
          v855 = __ROR4__(v361 ^ v890, 12);
          v375 = __ROR4__(v362 ^ (v928 + v372), 12);
          v376 = v375 + (v788 ^ 0xC97C50DD) + v370;
          v377 = v373 + (v794 ^ 0xC0AC29B7) + v364;
          v378 = __ROR4__(v372 ^ v376, 8);
          v379 = v374 + (v829 ^ 0xEC4E6C89) + v367;
          v380 = v855 + (v799 ^ 0x3707344) + v365;
          v929 = __ROR4__(v369 ^ v377, 8);
          v381 = __ROR4__(v368 ^ v379, 8);
          v382 = __ROR4__(v847 ^ v380, 8);
          v891 = v890 + v382;
          v383 = __ROR4__(v374 ^ (v907 + v381), 7);
          v839 = v838 + v378;
          v384 = __ROR4__(v375 ^ v839, 7);
          v385 = __ROR4__(v373 ^ (v371 + v929), 7);
          v386 = __ROR4__(v855 ^ v891, 7);
          v856 = v814 ^ 0xBE5466CF;
          v387 = v383 + (v803 ^ 0x243F6A88) + v376;
          v388 = v386 + (v832 ^ 0x82EFA98) + v377;
          v389 = __ROR4__(v382 ^ v387, 16);
          v390 = v385 + (v776 ^ 0xA4093822) + v379;
          v815 = v384 + (v814 ^ 0xBE5466CF) + v380;
          v391 = __ROR4__(v378 ^ v390, 16);
          v392 = __ROR4__(v381 ^ v388, 16);
          v393 = __ROR4__(v929 ^ v815, 16);
          v394 = __ROR4__(v385 ^ (v891 + v391), 12);
          v746 = v839 + v392;
          v821 = v891 + v391;
          v395 = __ROR4__(v384 ^ (v907 + v381 + v393), 12);
          v908 = v907 + v381 + v393;
          v892 = v371 + v929 + v389;
          v396 = __ROR4__(v383 ^ v892, 12);
          v397 = __ROR4__(v386 ^ (v839 + v392), 12);
          v930 = v810 ^ 0x13198A2E;
          v398 = v394 + (v805 ^ 0xB5470917) + v390;
          v399 = v392;
          v400 = v810 ^ 0x13198A2E;
          v401 = v396 + (v797 ^ 0x299F31D0) + v387;
          v811 = v398;
          v402 = __ROR4__(v389 ^ v401, 8);
          v403 = v395 + v400 + v815;
          v816 = v397 + (v851 ^ 0x452821E6) + v388;
          v404 = __ROR4__(v399 ^ v816, 8);
          v405 = __ROR4__(v393 ^ v403, 8);
          v840 = __ROR4__(v391 ^ v398, 8);
          v406 = v821 + v840;
          v848 = v405;
          v407 = v394 ^ (v821 + v840);
          v822 = v746 + v404;
          v408 = v908 + v405;
          v409 = __ROR4__(v395 ^ (v908 + v405), 7);
          v826 = v892 + v402;
          v410 = __ROR4__(v396 ^ (v892 + v402), 7);
          v747 = __ROR4__(v397 ^ (v746 + v404), 7);
          v730 = __ROR4__(v407, 7);
          if ( blake256_rounds == 14 )
          {
            v825 = v829 ^ 0x38D01377;
            v411 = (v797 ^ 0x452821E6) + v747 + v403;
            v412 = (v851 ^ 0xB5470917) + v401;
            v413 = __ROR4__(v402 ^ v411, 16);
            v852 = v406 + v413;
            v414 = v730 + (v788 ^ 0x3707344) + v816;
            v415 = v410 + (v829 ^ 0x38D01377) + v811;
            v817 = v409 + v412;
            v416 = __ROR4__(v747 ^ (v406 + v413), 12);
            v830 = v414;
            v417 = __ROR4__(v840 ^ (v409 + v412), 16);
            v418 = __ROR4__(v404 ^ v415, 16);
            v419 = __ROR4__(v848 ^ v414, 16);
            v420 = v416 + (v832 ^ 0x243F6A88) + v411;
            v421 = v408 + v418;
            v422 = v409 ^ (v822 + v417);
            v823 = v822 + v417;
            v423 = __ROR4__(v410 ^ v421, 12);
            v424 = v826 + v419;
            v812 = __ROR4__(v413 ^ v420, 8);
            v425 = __ROR4__(v422, 12);
            v426 = v730 ^ (v826 + v419);
            v827 = v420;
            v731 = v799 ^ 0x3F84D5B5;
            v748 = __ROR4__(v426, 12);
            v427 = v423 + (v799 ^ 0x3F84D5B5) + v415;
            v428 = __ROR4__(v418 ^ v427, 8);
            v429 = v748 + (v792 ^ 0x34E90C6C) + v830;
            v430 = v425 + (v776 ^ 0x82EFA98) + v817;
            v831 = __ROR4__(v416 ^ (v852 + v812), 7);
            v431 = __ROR4__(v419 ^ v429, 8);
            v432 = __ROR4__(v423 ^ (v421 + v428), 7);
            v433 = v417 ^ v430;
            v434 = v831 + (v794 ^ 0xA4093822) + v429;
            v818 = v421 + v428;
            v435 = __ROR4__(v433, 8);
            v436 = __ROR4__(v428 ^ v434, 16);
            v437 = v424 + v431;
            v438 = __ROR4__(v748 ^ v437, 7);
            v439 = v438 + (v828 ^ 0xEC4E6C89) + v427;
            v440 = v425 ^ (v823 + v435);
            v824 = v823 + v435 + v436;
            v441 = __ROR4__(v440, 7);
            v442 = v997 + v430;
            v443 = v441 + v1004 + v827;
            v444 = __ROR4__(v831 ^ v824, 12);
            v445 = __ROR4__(v431 ^ v443, 16);
            v446 = __ROR4__(v435 ^ v439, 16);
            v806 = v444 + (v805 ^ 0x85A308D3) + v434;
            v447 = v852 + v812 + v446;
            v819 = v818 + v445;
            v448 = __ROR4__(v438 ^ v447, 12);
            v449 = __ROR4__(v441 ^ v819, 12);
            v800 = __ROR4__(v436 ^ v806, 8);
            v450 = __ROR4__(v812 ^ (v432 + v997 + v430), 16);
            v451 = v437 + v450;
            v452 = v448 + (v833 ^ 0xC97C50DD) + v439;
            v453 = v432 + v442;
            v813 = v824 + v800;
            v454 = __ROR4__(v444 ^ (v824 + v800), 7);
            v455 = v449 + v1003 + v443;
            v456 = __ROR4__(v432 ^ v451, 12);
            v457 = __ROR4__(v445 ^ v455, 8);
            v458 = v456 + v999 + v453;
            v459 = (v794 ^ 0x299F31D0) + v454 + v455;
            v460 = __ROR4__(v446 ^ v452, 8);
            v461 = __ROR4__(v450 ^ v458, 8);
            v462 = v447 + v460;
            v463 = v451 + v461;
            v749 = __ROR4__(v449 ^ (v819 + v457), 7);
            v464 = __ROR4__(v448 ^ v462, 7);
            v465 = __ROR4__(v461 ^ v459, 16);
            v466 = __ROR4__(v456 ^ v463, 7);
            v467 = v464 + v1001 + v806;
            v807 = v462 + v465;
            v468 = v466 + v966 + v452;
            v469 = __ROR4__(v454 ^ (v462 + v465), 12);
            v470 = v749 + v930 + v458;
            v471 = __ROR4__(v460 ^ v470, 16);
            v472 = __ROR4__(v800 ^ v468, 16);
            v801 = v819 + v457 + v472;
            v473 = v469 + (v803 ^ 0x85A308D3) + v459;
            v474 = v749;
            v475 = __ROR4__(v457 ^ v467, 16);
            v476 = __ROR4__(v466 ^ v801, 12);
            v477 = v463 + v475;
            v750 = __ROR4__(v465 ^ v473, 8);
            v478 = __ROR4__(v464 ^ v477, 12);
            v795 = v813 + v471;
            v479 = v478 + v1000 + v467;
            v480 = __ROR4__(v474 ^ (v813 + v471), 12);
            v481 = v480 + v856 + v470;
            v482 = __ROR4__(v471 ^ v481, 8);
            v808 = v807 + v750;
            v804 = v476 + v1002 + v468;
            v483 = v472 ^ v804;
            v484 = __ROR4__(v475 ^ v479, 8);
            v485 = __ROR4__(v469 ^ v808, 7);
            v486 = __ROR4__(v483, 8);
            v487 = v485 + (v792 ^ 0xC0AC29B7) + v479;
            v488 = v795;
            v796 = v477 + v484;
            v489 = v476 ^ (v801 + v486);
            v793 = v801 + v486;
            v490 = __ROR4__(v486 ^ v487, 16);
            v491 = v480 ^ (v488 + v482);
            v802 = v488 + v482 + v490;
            v492 = __ROR4__(v478 ^ (v477 + v484), 7);
            v493 = __ROR4__(v491, 7);
            v494 = __ROR4__(v489, 7);
            v495 = __ROR4__(v485 ^ v802, 12);
            v496 = v492 + v731 + v804;
            v497 = (v850 ^ 0x3707344) + v487;
            v498 = __ROR4__(v482 ^ v496, 16);
            v499 = v493 + (v828 ^ 0x243F6A88) + v473;
            v500 = v494 + (v776 ^ 0x34E90C6C) + v481;
            v501 = v808 + v498;
            v502 = __ROR4__(v484 ^ v499, 16);
            v503 = __ROR4__(v750 ^ v500, 16);
            v764 = v495 + v497;
            v751 = v793 + v502;
            v504 = __ROR4__(v492 ^ (v808 + v498), 12);
            v732 = v796 + v503;
            v505 = __ROR4__(v493 ^ (v793 + v502), 12);
            v506 = __ROR4__(v494 ^ (v796 + v503), 12);
            v507 = __ROR4__(v490 ^ (v495 + v497), 8);
            v508 = v506 + (v788 ^ 0xB5470917) + v500;
            v509 = v505 + (v797 ^ 0xC97C50DD) + v499;
            v510 = __ROR4__(v503 ^ v508, 8);
            v511 = v504 + v825 + v496;
            v512 = __ROR4__(v502 ^ v509, 8);
            v513 = __ROR4__(v498 ^ v511, 8);
            v514 = v802 + v507;
            v515 = __ROR4__(v495 ^ (v802 + v507), 7);
            v777 = v751 + v512;
            v752 = __ROR4__(v504 ^ (v501 + v513), 7);
            v733 = v732 + v510;
            v516 = __ROR4__(v505 ^ v777, 7);
            v517 = __ROR4__(v506 ^ v733, 7);
            v518 = v1000 + v515 + v509;
            v519 = __ROR4__(v510 ^ v518, 16);
            v520 = v517 + v968 + v511;
            v521 = v501 + v513 + v519;
            v522 = v516 + (v797 ^ 0x85A308D3) + v508;
            v523 = __ROR4__(v507 ^ v520, 16);
            v524 = __ROR4__(v515 ^ v521, 12);
            v525 = v752 + v1007 + v764;
            v526 = __ROR4__(v512 ^ v525, 16);
            v789 = __ROR4__(v513 ^ v522, 16);
            v527 = v514 + v789;
            v528 = v524 + v1001 + v518;
            v529 = __ROR4__(v516 ^ v527, 12);
            v530 = __ROR4__(v519 ^ v528, 8);
            v765 = v777 + v523;
            v531 = v521 + v530;
            v532 = v777 + v523;
            v778 = v733 + v526;
            v734 = __ROR4__(v524 ^ v531, 7);
            v533 = __ROR4__(v517 ^ v532, 12);
            v534 = __ROR4__(v752 ^ v778, 12);
            v535 = v789;
            v536 = v533 + v969 + v520;
            v790 = v531;
            v537 = __ROR4__(v523 ^ v536, 8);
            v538 = v529 + v967 + v522;
            v539 = v765 + v537;
            v540 = v534 + v970 + v525;
            v541 = __ROR4__(v526 ^ v540, 8);
            v542 = __ROR4__(v535 ^ v538, 8);
            v766 = v778 + v541;
            v543 = __ROR4__(v534 ^ (v778 + v541), 7);
            v544 = v527 + v542;
            v545 = v734 + v962 + v540;
            v546 = __ROR4__(v533 ^ v539, 7);
            v547 = __ROR4__(v537 ^ v545, 16);
            v548 = __ROR4__(v529 ^ v544, 7);
            v549 = v548 + v869 + v528;
            v550 = v546 + (v832 ^ 0x38D01377) + v538;
            v551 = __ROR4__(v541 ^ v549, 16);
            v552 = __ROR4__(v530 ^ v550, 16);
            v779 = v543 + v972 + v536;
            v753 = v544 + v547;
            v553 = __ROR4__(v542 ^ v779, 16);
            v554 = v539 + v551;
            v555 = __ROR4__(v734 ^ (v544 + v547), 12);
            v556 = __ROR4__(v548 ^ v554, 12);
            v735 = v766 + v552;
            v767 = v790 + v553;
            v557 = __ROR4__(v543 ^ (v790 + v553), 12);
            v558 = v555 + v963 + v545;
            v559 = __ROR4__(v547 ^ v558, 8);
            v560 = __ROR4__(v546 ^ v735, 12);
            v561 = v556 + v974 + v549;
            v562 = v560 + v971 + v550;
            v563 = __ROR4__(v551 ^ v561, 8);
            v564 = __ROR4__(v552 ^ v562, 8);
            v565 = v554 + v563;
            v566 = v753 + v559;
            v567 = v557 + v973 + v779;
            v568 = __ROR4__(v553 ^ v567, 8);
            v569 = __ROR4__(v556 ^ v565, 7);
            v754 = __ROR4__(v555 ^ (v753 + v559), 7);
            v736 = v735 + v564;
            v570 = __ROR4__(v557 ^ (v767 + v568), 7);
            v571 = __ROR4__(v560 ^ v736, 7);
            v572 = (v828 ^ 0x82EFA98) + v754 + v561;
            v573 = __ROR4__(v564 ^ v572, 16);
            v574 = v570 + v975 + v558;
            v575 = __ROR4__(v563 ^ v574, 16);
            v576 = v569 + v964 + v562;
            v577 = v571 + v1002 + v567;
            v780 = v767 + v568 + v573;
            v578 = __ROR4__(v559 ^ v577, 16);
            v579 = __ROR4__(v568 ^ v576, 16);
            v580 = __ROR4__(v754 ^ v780, 12);
            v581 = v566 + v579;
            v582 = __ROR4__(v569 ^ v581, 12);
            v755 = v736 + v575;
            v737 = v565 + v578;
            v583 = v580 + v1008 + v572;
            v584 = __ROR4__(v570 ^ v755, 12);
            v585 = __ROR4__(v571 ^ (v565 + v578), 12);
            v586 = __ROR4__(v573 ^ v583, 8);
            v587 = v582 + v965 + v576;
            v588 = __ROR4__(v579 ^ v587, 8);
            v589 = v584 + v976 + v574;
            v590 = v581 + v588;
            v591 = __ROR4__(v575 ^ v589, 8);
            v592 = v585 + v966 + v577;
            v593 = __ROR4__(v582 ^ v590, 7);
            v594 = __ROR4__(v578 ^ v592, 8);
            v781 = v780 + v586;
            v595 = __ROR4__(v580 ^ v781, 7);
            v756 = v755 + v591;
            v738 = v737 + v594;
            v596 = __ROR4__(v584 ^ v756, 7);
            v597 = v595 + v977 + v589;
            v598 = __ROR4__(v585 ^ v738, 7);
            v599 = __ROR4__(v594 ^ v597, 16);
            v600 = v593 + v978 + v583;
            v601 = v590 + v599;
            v602 = __ROR4__(v591 ^ v600, 16);
            v603 = v598 + v872 + v587;
            v604 = __ROR4__(v595 ^ v601, 12);
            v605 = __ROR4__(v586 ^ v603, 16);
            v606 = v596 + (v797 ^ 0x13198A2E) + v592;
            v607 = __ROR4__(v588 ^ v606, 16);
            v768 = v738 + v602;
            v739 = v756 + v605;
            v757 = v781 + v607;
            v608 = v604 + (v833 ^ 0x34E90C6C) + v597;
            v609 = v599 ^ v608;
            v610 = __ROR4__(v593 ^ v768, 12);
            v611 = __ROR4__(v598 ^ v739, 12);
            v782 = v608;
            v612 = __ROR4__(v596 ^ v757, 12);
            v613 = v610 + v979 + v600;
            v614 = v611 + (v850 ^ 0x85A308D3) + v603;
            v615 = __ROR4__(v602 ^ v613, 8);
            v616 = v1009 + v606;
            v617 = __ROR4__(v609, 8);
            v618 = v768;
            v619 = v601 + v617;
            v620 = __ROR4__(v605 ^ v614, 8);
            v621 = v612 + v616;
            v769 = __ROR4__(v604 ^ v619, 7);
            v622 = __ROR4__(v607 ^ v621, 8);
            v740 = v739 + v620;
            v791 = v618 + v615;
            v623 = __ROR4__(v610 ^ (v618 + v615), 7);
            v624 = __ROR4__(v612 ^ (v757 + v622), 7);
            v625 = __ROR4__(v611 ^ v740, 7);
            v626 = v624 + v981 + v782;
            v627 = v983 + v769 + v613;
            v628 = __ROR4__(v615 ^ v626, 16);
            v629 = __ROR4__(v620 ^ v627, 16);
            v630 = v623 + v980 + v614;
            v631 = v757 + v622 + v629;
            v632 = v625 + (v850 ^ 0x243F6A88) + v621;
            v633 = __ROR4__(v617 ^ v632, 16);
            v758 = __ROR4__(v622 ^ v630, 16);
            v741 = v740 + v628;
            v634 = v619 + v758;
            v635 = __ROR4__(v623 ^ v634, 12);
            v636 = v769 ^ v631;
            v770 = v791 + v633;
            v637 = __ROR4__(v636, 12);
            v638 = __ROR4__(v624 ^ v741, 12);
            v639 = __ROR4__(v625 ^ (v791 + v633), 12);
            v640 = v637 + (v828 ^ 0xB5470917) + v627;
            v641 = v635 + (v832 ^ 0x34E90C6C) + v630;
            v642 = v638 + v982 + v626;
            v643 = (v797 ^ 0xC0AC29B7) + v632;
            v644 = v758;
            v759 = __ROR4__(v629 ^ v640, 8);
            v645 = __ROR4__(v628 ^ v642, 8);
            v646 = v639 + v643;
            v647 = __ROR4__(v644 ^ v641, 8);
            v648 = __ROR4__(v633 ^ v646, 8);
            v649 = v634 + v647;
            v783 = v631 + v759;
            v650 = __ROR4__(v637 ^ (v631 + v759), 7);
            v651 = __ROR4__(v635 ^ v649, 7);
            v742 = v741 + v645;
            v652 = v770 + v648;
            v653 = __ROR4__(v639 ^ (v770 + v648), 7);
            v654 = __ROR4__(v638 ^ v742, 7);
            v655 = v650 + (v833 ^ 0x85A308D3) + v642;
            v656 = v651 + v1011 + v640;
            v657 = __ROR4__(v648 ^ v655, 16);
            v658 = v653 + v965 + v641;
            v659 = v649 + v657;
            v771 = __ROR4__(v645 ^ v656, 16);
            v660 = v652 + v771;
            v661 = v654 + v984 + v646;
            v662 = __ROR4__(v759 ^ v658, 16);
            v663 = __ROR4__(v647 ^ v661, 16);
            v743 = v742 + v662;
            v664 = __ROR4__(v651 ^ v660, 12);
            v665 = __ROR4__(v650 ^ v659, 12);
            v760 = v783 + v663;
            v666 = __ROR4__(v653 ^ v743, 12);
            v667 = __ROR4__(v654 ^ (v783 + v663), 12);
            v668 = v665 + v1010 + v655;
            v669 = v986 + v656 + v664;
            v670 = __ROR4__(v657 ^ v668, 8);
            v671 = v666 + v964 + v658;
            v672 = v659 + v670;
            v673 = v665 ^ v672;
            v674 = __ROR4__(v662 ^ v671, 8);
            v675 = v667 + v985 + v661;
            v784 = v672;
            v676 = __ROR4__(v663 ^ v675, 8);
            v677 = __ROR4__(v771 ^ v669, 8);
            v772 = v660 + v677;
            v678 = v743 + v674;
            v679 = __ROR4__(v666 ^ (v743 + v674), 7);
            v744 = v760 + v676;
            v680 = __ROR4__(v673, 7);
            v681 = __ROR4__(v664 ^ v772, 7);
            v682 = __ROR4__(v667 ^ (v760 + v676), 7);
            v683 = v963 + v668 + v682;
            v684 = (v833 ^ 0x38D01377) + v671 + v681;
            v685 = __ROR4__(v677 ^ v683, 16);
            v686 = __ROR4__(v676 ^ v684, 16);
            v687 = v679 + v987 + v675;
            v688 = v1013 + v680 + v669;
            v689 = __ROR4__(v670 ^ v687, 16);
            v690 = __ROR4__(v674 ^ v688, 16);
            v691 = v678 + v685;
            v761 = v784 + v686;
            v692 = __ROR4__(v682 ^ v691, 12);
            v785 = v744 + v690;
            v773 = v772 + v689;
            v693 = __ROR4__(v681 ^ v761, 12);
            v694 = __ROR4__(v680 ^ (v744 + v690), 12);
            v695 = __ROR4__(v679 ^ v773, 12);
            v696 = v694 + v1014 + v688;
            v697 = v1012 + v684 + v693;
            v698 = __ROR4__(v690 ^ v696, 8);
            v699 = __ROR4__(v686 ^ v697, 8);
            v700 = v962 + v683 + v692;
            v701 = v988 + v687 + v695;
            v702 = __ROR4__(v685 ^ v700, 8);
            v703 = __ROR4__(v689 ^ v701, 8);
            v745 = v761 + v699;
            v704 = v691 + v702;
            v705 = __ROR4__(v692 ^ v704, 7);
            v786 = v785 + v698;
            v762 = v773 + v703;
            v706 = __ROR4__(v693 ^ v745, 7);
            v707 = __ROR4__(v694 ^ v786, 7);
            v708 = __ROR4__(v695 ^ (v773 + v703), 7);
            v709 = v706 + v990 + v696;
            v710 = v1015 + v697 + v708;
            v711 = __ROR4__(v702 ^ v709, 16);
            v712 = v707 + v1016 + v700;
            v713 = __ROR4__(v698 ^ v710, 16);
            v714 = __ROR4__(v703 ^ v712, 16);
            v715 = v1003 + v701 + v705;
            v774 = v745 + v714;
            v716 = __ROR4__(v699 ^ v715, 16);
            v717 = v762 + v711;
            v718 = __ROR4__(v706 ^ (v762 + v711), 12);
            v763 = v786 + v716;
            v719 = __ROR4__(v707 ^ (v745 + v714), 12);
            v720 = __ROR4__(v708 ^ (v704 + v713), 12);
            v721 = __ROR4__(v705 ^ (v786 + v716), 12);
            v403 = (v832 ^ 0xB5470917) + v709 + v718;
            v816 = v719 + (v797 ^ 0xA4093822) + v712;
            v404 = __ROR4__(v714 ^ v816, 8);
            v401 = v989 + v710 + v720;
            v848 = __ROR4__(v711 ^ v403, 8);
            v722 = v721 + v1004 + v715;
            v408 = v717 + v848;
            v723 = v704 + v713;
            v402 = __ROR4__(v713 ^ v401, 8);
            v724 = __ROR4__(v716 ^ v722, 8);
            v811 = v722;
            v406 = v763 + v724;
            v409 = __ROR4__(v718 ^ v408, 7);
            v410 = __ROR4__(v720 ^ (v723 + v402), 7);
            v840 = v724;
            v725 = __ROR4__(v721 ^ (v763 + v724), 7);
            v822 = v774 + v404;
            v826 = v723 + v402;
            v747 = __ROR4__(v719 ^ (v774 + v404), 7);
            v730 = v725;
          }
          v866 ^= v403 ^ v865 ^ v406;
          v862 ^= v822 ^ v401 ^ v991;
          v861 ^= v811 ^ v864 ^ v408;
          v3 = 0;
          v867 ^= v826 ^ v992 ^ v816;
          result = v840 ^ v409 ^ v860 ^ v991;
          v859 ^= v410 ^ v864 ^ v404;
          v860 = result;
          v858 ^= v848 ^ v992 ^ v730;
          v857 ^= v747 ^ v865 ^ v402;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 64 - v3;
      }
    }
    a1[16] = v3;
    a1[17] = v862;
    a1[18] = v861;
    a1[19] = v867;
    a1[20] = v866;
    a1[21] = v860;
    a1[22] = v859;
    a1[23] = v858;
    a1[24] = v857;
    a1[25] = v991;
    a1[26] = v864;
    a1[27] = v992;
    a1[28] = v865;
    a1[29] = v863;
    a1[30] = v868;
  }
  return result;
}
