unsigned int __fastcall sub_425A8(unsigned int *a1, char *a2, size_t a3)
{
  unsigned int v3; // r4
  size_t v4; // r3
  unsigned int result; // r0
  const void *v6; // r1
  char *v7; // r0
  bool v8; // cf
  unsigned int v9; // r2
  unsigned int v10; // r11
  int v11; // r3
  int v12; // lr
  int v13; // r5
  int v14; // r7
  int v15; // r10
  int v16; // r1
  int v17; // r4
  int v18; // r12
  int v19; // r8
  int v20; // r11
  int v21; // r9
  int v22; // r0
  int v23; // r7
  int v24; // r6
  int v25; // r10
  int v26; // r1
  int v27; // r4
  int v28; // r10
  int v29; // r8
  int v30; // r12
  int v31; // r11
  int v32; // r3
  int v33; // r9
  int v34; // r6
  int v35; // r7
  int v36; // t2
  int v37; // r8
  int v38; // r3
  int v39; // r11
  int v40; // r1
  int v41; // r5
  int v42; // r10
  int v43; // r12
  int v44; // r9
  int v45; // lr
  int v46; // r6
  int v47; // r11
  int v48; // r7
  int v49; // r1
  int v50; // r0
  int v51; // r11
  int v52; // r5
  int v53; // r4
  int v54; // r8
  int v55; // lr
  int v56; // r3
  int v57; // r9
  int v58; // r2
  int v59; // lr
  int v60; // r2
  int v61; // r5
  int v62; // r10
  int v63; // r0
  int v64; // r1
  int v65; // r6
  int v66; // r4
  int v67; // r3
  int v68; // r8
  int v69; // r11
  int v70; // r2
  int v71; // r9
  int v72; // r0
  int v73; // r6
  int v74; // r5
  int v75; // r10
  int v76; // r10
  int v77; // lr
  int v78; // r1
  int v79; // r12
  int v80; // r8
  int v81; // r3
  int v82; // r2
  int v83; // r11
  int v84; // r9
  int v85; // r11
  int v86; // r9
  int v87; // r0
  int v88; // r6
  int v89; // lr
  int v90; // r5
  int v91; // r1
  int v92; // r4
  int v93; // r7
  int v94; // r8
  int v95; // r10
  int v96; // r2
  int v97; // r9
  int v98; // r0
  int v99; // r5
  int v100; // lr
  int v101; // r6
  int v102; // r7
  int v103; // r12
  int v104; // r3
  int v105; // lr
  int v106; // r4
  int v107; // r7
  int v108; // r10
  int v109; // r2
  int v110; // r9
  int v111; // r6
  int v112; // r0
  int v113; // r10
  int v114; // r4
  int v115; // r11
  int v116; // r8
  int v117; // r12
  int v118; // r1
  int v119; // r7
  int v120; // lr
  int v121; // r7
  int v122; // r9
  int v123; // r6
  int v124; // r0
  int v125; // r4
  int v126; // r10
  int v127; // r7
  int v128; // r5
  int v129; // r1
  int v130; // lr
  int v131; // t2
  int v132; // r10
  int v133; // r3
  int v134; // r12
  int v135; // r9
  int v136; // r7
  int v137; // r0
  int v138; // r11
  int v139; // r8
  int v140; // lr
  int v141; // r10
  int v142; // r4
  int v143; // r3
  int v144; // t2
  int v145; // r10
  int v146; // r2
  int v147; // r9
  int v148; // r6
  int v149; // r0
  int v150; // r11
  int v151; // r5
  int v152; // r4
  int v153; // r8
  int v154; // r10
  int v155; // r1
  int v156; // r2
  int v157; // r11
  int v158; // r1
  int v159; // r8
  int v160; // r12
  int v161; // r10
  int v162; // r9
  int v163; // r0
  int v164; // r6
  int v165; // r4
  int v166; // r5
  int v167; // r7
  int v168; // r11
  int v169; // r12
  int v170; // r8
  int v171; // r2
  int v172; // r3
  int v173; // r9
  int v174; // r5
  int v175; // r7
  int v176; // lr
  int v177; // r0
  int v178; // r4
  int v179; // r8
  int v180; // r3
  int v181; // r9
  int v182; // r1
  int v183; // lr
  int v184; // r12
  int v185; // r11
  int v186; // r8
  int v187; // r2
  int v188; // r6
  int v189; // r5
  int v190; // r10
  int v191; // r4
  int v192; // r1
  int v193; // r7
  int v194; // r11
  int v195; // r3
  int v196; // r12
  int v197; // lr
  int v198; // r9
  int v199; // r0
  int v200; // r8
  int v201; // r1
  int v202; // r5
  int v203; // r12
  int v204; // r10
  int v205; // r7
  int v206; // r4
  int v207; // r11
  int v208; // r7
  int v209; // lr
  int v210; // r2
  int v211; // lr
  int v212; // r3
  int v213; // r2
  int v214; // r5
  int v215; // r6
  int v216; // r0
  int v217; // r9
  int v218; // r6
  int v219; // r12
  int v220; // r3
  int v221; // r4
  int v222; // r7
  int v223; // r2
  int v224; // r11
  int v225; // r10
  int v226; // r0
  int v227; // r6
  int v228; // r9
  int v229; // r8
  int v230; // r4
  int v231; // r1
  int v232; // r9
  int v233; // r10
  int v234; // r7
  int v235; // r6
  int v236; // r11
  int v237; // r3
  int v238; // r0
  int v239; // r2
  int v240; // r10
  int v241; // r8
  int v242; // lr
  int v243; // r5
  int v244; // r4
  int v245; // r12
  int v246; // r1
  int v247; // r6
  int v248; // r3
  int v249; // r2
  int v250; // r9
  int v251; // r8
  int v252; // r11
  int v253; // r8
  int v254; // lr
  int v255; // r5
  int v256; // r1
  int v257; // r0
  int v258; // r12
  int v259; // r9
  int v260; // r7
  int v261; // r4
  int v262; // r5
  int v263; // lr
  int v264; // r3
  int v265; // r6
  int v266; // r4
  int v267; // r1
  int v268; // r0
  int v269; // r10
  int v270; // r11
  int v271; // r0
  int v272; // r8
  int v273; // r9
  int v274; // r12
  int v275; // t2
  int v276; // r5
  int v277; // r6
  int v278; // r0
  int v279; // r3
  int v280; // r9
  int v281; // lr
  int v282; // r12
  int v283; // r2
  int v284; // r1
  int v285; // r5
  int v286; // r10
  int v287; // r7
  int v288; // lr
  int v289; // r10
  int v290; // r0
  int v291; // r6
  int v292; // r9
  int v293; // r2
  int v294; // r9
  int v295; // r2
  int v296; // r1
  int v297; // r8
  int v298; // r12
  int v299; // r11
  int v300; // r7
  int v301; // r0
  int v302; // r5
  int v303; // r10
  int v304; // r6
  int v305; // r3
  int v306; // r2
  int v307; // lr
  int v308; // r8
  int v309; // r12
  int v310; // r1
  int v311; // r7
  int v312; // r5
  int v313; // r6
  unsigned int v314; // r0
  int v315; // r9
  int v316; // r10
  int v317; // r3
  int v318; // r10
  int v319; // r8
  int v320; // r4
  int v321; // r1
  int v322; // r2
  int v323; // r4
  int v324; // r3
  int v325; // r11
  int v326; // r12
  int v327; // lr
  int v328; // r5
  int v329; // lr
  int v330; // r7
  int v331; // r0
  int v332; // r3
  int v333; // r6
  int v334; // r9
  int v335; // r3
  int v336; // r8
  int v337; // r1
  int v338; // r2
  int v339; // r10
  int v340; // r11
  int v341; // r7
  int v342; // r0
  int v343; // r12
  int v344; // r4
  int v345; // r9
  int v346; // r10
  int v347; // r7
  int v348; // r9
  int v349; // lr
  int v350; // r6
  int v351; // r1
  int v352; // r3
  int v353; // r11
  int v354; // r5
  int v355; // r8
  int v356; // r7
  int v357; // r0
  int v358; // r12
  int v359; // r4
  int v360; // lr
  int v361; // r5
  int v362; // r10
  int v363; // r3
  int v364; // r6
  int v365; // r5
  int v366; // r2
  int v367; // r1
  int v368; // r7
  int v369; // r11
  int v370; // r5
  int v371; // r4
  int v372; // r3
  int v373; // r12
  int v374; // r0
  int v375; // r9
  int v376; // r4
  int v377; // r10
  int v378; // r6
  int v379; // r9
  int v380; // r3
  int v381; // r8
  int v382; // r10
  int v383; // r2
  int v384; // r1
  int v385; // r7
  int v386; // lr
  int v387; // r5
  int v388; // r0
  int v389; // r9
  int v390; // r3
  int v391; // r6
  int v392; // r8
  int v393; // r10
  int v394; // r2
  int v395; // r1
  int v396; // r7
  int v397; // r4
  int v398; // r5
  int v399; // r12
  int v400; // r7
  int v401; // lr
  int v402; // r3
  int v403; // r11
  int v404; // r2
  int v405; // r11
  int v406; // r8
  int v407; // r1
  int v408; // r2
  int v409; // r5
  int v410; // r12
  int v411; // r6
  int v412; // r0
  int v413; // r7
  int v414; // r10
  int v415; // r3
  int v416; // r6
  int v417; // r2
  int v418; // r9
  unsigned int v419; // r4
  int v420; // r5
  int v421; // r7
  int v422; // r8
  int v423; // r4
  int v424; // r1
  int v425; // r0
  int v426; // r12
  int v427; // r10
  int v428; // r3
  int v429; // r10
  int v430; // r3
  int v431; // r11
  int v432; // r2
  unsigned int v433; // lr
  int v434; // r4
  int v435; // r7
  int v436; // r9
  int v437; // r5
  int v438; // r1
  int v439; // lr
  int v440; // r6
  int v441; // r0
  int v442; // r3
  int v443; // r6
  int v444; // r11
  int v445; // r2
  int v446; // r5
  int v447; // r4
  int v448; // r9
  int v449; // r0
  int v450; // r7
  int v451; // r1
  int v452; // lr
  int v453; // r11
  int v454; // r2
  int v455; // r12
  int v456; // r10
  int v457; // r11
  int v458; // lr
  int v459; // r6
  int v460; // r4
  int v461; // r8
  int v462; // r5
  int v463; // r0
  int v464; // r12
  int v465; // r3
  int v466; // r7
  int v467; // lr
  int v468; // r10
  int v469; // r3
  int v470; // r6
  int v471; // r7
  int v472; // r8
  int v473; // r2
  int v474; // r4
  int v475; // r5
  int v476; // r10
  int v477; // r1
  int v478; // r0
  int v479; // t2
  int v480; // r8
  int v481; // r12
  int v482; // lr
  int v483; // r3
  int v484; // r6
  int v485; // r2
  int v486; // r0
  int v487; // r9
  int v488; // r5
  int v489; // r7
  int v490; // r4
  int v491; // r10
  int v492; // r12
  int v493; // r11
  int v494; // r0
  int v495; // r8
  int v496; // r0
  int v497; // r2
  int v498; // r1
  int v499; // r3
  int v500; // r9
  int v501; // t2
  int v502; // r7
  int v503; // r5
  int v504; // r8
  int v505; // r6
  int v506; // r10
  int v507; // r9
  int v508; // r8
  int v509; // r4
  int v510; // r9
  int v511; // r3
  int v512; // r1
  int v513; // r11
  int v514; // r7
  int v515; // r0
  int v516; // lr
  int v517; // r6
  int v518; // r12
  int v519; // r7
  int v520; // r8
  int v521; // r7
  int v522; // r9
  int v523; // r3
  int v524; // r1
  int v525; // r4
  int v526; // r11
  int v527; // r12
  int v528; // r5
  int v529; // r6
  int v530; // r9
  int v531; // r2
  int v532; // lr
  unsigned int v533; // r4
  int v534; // r7
  int v535; // r10
  int v536; // r3
  int v537; // r6
  int v538; // r0
  int v539; // r12
  int v540; // r11
  int v541; // r8
  int v542; // r1
  int v543; // r2
  int v544; // r10
  int v545; // r4
  int v546; // r3
  int v547; // r6
  int v548; // r1
  int v549; // r7
  int v550; // r9
  int v551; // r11
  int v552; // r0
  int v553; // r5
  int v554; // lr
  int v555; // r12
  int v556; // r3
  int v557; // r9
  int v558; // r0
  int v559; // lr
  int v560; // r2
  int v561; // r0
  int v562; // r10
  int v563; // r8
  int v564; // r12
  int v565; // r7
  int v566; // r5
  int v567; // r4
  int v568; // r1
  int v569; // r5
  int v570; // r1
  int v571; // r7
  int v572; // r3
  int v573; // r9
  int v574; // r2
  int v575; // r11
  int v576; // lr
  int v577; // r0
  int v578; // r8
  int v579; // r10
  int v580; // r4
  int v581; // r1
  int v582; // r12
  int v583; // r5
  int v584; // r7
  int v585; // r11
  int v586; // r0
  int v587; // r3
  int v588; // r9
  int v589; // r2
  int v590; // r10
  int v591; // r6
  int v592; // r7
  int v593; // r4
  int v594; // r9
  int v595; // r1
  int v596; // r8
  int v597; // r3
  int v598; // r12
  int v599; // lr
  int v600; // r5
  int v601; // r11
  int v602; // r2
  int v603; // r0
  int v604; // r4
  int v605; // r10
  int v606; // r6
  int v607; // r7
  int v608; // r8
  int v609; // r9
  int v610; // r3
  int v611; // r12
  int v612; // t2
  int v613; // r10
  int v614; // r11
  int v615; // lr
  int v616; // r1
  int v617; // r2
  int v618; // r8
  int v619; // r4
  int v620; // r0
  int v621; // r5
  int v622; // r12
  int v623; // r6
  int v624; // r10
  int v625; // r9
  int v626; // r3
  int v627; // lr
  int v628; // r2
  int v629; // r11
  int v630; // r1
  int v631; // r8
  int v632; // r4
  int v633; // r7
  int v634; // r5
  int v635; // r0
  int v636; // r7
  int v637; // r12
  int v638; // r7
  int v639; // r11
  int v640; // r3
  int v641; // r1
  unsigned int v642; // r5
  int v643; // r9
  int v644; // r10
  int v645; // r2
  int v646; // r0
  int v647; // r8
  int v648; // lr
  int v649; // r11
  int v650; // r12
  int v651; // r2
  int v652; // r6
  int v653; // t2
  int v654; // r9
  int v655; // r5
  int v656; // r10
  int v657; // r1
  int v658; // r7
  int v659; // r4
  int v660; // r8
  int v661; // r6
  int v662; // r0
  int v663; // lr
  int v664; // r9
  int v665; // r11
  int v666; // r3
  int v667; // r12
  int v668; // r0
  int v669; // r10
  int v670; // r1
  int v671; // lr
  int v672; // r8
  int v673; // r9
  int v674; // r6
  int v675; // r5
  int v676; // r12
  int v677; // r7
  int v678; // r11
  int v679; // r3
  int v680; // r1
  int v681; // r10
  int v682; // r8
  int v683; // r5
  int v684; // r6
  int v685; // r7
  int v686; // r4
  int v687; // r2
  int v688; // r2
  int v689; // r12
  int v690; // r3
  int v691; // r0
  int v692; // lr
  int v693; // r1
  int v694; // r7
  int v695; // r2
  int v696; // r11
  int v697; // r12
  int v698; // r9
  int v699; // r10
  int v700; // r5
  int v701; // r6
  int v702; // r5
  int v703; // r4
  int v704; // r8
  int v705; // r4
  int v706; // r0
  int v707; // r7
  int v708; // lr
  int v709; // r11
  int v710; // r10
  int v711; // r2
  int v712; // r6
  int v713; // r5
  int v714; // r1
  int v715; // r4
  int v716; // r8
  int v717; // r3
  int v718; // r0
  int v719; // lr
  int v720; // r2
  int v721; // r11
  int v722; // r10
  int v723; // r1
  int v724; // r6
  int v725; // r9
  int v726; // r3
  int v727; // r12
  int v728; // r5
  int v729; // r8
  int v730; // r0
  int v731; // r7
  int v732; // lr
  int v733; // r2
  int v734; // r9
  int v735; // r12
  int v736; // t2
  int v737; // [sp+4h] [bp-1F0h]
  int v738; // [sp+4h] [bp-1F0h]
  int v739; // [sp+4h] [bp-1F0h]
  int v740; // [sp+4h] [bp-1F0h]
  int v741; // [sp+4h] [bp-1F0h]
  int v742; // [sp+4h] [bp-1F0h]
  int v743; // [sp+4h] [bp-1F0h]
  int v744; // [sp+4h] [bp-1F0h]
  int v745; // [sp+4h] [bp-1F0h]
  int v746; // [sp+4h] [bp-1F0h]
  int v747; // [sp+4h] [bp-1F0h]
  int v748; // [sp+4h] [bp-1F0h]
  int v749; // [sp+4h] [bp-1F0h]
  int v750; // [sp+4h] [bp-1F0h]
  int v751; // [sp+4h] [bp-1F0h]
  int v753; // [sp+Ch] [bp-1E8h]
  int v754; // [sp+Ch] [bp-1E8h]
  int v755; // [sp+Ch] [bp-1E8h]
  int v756; // [sp+Ch] [bp-1E8h]
  int v757; // [sp+Ch] [bp-1E8h]
  int v758; // [sp+Ch] [bp-1E8h]
  int v759; // [sp+Ch] [bp-1E8h]
  int v760; // [sp+Ch] [bp-1E8h]
  int v761; // [sp+Ch] [bp-1E8h]
  int v762; // [sp+Ch] [bp-1E8h]
  int v763; // [sp+10h] [bp-1E4h]
  int v764; // [sp+10h] [bp-1E4h]
  int v765; // [sp+10h] [bp-1E4h]
  int v766; // [sp+10h] [bp-1E4h]
  int v767; // [sp+10h] [bp-1E4h]
  int v768; // [sp+10h] [bp-1E4h]
  int v769; // [sp+10h] [bp-1E4h]
  int v770; // [sp+10h] [bp-1E4h]
  int v771; // [sp+10h] [bp-1E4h]
  int v772; // [sp+10h] [bp-1E4h]
  int v773; // [sp+10h] [bp-1E4h]
  int v774; // [sp+14h] [bp-1E0h]
  int v775; // [sp+14h] [bp-1E0h]
  int v776; // [sp+14h] [bp-1E0h]
  int v777; // [sp+14h] [bp-1E0h]
  int v778; // [sp+14h] [bp-1E0h]
  int v779; // [sp+14h] [bp-1E0h]
  int v780; // [sp+14h] [bp-1E0h]
  int v781; // [sp+14h] [bp-1E0h]
  int v782; // [sp+14h] [bp-1E0h]
  int v783; // [sp+14h] [bp-1E0h]
  int v784; // [sp+14h] [bp-1E0h]
  int v785; // [sp+14h] [bp-1E0h]
  int v786; // [sp+14h] [bp-1E0h]
  int v787; // [sp+14h] [bp-1E0h]
  int v788; // [sp+18h] [bp-1DCh]
  int v789; // [sp+18h] [bp-1DCh]
  int v790; // [sp+18h] [bp-1DCh]
  int v791; // [sp+18h] [bp-1DCh]
  int v792; // [sp+18h] [bp-1DCh]
  int v793; // [sp+18h] [bp-1DCh]
  int v794; // [sp+18h] [bp-1DCh]
  int v795; // [sp+18h] [bp-1DCh]
  int v796; // [sp+18h] [bp-1DCh]
  int v797; // [sp+18h] [bp-1DCh]
  int v798; // [sp+18h] [bp-1DCh]
  int v799; // [sp+1Ch] [bp-1D8h]
  int v800; // [sp+1Ch] [bp-1D8h]
  int v801; // [sp+1Ch] [bp-1D8h]
  int v802; // [sp+1Ch] [bp-1D8h]
  int v803; // [sp+1Ch] [bp-1D8h]
  int v804; // [sp+1Ch] [bp-1D8h]
  int v805; // [sp+1Ch] [bp-1D8h]
  int v806; // [sp+1Ch] [bp-1D8h]
  int v807; // [sp+1Ch] [bp-1D8h]
  int v808; // [sp+20h] [bp-1D4h]
  int v809; // [sp+20h] [bp-1D4h]
  int v810; // [sp+20h] [bp-1D4h]
  size_t n; // [sp+28h] [bp-1CCh]
  int v812; // [sp+2Ch] [bp-1C8h]
  unsigned int v813; // [sp+2Ch] [bp-1C8h]
  int v814; // [sp+2Ch] [bp-1C8h]
  int v815; // [sp+2Ch] [bp-1C8h]
  int v816; // [sp+30h] [bp-1C4h]
  unsigned int v817; // [sp+30h] [bp-1C4h]
  unsigned int v818; // [sp+34h] [bp-1C0h]
  unsigned int v819; // [sp+38h] [bp-1BCh]
  int v820; // [sp+3Ch] [bp-1B8h]
  int v821; // [sp+3Ch] [bp-1B8h]
  int v822; // [sp+3Ch] [bp-1B8h]
  int v823; // [sp+40h] [bp-1B4h]
  int v824; // [sp+40h] [bp-1B4h]
  int v825; // [sp+40h] [bp-1B4h]
  int v826; // [sp+40h] [bp-1B4h]
  int v827; // [sp+44h] [bp-1B0h]
  int v828; // [sp+44h] [bp-1B0h]
  int v829; // [sp+44h] [bp-1B0h]
  int v830; // [sp+44h] [bp-1B0h]
  int v831; // [sp+44h] [bp-1B0h]
  int v832; // [sp+54h] [bp-1A0h]
  unsigned int v833; // [sp+54h] [bp-1A0h]
  int v834; // [sp+58h] [bp-19Ch]
  unsigned int v835; // [sp+58h] [bp-19Ch]
  int v836; // [sp+58h] [bp-19Ch]
  int v837; // [sp+58h] [bp-19Ch]
  int v838; // [sp+58h] [bp-19Ch]
  unsigned int v839; // [sp+5Ch] [bp-198h]
  int v840; // [sp+5Ch] [bp-198h]
  unsigned int v841; // [sp+60h] [bp-194h]
  int v842; // [sp+60h] [bp-194h]
  unsigned int v843; // [sp+64h] [bp-190h]
  unsigned int v844; // [sp+6Ch] [bp-188h]
  int v845; // [sp+6Ch] [bp-188h]
  unsigned int v846; // [sp+70h] [bp-184h]
  unsigned int v847; // [sp+74h] [bp-180h]
  int v848; // [sp+74h] [bp-180h]
  int v849; // [sp+74h] [bp-180h]
  int v850; // [sp+74h] [bp-180h]
  unsigned int v851; // [sp+78h] [bp-17Ch]
  unsigned int v852; // [sp+7Ch] [bp-178h]
  unsigned int v853; // [sp+80h] [bp-174h]
  int v854; // [sp+80h] [bp-174h]
  int v855; // [sp+80h] [bp-174h]
  unsigned int v856; // [sp+88h] [bp-16Ch]
  int v857; // [sp+88h] [bp-16Ch]
  char *src; // [sp+8Ch] [bp-168h]
  unsigned int v859; // [sp+90h] [bp-164h]
  unsigned int v860; // [sp+94h] [bp-160h]
  unsigned int v861; // [sp+98h] [bp-15Ch]
  unsigned int v862; // [sp+9Ch] [bp-158h]
  unsigned int v863; // [sp+A0h] [bp-154h]
  unsigned int v864; // [sp+A4h] [bp-150h]
  unsigned int v865; // [sp+A8h] [bp-14Ch]
  unsigned int v866; // [sp+ACh] [bp-148h]
  unsigned int v867; // [sp+B0h] [bp-144h]
  unsigned int v868; // [sp+B4h] [bp-140h]
  unsigned int v869; // [sp+B8h] [bp-13Ch]
  unsigned int v870; // [sp+BCh] [bp-138h]
  unsigned int v871; // [sp+C0h] [bp-134h]
  int v872; // [sp+C8h] [bp-12Ch]
  unsigned int v873; // [sp+CCh] [bp-128h]
  int v874; // [sp+D0h] [bp-124h]
  int v875; // [sp+D0h] [bp-124h]
  int v876; // [sp+D4h] [bp-120h]
  unsigned int v877; // [sp+D4h] [bp-120h]
  int v878; // [sp+D8h] [bp-11Ch]
  int v879; // [sp+D8h] [bp-11Ch]
  int v880; // [sp+DCh] [bp-118h]
  int v881; // [sp+E0h] [bp-114h]
  int v882; // [sp+E4h] [bp-110h]
  int v883; // [sp+E4h] [bp-110h]
  int v884; // [sp+E8h] [bp-10Ch]
  int v885; // [sp+E8h] [bp-10Ch]
  int v886; // [sp+ECh] [bp-108h]
  int v887; // [sp+ECh] [bp-108h]
  int v888; // [sp+ECh] [bp-108h]
  int v889; // [sp+ECh] [bp-108h]
  int v890; // [sp+ECh] [bp-108h]
  int v891; // [sp+ECh] [bp-108h]
  unsigned int v892; // [sp+F0h] [bp-104h]
  int v893; // [sp+F8h] [bp-FCh]
  int v894; // [sp+100h] [bp-F4h]
  unsigned int v895; // [sp+104h] [bp-F0h]
  unsigned int v896; // [sp+108h] [bp-ECh]
  int v897; // [sp+114h] [bp-E0h]
  int v898; // [sp+118h] [bp-DCh]
  unsigned int v899; // [sp+120h] [bp-D4h]
  int v900; // [sp+124h] [bp-D0h]
  int v901; // [sp+124h] [bp-D0h]
  unsigned int v902; // [sp+128h] [bp-CCh]
  int v903; // [sp+12Ch] [bp-C8h]
  int v904; // [sp+134h] [bp-C0h]
  int v905; // [sp+138h] [bp-BCh]
  int v906; // [sp+13Ch] [bp-B8h]
  int v907; // [sp+140h] [bp-B4h]
  int v908; // [sp+144h] [bp-B0h]
  int v909; // [sp+148h] [bp-ACh]
  int v910; // [sp+14Ch] [bp-A8h]
  int v911; // [sp+150h] [bp-A4h]
  int v912; // [sp+154h] [bp-A0h]
  int v913; // [sp+154h] [bp-A0h]
  int v914; // [sp+158h] [bp-9Ch]
  int v915; // [sp+158h] [bp-9Ch]
  int v916; // [sp+15Ch] [bp-98h]
  int v917; // [sp+15Ch] [bp-98h]
  int v918; // [sp+15Ch] [bp-98h]
  int v919; // [sp+15Ch] [bp-98h]
  int v920; // [sp+160h] [bp-94h]
  unsigned int v921; // [sp+160h] [bp-94h]
  int v922; // [sp+164h] [bp-90h]
  int v923; // [sp+164h] [bp-90h]
  int v924; // [sp+168h] [bp-8Ch]
  unsigned int v925; // [sp+168h] [bp-8Ch]
  int v926; // [sp+16Ch] [bp-88h]
  int v927; // [sp+170h] [bp-84h]
  int v928; // [sp+174h] [bp-80h]
  int v929; // [sp+174h] [bp-80h]
  int v930; // [sp+174h] [bp-80h]
  int v931; // [sp+178h] [bp-7Ch]
  int v932; // [sp+178h] [bp-7Ch]
  unsigned int v933; // [sp+178h] [bp-7Ch]
  int v934; // [sp+17Ch] [bp-78h]
  int v935; // [sp+17Ch] [bp-78h]
  int v936; // [sp+17Ch] [bp-78h]
  int v937; // [sp+180h] [bp-74h]
  int v938; // [sp+184h] [bp-70h]
  int v939; // [sp+188h] [bp-6Ch]
  int v940; // [sp+18Ch] [bp-68h]
  int v941; // [sp+18Ch] [bp-68h]
  int v942; // [sp+18Ch] [bp-68h]
  int v943; // [sp+18Ch] [bp-68h]
  int v944; // [sp+18Ch] [bp-68h]
  int v945; // [sp+18Ch] [bp-68h]
  int v946; // [sp+18Ch] [bp-68h]
  int v947; // [sp+18Ch] [bp-68h]
  int v948; // [sp+190h] [bp-64h]
  int v949; // [sp+190h] [bp-64h]
  int v950; // [sp+190h] [bp-64h]
  int v951; // [sp+190h] [bp-64h]
  int v952; // [sp+190h] [bp-64h]
  int v953; // [sp+190h] [bp-64h]
  int v954; // [sp+190h] [bp-64h]
  int v955; // [sp+190h] [bp-64h]
  int v956; // [sp+190h] [bp-64h]
  int v957; // [sp+194h] [bp-60h]
  int v958; // [sp+194h] [bp-60h]
  int v959; // [sp+194h] [bp-60h]
  int v960; // [sp+194h] [bp-60h]
  int v961; // [sp+194h] [bp-60h]
  int v962; // [sp+194h] [bp-60h]
  int v963; // [sp+194h] [bp-60h]
  int v964; // [sp+194h] [bp-60h]
  int v965; // [sp+194h] [bp-60h]
  int v966; // [sp+198h] [bp-5Ch]
  int v967; // [sp+198h] [bp-5Ch]
  int v968; // [sp+198h] [bp-5Ch]
  int v969; // [sp+198h] [bp-5Ch]
  int v970; // [sp+198h] [bp-5Ch]
  int v971; // [sp+198h] [bp-5Ch]
  int v972; // [sp+198h] [bp-5Ch]
  int v973; // [sp+198h] [bp-5Ch]
  int v974; // [sp+198h] [bp-5Ch]
  unsigned int v975; // [sp+198h] [bp-5Ch]
  int v976; // [sp+19Ch] [bp-58h]
  int v977; // [sp+19Ch] [bp-58h]
  int v978; // [sp+19Ch] [bp-58h]
  int v979; // [sp+19Ch] [bp-58h]
  int v980; // [sp+19Ch] [bp-58h]
  int v981; // [sp+19Ch] [bp-58h]
  int v982; // [sp+19Ch] [bp-58h]
  int v983; // [sp+1A0h] [bp-54h]
  int v984; // [sp+1A0h] [bp-54h]
  int v985; // [sp+1A0h] [bp-54h]
  int v986; // [sp+1A0h] [bp-54h]
  int v987; // [sp+1A0h] [bp-54h]
  int v988; // [sp+1A0h] [bp-54h]
  int v989; // [sp+1A0h] [bp-54h]
  int v990; // [sp+1A0h] [bp-54h]
  int v991; // [sp+1A0h] [bp-54h]
  int v992; // [sp+1A0h] [bp-54h]
  int v993; // [sp+1A0h] [bp-54h]
  int v994; // [sp+1A4h] [bp-50h]
  int v995; // [sp+1A4h] [bp-50h]
  int v996; // [sp+1A4h] [bp-50h]
  int v997; // [sp+1A4h] [bp-50h]
  int v998; // [sp+1A4h] [bp-50h]
  int v999; // [sp+1A4h] [bp-50h]
  int v1000; // [sp+1A4h] [bp-50h]
  int v1001; // [sp+1B0h] [bp-44h]
  unsigned int v1002; // [sp+1B4h] [bp-40h]
  int v1003; // [sp+1D0h] [bp-24h]
  int v1004; // [sp+1D8h] [bp-1Ch]
  int v1005; // [sp+1DCh] [bp-18h]
  int v1006; // [sp+1DCh] [bp-18h]
  unsigned int v1007; // [sp+1DCh] [bp-18h]
  int v1008; // [sp+1E0h] [bp-14h]
  int v1009; // [sp+1E4h] [bp-10h]
  int v1010; // [sp+1E4h] [bp-10h]
  int v1011; // [sp+1E8h] [bp-Ch]
  int v1012; // [sp+1ECh] [bp-8h]

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
    result = a1[25];
    v865 = a1[17];
    v892 = a1[25];
    v864 = a1[18];
    v870 = a1[19];
    v869 = a1[20];
    v863 = a1[21];
    v862 = a1[22];
    v861 = a1[23];
    v860 = a1[24];
    v866 = a1[26];
    v867 = a1[27];
    v868 = a1[28];
    v859 = a1[29];
    v871 = a1[30];
    if ( a3 )
    {
      v1012 = result ^ 0x243F6A88;
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v6 = src;
        v7 = (char *)a1 + v3;
        n -= v4;
        v3 += v4;
        src += v4;
        result = (unsigned int)memcpy(v7, v6, v4);
        if ( v3 == 64 )
        {
          v8 = __CFADD__(v859, 512);
          v859 += 512;
          if ( v8 )
            ++v871;
          v9 = bswap32(a1[2]);
          v856 = bswap32(a1[6]);
          v841 = bswap32(a1[4]);
          v10 = v869 + v860 + (v856 ^ 0xEC4E6C89);
          v896 = v856 ^ 0xEC4E6C89;
          v11 = __ROR4__(v871 ^ 0xEC4E6C89 ^ v10, 16);
          v12 = (v868 ^ 0x3707344) + v11;
          v893 = v9 ^ 0x3707344;
          v853 = v9;
          v894 = v841 ^ 0x299F31D0;
          v819 = bswap32(*a1);
          v13 = v864 + v862 + (v9 ^ 0x3707344);
          v852 = bswap32(a1[7]);
          v816 = __ROR4__(v12 ^ v860, 12);
          v14 = __ROR4__(v859 ^ 0x299F31D0 ^ v13, 16);
          v15 = v870 + v861 + (v841 ^ 0x299F31D0);
          v16 = __ROR4__(v871 ^ 0x82EFA98 ^ v15, 16);
          v17 = __ROR4__(v859 ^ 0xA4093822 ^ (v865 + v863 + (v819 ^ 0x85A308D3)), 16);
          v872 = v816 + v10 + (v852 ^ 0x82EFA98);
          v823 = __ROR4__(v11 ^ v872, 8);
          v18 = (v866 ^ 0x85A308D3) + v14;
          v19 = (v867 ^ 0x13198A2E) + v16;
          v818 = bswap32(a1[3]);
          v774 = __ROR4__(v18 ^ v862, 12);
          v20 = v1012 + v17;
          v839 = bswap32(a1[5]);
          v21 = __ROR4__((v1012 + v17) ^ v863, 12);
          v812 = __ROR4__(v19 ^ v861, 12);
          v895 = v839 ^ 0xA4093822;
          v843 = bswap32(a1[1]);
          v22 = __ROR4__(v816 ^ (v12 + v823), 7);
          v846 = bswap32(a1[12]);
          v827 = v13 + (v818 ^ 0x13198A2E) + v774;
          v23 = __ROR4__(v14 ^ v827, 8);
          v24 = v865 + v863 + (v819 ^ 0x85A308D3) + (v843 ^ 0x243F6A88) + v21;
          v25 = v15 + (v839 ^ 0xA4093822) + v812;
          v26 = __ROR4__(v16 ^ v25, 8);
          v27 = __ROR4__(v17 ^ v24, 8);
          v28 = v25 + (v846 ^ 0xC97C50DD) + v22;
          v834 = v18 + v23;
          v29 = v19 + v26;
          v30 = __ROR4__(v23 ^ v28, 16);
          v31 = v20 + v27;
          v32 = __ROR4__(v774 ^ v834, 7);
          v33 = __ROR4__(v21 ^ v31, 7);
          v851 = bswap32(a1[8]);
          v844 = bswap32(a1[14]);
          v874 = v31 + v30;
          v847 = bswap32(a1[10]);
          v832 = __ROR4__(v812 ^ v29, 7);
          v873 = v844 ^ 0xB5470917;
          v34 = v24 + (v851 ^ 0x38D01377) + v32;
          v898 = v847 ^ 0x34E90C6C;
          v35 = __ROR4__(v823 ^ v34, 16);
          v36 = __ROR4__(v22 ^ (v31 + v30), 12);
          v37 = v29 + v35;
          v817 = bswap32(a1[13]);
          v38 = __ROR4__(v32 ^ v37, 12);
          v39 = (v844 ^ 0xB5470917) + v872 + v33;
          v40 = __ROR4__(v26 ^ v39, 16);
          v41 = v827 + (v847 ^ 0x34E90C6C) + v832;
          v42 = v28 + (v817 ^ 0xC0AC29B7) + v36;
          v876 = __ROR4__(v27 ^ v41, 16);
          v881 = __ROR4__(v30 ^ v42, 8);
          v43 = v834 + v40;
          v44 = __ROR4__(v33 ^ (v834 + v40), 12);
          v45 = v12 + v823 + v876;
          v813 = bswap32(a1[15]);
          v835 = bswap32(a1[9]);
          v897 = v835 ^ 0x452821E6;
          v878 = __ROR4__(v832 ^ v45, 12);
          v833 = bswap32(a1[11]);
          v882 = v874 + v881;
          v875 = v813 ^ 0x3F84D5B5;
          v46 = v34 + (v835 ^ 0x452821E6) + v38;
          v47 = v39 + (v813 ^ 0x3F84D5B5) + v44;
          v48 = __ROR4__(v35 ^ v46, 8);
          v49 = __ROR4__(v40 ^ v47, 8);
          v50 = __ROR4__(v36 ^ v882, 7);
          v51 = v47 + (v817 ^ 0x82EFA98) + v50;
          v52 = v41 + (v833 ^ 0xBE5466CF) + v878;
          v884 = v43 + v49;
          v900 = v37 + v48;
          v53 = __ROR4__(v876 ^ v52, 8);
          v54 = __ROR4__(v48 ^ v51, 16);
          v55 = v45 + v53;
          v56 = __ROR4__(v38 ^ v900, 7);
          v57 = __ROR4__(v44 ^ (v43 + v49), 7);
          v58 = v878 ^ v55;
          v59 = v55 + v54;
          v880 = v841 ^ 0x452821E6;
          v60 = __ROR4__(v58, 7);
          v899 = v835 ^ 0xB5470917;
          v61 = v52 + (v841 ^ 0x452821E6) + v56;
          v62 = v42 + (v835 ^ 0xB5470917) + v60;
          v63 = __ROR4__(v50 ^ v59, 12);
          v64 = __ROR4__(v49 ^ v62, 16);
          v877 = v844 ^ 0xBE5466CF;
          v65 = v46 + (v844 ^ 0xBE5466CF) + v57;
          v66 = __ROR4__(v53 ^ v65, 16);
          v902 = v856 ^ 0xC97C50DD;
          v904 = v63 + v51 + (v856 ^ 0xC97C50DD);
          v906 = __ROR4__(v54 ^ v904, 8);
          v886 = __ROR4__(v881 ^ v61, 16);
          v903 = v884 + v886;
          v67 = __ROR4__(v56 ^ (v884 + v886), 12);
          v68 = v900 + v64;
          v69 = v882 + v66;
          v70 = __ROR4__(v60 ^ (v900 + v64), 12);
          v71 = __ROR4__(v57 ^ (v882 + v66), 12);
          v907 = v59 + v906;
          v901 = v813 ^ 0x38D01377;
          v72 = __ROR4__(v63 ^ (v59 + v906), 7);
          v73 = v65 + (v847 ^ 0x3F84D5B5) + v71;
          v879 = v847 ^ 0x3F84D5B5;
          v74 = v61 + (v851 ^ 0xA4093822) + v67;
          v885 = __ROR4__(v66 ^ v73, 8);
          v75 = v62 + (v813 ^ 0x38D01377) + v70;
          v883 = v64 ^ v75;
          v76 = v75 + (v833 ^ 0xEC4E6C89) + v72;
          v77 = __ROR4__(v886 ^ v74, 8);
          v78 = __ROR4__(v883, 8);
          v79 = __ROR4__(v77 ^ v76, 16);
          v909 = v903 + v77;
          v80 = v68 + v78;
          v81 = __ROR4__(v67 ^ (v903 + v77), 7);
          v82 = __ROR4__(v70 ^ v80, 7);
          v83 = v69 + v885;
          v84 = v71 ^ v83;
          v85 = v83 + v79;
          v86 = __ROR4__(v84, 7);
          v87 = __ROR4__(v72 ^ v85, 12);
          v905 = v839 ^ 0x3707344;
          v88 = v73 + (v843 ^ 0xC0AC29B7) + v81;
          v89 = (v839 ^ 0x3707344) + v904 + v86;
          v90 = v74 + (v819 ^ 0x13198A2E) + v82;
          v91 = __ROR4__(v78 ^ v89, 16);
          v910 = v76 + (v852 ^ 0x34E90C6C) + v87;
          v92 = __ROR4__(v885 ^ v90, 16);
          v93 = __ROR4__(v906 ^ v88, 16);
          v912 = __ROR4__(v79 ^ v910, 8);
          v94 = v80 + v93;
          v887 = __ROR4__(v81 ^ v94, 12);
          v95 = v907 + v92;
          v96 = __ROR4__(v82 ^ (v907 + v92), 12);
          v97 = __ROR4__(v86 ^ (v909 + v91), 12);
          v914 = v85 + v912;
          v98 = __ROR4__(v87 ^ (v85 + v912), 7);
          v99 = v90 + (v853 ^ 0x243F6A88) + v96;
          v100 = v89 + (v818 ^ 0x299F31D0) + v97;
          v1001 = v853 ^ 0x243F6A88;
          v101 = v88 + (v846 ^ 0x85A308D3) + v887;
          v102 = __ROR4__(v93 ^ v101, 8);
          v920 = __ROR4__(v91 ^ v100, 8);
          v103 = v909 + v91 + v920;
          v916 = v94 + v102;
          v104 = __ROR4__(v887 ^ (v94 + v102), 7);
          v105 = v100 + (v813 ^ 0xC97C50DD) + v98;
          v106 = __ROR4__(v92 ^ v99, 8);
          v107 = __ROR4__(v102 ^ v105, 16);
          v1002 = v813 ^ 0xC97C50DD;
          v108 = v95 + v106;
          v908 = v108 + v107;
          v109 = __ROR4__(v96 ^ v108, 7);
          v110 = __ROR4__(v97 ^ v103, 7);
          v911 = v839 ^ 0x13198A2E;
          v111 = v101 + (v833 ^ 0x452821E6) + v110;
          v112 = __ROR4__(v98 ^ (v108 + v107), 12);
          v113 = (v839 ^ 0x13198A2E) + v910 + v109;
          v114 = __ROR4__(v106 ^ v111, 16);
          v115 = v112 + v105 + (v817 ^ 0xB5470917);
          v116 = __ROR4__(v912 ^ (v99 + (v846 ^ 0x243F6A88) + v104), 16);
          v922 = __ROR4__(v107 ^ v115, 8);
          v117 = v103 + v116;
          v118 = __ROR4__(v920 ^ v113, 16);
          v119 = v914;
          v915 = __ROR4__(v104 ^ v117, 12);
          v120 = v916 + v118;
          v121 = v119 + v114;
          v122 = __ROR4__(v110 ^ v121, 12);
          v917 = __ROR4__(v109 ^ (v916 + v118), 12);
          v913 = v853 ^ 0x299F31D0;
          v123 = v111 + (v851 ^ 0x34E90C6C) + v122;
          v124 = __ROR4__(v112 ^ (v908 + v922), 7);
          v125 = __ROR4__(v114 ^ v123, 8);
          v126 = v113 + (v853 ^ 0x299F31D0) + v917;
          v127 = v121 + v125;
          v128 = v99 + (v846 ^ 0x243F6A88) + v104 + (v819 ^ 0xC0AC29B7) + v915;
          v129 = __ROR4__(v118 ^ v126, 8);
          v130 = v120 + v129;
          v131 = __ROR4__(v116 ^ v128, 8);
          v928 = v117 + v131;
          v132 = v126 + (v852 ^ 0x85A308D3) + v124;
          v133 = __ROR4__(v915 ^ (v117 + v131), 7);
          v134 = __ROR4__(v131 ^ v132, 16);
          v135 = __ROR4__(v122 ^ v127, 7);
          v136 = v127 + v134;
          v137 = __ROR4__(v124 ^ v136, 12);
          v888 = __ROR4__(v917 ^ v130, 7);
          v921 = v835 ^ 0xA4093822;
          v918 = v123 + (v847 ^ 0x3F84D5B5) + v133;
          v138 = v115 + (v835 ^ 0xA4093822) + v135;
          v139 = __ROR4__(v922 ^ v918, 16);
          v140 = v130 + v139;
          v141 = v132 + (v843 ^ 0xEC4E6C89) + v137;
          v142 = __ROR4__(v125 ^ (v128 + (v818 ^ 0x82EFA98) + v888), 16);
          v926 = __ROR4__(v134 ^ v141, 8);
          v143 = __ROR4__(v133 ^ v140, 12);
          v934 = v141;
          v144 = __ROR4__(v129 ^ v138, 16);
          v145 = v908 + v922 + v142;
          v146 = __ROR4__(v888 ^ v145, 12);
          v147 = __ROR4__(v135 ^ (v928 + v144), 12);
          v924 = v136 + v926;
          v148 = v918 + (v844 ^ 0xBE5466CF) + v143;
          v923 = v841 ^ 0x38D01377;
          v919 = v856 ^ 0x3707344;
          v149 = __ROR4__(v137 ^ (v136 + v926), 7);
          v150 = v138 + (v841 ^ 0x38D01377) + v147;
          v151 = v128 + (v818 ^ 0x82EFA98) + v888 + (v856 ^ 0x3707344) + v146;
          v152 = __ROR4__(v142 ^ v151, 8);
          v153 = __ROR4__(v139 ^ v148, 8);
          v154 = v145 + v152;
          v931 = v140 + v153;
          v155 = v144 ^ v150;
          v156 = __ROR4__(v146 ^ v154, 7);
          v157 = v150 + (v833 ^ 0x3F84D5B5) + v149;
          v158 = __ROR4__(v155, 8);
          v889 = __ROR4__(v143 ^ (v140 + v153), 7);
          v159 = __ROR4__(v153 ^ v157, 16);
          v160 = v928 + v144 + v158;
          v161 = v154 + v159;
          v162 = __ROR4__(v147 ^ v160, 7);
          v163 = __ROR4__(v149 ^ v161, 12);
          v164 = v148 + (v852 ^ 0x38D01377) + v162;
          v165 = __ROR4__(v152 ^ v164, 16);
          v166 = v151 + (v818 ^ 0x85A308D3) + v889;
          v935 = (v817 ^ 0xC0AC29B7) + v934 + v156;
          v927 = v844 ^ 0x34E90C6C;
          v940 = v163 + v157 + (v844 ^ 0x34E90C6C);
          v937 = __ROR4__(v158 ^ v935, 16);
          v167 = __ROR4__(v926 ^ v166, 16);
          v929 = __ROR4__(v159 ^ v940, 8);
          v168 = v931 + v937;
          v169 = v160 + v167;
          v170 = v924 + v165;
          v171 = __ROR4__(v156 ^ (v931 + v937), 12);
          v172 = __ROR4__(v889 ^ v169, 12);
          v173 = __ROR4__(v162 ^ (v924 + v165), 12);
          v890 = v161 + v929;
          v174 = v166 + (v843 ^ 0x3707344) + v172;
          v925 = v835 ^ 0xEC4E6C89;
          v175 = __ROR4__(v167 ^ v174, 8);
          v176 = v935 + (v846 ^ 0xC97C50DD) + v171;
          v177 = __ROR4__(v163 ^ (v161 + v929), 7);
          v932 = v164 + (v835 ^ 0xEC4E6C89) + v173;
          v178 = __ROR4__(v165 ^ v932, 8);
          v939 = v169 + v175;
          v936 = v841 ^ 0x243F6A88;
          v179 = v170 + v178;
          v180 = __ROR4__(v172 ^ (v169 + v175), 7);
          v181 = __ROR4__(v173 ^ v179, 7);
          v182 = __ROR4__(v937 ^ v176, 8);
          v183 = v176 + (v841 ^ 0x243F6A88) + v177;
          v184 = __ROR4__(v175 ^ v183, 16);
          v185 = v168 + v182;
          v186 = v179 + v184;
          v187 = __ROR4__(v171 ^ v185, 7);
          v1003 = v853 ^ 0x82EFA98;
          v938 = v813 ^ 0x452821E6;
          v188 = v932 + (v853 ^ 0x82EFA98) + v180;
          v933 = v839 ^ 0xBE5466CF;
          v189 = v174 + (v839 ^ 0xBE5466CF) + v187;
          v190 = (v813 ^ 0x452821E6) + v940 + v181;
          v191 = __ROR4__(v178 ^ v189, 16);
          v192 = __ROR4__(v182 ^ v190, 16);
          v941 = __ROR4__(v177 ^ v186, 12);
          v193 = __ROR4__(v929 ^ v188, 16);
          v194 = v185 + v193;
          v983 = v183 + (v819 ^ 0xA4093822) + v941;
          v195 = __ROR4__(v180 ^ v194, 12);
          v957 = __ROR4__(v184 ^ v983, 8);
          v196 = v939 + v192;
          v197 = v890 + v191;
          v976 = __ROR4__(v187 ^ (v890 + v191), 12);
          v930 = v856 ^ 0x13198A2E;
          v198 = __ROR4__(v181 ^ (v939 + v192), 12);
          v966 = v186 + v957;
          v948 = v188 + (v856 ^ 0x13198A2E) + v195;
          v891 = v847 ^ 0x299F31D0;
          v199 = __ROR4__(v941 ^ (v186 + v957), 7);
          v200 = v198 + v190 + (v851 ^ 0xB5470917);
          v201 = __ROR4__(v192 ^ v200, 8);
          v202 = v189 + (v847 ^ 0x299F31D0) + v976;
          v203 = v196 + v201;
          v204 = (v847 ^ 0xB5470917) + v200 + v199;
          v205 = __ROR4__(v193 ^ v948, 8);
          v206 = __ROR4__(v191 ^ v202, 8);
          v207 = v194 + v205;
          v208 = __ROR4__(v205 ^ v204, 16);
          v209 = v197 + v206;
          v210 = v976 ^ v209;
          v977 = __ROR4__(v198 ^ v203, 7);
          v211 = v209 + v208;
          v212 = __ROR4__(v195 ^ v207, 7);
          v213 = __ROR4__(v210, 7);
          v214 = v202 + (v839 ^ 0xEC4E6C89) + v212;
          v215 = v983;
          v984 = __ROR4__(v199 ^ v211, 12);
          v216 = v957;
          v217 = (v853 ^ 0xA4093822) + v215 + v213;
          v949 = v948 + (v835 ^ 0x243F6A88);
          v958 = __ROR4__(v201 ^ v217, 16);
          v218 = __ROR4__(v216 ^ v214, 16);
          v219 = v203 + v218;
          v220 = __ROR4__(v212 ^ v219, 12);
          v221 = __ROR4__(v206 ^ (v949 + v977), 16);
          v994 = v204 + (v813 ^ 0xBE5466CF) + v984;
          v1004 = __ROR4__(v208 ^ v994, 8);
          v222 = v207 + v958;
          v223 = __ROR4__(v213 ^ (v207 + v958), 12);
          v224 = v966 + v221;
          v225 = __ROR4__(v977 ^ (v966 + v221), 12);
          v1005 = v211 + v1004;
          v226 = __ROR4__(v984 ^ (v211 + v1004), 7);
          v227 = __ROR4__(v218 ^ (v214 + (v852 ^ 0x299F31D0) + v220), 8);
          v967 = v214 + (v852 ^ 0x299F31D0) + v220;
          v228 = v217 + (v841 ^ 0x13198A2E) + v223;
          v229 = v949 + v977 + (v819 ^ 0x38D01377) + v225;
          v230 = __ROR4__(v221 ^ v229, 8);
          v985 = v219 + v227;
          v231 = __ROR4__(v958 ^ v228, 8);
          v232 = v228 + (v856 ^ 0x452821E6) + v226;
          v233 = v225 ^ (v224 + v230);
          v234 = v222 + v231;
          v235 = __ROR4__(v227 ^ v232, 16);
          v236 = v224 + v230 + v235;
          v237 = __ROR4__(v220 ^ v985, 7);
          v238 = __ROR4__(v226 ^ v236, 12);
          v239 = __ROR4__(v223 ^ v234, 7);
          v240 = __ROR4__(v233, 7);
          v241 = v229 + (v844 ^ 0x85A308D3) + v237;
          v242 = (v818 ^ 0xC97C50DD) + v994 + v240;
          v243 = v967 + (v833 ^ 0xC0AC29B7) + v239;
          v244 = __ROR4__(v230 ^ v243, 16);
          v245 = __ROR4__(v1004 ^ v241, 16);
          v968 = v234 + v245;
          v995 = v232 + (v851 ^ 0x82EFA98) + v238;
          v1009 = __ROR4__(v231 ^ v242, 16);
          v246 = v985;
          v986 = v1005 + v244;
          v1006 = __ROR4__(v235 ^ v995, 8);
          v1011 = v246 + v1009;
          v247 = __ROR4__(v237 ^ (v234 + v245), 12);
          v248 = __ROR4__(v239 ^ v986, 12);
          v249 = __ROR4__(v240 ^ (v246 + v1009), 12);
          v250 = (v843 ^ 0x3F84D5B5) + v241;
          v251 = v236 + v1006;
          v252 = v247 + v250;
          v1008 = v251;
          v253 = v248 + v243 + (v846 ^ 0x34E90C6C);
          v254 = v242 + (v817 ^ 0x3707344) + v249;
          v255 = __ROR4__(v245 ^ (v247 + v250), 8);
          v256 = __ROR4__(v244 ^ v253, 8);
          v257 = __ROR4__(v238 ^ v1008, 7);
          v258 = __ROR4__(v1009 ^ v254, 8);
          v259 = (v851 ^ 0x3707344) + v254 + v257;
          v260 = v968 + v255;
          v261 = v986;
          v987 = v256;
          v262 = __ROR4__(v255 ^ v259, 16);
          v263 = v261 + v256 + v262;
          v264 = __ROR4__(v248 ^ (v261 + v256), 7);
          v265 = __ROR4__(v247 ^ v260, 7);
          v266 = (v856 ^ 0xBE5466CF) + v253 + v265;
          v969 = __ROR4__(v249 ^ (v1011 + v258), 7);
          v267 = __ROR4__(v257 ^ v263, 12);
          v268 = v1006;
          v1007 = v853 ^ 0xC0AC29B7;
          v269 = __ROR4__(v268 ^ v266, 16);
          v270 = v252 + (v853 ^ 0xC0AC29B7) + v969;
          v271 = v987;
          v978 = v259 + (v818 ^ 0x452821E6) + v267;
          v272 = (v819 ^ 0x34E90C6C) + v995 + v264;
          v273 = v1011 + v258 + v269;
          v274 = __ROR4__(v258 ^ v272, 16);
          v996 = v273;
          v275 = __ROR4__(v262 ^ v978, 8);
          v276 = v260 + v274;
          v988 = v263 + v275;
          v277 = __ROR4__(v265 ^ v273, 12);
          v959 = v266 + (v847 ^ 0x82EFA98) + v277;
          v278 = __ROR4__(v271 ^ v270, 16);
          v279 = __ROR4__(v264 ^ (v260 + v274), 12);
          v280 = v1008 + v278;
          v281 = (v833 ^ 0x243F6A88) + v272 + v279;
          v282 = __ROR4__(v274 ^ v281, 8);
          v283 = __ROR4__(v969 ^ (v1008 + v278), 12);
          v284 = __ROR4__(v267 ^ v988, 7);
          v285 = v276 + v282;
          v286 = __ROR4__(v269 ^ v959, 8);
          v287 = v283 + v270 + (v846 ^ 0x13198A2E);
          v997 = v996 + v286;
          v970 = __ROR4__(v279 ^ v285, 7);
          v288 = v281 + (v813 ^ 0x3F84D5B5) + v284;
          v289 = __ROR4__(v286 ^ v288, 16);
          v290 = __ROR4__(v278 ^ v287, 8);
          v291 = __ROR4__(v277 ^ v997, 7);
          v292 = v280 + v290;
          v293 = v283 ^ v292;
          v294 = v292 + v289;
          v295 = __ROR4__(v293, 7);
          v296 = __ROR4__(v284 ^ v294, 12);
          v297 = (v843 ^ 0x38D01377) + v978 + v295;
          v298 = __ROR4__(v282 ^ v297, 16);
          v299 = (v841 ^ 0xC97C50DD) + v287 + v291;
          v950 = v959 + (v852 ^ 0x299F31D0) + v970;
          v1010 = v288 + (v844 ^ 0xB5470917) + v296;
          v300 = __ROR4__(v275 ^ v299, 16);
          v301 = __ROR4__(v290 ^ v950, 16);
          v960 = __ROR4__(v289 ^ v1010, 8);
          v302 = v285 + v300;
          v303 = v988 + v301;
          v304 = __ROR4__(v291 ^ v302, 12);
          v979 = v997 + v298;
          v305 = __ROR4__(v970 ^ (v988 + v301), 12);
          v971 = v294 + v960;
          v306 = __ROR4__(v295 ^ (v997 + v298), 12);
          v307 = __ROR4__(v296 ^ (v294 + v960), 7);
          v308 = v297 + (v835 ^ 0x85A308D3) + v306;
          v942 = v304 + v299 + (v817 ^ 0xA4093822);
          v309 = __ROR4__(v298 ^ v308, 8);
          v310 = v305 + v950 + (v839 ^ 0xEC4E6C89);
          v311 = __ROR4__(v300 ^ v942, 8);
          v951 = __ROR4__(v301 ^ v310, 8);
          v312 = v302 + v311;
          v313 = __ROR4__(v304 ^ v312, 7);
          v314 = (v841 ^ 0xBE5466CF) + v307 + v308;
          v989 = v312;
          v315 = __ROR4__(v311 ^ v314, 16);
          v316 = v303 + v951;
          v317 = v305 ^ v316;
          v318 = v316 + v315;
          v319 = v979 + v309;
          v320 = (v843 ^ 0xB5470917) + v310;
          v321 = __ROR4__(v307 ^ v318, 12);
          v322 = __ROR4__(v306 ^ (v979 + v309), 7);
          v323 = v320 + v313;
          v324 = __ROR4__(v317, 7);
          v325 = (v844 ^ 0xC97C50DD) + v1010 + v324;
          v326 = __ROR4__(v309 ^ v325, 16);
          v327 = (v846 ^ 0x299F31D0) + v942;
          v328 = __ROR4__(v960 ^ v323, 16);
          v943 = v319 + v328;
          v329 = v327 + v322;
          v330 = v321 + (v847 ^ 0xA4093822) + v314;
          v998 = v330;
          v331 = __ROR4__(v951 ^ v329, 16);
          v952 = __ROR4__(v315 ^ v330, 8);
          v332 = v324 ^ (v989 + v326);
          v990 = v989 + v326;
          v333 = __ROR4__(v313 ^ (v319 + v328), 12);
          v334 = v971 + v331;
          v335 = __ROR4__(v332, 12);
          v336 = (v813 ^ 0x85A308D3) + v323 + v333;
          v961 = v318 + v952;
          v337 = __ROR4__(v321 ^ (v318 + v952), 7);
          v338 = __ROR4__(v322 ^ (v971 + v331), 12);
          v339 = v335 + (v817 ^ 0x3F84D5B5) + v325;
          v340 = (v839 ^ 0xC0AC29B7) + v329 + v338;
          v341 = __ROR4__(v328 ^ v336, 8);
          v342 = __ROR4__(v331 ^ v340, 8);
          v343 = __ROR4__(v326 ^ v339, 8);
          v344 = v337 + (v835 ^ 0x13198A2E) + v339;
          v345 = v334 + v342;
          v346 = __ROR4__(v341 ^ v344, 16);
          v347 = v943 + v341;
          v944 = __ROR4__(v338 ^ v345, 7);
          v972 = v347;
          v348 = v345 + v346;
          v349 = v990 + v343;
          v350 = __ROR4__(v333 ^ v347, 7);
          v351 = __ROR4__(v337 ^ v348, 12);
          v352 = __ROR4__(v335 ^ (v990 + v343), 7);
          v353 = v340 + (v819 ^ 0xEC4E6C89) + v350;
          v354 = (v853 ^ 0x38D01377) + v344;
          v355 = v336 + (v856 ^ 0x3707344) + v352;
          v356 = (v851 ^ 0x34E90C6C) + v998 + v944;
          v357 = __ROR4__(v342 ^ v355, 16);
          v358 = __ROR4__(v343 ^ v356, 16);
          v359 = __ROR4__(v952 ^ v353, 16);
          v980 = v351 + v354;
          v360 = v349 + v359;
          v361 = __ROR4__(v346 ^ (v351 + v354), 8);
          v362 = v961 + v357;
          v953 = v348 + v361;
          v363 = __ROR4__(v352 ^ (v961 + v357), 12);
          v962 = v972 + v358;
          v364 = __ROR4__(v350 ^ v360, 12);
          v991 = v361;
          v365 = v944;
          v945 = v363;
          v366 = __ROR4__(v365 ^ (v972 + v358), 12);
          v367 = __ROR4__(v351 ^ v953, 7);
          v368 = v356 + (v833 ^ 0x452821E6) + v366;
          v369 = v353 + (v852 ^ 0x243F6A88) + v364;
          v370 = v363 + v355 + (v818 ^ 0x82EFA98);
          v371 = __ROR4__(v359 ^ v369, 8);
          v372 = __ROR4__(v357 ^ v370, 8);
          v373 = __ROR4__(v358 ^ v368, 8);
          v374 = (v818 ^ 0x38D01377) + v367 + v368;
          v973 = v372;
          v375 = v371 ^ v374;
          v376 = v371 + v360;
          v377 = v362 + v372;
          v378 = __ROR4__(v364 ^ v376, 7);
          v379 = __ROR4__(v375, 16);
          v380 = __ROR4__(v945 ^ v377, 7);
          v381 = (v852 ^ 0x3F84D5B5) + v370 + v378;
          v382 = v377 + v379;
          v383 = __ROR4__(v366 ^ (v962 + v373), 7);
          v384 = __ROR4__(v367 ^ v382, 12);
          v385 = (v846 ^ 0x85A308D3) + v980 + v380;
          v981 = __ROR4__(v373 ^ v385, 16);
          v386 = __ROR4__(v991 ^ v381, 16);
          v387 = (v817 ^ 0x34E90C6C) + v369 + v383;
          v992 = v384 + v374 + (v835 ^ 0x3707344);
          v388 = __ROR4__(v973 ^ v387, 16);
          v999 = __ROR4__(v379 ^ v992, 8);
          v389 = v376 + v981;
          v974 = v962 + v373 + v386;
          v390 = __ROR4__(v380 ^ (v376 + v981), 12);
          v391 = __ROR4__(v378 ^ v974, 12);
          v392 = v381 + (v844 ^ 0xEC4E6C89) + v391;
          v393 = v382 + v999;
          v394 = __ROR4__(v383 ^ (v953 + v388), 12);
          v395 = __ROR4__(v384 ^ v393, 7);
          v396 = v385 + (v843 ^ 0xC0AC29B7) + v390;
          v397 = (v833 ^ 0xC97C50DD) + v387 + v394;
          v946 = __ROR4__(v388 ^ v397, 8);
          v398 = __ROR4__(v386 ^ v392, 8);
          v399 = __ROR4__(v981 ^ v396, 8);
          v400 = v395 + (v851 ^ 0x82EFA98) + v396;
          v963 = v389 + v399;
          v982 = v974 + v398;
          v401 = __ROR4__(v398 ^ v400, 16);
          v402 = __ROR4__(v390 ^ (v389 + v399), 7);
          v403 = v953 + v388 + v946;
          v404 = v394 ^ v403;
          v954 = __ROR4__(v391 ^ (v974 + v398), 7);
          v405 = v403 + v401;
          v406 = v392 + (v813 ^ 0xA4093822) + v402;
          v407 = __ROR4__(v395 ^ v405, 12);
          v408 = __ROR4__(v404, 7);
          v975 = v853 ^ 0xBE5466CF;
          v409 = (v839 ^ 0x243F6A88) + v397 + v954;
          v410 = __ROR4__(v399 ^ ((v853 ^ 0xBE5466CF) + v992 + v408), 16);
          v411 = v999;
          v1000 = (v853 ^ 0xBE5466CF) + v992 + v408;
          v412 = __ROR4__(v946 ^ v406, 16);
          v993 = v407 + v400 + (v856 ^ 0x452821E6);
          v413 = __ROR4__(v411 ^ v409, 16);
          v854 = __ROR4__(v401 ^ v993, 8);
          v414 = v393 + v412;
          v415 = __ROR4__(v402 ^ v414, 12);
          v964 = v963 + v413;
          v824 = v982 + v410;
          v416 = __ROR4__(v954 ^ v964, 12);
          v947 = v405 + v854;
          v417 = __ROR4__(v408 ^ (v982 + v410), 12);
          v418 = (v841 ^ 0xB5470917) + v406 + v415;
          v419 = v847;
          v848 = __ROR4__(v412 ^ v418, 8);
          v420 = v409 + (v819 ^ 0x299F31D0) + v416;
          v421 = __ROR4__(v413 ^ v420, 8);
          v820 = v419 ^ 0x13198A2E;
          v422 = __ROR4__(v407 ^ (v405 + v854), 7);
          v423 = v1000 + (v419 ^ 0x13198A2E) + v417;
          v424 = __ROR4__(v410 ^ v423, 8);
          v425 = (v819 ^ 0x452821E6) + v423 + v422;
          v426 = __ROR4__(v421 ^ v425, 16);
          v427 = v414 + v848;
          v428 = v415 ^ v427;
          v429 = v427 + v426;
          v430 = __ROR4__(v428, 7);
          v955 = v964 + v421;
          v431 = v824 + v424;
          v825 = __ROR4__(v416 ^ (v964 + v421), 7);
          v432 = __ROR4__(v417 ^ v431, 7);
          v433 = v856;
          v857 = v844 ^ 0x38D01377;
          v434 = __ROR4__(v422 ^ v429, 12);
          v435 = (v833 ^ 0x3707344) + v993 + v430;
          v436 = v418 + (v844 ^ 0x38D01377) + v825;
          v437 = v420 + (v433 ^ 0xB5470917) + v432;
          v965 = (v851 ^ 0x243F6A88) + v425 + v434;
          v438 = __ROR4__(v424 ^ v435, 16);
          v439 = __ROR4__(v854 ^ v436, 16);
          v440 = v955;
          v441 = __ROR4__(v848 ^ v437, 16);
          v956 = v431 + v439;
          v849 = v440 + v438;
          v855 = __ROR4__(v426 ^ v965, 8);
          v442 = __ROR4__(v430 ^ (v440 + v438), 12);
          v443 = __ROR4__(v825 ^ (v431 + v439), 12);
          v444 = v947 + v441;
          v445 = __ROR4__(v432 ^ (v947 + v441), 12);
          v826 = v835 ^ 0x3F84D5B5;
          v446 = v437 + (v813 ^ 0x82EFA98) + v445;
          v799 = v429 + v855;
          v447 = __ROR4__(v434 ^ (v429 + v855), 7);
          v448 = v436 + (v835 ^ 0x3F84D5B5) + v443;
          v449 = __ROR4__(v441 ^ v446, 8);
          v450 = v435 + (v818 ^ 0x34E90C6C) + v442;
          v451 = __ROR4__(v438 ^ v450, 8);
          v452 = __ROR4__(v439 ^ v448, 8);
          v453 = v444 + v449;
          v454 = __ROR4__(v445 ^ v453, 7);
          v455 = v447 + v450 + (v843 ^ 0xA4093822);
          v828 = v849 + v451;
          v456 = __ROR4__(v452 ^ v455, 16);
          v457 = v453 + v456;
          v458 = v452 + v956;
          v737 = __ROR4__(v442 ^ (v849 + v451), 7);
          v459 = __ROR4__(v443 ^ v458, 7);
          v460 = __ROR4__(v447 ^ v457, 12);
          v461 = v965 + v891 + v454;
          v462 = v446 + (v846 ^ 0x13198A2E) + v459;
          v836 = v448 + (v817 ^ 0xEC4E6C89) + v737;
          v463 = __ROR4__(v449 ^ v836, 16);
          v842 = v460 + (v841 ^ 0x85A308D3) + v455;
          v464 = __ROR4__(v855 ^ v462, 16);
          v465 = __ROR4__(v451 ^ v461, 16);
          v466 = v456 ^ v842;
          v467 = v458 + v465;
          v850 = v465;
          v468 = v799 + v463;
          v800 = __ROR4__(v466, 8);
          v469 = __ROR4__(v737 ^ v468, 12);
          v738 = __ROR4__(v454 ^ v467, 12);
          v829 = v828 + v464;
          v470 = __ROR4__(v459 ^ v829, 12);
          v471 = (v852 ^ 0xC97C50DD) + v836 + v469;
          v845 = v457 + v800;
          v472 = v461 + (v839 ^ 0xBE5466CF) + v738;
          v473 = __ROR4__(v463 ^ v471, 8);
          v474 = __ROR4__(v460 ^ (v457 + v800), 7);
          v475 = v462 + v1007 + v470;
          v476 = v468 + v473;
          v477 = __ROR4__(v850 ^ v472, 8);
          v478 = v829;
          v479 = __ROR4__(v464 ^ v475, 8);
          v480 = v472 + v474 + (v843 ^ 0x299F31D0);
          v837 = v473;
          v830 = v467 + v477;
          v481 = v479 + v478;
          v482 = __ROR4__(v479 ^ v480, 16);
          v483 = __ROR4__(v469 ^ v476, 7);
          v484 = __ROR4__(v470 ^ (v479 + v478), 7);
          v485 = __ROR4__(v738 ^ v830, 7);
          v486 = v820;
          v821 = v476 + v482;
          v487 = (v852 ^ 0x82EFA98) + v842 + v483;
          v488 = v475 + v486 + v485;
          v489 = v471 + (v851 ^ 0xA4093822) + v484;
          v490 = __ROR4__(v474 ^ (v476 + v482), 12);
          v491 = __ROR4__(v477 ^ v487, 16);
          v492 = v481 + v491;
          v493 = (v839 ^ 0x85A308D3) + v480 + v490;
          v494 = v837;
          v838 = v493;
          v495 = __ROR4__(v800 ^ v489, 16);
          v496 = __ROR4__(v494 ^ v488, 16);
          v753 = __ROR4__(v482 ^ v493, 8);
          v497 = __ROR4__(v485 ^ (v845 + v496), 12);
          v831 = v830 + v495;
          v498 = __ROR4__(v831 ^ v484, 12);
          v499 = __ROR4__(v483 ^ v492, 12);
          v500 = v487 + v896 + v499;
          v501 = __ROR4__(v491 ^ v500, 8);
          v840 = v821 + v753;
          v502 = v489 + v880 + v498;
          v503 = v488 + v975 + v497;
          v504 = __ROR4__(v495 ^ v502, 8);
          v505 = __ROR4__(v490 ^ (v821 + v753), 7);
          v822 = v492 + v501;
          v506 = v505 + v500 + (v818 ^ 0xC0AC29B7);
          v507 = v504 ^ v506;
          v508 = v504 + v831;
          v509 = __ROR4__(v496 ^ v503, 8);
          v510 = __ROR4__(v507, 16);
          v511 = __ROR4__(v499 ^ (v492 + v501), 7);
          v512 = __ROR4__(v498 ^ v508, 7);
          v513 = v511 + v502 + v826;
          v514 = __ROR4__(v497 ^ (v845 + v496 + v509), 7);
          v801 = v845 + v496 + v509 + v510;
          v515 = __ROR4__(v801 ^ v505, 12);
          v739 = v512 + v503 + (v813 ^ 0x34E90C6C);
          v516 = (v817 ^ 0x243F6A88) + v838 + v514;
          v763 = __ROR4__(v509 ^ v513, 16);
          v788 = v506 + (v846 ^ 0x3707344) + v515;
          v517 = __ROR4__(v739 ^ v753, 16);
          v518 = __ROR4__(v501 ^ v516, 16);
          v519 = v514 ^ (v508 + v518);
          v814 = v508 + v518;
          v520 = __ROR4__(v510 ^ v788, 8);
          v521 = __ROR4__(v519, 12);
          v522 = v822 + v517;
          v523 = __ROR4__(v511 ^ (v840 + v763), 12);
          v524 = __ROR4__(v512 ^ (v822 + v517), 12);
          v525 = (v819 ^ 0xC97C50DD) + v516 + v521;
          v526 = v513 + v857 + v523;
          v527 = __ROR4__(v518 ^ v525, 8);
          v754 = v801 + v520;
          v528 = (v833 ^ 0xB5470917) + v739 + v524;
          v529 = __ROR4__(v517 ^ v528, 8);
          v530 = v522 + v529;
          v775 = __ROR4__(v515 ^ (v801 + v520), 7);
          v531 = __ROR4__(v763 ^ v526, 8);
          v740 = __ROR4__(v524 ^ v530, 7);
          v532 = v814 + v527;
          v533 = v525 + v775 + v896;
          v534 = __ROR4__(v521 ^ (v814 + v527), 7);
          v535 = v840 + v763 + v531;
          v536 = __ROR4__(v523 ^ v535, 7);
          v537 = __ROR4__(v529 ^ v533, 16);
          v538 = v894 + v788 + v536;
          v539 = __ROR4__(v527 ^ v538, 16);
          v764 = v528 + (v819 ^ 0x85A308D3) + v534;
          v540 = v526 + v893 + v740;
          v541 = __ROR4__(v520 ^ v540, 16);
          v542 = v775;
          v776 = v535 + v537;
          v543 = __ROR4__(v531 ^ v764, 16);
          v802 = v530 + v539;
          v544 = __ROR4__(v542 ^ (v535 + v537), 12);
          v545 = v533 + (v852 ^ 0x82EFA98) + v544;
          v546 = __ROR4__(v536 ^ (v530 + v539), 12);
          v789 = v532 + v541;
          v755 = v754 + v543;
          v547 = __ROR4__(v537 ^ v545, 8);
          v548 = __ROR4__(v740 ^ (v532 + v541), 12);
          v549 = __ROR4__(v534 ^ v755, 12);
          v550 = v895 + v538 + v546;
          v551 = v540 + (v818 ^ 0x13198A2E) + v548;
          v552 = v764 + (v843 ^ 0x243F6A88);
          v765 = __ROR4__(v539 ^ v550, 8);
          v553 = v552 + v549;
          v554 = __ROR4__(v541 ^ v551, 8);
          v777 = v776 + v547;
          v741 = __ROR4__(v543 ^ (v552 + v549), 8);
          v555 = __ROR4__(v544 ^ v777, 7);
          v556 = v546 ^ (v802 + v765);
          v803 = v802 + v765;
          v557 = v550 + (v846 ^ 0xC97C50DD) + v555;
          v808 = __ROR4__(v556, 7);
          v558 = v789 + v554;
          v559 = __ROR4__(v554 ^ v557, 16);
          v790 = v558;
          v560 = __ROR4__(v548 ^ v558, 7);
          v561 = __ROR4__(v549 ^ (v755 + v741), 7);
          v562 = v755 + v741 + v559;
          v563 = v808 + v551 + v898;
          v564 = __ROR4__(v555 ^ v562, 12);
          v565 = (v851 ^ 0x38D01377) + v553;
          v566 = v873 + v545;
          v567 = v560 + v565;
          v568 = v741;
          v569 = v566 + v561;
          v742 = __ROR4__(v547 ^ (v560 + v565), 16);
          v570 = __ROR4__(v568 ^ v563, 16);
          v571 = __ROR4__(v765 ^ v569, 16);
          v756 = v557 + (v817 ^ 0xC0AC29B7) + v564;
          v766 = v777 + v570;
          v572 = __ROR4__(v808 ^ (v777 + v570), 12);
          v573 = v803 + v742;
          v574 = __ROR4__(v560 ^ (v803 + v742), 12);
          v575 = v790 + v571;
          v576 = __ROR4__(v559 ^ v756, 8);
          v577 = __ROR4__(v561 ^ (v790 + v571), 12);
          v578 = v563 + (v833 ^ 0xBE5466CF) + v572;
          v579 = v562 + v576;
          v580 = v567 + v897 + v574;
          v581 = __ROR4__(v570 ^ v578, 8);
          v582 = __ROR4__(v564 ^ v579, 7);
          v791 = v579;
          v583 = v569 + v875 + v577;
          v584 = __ROR4__(v571 ^ v583, 8);
          v585 = v575 + v584;
          v743 = __ROR4__(v742 ^ v580, 8);
          v586 = __ROR4__(v577 ^ v585, 7);
          v778 = v766 + v581;
          v587 = __ROR4__(v572 ^ (v766 + v581), 7);
          v588 = v573 + v743;
          v589 = __ROR4__(v574 ^ v588, 7);
          v767 = v583 + v582 + (v817 ^ 0x82EFA98);
          v590 = v899 + v756 + v587;
          v591 = __ROR4__(v743 ^ v767, 16);
          v592 = __ROR4__(v584 ^ v590, 16);
          v593 = v580 + v877 + v586;
          v594 = v588 + v592;
          v595 = __ROR4__(v581 ^ v593, 16);
          v596 = v578 + v880 + v589;
          v597 = __ROR4__(v587 ^ v594, 12);
          v779 = v778 + v591;
          v598 = __ROR4__(v582 ^ v779, 12);
          v599 = __ROR4__(v576 ^ v596, 16);
          v600 = v791 + v595;
          v601 = v585 + v599;
          v602 = __ROR4__(v589 ^ v601, 12);
          v792 = v767 + v902 + v598;
          v603 = __ROR4__(v586 ^ v600, 12);
          v768 = __ROR4__(v591 ^ v792, 8);
          v604 = v593 + v879 + v603;
          v605 = v590 + v901 + v597;
          v606 = __ROR4__(v595 ^ v604, 8);
          v607 = __ROR4__(v592 ^ v605, 8);
          v608 = v596 + (v851 ^ 0xA4093822) + v602;
          v609 = v594 + v607;
          v804 = v779 + v768;
          v610 = __ROR4__(v597 ^ v609, 7);
          v611 = __ROR4__(v598 ^ (v779 + v768), 7);
          v612 = __ROR4__(v599 ^ v608, 8);
          v613 = v605 + (v833 ^ 0xEC4E6C89) + v611;
          v614 = v601 + v612;
          v615 = __ROR4__(v612 ^ v613, 16);
          v744 = v600 + v606;
          v616 = __ROR4__(v603 ^ (v600 + v606), 7);
          v617 = __ROR4__(v602 ^ v614, 7);
          v618 = v608 + (v819 ^ 0x13198A2E) + v610;
          v619 = v604 + (v843 ^ 0xC0AC29B7) + v617;
          v620 = __ROR4__(v606 ^ v618, 16);
          v621 = v792 + v905 + v616;
          v757 = v744 + v615;
          v780 = __ROR4__(v607 ^ v621, 16);
          v745 = v804 + v620;
          v622 = __ROR4__(v611 ^ v757, 12);
          v623 = __ROR4__(v768 ^ v619, 16);
          v624 = v613 + (v852 ^ 0x34E90C6C) + v622;
          v625 = v609 + v623;
          v626 = __ROR4__(v610 ^ (v804 + v620), 12);
          v627 = __ROR4__(v615 ^ v624, 8);
          v628 = __ROR4__(v617 ^ v625, 12);
          v629 = v614 + v780;
          v630 = __ROR4__(v616 ^ v629, 12);
          v631 = v618 + v1001 + v626;
          v632 = v619 + (v846 ^ 0x85A308D3) + v628;
          v633 = v757;
          v758 = __ROR4__(v620 ^ v631, 8);
          v634 = v621 + (v818 ^ 0x299F31D0) + v630;
          v769 = v633 + v627;
          v635 = v633 + v627;
          v636 = v780;
          v781 = __ROR4__(v623 ^ v632, 8);
          v637 = __ROR4__(v622 ^ v635, 7);
          v638 = __ROR4__(v636 ^ v634, 8);
          v639 = v629 + v638;
          v793 = v745 + v758;
          v640 = __ROR4__(v626 ^ (v745 + v758), 7);
          v641 = __ROR4__(v630 ^ v639, 7);
          v642 = v634 + v637 + v1002;
          v643 = v625 + v781;
          v644 = v624 + v911 + v640;
          v645 = __ROR4__(v628 ^ v643, 7);
          v746 = v632 + (v833 ^ 0x452821E6) + v641;
          v646 = __ROR4__(v781 ^ v642, 16);
          v647 = v631 + (v846 ^ 0x243F6A88) + v645;
          v782 = __ROR4__(v638 ^ v644, 16);
          v648 = __ROR4__(v627 ^ v647, 16);
          v649 = v639 + v648;
          v805 = v793 + v646;
          v650 = __ROR4__(v637 ^ (v793 + v646), 12);
          v651 = __ROR4__(v645 ^ v649, 12);
          v652 = __ROR4__(v746 ^ v758, 16);
          v794 = v643 + v782;
          v653 = __ROR4__(v640 ^ (v643 + v782), 12);
          v654 = v769 + v652;
          v655 = v642 + (v817 ^ 0xB5470917) + v650;
          v656 = v644 + v913 + v653;
          v657 = __ROR4__(v641 ^ (v769 + v652), 12);
          v658 = v746;
          v747 = __ROR4__(v646 ^ v655, 8);
          v659 = v658 + (v851 ^ 0x34E90C6C) + v657;
          v660 = v647 + (v819 ^ 0xC0AC29B7) + v651;
          v661 = __ROR4__(v652 ^ v659, 8);
          v770 = __ROR4__(v782 ^ v656, 8);
          v662 = v794;
          v663 = __ROR4__(v648 ^ v660, 8);
          v795 = v805 + v747;
          v664 = v654 + v661;
          v783 = v662 + v770;
          v665 = v649 + v663;
          v666 = __ROR4__(v653 ^ (v662 + v770), 7);
          v667 = __ROR4__(v650 ^ (v805 + v747), 7);
          v668 = __ROR4__(v651 ^ v665, 7);
          v669 = v656 + (v852 ^ 0x85A308D3) + v667;
          v670 = __ROR4__(v657 ^ v664, 7);
          v671 = __ROR4__(v663 ^ v669, 16);
          v672 = v660 + (v818 ^ 0x82EFA98) + v666;
          v673 = v664 + v671;
          v674 = __ROR4__(v661 ^ v672, 16);
          v675 = v655 + v921 + v670;
          v676 = __ROR4__(v667 ^ v673, 12);
          v677 = __ROR4__(v770 ^ v675, 16);
          v759 = v659 + v879 + v668;
          v678 = v665 + v677;
          v748 = __ROR4__(v747 ^ v759, 16);
          v796 = v795 + v674;
          v679 = __ROR4__(v666 ^ v796, 12);
          v680 = __ROR4__(v670 ^ v678, 12);
          v771 = v783 + v748;
          v681 = v669 + (v843 ^ 0xEC4E6C89) + v676;
          v784 = __ROR4__(v668 ^ (v783 + v748), 12);
          v682 = v672 + v919 + v679;
          v683 = v675 + v923 + v680;
          v806 = __ROR4__(v671 ^ v681, 8);
          v684 = __ROR4__(v674 ^ v682, 8);
          v685 = __ROR4__(v677 ^ v683, 8);
          v686 = v759 + v877 + v784;
          v687 = v748;
          v749 = __ROR4__(v676 ^ (v806 + v673), 7);
          v760 = v678 + v685;
          v809 = v806 + v673;
          v688 = __ROR4__(v687 ^ v686, 8);
          v689 = v771 + v688;
          v690 = __ROR4__(v679 ^ (v796 + v684), 7);
          v772 = __ROR4__(v680 ^ (v678 + v685), 7);
          v691 = __ROR4__(v784 ^ v689, 7);
          v692 = (v817 ^ 0xC0AC29B7) + v681 + v690;
          v693 = (v833 ^ 0x3F84D5B5) + v683 + v749;
          v694 = __ROR4__(v685 ^ v692, 16);
          v695 = __ROR4__(v688 ^ v693, 16);
          v696 = (v818 ^ 0x85A308D3) + v682 + v691;
          v697 = v689 + v694;
          v698 = v796 + v684 + v695;
          v785 = v694;
          v699 = (v852 ^ 0x38D01377) + v686 + v772;
          v700 = v684 ^ v699;
          v701 = __ROR4__(v806 ^ v696, 16);
          v702 = __ROR4__(v700, 16);
          v703 = v760;
          v761 = __ROR4__(v690 ^ v697, 12);
          v704 = __ROR4__(v749 ^ v698, 12);
          v750 = v703 + v701;
          v705 = v809 + v702;
          v706 = __ROR4__(v691 ^ v750, 12);
          v797 = v704 + v693 + v927;
          v707 = __ROR4__(v772 ^ (v809 + v702), 12);
          v708 = v692 + (v846 ^ 0xC97C50DD) + v761;
          v709 = v696 + (v843 ^ 0x3707344) + v706;
          v807 = __ROR4__(v695 ^ v797, 8);
          v710 = v699 + v925 + v707;
          v711 = __ROR4__(v701 ^ v709, 8);
          v712 = v702 ^ v710;
          v713 = __ROR4__(v785 ^ v708, 8);
          v714 = __ROR4__(v712, 8);
          v715 = v705 + v714;
          v716 = __ROR4__(v704 ^ (v698 + v807), 7);
          v786 = v697 + v713;
          v717 = __ROR4__(v761 ^ (v697 + v713), 7);
          v762 = v750 + v711;
          v718 = __ROR4__(v706 ^ (v750 + v711), 7);
          v719 = v708 + v936 + v716;
          v751 = __ROR4__(v707 ^ v715, 7);
          v720 = __ROR4__(v711 ^ v719, 16);
          v721 = v709 + v933 + v717;
          v722 = v710 + v1003 + v718;
          v723 = __ROR4__(v714 ^ v721, 16);
          v724 = v698 + v807 + v723;
          v725 = v938 + v797 + v751;
          v726 = __ROR4__(v717 ^ v724, 12);
          v727 = __ROR4__(v807 ^ v722, 16);
          v773 = v715 + v720;
          v728 = __ROR4__(v713 ^ v725, 16);
          v729 = __ROR4__(v716 ^ (v715 + v720), 12);
          v810 = v786 + v727;
          v730 = __ROR4__(v718 ^ (v786 + v727), 12);
          v731 = __ROR4__(v751 ^ (v762 + v728), 12);
          v732 = v719 + (v819 ^ 0xA4093822) + v729;
          v733 = __ROR4__(v720 ^ v732, 8);
          v815 = v722 + v930 + v730;
          v734 = v725 + (v851 ^ 0xB5470917) + v731;
          v735 = __ROR4__(v727 ^ v815, 8);
          v736 = __ROR4__(v723 ^ (v721 + v891 + v726), 8);
          v798 = __ROR4__(v728 ^ v734, 8);
          v787 = v762 + v728 + v798;
          v863 ^= v892 ^ v736 ^ __ROR4__(v731 ^ v787, 7);
          v862 ^= v733 ^ v866 ^ __ROR4__((v810 + v735) ^ v730, 7);
          v860 ^= v735 ^ v868 ^ __ROR4__(v729 ^ (v773 + v733), 7);
          result = v868 ^ v869;
          v861 ^= v798 ^ v867 ^ __ROR4__(v726 ^ (v724 + v736), 7);
          v870 ^= (v810 + v735) ^ v867 ^ v732;
          v3 = 0;
          v865 ^= v815 ^ v892 ^ (v773 + v733);
          v869 ^= v734 ^ (v724 + v736) ^ v868;
          v864 ^= v787 ^ v866 ^ (v721 + v891 + v726);
        }
        if ( !n )
          break;
        v4 = 64 - v3;
      }
    }
    a1[16] = v3;
    a1[17] = v865;
    a1[18] = v864;
    a1[19] = v870;
    a1[20] = v869;
    a1[21] = v863;
    a1[22] = v862;
    a1[23] = v861;
    a1[24] = v860;
    a1[25] = v892;
    a1[26] = v866;
    a1[27] = v867;
    a1[28] = v868;
    a1[29] = v859;
    a1[30] = v871;
  }
  return result;
}
