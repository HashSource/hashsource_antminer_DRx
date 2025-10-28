_DWORD *__fastcall sub_5101C(_DWORD *result, char *a2, size_t a3)
{
  int v3; // r4
  size_t v4; // r5
  bool v5; // cf
  int v6; // t2
  int v7; // t2
  int v8; // t2
  int v9; // t2
  int v10; // t2
  int v11; // t2
  int v12; // t2
  int v13; // t2
  int v14; // t2
  int v15; // t2
  int v16; // t2
  int v17; // t2
  int v18; // t2
  int v19; // t2
  int v20; // t2
  int v21; // t2
  unsigned int v22; // r9
  int v23; // r10
  int v24; // r8
  int v25; // r7
  int v26; // r9
  int v27; // r10
  int v28; // r6
  int v29; // r5
  int v30; // r12
  int v31; // r6
  int v32; // r12
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r0
  int v37; // r7
  int v38; // r2
  unsigned int v39; // r3
  int v40; // r8
  int v41; // r4
  int v42; // r11
  int v43; // r3
  int v44; // r8
  int v45; // r4
  int v46; // r11
  int v47; // r9
  int v48; // r8
  int v49; // r7
  int v50; // r12
  int v51; // r9
  int v52; // r6
  int v53; // r10
  int v54; // r4
  int v55; // r2
  int v56; // r6
  int v57; // r10
  int v58; // r0
  int v59; // r5
  int v60; // r8
  int v61; // r11
  int v62; // r0
  int v63; // r5
  int v64; // r8
  int v65; // r3
  int v66; // r1
  int v67; // r4
  int v68; // r7
  int v69; // r3
  int v70; // r1
  int v71; // r4
  int v72; // r7
  int v73; // r9
  int v74; // r10
  int v75; // r8
  int v76; // r7
  int v77; // r9
  int v78; // r10
  int v79; // r6
  int v80; // r5
  int v81; // r4
  int v82; // r12
  int v83; // r6
  int v84; // r12
  int v85; // r0
  int v86; // r1
  int v87; // r2
  int v88; // r0
  int v89; // r7
  int v90; // r2
  int v91; // r3
  int v92; // r8
  int v93; // r4
  int v94; // r11
  int v95; // r3
  int v96; // r8
  int v97; // r4
  int v98; // r11
  int v99; // r9
  int v100; // r8
  int v101; // r7
  int v102; // r12
  int v103; // r9
  int v104; // r6
  int v105; // r10
  int v106; // r4
  int v107; // r2
  int v108; // r6
  int v109; // r10
  int v110; // r0
  int v111; // r5
  int v112; // r8
  int v113; // r11
  int v114; // r0
  int v115; // r5
  int v116; // r8
  int v117; // r3
  int v118; // r1
  int v119; // r4
  int v120; // r7
  int v121; // r3
  int v122; // r1
  int v123; // r4
  int v124; // r7
  int v125; // r9
  int v126; // r10
  int v127; // r8
  int v128; // r7
  int v129; // r9
  int v130; // r10
  int v131; // r6
  int v132; // r5
  int v133; // r4
  int v134; // r12
  int v135; // r6
  int v136; // r12
  int v137; // r0
  int v138; // r1
  int v139; // r2
  int v140; // r0
  int v141; // r7
  int v142; // r2
  int v143; // r3
  int v144; // r8
  int v145; // r4
  int v146; // r11
  int v147; // r3
  int v148; // r8
  int v149; // r4
  int v150; // r11
  int v151; // r9
  int v152; // r8
  int v153; // r7
  int v154; // r12
  int v155; // r9
  int v156; // r6
  int v157; // r10
  int v158; // r4
  int v159; // r2
  int v160; // r6
  int v161; // r10
  int v162; // r0
  int v163; // r5
  int v164; // r8
  int v165; // r11
  int v166; // r0
  int v167; // r5
  int v168; // r8
  int v169; // r11
  int v170; // r3
  int v171; // r1
  int v172; // r4
  int v173; // r7
  int v174; // r3
  int v175; // r1
  int v176; // r4
  int v177; // r7
  int v178; // r9
  int v179; // r10
  int v180; // r8
  int v181; // r7
  int v182; // r9
  int v183; // r10
  int v184; // r6
  int v185; // r5
  int v186; // r4
  int v187; // r12
  int v188; // r6
  int v189; // r12
  int v190; // r0
  int v191; // r1
  int v192; // r2
  int v193; // r0
  int v194; // r7
  int v195; // r2
  int v196; // r3
  int v197; // r8
  int v198; // r4
  int v199; // r11
  int v200; // r3
  int v201; // r8
  int v202; // r4
  int v203; // r11
  int v204; // r9
  int v205; // r8
  int v206; // r7
  int v207; // r12
  int v208; // r9
  int v209; // r12
  int v210; // r6
  int v211; // r10
  int v212; // r4
  int v213; // r2
  int v214; // r6
  int v215; // r10
  int v216; // r0
  int v217; // r5
  int v218; // r8
  int v219; // r11
  int v220; // r0
  int v221; // r5
  int v222; // r8
  int v223; // r3
  int v224; // r1
  int v225; // r4
  int v226; // r7
  int v227; // r3
  int v228; // r1
  int v229; // r4
  int v230; // r7
  int v231; // r9
  int v232; // r10
  int v233; // r8
  int v234; // r7
  int v235; // r9
  int v236; // r10
  int v237; // r6
  int v238; // r5
  int v239; // r4
  int v240; // r12
  int v241; // r6
  int v242; // r12
  int v243; // r0
  int v244; // r1
  int v245; // r2
  int v246; // r0
  int v247; // r7
  int v248; // r1
  int v249; // r3
  int v250; // r8
  int v251; // r4
  int v252; // r2
  int v253; // r3
  int v254; // r8
  int v255; // r4
  int v256; // r2
  int v257; // r9
  int v258; // r8
  int v259; // r7
  int v260; // r12
  int v261; // r9
  int v262; // r12
  int v263; // r6
  int v264; // r10
  int v265; // r4
  int v266; // r1
  int v267; // r6
  int v268; // r10
  int v269; // r0
  int v270; // r5
  int v271; // r8
  int v272; // r2
  int v273; // r0
  int v274; // r5
  int v275; // r8
  int v276; // r3
  int v277; // r11
  int v278; // r4
  int v279; // r2
  int v280; // r3
  int v281; // r11
  int v282; // r4
  int v283; // r2
  int v284; // r9
  int v285; // r10
  int v286; // r8
  int v287; // r2
  int v288; // r9
  int v289; // r6
  int v290; // r5
  int v291; // r4
  int v292; // r12
  int v293; // r6
  int v294; // r5
  int v295; // r12
  int v296; // r0
  int v297; // r2
  int v298; // r7
  int v299; // r1
  int v300; // r0
  int v301; // r7
  int v302; // r11
  int v303; // r3
  int v304; // r8
  int v305; // r4
  int v306; // r1
  int v307; // r3
  int v308; // r8
  int v309; // r4
  int v310; // r1
  int v311; // r9
  int v312; // r8
  int v313; // r7
  int v314; // r12
  int v315; // r9
  int v316; // r12
  int v317; // r6
  int v318; // r7
  int v319; // r4
  int v320; // r11
  int v321; // r6
  int v322; // r7
  int v323; // r0
  int v324; // r5
  int v325; // r8
  int v326; // r1
  int v327; // r0
  int v328; // r5
  int v329; // r8
  int v330; // r3
  int v331; // r2
  int v332; // r4
  int v333; // r1
  int v334; // r3
  int v335; // r2
  int v336; // r4
  int v337; // r1
  int v338; // r9
  int v339; // r7
  int v340; // r8
  int v341; // r1
  int v342; // r10
  int v343; // r6
  int v344; // r5
  int v345; // r4
  int v346; // r12
  int v347; // r6
  int v348; // r12
  int v349; // r0
  int v350; // r1
  int v351; // r7
  int v352; // r11
  int v353; // r0
  int v354; // r1
  int v355; // r7
  int v356; // r2
  int v357; // r3
  int v358; // r8
  int v359; // r4
  int v360; // r11
  int v361; // r3
  int v362; // r8
  int v363; // r4
  int v364; // r11
  int v365; // r10
  int v366; // r8
  int v367; // r7
  int v368; // r12
  int v369; // r9
  int v370; // r12
  int v371; // r6
  int v372; // r10
  int v373; // r4
  int v374; // r2
  int v375; // r6
  int v376; // r10
  int v377; // r0
  int v378; // r5
  int v379; // r8
  int v380; // r11
  int v381; // r0
  int v382; // r5
  int v383; // r8
  int v384; // r3
  int v385; // r1
  int v386; // r4
  int v387; // r7
  int v388; // r3
  int v389; // r1
  int v390; // r4
  int v391; // r7
  int v392; // r9
  int v393; // r10
  int v394; // r8
  int v395; // r7
  int v396; // r9
  int v397; // r6
  int v398; // r5
  int v399; // r4
  int v400; // r12
  int v401; // r6
  int v402; // r5
  int v403; // r12
  int v404; // r0
  int v405; // r1
  int v406; // r7
  int v407; // r2
  int v408; // r0
  int v409; // r7
  int v410; // r1
  int v411; // r3
  int v412; // r8
  int v413; // r4
  int v414; // r2
  int v415; // r3
  int v416; // r8
  int v417; // r4
  int v418; // r2
  int v419; // r9
  int v420; // r8
  int v421; // r7
  int v422; // r12
  int v423; // r9
  int v424; // r12
  int v425; // r6
  int v426; // r10
  int v427; // r4
  int v428; // r1
  int v429; // r6
  int v430; // r10
  int v431; // r0
  int v432; // r5
  int v433; // r2
  int v434; // r4
  int v435; // r11
  int v436; // r7
  int v437; // r0
  int v438; // r2
  int v439; // r8
  int v440; // r0
  int v441; // r3
  int v442; // r5
  int v443; // r8
  int v444; // r9
  int v445; // r2
  int v446; // r7
  int v447; // r8
  int v448; // r1
  int v449; // r10
  int v450; // r11
  int v451; // r5
  int v452; // r12
  int v453; // r10
  int v454; // r6
  int v455; // r4
  int v456; // r3
  int v457; // r12
  int v458; // r5
  int v459; // r4
  int v460; // r7
  int v461; // r3
  int v462; // r12
  int v463; // r9
  int v464; // r8
  int v465; // r0
  int v466; // r12
  int v467; // r9
  int v468; // r8
  int v469; // r0
  int v470; // r1
  int v471; // r9
  int v472; // r7
  int v473; // r6
  int v474; // r10
  int v475; // r2
  int v476; // r8
  int v477; // r3
  int v478; // r9
  int v479; // r2
  int v480; // r3
  int v481; // r5
  int v482; // r8
  int v483; // r10
  int v484; // r0
  int v485; // r5
  int v486; // r8
  int v487; // r10
  int v488; // r0
  int v489; // r1
  int v490; // r4
  int v491; // r11
  int v492; // r7
  int v493; // r12
  int v494; // r4
  int v495; // r11
  int v496; // r7
  int v497; // r1
  int v498; // r2
  int v499; // r10
  int v500; // r7
  int v501; // r1
  int v502; // r2
  int v503; // r9
  int v504; // r8
  int v505; // r11
  int v506; // r6
  int v507; // r9
  int v508; // r11
  int v509; // r6
  int v510; // r4
  int v511; // r3
  int v512; // r6
  int v513; // r5
  int v514; // r7
  int v515; // r3
  int v516; // r4
  int v517; // r12
  int v518; // r0
  int v519; // r3
  int v520; // r4
  int v521; // r12
  int v522; // r0
  int v523; // r1
  int v524; // r4
  int v525; // r5
  int v526; // r11
  int v527; // r8
  unsigned int v528; // r5
  int v529; // r1
  int v530; // r12
  int v531; // r7
  int v532; // r5
  int v533; // r1
  int v534; // r6
  int v535; // r2
  int v536; // r10
  int v537; // r0
  int v538; // r12
  int v539; // r2
  int v540; // r10
  int v541; // r0
  int v542; // r3
  int v543; // r11
  int v544; // r7
  int v545; // r0
  int v546; // r3
  int v547; // r11
  int v548; // r7
  int v549; // r8
  int v550; // r1
  int v551; // r10
  int v552; // r7
  int v553; // r1
  int v554; // r7
  int v555; // r2
  int v556; // r11
  int v557; // r4
  int v558; // r7
  int v559; // r2
  int v560; // r5
  int v561; // r12
  int v562; // r3
  int v563; // r9
  int v564; // r10
  int v565; // r4
  int v566; // r9
  int v567; // r8
  int v568; // r11
  int v569; // r12
  int v570; // r6
  int v571; // r0
  int v572; // r11
  int v573; // r12
  int v574; // r6
  int v575; // r8
  int v576; // r11
  int v577; // r4
  int v578; // r5
  int v579; // r5
  int v580; // r7
  int v581; // r1
  int v582; // r12
  int v583; // r9
  int v584; // r7
  int v585; // r1
  int v586; // r4
  int v587; // r2
  int v588; // r10
  int v589; // r6
  int v590; // r4
  int v591; // r2
  int v592; // r10
  int v593; // r6
  int v594; // r8
  int v595; // r3
  int v596; // r11
  int v597; // r9
  int v598; // r0
  int v599; // r3
  int v600; // r11
  int v601; // r9
  int v602; // r8
  int v603; // r1
  int v604; // r10
  int v605; // r9
  int v606; // r8
  int v607; // r1
  int v608; // r7
  int v609; // r2
  int v610; // r11
  int v611; // r5
  int v612; // r7
  int v613; // r2
  int v614; // r5
  int v615; // r10
  int v616; // r3
  int v617; // r12
  int v618; // r10
  int v619; // r4
  int v620; // r9
  int v621; // r0
  int v622; // r11
  int v623; // r12
  int v624; // r6
  int v625; // r0
  int v626; // r11
  int v627; // r12
  int v628; // r6
  int v629; // r8
  int v630; // r11
  int v631; // r4
  int v632; // r5
  int v633; // r5
  int v634; // r7
  int v635; // r1
  int v636; // r12
  int v637; // r9
  int v638; // r7
  int v639; // r1
  int v640; // r4
  int v641; // r2
  int v642; // r10
  int v643; // r6
  int v644; // r4
  int v645; // r2
  int v646; // r10
  int v647; // r6
  int v648; // r8
  int v649; // r3
  int v650; // r11
  int v651; // r9
  int v652; // r0
  int v653; // r3
  int v654; // r11
  int v655; // r9
  int v656; // r8
  int v657; // r1
  int v658; // r10
  int v659; // r9
  int v660; // r8
  int v661; // r1
  int v662; // r7
  int v663; // r2
  int v664; // r11
  int v665; // r5
  int v666; // r7
  int v667; // r2
  int v668; // r5
  int v669; // r10
  int v670; // r3
  int v671; // r12
  int v672; // r10
  int v673; // r4
  int v674; // r9
  int v675; // r0
  int v676; // r11
  int v677; // r12
  int v678; // r6
  int v679; // r0
  int v680; // r11
  int v681; // r12
  int v682; // r6
  int v683; // r8
  int v684; // r11
  int v685; // r4
  int v686; // r5
  int v687; // r5
  int v688; // r7
  int v689; // r1
  int v690; // r12
  int v691; // r9
  int v692; // r7
  int v693; // r1
  int v694; // r12
  int v695; // r4
  int v696; // r2
  int v697; // r10
  int v698; // r6
  int v699; // r4
  int v700; // r2
  int v701; // r10
  int v702; // r6
  int v703; // r3
  int v704; // r11
  int v705; // r9
  int v706; // r0
  int v707; // r3
  int v708; // r11
  int v709; // r9
  int v710; // r6
  int v711; // r1
  int v712; // r10
  int v713; // r9
  int v714; // r7
  int v715; // r2
  int v716; // r11
  int v717; // r9
  int v718; // r7
  int v719; // r2
  int v720; // r9
  int v721; // r5
  int v722; // r3
  int v723; // r4
  int v724; // r10
  int v725; // r5
  int v726; // r3
  int v727; // r4
  int v728; // r10
  int v729; // r8
  int v730; // r11
  int v731; // r12
  int v732; // r6
  int v733; // r0
  int v734; // r11
  int v735; // r12
  int v736; // r6
  int v737; // r1
  int v738; // r11
  int v739; // r4
  int v740; // r9
  int v741; // r8
  unsigned int v742; // r4
  unsigned int v743; // r7
  int v744; // r1
  int v745; // r12
  int v746; // r10
  int v747; // r7
  int v748; // r1
  int v749; // r12
  int v750; // r5
  int v751; // r2
  int v752; // r10
  int v753; // r6
  int v754; // r5
  int v755; // r2
  int v756; // r10
  int v757; // r0
  int v758; // r3
  int v759; // r6
  int v760; // r9
  int v761; // r0
  int v762; // r3
  int v763; // r6
  int v764; // [sp+0h] [bp-1F4h]
  _DWORD *v765; // [sp+4h] [bp-1F0h]
  unsigned int v766; // [sp+8h] [bp-1ECh]
  int v767; // [sp+8h] [bp-1ECh]
  int v768; // [sp+8h] [bp-1ECh]
  int v769; // [sp+8h] [bp-1ECh]
  int v770; // [sp+8h] [bp-1ECh]
  int v771; // [sp+8h] [bp-1ECh]
  unsigned int v772; // [sp+Ch] [bp-1E8h]
  int v773; // [sp+Ch] [bp-1E8h]
  int v774; // [sp+Ch] [bp-1E8h]
  int v775; // [sp+Ch] [bp-1E8h]
  int v776; // [sp+Ch] [bp-1E8h]
  int v777; // [sp+Ch] [bp-1E8h]
  unsigned int v778; // [sp+10h] [bp-1E4h]
  int v779; // [sp+10h] [bp-1E4h]
  int v780; // [sp+10h] [bp-1E4h]
  int v781; // [sp+10h] [bp-1E4h]
  int v782; // [sp+10h] [bp-1E4h]
  unsigned int v783; // [sp+10h] [bp-1E4h]
  unsigned int v784; // [sp+14h] [bp-1E0h]
  int v785; // [sp+14h] [bp-1E0h]
  int v786; // [sp+14h] [bp-1E0h]
  int v787; // [sp+14h] [bp-1E0h]
  int v788; // [sp+14h] [bp-1E0h]
  int v789; // [sp+14h] [bp-1E0h]
  unsigned int v790; // [sp+18h] [bp-1DCh]
  int v791; // [sp+18h] [bp-1DCh]
  int v792; // [sp+18h] [bp-1DCh]
  int v793; // [sp+18h] [bp-1DCh]
  int v794; // [sp+18h] [bp-1DCh]
  int v795; // [sp+18h] [bp-1DCh]
  int v796; // [sp+1Ch] [bp-1D8h]
  int v797; // [sp+1Ch] [bp-1D8h]
  int v798; // [sp+1Ch] [bp-1D8h]
  int v799; // [sp+1Ch] [bp-1D8h]
  int v800; // [sp+1Ch] [bp-1D8h]
  int v801; // [sp+1Ch] [bp-1D8h]
  int v802; // [sp+1Ch] [bp-1D8h]
  int v803; // [sp+1Ch] [bp-1D8h]
  int v804; // [sp+1Ch] [bp-1D8h]
  unsigned int v805; // [sp+20h] [bp-1D4h]
  int v806; // [sp+20h] [bp-1D4h]
  int v807; // [sp+20h] [bp-1D4h]
  int v808; // [sp+20h] [bp-1D4h]
  int v809; // [sp+20h] [bp-1D4h]
  int v810; // [sp+24h] [bp-1D0h]
  int v811; // [sp+24h] [bp-1D0h]
  int v812; // [sp+24h] [bp-1D0h]
  int v813; // [sp+24h] [bp-1D0h]
  int v814; // [sp+24h] [bp-1D0h]
  int v815; // [sp+24h] [bp-1D0h]
  int v816; // [sp+24h] [bp-1D0h]
  int v817; // [sp+24h] [bp-1D0h]
  int v818; // [sp+24h] [bp-1D0h]
  int v819; // [sp+24h] [bp-1D0h]
  int v820; // [sp+24h] [bp-1D0h]
  int v821; // [sp+28h] [bp-1CCh]
  int v822; // [sp+28h] [bp-1CCh]
  int v823; // [sp+28h] [bp-1CCh]
  int v824; // [sp+28h] [bp-1CCh]
  int v825; // [sp+28h] [bp-1CCh]
  int v826; // [sp+2Ch] [bp-1C8h]
  int v827; // [sp+2Ch] [bp-1C8h]
  int v828; // [sp+2Ch] [bp-1C8h]
  int v829; // [sp+30h] [bp-1C4h]
  int v830; // [sp+30h] [bp-1C4h]
  int v831; // [sp+34h] [bp-1C0h]
  int v832; // [sp+40h] [bp-1B4h]
  int v833; // [sp+40h] [bp-1B4h]
  size_t n; // [sp+44h] [bp-1B0h]
  unsigned int v835; // [sp+48h] [bp-1ACh]
  int v836; // [sp+48h] [bp-1ACh]
  int v837; // [sp+4Ch] [bp-1A8h]
  int v838; // [sp+4Ch] [bp-1A8h]
  int v839; // [sp+4Ch] [bp-1A8h]
  int v840; // [sp+4Ch] [bp-1A8h]
  int v841; // [sp+4Ch] [bp-1A8h]
  int v842; // [sp+4Ch] [bp-1A8h]
  int v843; // [sp+4Ch] [bp-1A8h]
  int v844; // [sp+4Ch] [bp-1A8h]
  int v845; // [sp+4Ch] [bp-1A8h]
  int v846; // [sp+4Ch] [bp-1A8h]
  int v847; // [sp+50h] [bp-1A4h]
  int v848; // [sp+50h] [bp-1A4h]
  int v849; // [sp+50h] [bp-1A4h]
  int v850; // [sp+50h] [bp-1A4h]
  int v851; // [sp+50h] [bp-1A4h]
  int v852; // [sp+50h] [bp-1A4h]
  int v853; // [sp+50h] [bp-1A4h]
  int v854; // [sp+50h] [bp-1A4h]
  int v855; // [sp+50h] [bp-1A4h]
  int v856; // [sp+50h] [bp-1A4h]
  int v857; // [sp+50h] [bp-1A4h]
  unsigned int v858; // [sp+54h] [bp-1A0h]
  int v859; // [sp+54h] [bp-1A0h]
  int v860; // [sp+54h] [bp-1A0h]
  unsigned int v861; // [sp+58h] [bp-19Ch]
  int v862; // [sp+58h] [bp-19Ch]
  int v863; // [sp+60h] [bp-194h]
  int v864; // [sp+64h] [bp-190h]
  unsigned int v865; // [sp+68h] [bp-18Ch]
  int v866; // [sp+68h] [bp-18Ch]
  int v867; // [sp+6Ch] [bp-188h]
  unsigned int v868; // [sp+70h] [bp-184h]
  int v869; // [sp+70h] [bp-184h]
  char *src; // [sp+74h] [bp-180h]
  unsigned int v871; // [sp+78h] [bp-17Ch]
  unsigned int v872; // [sp+80h] [bp-174h]
  unsigned int v873; // [sp+84h] [bp-170h]
  int v874; // [sp+88h] [bp-16Ch]
  int v875; // [sp+88h] [bp-16Ch]
  int v876; // [sp+88h] [bp-16Ch]
  int v877; // [sp+8Ch] [bp-168h]
  int v878; // [sp+8Ch] [bp-168h]
  int v879; // [sp+8Ch] [bp-168h]
  int v880; // [sp+8Ch] [bp-168h]
  unsigned int v881; // [sp+94h] [bp-160h]
  int v882; // [sp+98h] [bp-15Ch]
  int v883; // [sp+98h] [bp-15Ch]
  int v884; // [sp+98h] [bp-15Ch]
  int v885; // [sp+98h] [bp-15Ch]
  unsigned int v886; // [sp+98h] [bp-15Ch]
  int v887; // [sp+9Ch] [bp-158h]
  int v888; // [sp+9Ch] [bp-158h]
  int v889; // [sp+9Ch] [bp-158h]
  int v890; // [sp+9Ch] [bp-158h]
  unsigned int v891; // [sp+A4h] [bp-150h]
  int v892; // [sp+A8h] [bp-14Ch]
  unsigned int v893; // [sp+A8h] [bp-14Ch]
  int v894; // [sp+ACh] [bp-148h]
  unsigned int v895; // [sp+ACh] [bp-148h]
  int v896; // [sp+B0h] [bp-144h]
  int v897; // [sp+B4h] [bp-140h]
  int v898; // [sp+B4h] [bp-140h]
  int v899; // [sp+B8h] [bp-13Ch]
  int v900; // [sp+B8h] [bp-13Ch]
  int v901; // [sp+BCh] [bp-138h]
  int v902; // [sp+BCh] [bp-138h]
  int v903; // [sp+C0h] [bp-134h]
  int v904; // [sp+C0h] [bp-134h]
  int v905; // [sp+C4h] [bp-130h]
  int v906; // [sp+C8h] [bp-12Ch]
  unsigned int v907; // [sp+C8h] [bp-12Ch]
  int v908; // [sp+CCh] [bp-128h]
  int v909; // [sp+CCh] [bp-128h]
  int v910; // [sp+D0h] [bp-124h]
  int v911; // [sp+D0h] [bp-124h]
  int v912; // [sp+D4h] [bp-120h]
  int v913; // [sp+D4h] [bp-120h]
  int v914; // [sp+D8h] [bp-11Ch]
  unsigned int v915; // [sp+D8h] [bp-11Ch]
  int v916; // [sp+DCh] [bp-118h]
  unsigned int v917; // [sp+DCh] [bp-118h]
  int v918; // [sp+E0h] [bp-114h]
  int v919; // [sp+E0h] [bp-114h]
  int v920; // [sp+E4h] [bp-110h]
  int v921; // [sp+E8h] [bp-10Ch]
  int v922; // [sp+E8h] [bp-10Ch]
  int v923; // [sp+E8h] [bp-10Ch]
  int v924; // [sp+E8h] [bp-10Ch]
  int v925; // [sp+ECh] [bp-108h]
  int v926; // [sp+ECh] [bp-108h]
  int v927; // [sp+ECh] [bp-108h]
  int v928; // [sp+ECh] [bp-108h]
  int v929; // [sp+F0h] [bp-104h]
  int v930; // [sp+F0h] [bp-104h]
  int v931; // [sp+F0h] [bp-104h]
  int v932; // [sp+F4h] [bp-100h]
  int v933; // [sp+100h] [bp-F4h]
  int v934; // [sp+104h] [bp-F0h]
  int v935; // [sp+108h] [bp-ECh]
  int v936; // [sp+10Ch] [bp-E8h]
  int v937; // [sp+110h] [bp-E4h]
  unsigned int v938; // [sp+114h] [bp-E0h]
  int v939; // [sp+118h] [bp-DCh]
  unsigned int v940; // [sp+11Ch] [bp-D8h]
  int v941; // [sp+124h] [bp-D0h]
  unsigned int v942; // [sp+128h] [bp-CCh]
  int v943; // [sp+12Ch] [bp-C8h]
  int v944; // [sp+130h] [bp-C4h]
  int v945; // [sp+134h] [bp-C0h]
  int v946; // [sp+138h] [bp-BCh]
  int v947; // [sp+13Ch] [bp-B8h]
  int v948; // [sp+140h] [bp-B4h]
  int v949; // [sp+144h] [bp-B0h]
  int v950; // [sp+148h] [bp-ACh]
  int v951; // [sp+14Ch] [bp-A8h]
  int v952; // [sp+154h] [bp-A0h]
  int v953; // [sp+158h] [bp-9Ch]
  int v954; // [sp+15Ch] [bp-98h]
  int v955; // [sp+160h] [bp-94h]
  int v956; // [sp+168h] [bp-8Ch]
  int v957; // [sp+16Ch] [bp-88h]
  int v958; // [sp+170h] [bp-84h]
  unsigned int v959; // [sp+174h] [bp-80h]
  unsigned int v960; // [sp+178h] [bp-7Ch]
  unsigned int v961; // [sp+184h] [bp-70h]
  int v962; // [sp+188h] [bp-6Ch]
  int v963; // [sp+18Ch] [bp-68h]
  unsigned int v964; // [sp+190h] [bp-64h]
  int v965; // [sp+194h] [bp-60h]
  int v966; // [sp+19Ch] [bp-58h]
  unsigned int v967; // [sp+1A4h] [bp-50h]
  int v968; // [sp+1ACh] [bp-48h]
  unsigned int v969; // [sp+1B4h] [bp-40h]
  unsigned int v970; // [sp+1B8h] [bp-3Ch]
  unsigned int v971; // [sp+1BCh] [bp-38h]
  unsigned int v972; // [sp+1C0h] [bp-34h]
  int v973; // [sp+1C4h] [bp-30h]
  int v974; // [sp+1C8h] [bp-2Ch]
  int v975; // [sp+1CCh] [bp-28h]
  int v976; // [sp+1D0h] [bp-24h]
  int v977; // [sp+1D4h] [bp-20h]
  int v978; // [sp+1DCh] [bp-18h]
  int v979; // [sp+1DCh] [bp-18h]
  int v980; // [sp+1E0h] [bp-14h]
  int v981; // [sp+1E0h] [bp-14h]
  int v982; // [sp+1E4h] [bp-10h]
  unsigned int v983; // [sp+1E8h] [bp-Ch]
  int v984; // [sp+1ECh] [bp-8h]

  v765 = result;
  src = a2;
  n = a3;
  v3 = result[16];
  if ( 64 - v3 <= a3 )
  {
    v947 = result[17];
    v948 = result[18];
    v946 = result[19];
    v945 = result[20];
    v937 = result[21];
    v936 = result[22];
    v935 = result[23];
    v934 = result[24];
    v949 = result[25];
    v950 = result[26];
    v951 = result[27];
    v943 = result[28];
    v932 = result[29];
    v944 = result[30];
    if ( a3 )
    {
      v982 = v949 ^ 0x243F6A88;
      v983 = v950 ^ 0x85A308D3;
      v984 = v951 ^ 0x13198A2E;
      do
      {
        v4 = 64 - v3;
        if ( 64 - v3 >= n )
          v4 = n;
        result = memcpy((char *)v765 + v3, src, v4);
        v3 += v4;
        src += v4;
        n -= v4;
        if ( v3 == 64 )
        {
          v5 = __CFADD__(v932, 512);
          v932 += 512;
          if ( v5 )
            ++v944;
          v6 = __ROR4__(*v765, 16);
          v766 = ((v6 & 0xFF00FFFF) >> 8) | ((v6 & 0xFF00FF) << 8);
          v7 = __ROR4__(v765[1], 16);
          v778 = ((v7 & 0xFF00FFFF) >> 8) | ((v7 & 0xFF00FF) << 8);
          v8 = __ROR4__(v765[2], 16);
          v835 = ((v8 & 0xFF00FFFF) >> 8) | ((v8 & 0xFF00FF) << 8);
          v9 = __ROR4__(v765[3], 16);
          v805 = ((v9 & 0xFF00FFFF) >> 8) | ((v9 & 0xFF00FF) << 8);
          v10 = __ROR4__(v765[4], 16);
          v784 = ((v10 & 0xFF00FFFF) >> 8) | ((v10 & 0xFF00FF) << 8);
          v11 = __ROR4__(v765[5], 16);
          v881 = ((v11 & 0xFF00FFFF) >> 8) | ((v11 & 0xFF00FF) << 8);
          v12 = __ROR4__(v765[6], 16);
          v858 = ((v12 & 0xFF00FFFF) >> 8) | ((v12 & 0xFF00FF) << 8);
          v13 = __ROR4__(v765[7], 16);
          v868 = ((v13 & 0xFF00FFFF) >> 8) | ((v13 & 0xFF00FF) << 8);
          v14 = __ROR4__(v765[8], 16);
          v865 = ((v14 & 0xFF00FFFF) >> 8) | ((v14 & 0xFF00FF) << 8);
          v15 = __ROR4__(v765[9], 16);
          v772 = ((v15 & 0xFF00FFFF) >> 8) | ((v15 & 0xFF00FF) << 8);
          v16 = __ROR4__(v765[10], 16);
          v861 = ((v16 & 0xFF00FFFF) >> 8) | ((v16 & 0xFF00FF) << 8);
          v17 = __ROR4__(v765[11], 16);
          v790 = ((v17 & 0xFF00FFFF) >> 8) | ((v17 & 0xFF00FF) << 8);
          v18 = __ROR4__(v765[12], 16);
          v891 = ((v18 & 0xFF00FFFF) >> 8) | ((v18 & 0xFF00FF) << 8);
          v19 = __ROR4__(v765[13], 16);
          v872 = ((v19 & 0xFF00FFFF) >> 8) | ((v19 & 0xFF00FF) << 8);
          v20 = __ROR4__(v765[14], 16);
          v871 = ((v20 & 0xFF00FFFF) >> 8) | ((v20 & 0xFF00FF) << 8);
          v21 = __ROR4__(v765[15], 16);
          v873 = ((v21 & 0xFF00FFFF) >> 8) | ((v21 & 0xFF00FF) << 8);
          v22 = v947 + v937 + (v766 ^ 0x85A308D3);
          v23 = __ROR4__(v932 ^ 0xA4093822 ^ v22, 16);
          v24 = v23 + v982;
          v25 = __ROR4__((v23 + v982) ^ v937, 12);
          v952 = v778 ^ 0x243F6A88;
          v26 = v22 + (v778 ^ 0x243F6A88) + v25;
          v27 = __ROR4__(v26 ^ v23, 8);
          v863 = v27 + v24;
          v810 = __ROR4__((v27 + v24) ^ v25, 7);
          v953 = v835 ^ 0x3707344;
          v28 = v948 + v936 + (v835 ^ 0x3707344);
          v29 = __ROR4__(v932 ^ 0x299F31D0 ^ v28, 16);
          v30 = __ROR4__((v29 + v983) ^ v936, 12);
          v954 = v805 ^ 0x13198A2E;
          v31 = v28 + (v805 ^ 0x13198A2E) + v30;
          v837 = __ROR4__(v31 ^ v29, 8);
          v892 = v837 + v29 + v983;
          v32 = __ROR4__(v892 ^ v30, 7);
          v955 = v784 ^ 0x299F31D0;
          v33 = v946 + v935 + (v784 ^ 0x299F31D0);
          v34 = __ROR4__(v33 ^ 0x82EFA98 ^ v944, 16);
          v35 = __ROR4__((v34 + v984) ^ v935, 12);
          v36 = v33 + (v881 ^ 0xA4093822) + v35;
          v847 = __ROR4__(v36 ^ v34, 8);
          v37 = v847 + v34 + v984;
          v38 = __ROR4__(v37 ^ v35, 7);
          v938 = v858 ^ 0xEC4E6C89;
          v39 = v945 + v934 + (v858 ^ 0xEC4E6C89);
          v40 = __ROR4__(v39 ^ 0xEC4E6C89 ^ v944, 16);
          v41 = v40 + (v943 ^ 0x3707344);
          v42 = __ROR4__(v41 ^ v934, 12);
          v939 = v868 ^ 0x82EFA98;
          v43 = v39 + (v868 ^ 0x82EFA98) + v42;
          v44 = __ROR4__(v43 ^ v40, 8);
          v45 = v44 + v41;
          v46 = __ROR4__(v45 ^ v42, 7);
          v956 = v865 ^ 0x38D01377;
          v47 = v26 + (v865 ^ 0x38D01377) + v32;
          v48 = __ROR4__(v44 ^ v47, 16);
          v49 = v48 + v37;
          v50 = __ROR4__(v49 ^ v32, 12);
          v957 = v772 ^ 0x452821E6;
          v51 = v47 + (v772 ^ 0x452821E6) + v50;
          v894 = __ROR4__(v51 ^ v48, 8);
          v896 = v894 + v49;
          v874 = __ROR4__((v894 + v49) ^ v50, 7);
          v958 = v861 ^ 0x34E90C6C;
          v52 = v31 + (v861 ^ 0x34E90C6C) + v38;
          v53 = __ROR4__(v52 ^ v27, 16);
          v54 = v53 + v45;
          v55 = __ROR4__(v54 ^ v38, 12);
          v959 = v790 ^ 0xBE5466CF;
          v56 = v52 + (v790 ^ 0xBE5466CF) + v55;
          v57 = __ROR4__(v56 ^ v53, 8);
          v897 = v57 + v54;
          v877 = __ROR4__((v57 + v54) ^ v55, 7);
          v58 = v36 + (v891 ^ 0xC97C50DD) + v46;
          v59 = __ROR4__(v58 ^ v837, 16);
          v60 = v59 + v863;
          v61 = __ROR4__((v59 + v863) ^ v46, 12);
          v62 = v58 + (v872 ^ 0xC0AC29B7) + v61;
          v63 = __ROR4__(v62 ^ v59, 8);
          v64 = v63 + v60;
          v838 = __ROR4__(v64 ^ v61, 7);
          v940 = v871 ^ 0xB5470917;
          v65 = v810 + (v871 ^ 0xB5470917) + v43;
          v66 = __ROR4__(v847 ^ v65, 16);
          v67 = v66 + v892;
          v68 = __ROR4__((v66 + v892) ^ v810, 12);
          v69 = v65 + (v873 ^ 0x3F84D5B5) + v68;
          v70 = __ROR4__(v69 ^ v66, 8);
          v71 = v70 + v67;
          v72 = __ROR4__(v71 ^ v68, 7);
          v893 = v871 ^ 0xBE5466CF;
          v73 = v51 + (v871 ^ 0xBE5466CF) + v72;
          v74 = __ROR4__(v73 ^ v57, 16);
          v75 = v74 + v64;
          v76 = __ROR4__(v75 ^ v72, 12);
          v933 = v861 ^ 0x3F84D5B5;
          v77 = v73 + (v861 ^ 0x3F84D5B5) + v76;
          v78 = __ROR4__(v77 ^ v74, 8);
          v899 = v78 + v75;
          v901 = __ROR4__((v78 + v75) ^ v76, 7);
          v941 = v784 ^ 0x452821E6;
          v79 = v56 + (v784 ^ 0x452821E6) + v874;
          v80 = __ROR4__(v79 ^ v63, 16);
          v81 = v80 + v71;
          v82 = __ROR4__(v81 ^ v874, 12);
          v942 = v865 ^ 0xA4093822;
          v83 = v79 + (v865 ^ 0xA4093822) + v82;
          v848 = __ROR4__(v83 ^ v80, 8);
          v903 = v848 + v81;
          v84 = __ROR4__((v848 + v81) ^ v82, 7);
          v960 = v772 ^ 0xB5470917;
          v85 = v62 + (v772 ^ 0xB5470917) + v877;
          v86 = __ROR4__(v85 ^ v70, 16);
          v87 = __ROR4__((v86 + v896) ^ v877, 12);
          v88 = v85 + (v873 ^ 0x38D01377) + v87;
          v882 = __ROR4__(v88 ^ v86, 8);
          v89 = v882 + v86 + v896;
          v90 = __ROR4__(v89 ^ v87, 7);
          v91 = v69 + (v872 ^ 0x82EFA98) + v838;
          v92 = __ROR4__(v91 ^ v894, 16);
          v93 = v92 + v897;
          v94 = __ROR4__((v92 + v897) ^ v838, 12);
          v961 = v858 ^ 0xC97C50DD;
          v95 = v91 + (v858 ^ 0xC97C50DD) + v94;
          v96 = __ROR4__(v95 ^ v92, 8);
          v97 = v96 + v93;
          v98 = __ROR4__(v97 ^ v94, 7);
          v895 = v778 ^ 0xC0AC29B7;
          v99 = v77 + (v778 ^ 0xC0AC29B7) + v84;
          v100 = __ROR4__(v99 ^ v96, 16);
          v101 = v100 + v89;
          v102 = __ROR4__(v101 ^ v84, 12);
          v103 = v99 + (v891 ^ 0x85A308D3) + v102;
          v875 = __ROR4__(v103 ^ v100, 8);
          v878 = v875 + v101;
          v839 = __ROR4__((v875 + v101) ^ v102, 7);
          v962 = v766 ^ 0x13198A2E;
          v104 = v83 + (v766 ^ 0x13198A2E) + v90;
          v105 = __ROR4__(v104 ^ v78, 16);
          v106 = v105 + v97;
          v107 = __ROR4__(v106 ^ v90, 12);
          v963 = v835 ^ 0x243F6A88;
          v108 = v104 + (v835 ^ 0x243F6A88) + v107;
          v109 = __ROR4__(v108 ^ v105, 8);
          v905 = v109 + v106;
          v887 = __ROR4__((v109 + v106) ^ v107, 7);
          v964 = v790 ^ 0xEC4E6C89;
          v110 = v88 + (v790 ^ 0xEC4E6C89) + v98;
          v111 = __ROR4__(v110 ^ v848, 16);
          v112 = v111 + v899;
          v113 = __ROR4__((v111 + v899) ^ v98, 12);
          v965 = v868 ^ 0x34E90C6C;
          v114 = v110 + (v868 ^ 0x34E90C6C) + v113;
          v115 = __ROR4__(v114 ^ v111, 8);
          v116 = v115 + v112;
          v849 = __ROR4__(v116 ^ v113, 7);
          v117 = v95 + (v881 ^ 0x3707344) + v901;
          v118 = __ROR4__(v117 ^ v882, 16);
          v119 = v118 + v903;
          v120 = __ROR4__((v118 + v903) ^ v901, 12);
          v966 = v805 ^ 0x299F31D0;
          v121 = v117 + (v805 ^ 0x299F31D0) + v120;
          v122 = __ROR4__(v121 ^ v118, 8);
          v123 = v122 + v119;
          v124 = __ROR4__(v123 ^ v120, 7);
          v898 = v790 ^ 0x452821E6;
          v125 = v103 + (v790 ^ 0x452821E6) + v124;
          v126 = __ROR4__(v125 ^ v109, 16);
          v127 = v126 + v116;
          v128 = __ROR4__(v127 ^ v124, 12);
          v900 = v865 ^ 0x34E90C6C;
          v129 = v125 + (v865 ^ 0x34E90C6C) + v128;
          v130 = __ROR4__(v129 ^ v126, 8);
          v906 = v130 + v127;
          v908 = __ROR4__((v130 + v127) ^ v128, 7);
          v131 = v108 + (v891 ^ 0x243F6A88) + v839;
          v132 = __ROR4__(v131 ^ v115, 16);
          v133 = v132 + v123;
          v134 = __ROR4__(v133 ^ v839, 12);
          v967 = v766 ^ 0xC0AC29B7;
          v135 = v131 + (v766 ^ 0xC0AC29B7) + v134;
          v840 = __ROR4__(v135 ^ v132, 8);
          v910 = v840 + v133;
          v136 = __ROR4__((v840 + v133) ^ v134, 7);
          v137 = v114 + (v881 ^ 0x13198A2E) + v887;
          v138 = __ROR4__(v137 ^ v122, 16);
          v139 = __ROR4__((v138 + v878) ^ v887, 12);
          v968 = v835 ^ 0x299F31D0;
          v140 = v137 + (v835 ^ 0x299F31D0) + v139;
          v883 = __ROR4__(v140 ^ v138, 8);
          v141 = v883 + v138 + v878;
          v142 = __ROR4__(v141 ^ v139, 7);
          v143 = v121 + (v873 ^ 0xC97C50DD) + v849;
          v144 = __ROR4__(v143 ^ v875, 16);
          v145 = v144 + v905;
          v146 = __ROR4__((v144 + v905) ^ v849, 12);
          v147 = v143 + (v872 ^ 0xB5470917) + v146;
          v148 = __ROR4__(v147 ^ v144, 8);
          v149 = v148 + v145;
          v150 = __ROR4__(v149 ^ v146, 7);
          v151 = v129 + (v861 ^ 0x3F84D5B5) + v136;
          v152 = __ROR4__(v151 ^ v148, 16);
          v153 = v152 + v141;
          v154 = __ROR4__(v153 ^ v136, 12);
          v155 = v151 + (v871 ^ 0xBE5466CF) + v154;
          v876 = __ROR4__(v155 ^ v152, 8);
          v879 = v876 + v153;
          v850 = __ROR4__((v876 + v153) ^ v154, 7);
          v902 = v805 ^ 0x82EFA98;
          v156 = v135 + (v805 ^ 0x82EFA98) + v142;
          v157 = __ROR4__(v156 ^ v130, 16);
          v158 = v157 + v149;
          v159 = __ROR4__(v158 ^ v142, 12);
          v904 = v858 ^ 0x3707344;
          v160 = v156 + (v858 ^ 0x3707344) + v159;
          v161 = __ROR4__(v160 ^ v157, 8);
          v912 = v161 + v158;
          v888 = __ROR4__((v161 + v158) ^ v159, 7);
          v969 = v868 ^ 0x85A308D3;
          v162 = v140 + (v868 ^ 0x85A308D3) + v150;
          v163 = __ROR4__(v162 ^ v840, 16);
          v164 = v163 + v906;
          v165 = __ROR4__((v163 + v906) ^ v150, 12);
          v907 = v778 ^ 0xEC4E6C89;
          v166 = v162 + (v778 ^ 0xEC4E6C89) + v165;
          v167 = __ROR4__(v166 ^ v163, 8);
          v168 = v167 + v164;
          v169 = __ROR4__(v168 ^ v165, 7);
          v970 = v772 ^ 0xA4093822;
          v170 = v147 + (v772 ^ 0xA4093822) + v908;
          v171 = __ROR4__(v170 ^ v883, 16);
          v172 = v171 + v910;
          v173 = __ROR4__((v171 + v910) ^ v908, 12);
          v909 = v784 ^ 0x38D01377;
          v174 = v170 + (v784 ^ 0x38D01377) + v173;
          v175 = __ROR4__(v174 ^ v171, 8);
          v176 = v175 + v172;
          v177 = __ROR4__(v176 ^ v173, 7);
          v911 = v868 ^ 0x38D01377;
          v178 = v155 + (v868 ^ 0x38D01377) + v177;
          v179 = __ROR4__(v178 ^ v161, 16);
          v180 = v179 + v168;
          v181 = __ROR4__(v180 ^ v177, 12);
          v971 = v772 ^ 0xEC4E6C89;
          v182 = v178 + (v772 ^ 0xEC4E6C89) + v181;
          v183 = __ROR4__(v182 ^ v179, 8);
          v914 = v183 + v180;
          v916 = __ROR4__((v183 + v180) ^ v181, 7);
          v972 = v805 ^ 0x85A308D3;
          v184 = v160 + (v805 ^ 0x85A308D3) + v850;
          v185 = __ROR4__(v184 ^ v167, 16);
          v186 = v185 + v176;
          v187 = __ROR4__(v186 ^ v850, 12);
          v973 = v778 ^ 0x3707344;
          v188 = v184 + (v778 ^ 0x3707344) + v187;
          v851 = __ROR4__(v188 ^ v185, 8);
          v884 = v851 + v186;
          v189 = __ROR4__((v851 + v186) ^ v187, 7);
          v190 = v166 + (v872 ^ 0xC0AC29B7) + v888;
          v191 = __ROR4__(v190 ^ v175, 16);
          v192 = __ROR4__((v191 + v879) ^ v888, 12);
          v193 = v190 + (v891 ^ 0xC97C50DD) + v192;
          v921 = __ROR4__(v193 ^ v191, 8);
          v194 = v921 + v191 + v879;
          v195 = __ROR4__(v194 ^ v192, 7);
          v974 = v790 ^ 0x3F84D5B5;
          v196 = v174 + (v790 ^ 0x3F84D5B5) + v169;
          v197 = __ROR4__(v196 ^ v876, 16);
          v198 = v197 + v912;
          v199 = __ROR4__((v197 + v912) ^ v169, 12);
          v913 = v871 ^ 0x34E90C6C;
          v200 = v196 + (v871 ^ 0x34E90C6C) + v199;
          v201 = __ROR4__(v200 ^ v197, 8);
          v202 = v201 + v198;
          v203 = __ROR4__(v202 ^ v199, 7);
          v975 = v835 ^ 0x82EFA98;
          v204 = v182 + (v835 ^ 0x82EFA98) + v189;
          v205 = __ROR4__(v204 ^ v201, 16);
          v206 = v205 + v194;
          v207 = __ROR4__(v206 ^ v189, 12);
          v976 = v858 ^ 0x13198A2E;
          v208 = v204 + (v858 ^ 0x13198A2E) + v207;
          v841 = __ROR4__(v208 ^ v205, 8);
          v889 = v841 + v206;
          v209 = __ROR4__((v841 + v206) ^ v207, 7);
          v210 = v188 + (v881 ^ 0xBE5466CF) + v195;
          v211 = __ROR4__(v210 ^ v183, 16);
          v212 = v211 + v202;
          v213 = __ROR4__(v212 ^ v195, 12);
          v880 = v861 ^ 0x299F31D0;
          v214 = v210 + (v861 ^ 0x299F31D0) + v213;
          v215 = __ROR4__(v214 ^ v211, 8);
          v918 = v215 + v212;
          v925 = __ROR4__((v215 + v212) ^ v213, 7);
          v977 = v784 ^ 0x243F6A88;
          v216 = v193 + (v784 ^ 0x243F6A88) + v203;
          v217 = __ROR4__(v216 ^ v851, 16);
          v218 = v217 + v914;
          v219 = __ROR4__((v217 + v914) ^ v203, 12);
          v915 = v766 ^ 0xA4093822;
          v220 = v216 + (v766 ^ 0xA4093822) + v219;
          v221 = __ROR4__(v220 ^ v217, 8);
          v222 = v221 + v218;
          v920 = __ROR4__(v222 ^ v219, 7);
          v223 = v200 + (v873 ^ 0x452821E6) + v916;
          v224 = __ROR4__(v223 ^ v921, 16);
          v225 = v224 + v884;
          v226 = __ROR4__((v224 + v884) ^ v916, 12);
          v917 = v865 ^ 0xB5470917;
          v227 = v223 + (v865 ^ 0xB5470917) + v226;
          v228 = __ROR4__(v227 ^ v224, 8);
          v229 = v228 + v225;
          v230 = __ROR4__(v229 ^ v226, 7);
          v231 = v208 + (v772 ^ 0x243F6A88) + v230;
          v232 = __ROR4__(v231 ^ v215, 16);
          v233 = v232 + v222;
          v234 = __ROR4__(v233 ^ v230, 12);
          v235 = v231 + (v766 ^ 0x38D01377) + v234;
          v236 = __ROR4__(v235 ^ v232, 8);
          v796 = v236 + v233;
          v885 = __ROR4__((v236 + v233) ^ v234, 7);
          v237 = v214 + (v881 ^ 0xEC4E6C89) + v209;
          v238 = __ROR4__(v237 ^ v221, 16);
          v239 = v238 + v229;
          v240 = __ROR4__(v239 ^ v209, 12);
          v241 = v237 + (v868 ^ 0x299F31D0) + v240;
          v922 = __ROR4__(v241 ^ v238, 8);
          v852 = v922 + v239;
          v242 = __ROR4__((v922 + v239) ^ v240, 7);
          v243 = v220 + (v835 ^ 0xA4093822) + v925;
          v244 = __ROR4__(v243 ^ v228, 16);
          v245 = __ROR4__((v244 + v889) ^ v925, 12);
          v246 = v243 + (v784 ^ 0x13198A2E) + v245;
          v831 = __ROR4__(v246 ^ v244, 8);
          v247 = v831 + v244 + v889;
          v248 = __ROR4__(v247 ^ v245, 7);
          v249 = v227 + (v861 ^ 0xB5470917) + v920;
          v250 = __ROR4__(v249 ^ v841, 16);
          v251 = v250 + v918;
          v252 = __ROR4__((v250 + v918) ^ v920, 12);
          v253 = v249 + (v873 ^ 0xBE5466CF) + v252;
          v254 = __ROR4__(v253 ^ v250, 8);
          v255 = v254 + v251;
          v256 = __ROR4__(v255 ^ v252, 7);
          v257 = v235 + (v871 ^ 0x85A308D3) + v242;
          v258 = __ROR4__(v257 ^ v254, 16);
          v259 = v258 + v247;
          v260 = __ROR4__(v259 ^ v242, 12);
          v261 = v257 + (v778 ^ 0x3F84D5B5) + v260;
          v864 = __ROR4__(v261 ^ v258, 8);
          v262 = __ROR4__((v864 + v259) ^ v260, 7);
          v263 = v241 + (v790 ^ 0xC0AC29B7) + v248;
          v264 = __ROR4__(v263 ^ v236, 16);
          v265 = v264 + v255;
          v266 = __ROR4__(v265 ^ v248, 12);
          v267 = v263 + (v891 ^ 0x34E90C6C) + v266;
          v268 = __ROR4__(v267 ^ v264, 8);
          v842 = v268 + v265;
          v926 = __ROR4__((v268 + v265) ^ v266, 7);
          v269 = v246 + (v858 ^ 0x452821E6) + v256;
          v270 = __ROR4__(v269 ^ v922, 16);
          v271 = v270 + v796;
          v272 = __ROR4__((v270 + v796) ^ v256, 12);
          v273 = v269 + (v865 ^ 0x82EFA98) + v272;
          v274 = __ROR4__(v273 ^ v270, 8);
          v275 = v274 + v271;
          v797 = __ROR4__(v275 ^ v272, 7);
          v276 = v253 + (v805 ^ 0xC97C50DD) + v885;
          v277 = __ROR4__(v276 ^ v831, 16);
          v278 = v277 + v852;
          v279 = __ROR4__((v277 + v852) ^ v885, 12);
          v280 = v276 + (v872 ^ 0x3707344) + v279;
          v281 = __ROR4__(v280 ^ v277, 8);
          v282 = v281 + v278;
          v283 = __ROR4__(v282 ^ v279, 7);
          v886 = v835 ^ 0xC0AC29B7;
          v284 = v261 + (v835 ^ 0xC0AC29B7) + v283;
          v285 = __ROR4__(v284 ^ v268, 16);
          v286 = v285 + v275;
          v287 = __ROR4__(v286 ^ v283, 12);
          v288 = v284 + (v891 ^ 0x13198A2E) + v287;
          v826 = __ROR4__(v288 ^ v285, 8);
          v832 = v826 + v286;
          v853 = __ROR4__((v826 + v286) ^ v287, 7);
          v289 = v267 + (v858 ^ 0xBE5466CF) + v262;
          v290 = __ROR4__(v289 ^ v274, 16);
          v291 = v290 + v282;
          v292 = __ROR4__(v291 ^ v262, 12);
          v293 = v289 + (v861 ^ 0x82EFA98) + v292;
          v294 = __ROR4__(v293 ^ v290, 8);
          v829 = v294 + v291;
          v295 = __ROR4__((v294 + v291) ^ v292, 7);
          v296 = v273 + (v766 ^ 0x34E90C6C) + v926;
          v297 = __ROR4__(v296 ^ v281, 16);
          v298 = v297 + v864 + v259;
          v299 = __ROR4__(v298 ^ v926, 12);
          v300 = v296 + (v790 ^ 0x243F6A88) + v299;
          v867 = __ROR4__(v300 ^ v297, 8);
          v301 = v867 + v298;
          v302 = __ROR4__(v301 ^ v299, 7);
          v303 = v280 + (v865 ^ 0x3707344) + v797;
          v304 = __ROR4__(v303 ^ v864, 16);
          v305 = v304 + v842;
          v306 = __ROR4__((v304 + v842) ^ v797, 12);
          v307 = v303 + (v805 ^ 0x452821E6) + v306;
          v308 = __ROR4__(v307 ^ v304, 8);
          v309 = v308 + v305;
          v310 = __ROR4__(v309 ^ v306, 7);
          v311 = v288 + (v784 ^ 0xC97C50DD) + v295;
          v312 = __ROR4__(v311 ^ v308, 16);
          v313 = v312 + v301;
          v314 = __ROR4__(v313 ^ v295, 12);
          v315 = v311 + (v872 ^ 0xA4093822) + v314;
          v811 = __ROR4__(v315 ^ v312, 8);
          v798 = v811 + v313;
          v316 = __ROR4__((v811 + v313) ^ v314, 7);
          v317 = v293 + (v868 ^ 0x299F31D0) + v302;
          v318 = __ROR4__(v317 ^ v826, 16);
          v319 = v318 + v309;
          v320 = __ROR4__(v319 ^ v302, 12);
          v321 = v317 + (v881 ^ 0xEC4E6C89) + v320;
          v322 = __ROR4__(v321 ^ v318, 8);
          v827 = v322 + v319;
          v929 = __ROR4__((v322 + v319) ^ v320, 7);
          v323 = v300 + (v873 ^ 0x3F84D5B5) + v310;
          v324 = __ROR4__(v323 ^ v294, 16);
          v325 = v324 + v832;
          v326 = __ROR4__((v324 + v832) ^ v310, 12);
          v327 = v323 + (v871 ^ 0xB5470917) + v326;
          v328 = __ROR4__(v327 ^ v324, 8);
          v329 = v328 + v325;
          v843 = __ROR4__(v329 ^ v326, 7);
          v330 = v307 + (v778 ^ 0x38D01377) + v853;
          v331 = __ROR4__(v330 ^ v867, 16);
          v332 = v331 + v829;
          v333 = __ROR4__((v331 + v829) ^ v853, 12);
          v334 = v330 + (v772 ^ 0x85A308D3) + v333;
          v335 = __ROR4__(v334 ^ v331, 8);
          v336 = v335 + v332;
          v337 = __ROR4__(v336 ^ v333, 7);
          v338 = v315 + (v891 ^ 0x299F31D0) + v337;
          v339 = __ROR4__(v338 ^ v322, 16);
          v340 = v339 + v329;
          v341 = __ROR4__(v340 ^ v337, 12);
          v342 = v338 + (v881 ^ 0xC0AC29B7) + v341;
          v830 = __ROR4__(v342 ^ v339, 8);
          v854 = v830 + v340;
          v923 = __ROR4__((v830 + v340) ^ v341, 7);
          v343 = v321 + (v778 ^ 0xB5470917) + v316;
          v344 = __ROR4__(v343 ^ v328, 16);
          v345 = v344 + v336;
          v346 = __ROR4__(v345 ^ v316, 12);
          v347 = v343 + (v873 ^ 0x85A308D3) + v346;
          v978 = __ROR4__(v347 ^ v344, 8);
          v927 = v978 + v345;
          v348 = __ROR4__((v978 + v345) ^ v346, 7);
          v349 = v327 + (v871 ^ 0xC97C50DD) + v929;
          v350 = __ROR4__(v349 ^ v335, 16);
          v351 = v350 + v798;
          v352 = __ROR4__((v350 + v798) ^ v929, 12);
          v353 = v349 + (v872 ^ 0x3F84D5B5) + v352;
          v354 = __ROR4__(v353 ^ v350, 8);
          v355 = v354 + v351;
          v356 = __ROR4__(v355 ^ v352, 7);
          v357 = v334 + (v784 ^ 0xBE5466CF) + v843;
          v358 = __ROR4__(v357 ^ v811, 16);
          v359 = v358 + v827;
          v360 = __ROR4__((v358 + v827) ^ v843, 12);
          v361 = v357 + (v861 ^ 0xA4093822) + v360;
          v362 = __ROR4__(v361 ^ v358, 8);
          v363 = v362 + v359;
          v364 = __ROR4__(v363 ^ v360, 7);
          v365 = v342 + (v766 ^ 0xEC4E6C89) + v348;
          v366 = __ROR4__(v365 ^ v362, 16);
          v367 = v366 + v355;
          v368 = __ROR4__(v367 ^ v348, 12);
          v369 = v365 + (v868 ^ 0x243F6A88) + v368;
          v812 = __ROR4__(v369 ^ v366, 8);
          v844 = v812 + v367;
          v370 = __ROR4__((v812 + v367) ^ v368, 7);
          v371 = v347 + (v858 ^ 0x3707344) + v356;
          v372 = __ROR4__(v371 ^ v830, 16);
          v373 = v372 + v363;
          v374 = __ROR4__(v373 ^ v356, 12);
          v375 = v371 + (v805 ^ 0x82EFA98) + v374;
          v376 = __ROR4__(v375 ^ v372, 8);
          v930 = v376 + v373;
          v980 = __ROR4__((v376 + v373) ^ v374, 7);
          v377 = v353 + (v772 ^ 0x13198A2E) + v364;
          v378 = __ROR4__(v377 ^ v978, 16);
          v379 = v378 + v854;
          v380 = __ROR4__((v378 + v854) ^ v364, 12);
          v381 = v377 + (v835 ^ 0x38D01377) + v380;
          v382 = __ROR4__(v381 ^ v378, 8);
          v383 = v382 + v379;
          v855 = __ROR4__(v383 ^ v380, 7);
          v384 = v361 + (v865 ^ 0x34E90C6C) + v923;
          v385 = __ROR4__(v384 ^ v354, 16);
          v386 = v385 + v927;
          v387 = __ROR4__((v385 + v927) ^ v923, 12);
          v388 = v384 + (v790 ^ 0x452821E6) + v387;
          v389 = __ROR4__(v388 ^ v385, 8);
          v390 = v389 + v386;
          v391 = __ROR4__(v390 ^ v387, 7);
          v392 = v369 + (v872 ^ 0x34E90C6C) + v391;
          v393 = __ROR4__(v392 ^ v376, 16);
          v394 = v393 + v383;
          v395 = __ROR4__(v394 ^ v391, 12);
          v396 = v392 + (v790 ^ 0xC97C50DD) + v395;
          v764 = __ROR4__(v396 ^ v393, 8);
          v924 = v764 + v394;
          v928 = __ROR4__((v764 + v394) ^ v395, 7);
          v397 = v375 + (v868 ^ 0x3F84D5B5) + v370;
          v398 = __ROR4__(v397 ^ v382, 16);
          v399 = v398 + v390;
          v400 = __ROR4__(v399 ^ v370, 12);
          v401 = v397 + (v871 ^ 0xEC4E6C89) + v400;
          v402 = __ROR4__(v401 ^ v398, 8);
          v979 = v402 + v399;
          v403 = __ROR4__((v402 + v399) ^ v400, 7);
          v404 = v381 + (v891 ^ 0x85A308D3) + v980;
          v405 = __ROR4__(v404 ^ v389, 16);
          v406 = v405 + v844;
          v407 = __ROR4__((v405 + v844) ^ v980, 12);
          v408 = v404 + (v778 ^ 0xC0AC29B7) + v407;
          v845 = __ROR4__(v408 ^ v405, 8);
          v409 = v845 + v406;
          v410 = __ROR4__(v409 ^ v407, 7);
          v411 = v388 + (v805 ^ 0x38D01377) + v855;
          v412 = __ROR4__(v411 ^ v812, 16);
          v413 = v412 + v930;
          v414 = __ROR4__((v412 + v930) ^ v855, 12);
          v415 = v411 + (v772 ^ 0x3707344) + v414;
          v416 = __ROR4__(v415 ^ v412, 8);
          v417 = v416 + v413;
          v418 = __ROR4__(v417 ^ v414, 7);
          v419 = v396 + (v881 ^ 0x243F6A88) + v403;
          v420 = __ROR4__(v419 ^ v416, 16);
          v421 = v420 + v409;
          v422 = __ROR4__(v421 ^ v403, 12);
          v423 = v419 + (v766 ^ 0x299F31D0) + v422;
          v813 = __ROR4__(v423 ^ v420, 8);
          v856 = v813 + v421;
          v424 = __ROR4__((v813 + v421) ^ v422, 7);
          v425 = v401 + (v873 ^ 0xA4093822) + v410;
          v426 = __ROR4__(v425 ^ v764, 16);
          v427 = v426 + v417;
          v428 = __ROR4__(v427 ^ v410, 12);
          v429 = v425 + (v784 ^ 0xB5470917) + v428;
          v430 = __ROR4__(v429 ^ v426, 8);
          v931 = v430 + v427;
          v981 = __ROR4__((v430 + v427) ^ v428, 7);
          v431 = v408 + (v865 ^ 0x82EFA98) + v418;
          v432 = __ROR4__(v431 ^ v402, 16);
          v433 = __ROR4__((v432 + v924) ^ v418, 12);
          v434 = v431 + (v858 ^ 0x452821E6) + v433;
          v435 = __ROR4__(v434 ^ v432, 8);
          v436 = v435 + v432 + v924;
          v890 = __ROR4__(v436 ^ v433, 7);
          v835 ^= 0xBE5466CF;
          v437 = v415 + v835 + v928;
          v438 = __ROR4__(v437 ^ v845, 16);
          v439 = __ROR4__((v438 + v979) ^ v928, 12);
          v861 ^= 0x13198A2Eu;
          v440 = v437 + v861 + v439;
          v441 = __ROR4__(v440 ^ v438, 8);
          v442 = v441 + v438 + v979;
          v443 = __ROR4__(v442 ^ v439, 7);
          v444 = v423 + (v858 ^ 0xB5470917) + v443;
          v445 = __ROR4__(v444 ^ v430, 16);
          v446 = v445 + v436;
          v447 = __ROR4__(v446 ^ v443, 12);
          v448 = v444 + (v873 ^ 0x82EFA98) + v447;
          v846 = __ROR4__(v448 ^ v445, 8);
          v859 = v846 + v446;
          v833 = __ROR4__((v846 + v446) ^ v447, 7);
          v871 ^= 0x38D01377u;
          v449 = v429 + v871 + v424;
          v450 = __ROR4__(v449 ^ v435, 16);
          v451 = v450 + v442;
          v452 = __ROR4__(v451 ^ v424, 12);
          v772 ^= 0x3F84D5B5u;
          v453 = v449 + v772 + v452;
          v821 = __ROR4__(v453 ^ v450, 8);
          v919 = v821 + v451;
          v454 = __ROR4__((v821 + v451) ^ v452, 7);
          v455 = v434 + (v790 ^ 0x3707344) + v981;
          v456 = __ROR4__(v455 ^ v441, 16);
          v457 = __ROR4__((v456 + v856) ^ v981, 12);
          v458 = v455 + (v805 ^ 0x34E90C6C) + v457;
          v459 = __ROR4__(v458 ^ v456, 8);
          v460 = v459 + v456 + v856;
          v461 = __ROR4__(v460 ^ v457, 7);
          v462 = v440 + (v766 ^ 0x452821E6) + v890;
          v463 = __ROR4__(v462 ^ v813, 16);
          v464 = v463 + v931;
          v465 = __ROR4__((v463 + v931) ^ v890, 12);
          v466 = v462 + (v865 ^ 0x243F6A88) + v465;
          v467 = __ROR4__(v466 ^ v463, 8);
          v468 = v467 + v464;
          v469 = __ROR4__(v468 ^ v465, 7);
          v470 = v448 + (v891 ^ 0x13198A2E) + v454;
          v471 = __ROR4__(v470 ^ v467, 16);
          v472 = v471 + v460;
          v473 = __ROR4__(v472 ^ v454, 12);
          v814 = v470 + v886 + v473;
          v866 = __ROR4__(v814 ^ v471, 8);
          v799 = v866 + v472;
          v857 = __ROR4__((v866 + v472) ^ v473, 7);
          v474 = v453 + (v872 ^ 0xEC4E6C89) + v461;
          v475 = __ROR4__(v474 ^ v846, 16);
          v476 = v475 + v468;
          v477 = __ROR4__(v476 ^ v461, 12);
          v478 = v474 + (v868 ^ 0xC97C50DD) + v477;
          v479 = __ROR4__(v478 ^ v475, 8);
          v869 = v479 + v476;
          v480 = __ROR4__((v479 + v476) ^ v477, 7);
          v481 = v458 + (v778 ^ 0xA4093822) + v469;
          v482 = __ROR4__(v481 ^ v821, 16);
          v483 = v482 + v859;
          v484 = __ROR4__((v482 + v859) ^ v469, 12);
          v485 = v481 + (v784 ^ 0x85A308D3) + v484;
          v486 = __ROR4__(v485 ^ v482, 8);
          v487 = v486 + v483;
          v488 = __ROR4__(v487 ^ v484, 7);
          v489 = v466 + v880 + v833;
          v490 = __ROR4__(v489 ^ v459, 16);
          v491 = v490 + v919;
          v492 = __ROR4__((v490 + v919) ^ v833, 12);
          v493 = v489 + (v881 ^ 0xBE5466CF) + v492;
          v494 = __ROR4__(v493 ^ v490, 8);
          v495 = v494 + v491;
          v496 = __ROR4__(v495 ^ v492, 7);
          v497 = v814 + v861 + v496;
          v498 = __ROR4__(v497 ^ v479, 16);
          v499 = v498 + v487;
          v500 = __ROR4__(v499 ^ v496, 12);
          v501 = v497 + v835 + v500;
          v502 = __ROR4__(v501 ^ v498, 8);
          v785 = v502 + v499;
          v836 = __ROR4__((v502 + v499) ^ v500, 7);
          v503 = v478 + v942 + v857;
          v504 = __ROR4__(v503 ^ v486, 16);
          v505 = v504 + v495;
          v506 = __ROR4__(v505 ^ v857, 12);
          v507 = v503 + v941 + v506;
          v815 = __ROR4__(v507 ^ v504, 8);
          v860 = v815 + v505;
          v508 = __ROR4__((v815 + v505) ^ v506, 7);
          v509 = v485 + v939 + v480;
          v510 = __ROR4__(v509 ^ v494, 16);
          v511 = __ROR4__((v510 + v799) ^ v480, 12);
          v512 = v509 + v938 + v511;
          v862 = __ROR4__(v512 ^ v510, 8);
          v513 = v862 + v510 + v799;
          v514 = __ROR4__(v513 ^ v511, 7);
          v515 = v493 + (v778 ^ 0x299F31D0) + v488;
          v516 = __ROR4__(v515 ^ v866, 16);
          v517 = v516 + v869;
          v518 = __ROR4__((v516 + v869) ^ v488, 12);
          v519 = v515 + (v881 ^ 0x85A308D3) + v518;
          v520 = __ROR4__(v519 ^ v516, 8);
          v521 = v520 + v517;
          v522 = __ROR4__(v521 ^ v518, 7);
          v523 = v501 + (v873 ^ 0x34E90C6C) + v508;
          v524 = __ROR4__(v523 ^ v520, 16);
          v525 = v524 + v513;
          v526 = __ROR4__(v525 ^ v508, 12);
          v527 = v523 + (v790 ^ 0xB5470917) + v526;
          v779 = __ROR4__(v527 ^ v524, 8);
          v791 = v779 + v525;
          v800 = __ROR4__((v779 + v525) ^ v526, 7);
          v528 = v507 + v514 + v772;
          v529 = __ROR4__(v528 ^ v502, 16);
          v530 = v529 + v521;
          v531 = __ROR4__(v530 ^ v514, 12);
          v532 = v528 + v871 + v531;
          v533 = __ROR4__(v532 ^ v529, 8);
          v773 = v533 + v530;
          v822 = __ROR4__((v533 + v530) ^ v531, 7);
          v534 = v512 + (v805 ^ 0xC0AC29B7) + v522;
          v535 = __ROR4__(v815 ^ v534, 16);
          v536 = v535 + v785;
          v537 = __ROR4__((v535 + v785) ^ v522, 12);
          v538 = v534 + (v891 ^ 0x3707344) + v537;
          v539 = __ROR4__(v538 ^ v535, 8);
          v540 = v539 + v536;
          v816 = __ROR4__(v540 ^ v537, 7);
          v541 = v519 + (v872 ^ 0x243F6A88) + v836;
          v542 = __ROR4__(v541 ^ v862, 16);
          v543 = v542 + v860;
          v544 = __ROR4__((v542 + v860) ^ v836, 12);
          v545 = v541 + (v766 ^ 0xC97C50DD) + v544;
          v546 = __ROR4__(v545 ^ v542, 8);
          v547 = v546 + v543;
          v548 = __ROR4__(v547 ^ v544, 7);
          v549 = v527 + (v766 ^ 0x85A308D3) + v548;
          v550 = __ROR4__(v549 ^ v533, 16);
          v551 = v550 + v540;
          v552 = __ROR4__(v551 ^ v548, 12);
          v828 = v549 + v952 + v552;
          v553 = __ROR4__(v828 ^ v550, 8);
          v767 = v553 + v551;
          v806 = __ROR4__((v553 + v551) ^ v552, 7);
          v554 = v532 + v953 + v800;
          v555 = __ROR4__(v554 ^ v539, 16);
          v556 = v555 + v547;
          v557 = __ROR4__(v556 ^ v800, 12);
          v558 = v554 + v954 + v557;
          v559 = __ROR4__(v558 ^ v555, 8);
          v786 = v559 + v556;
          v560 = __ROR4__((v559 + v556) ^ v557, 7);
          v561 = v538 + v955 + v822;
          v562 = __ROR4__(v561 ^ v546, 16);
          v563 = __ROR4__((v562 + v791) ^ v822, 12);
          v564 = v561 + (v881 ^ 0xA4093822) + v563;
          v823 = __ROR4__(v564 ^ v562, 8);
          v565 = v823 + v562 + v791;
          v566 = __ROR4__(v565 ^ v563, 7);
          v567 = v545 + v938 + v816;
          v568 = __ROR4__(v567 ^ v779, 16);
          v569 = v568 + v773;
          v570 = __ROR4__((v568 + v773) ^ v816, 12);
          v571 = v567 + v939 + v570;
          v572 = __ROR4__(v571 ^ v568, 8);
          v573 = v572 + v569;
          v574 = __ROR4__(v573 ^ v570, 7);
          v575 = v828 + v956 + v560;
          v576 = __ROR4__(v575 ^ v572, 16);
          v577 = v576 + v565;
          v578 = __ROR4__(v577 ^ v560, 12);
          v801 = v575 + v957 + v578;
          v780 = __ROR4__(v801 ^ v576, 8);
          v774 = v780 + v577;
          v579 = __ROR4__((v780 + v577) ^ v578, 7);
          v580 = v558 + v566 + v958;
          v581 = __ROR4__(v580 ^ v553, 16);
          v582 = v581 + v573;
          v583 = __ROR4__(v582 ^ v566, 12);
          v584 = v580 + v959 + v583;
          v585 = __ROR4__(v584 ^ v581, 8);
          v792 = v585 + v582;
          v817 = __ROR4__((v585 + v582) ^ v583, 7);
          v586 = v564 + (v891 ^ 0xC97C50DD) + v574;
          v587 = __ROR4__(v559 ^ v586, 16);
          v588 = v587 + v767;
          v589 = __ROR4__((v587 + v767) ^ v574, 12);
          v590 = v586 + (v872 ^ 0xC0AC29B7) + v589;
          v591 = __ROR4__(v590 ^ v587, 8);
          v592 = v591 + v588;
          v593 = __ROR4__(v592 ^ v589, 7);
          v594 = v571 + v940 + v806;
          v595 = __ROR4__(v594 ^ v823, 16);
          v596 = v595 + v786;
          v597 = __ROR4__((v595 + v786) ^ v806, 12);
          v598 = v594 + (v873 ^ 0x3F84D5B5) + v597;
          v599 = __ROR4__(v598 ^ v595, 8);
          v600 = v599 + v596;
          v601 = __ROR4__(v600 ^ v597, 7);
          v602 = v801 + v893 + v601;
          v603 = __ROR4__(v602 ^ v585, 16);
          v604 = v603 + v592;
          v605 = __ROR4__(v604 ^ v601, 12);
          v606 = v602 + v933 + v605;
          v607 = __ROR4__(v606 ^ v603, 8);
          v768 = v607 + v604;
          v807 = __ROR4__((v607 + v604) ^ v605, 7);
          v608 = v584 + v941 + v579;
          v609 = __ROR4__(v608 ^ v591, 16);
          v610 = v609 + v600;
          v611 = __ROR4__(v610 ^ v579, 12);
          v612 = v608 + v942 + v611;
          v613 = __ROR4__(v612 ^ v609, 8);
          v787 = v613 + v610;
          v614 = __ROR4__((v613 + v610) ^ v611, 7);
          v615 = v590 + v960 + v817;
          v616 = __ROR4__(v615 ^ v599, 16);
          v617 = __ROR4__((v616 + v774) ^ v817, 12);
          v618 = v615 + (v873 ^ 0x38D01377) + v617;
          v802 = __ROR4__(v618 ^ v616, 8);
          v619 = v802 + v616 + v774;
          v620 = __ROR4__(v619 ^ v617, 7);
          v621 = v598 + (v872 ^ 0x82EFA98) + v593;
          v622 = __ROR4__(v621 ^ v780, 16);
          v623 = v622 + v792;
          v624 = __ROR4__((v622 + v792) ^ v593, 12);
          v625 = v621 + v961 + v624;
          v626 = __ROR4__(v625 ^ v622, 8);
          v627 = v626 + v623;
          v628 = __ROR4__(v627 ^ v624, 7);
          v629 = v606 + v895 + v614;
          v630 = __ROR4__(v629 ^ v626, 16);
          v631 = v630 + v619;
          v632 = __ROR4__(v631 ^ v614, 12);
          v818 = v629 + (v891 ^ 0x85A308D3) + v632;
          v781 = __ROR4__(v818 ^ v630, 8);
          v775 = v781 + v631;
          v633 = __ROR4__((v781 + v631) ^ v632, 7);
          v634 = v612 + v620 + v962;
          v635 = __ROR4__(v634 ^ v607, 16);
          v636 = v635 + v627;
          v637 = __ROR4__(v636 ^ v620, 12);
          v638 = v634 + v963 + v637;
          v639 = __ROR4__(v638 ^ v635, 8);
          v793 = v639 + v636;
          v824 = __ROR4__((v639 + v636) ^ v637, 7);
          v640 = v618 + v964 + v628;
          v641 = __ROR4__(v613 ^ v640, 16);
          v642 = v641 + v768;
          v643 = __ROR4__((v641 + v768) ^ v628, 12);
          v644 = v640 + v965 + v643;
          v645 = __ROR4__(v644 ^ v641, 8);
          v646 = v645 + v642;
          v647 = __ROR4__(v646 ^ v643, 7);
          v648 = v625 + (v881 ^ 0x3707344) + v807;
          v649 = __ROR4__(v648 ^ v802, 16);
          v650 = v649 + v787;
          v651 = __ROR4__((v649 + v787) ^ v807, 12);
          v652 = v648 + v966 + v651;
          v653 = __ROR4__(v652 ^ v649, 8);
          v654 = v653 + v650;
          v655 = __ROR4__(v654 ^ v651, 7);
          v656 = v818 + v898 + v655;
          v657 = __ROR4__(v656 ^ v639, 16);
          v658 = v657 + v646;
          v659 = __ROR4__(v658 ^ v655, 12);
          v660 = v656 + v900 + v659;
          v661 = __ROR4__(v660 ^ v657, 8);
          v769 = v661 + v658;
          v808 = __ROR4__((v661 + v658) ^ v659, 7);
          v662 = v638 + (v891 ^ 0x243F6A88) + v633;
          v663 = __ROR4__(v662 ^ v645, 16);
          v664 = v663 + v654;
          v665 = __ROR4__(v664 ^ v633, 12);
          v666 = v662 + v967 + v665;
          v667 = __ROR4__(v666 ^ v663, 8);
          v788 = v667 + v664;
          v668 = __ROR4__((v667 + v664) ^ v665, 7);
          v669 = v644 + (v881 ^ 0x13198A2E) + v824;
          v670 = __ROR4__(v669 ^ v653, 16);
          v671 = __ROR4__((v670 + v775) ^ v824, 12);
          v672 = v669 + v968 + v671;
          v803 = __ROR4__(v672 ^ v670, 8);
          v673 = v803 + v670 + v775;
          v674 = __ROR4__(v673 ^ v671, 7);
          v675 = v652 + (v873 ^ 0xC97C50DD) + v647;
          v676 = __ROR4__(v675 ^ v781, 16);
          v677 = v676 + v793;
          v678 = __ROR4__((v676 + v793) ^ v647, 12);
          v679 = v675 + (v872 ^ 0xB5470917) + v678;
          v680 = __ROR4__(v679 ^ v676, 8);
          v681 = v680 + v677;
          v682 = __ROR4__(v681 ^ v678, 7);
          v683 = v660 + v933 + v668;
          v684 = __ROR4__(v683 ^ v680, 16);
          v685 = v684 + v673;
          v686 = __ROR4__(v685 ^ v668, 12);
          v819 = v683 + v893 + v686;
          v782 = __ROR4__(v819 ^ v684, 8);
          v776 = v782 + v685;
          v687 = __ROR4__((v782 + v685) ^ v686, 7);
          v688 = v666 + v674 + v902;
          v689 = __ROR4__(v688 ^ v661, 16);
          v690 = v689 + v681;
          v691 = __ROR4__(v690 ^ v674, 12);
          v692 = v688 + v904 + v691;
          v693 = __ROR4__(v692 ^ v689, 8);
          v794 = v693 + v690;
          v694 = __ROR4__((v693 + v690) ^ v691, 7);
          v695 = v672 + v969 + v682;
          v696 = __ROR4__(v667 ^ v695, 16);
          v697 = v696 + v769;
          v698 = __ROR4__((v696 + v769) ^ v682, 12);
          v699 = v695 + v907 + v698;
          v700 = __ROR4__(v699 ^ v696, 8);
          v701 = v700 + v697;
          v825 = __ROR4__(v701 ^ v698, 7);
          v702 = v679 + v970 + v808;
          v703 = __ROR4__(v702 ^ v803, 16);
          v704 = v703 + v788;
          v705 = __ROR4__((v703 + v788) ^ v808, 12);
          v706 = v702 + v909 + v705;
          v707 = __ROR4__(v706 ^ v703, 8);
          v708 = v707 + v704;
          v709 = __ROR4__(v708 ^ v705, 7);
          v710 = v819 + v911 + v709;
          v711 = __ROR4__(v710 ^ v693, 16);
          v712 = v711 + v701;
          v713 = __ROR4__(v712 ^ v709, 12);
          v804 = v710 + v971 + v713;
          v820 = __ROR4__(v804 ^ v711, 8);
          v770 = v820 + v712;
          v809 = __ROR4__((v820 + v712) ^ v713, 7);
          v714 = v692 + v972 + v687;
          v715 = __ROR4__(v714 ^ v700, 16);
          v716 = v715 + v708;
          v717 = __ROR4__(v716 ^ v687, 12);
          v718 = v714 + v973 + v717;
          v719 = __ROR4__(v718 ^ v715, 8);
          v789 = v719 + v716;
          v720 = __ROR4__((v719 + v716) ^ v717, 7);
          v721 = v699 + (v872 ^ 0xC0AC29B7) + v694;
          v722 = __ROR4__(v721 ^ v707, 16);
          v723 = v722 + v776;
          v724 = __ROR4__((v722 + v776) ^ v694, 12);
          v725 = v721 + (v891 ^ 0xC97C50DD) + v724;
          v726 = __ROR4__(v725 ^ v722, 8);
          v727 = v726 + v723;
          v728 = __ROR4__(v727 ^ v724, 7);
          v729 = v706 + v974 + v825;
          v730 = __ROR4__(v729 ^ v782, 16);
          v731 = v730 + v794;
          v732 = __ROR4__((v730 + v794) ^ v825, 12);
          v733 = v729 + v913 + v732;
          v734 = __ROR4__(v733 ^ v730, 8);
          v735 = v734 + v731;
          v736 = __ROR4__(v735 ^ v732, 7);
          v737 = v804 + v975 + v720;
          v738 = __ROR4__(v737 ^ v734, 16);
          v739 = v738 + v727;
          v740 = __ROR4__(v739 ^ v720, 12);
          v741 = v737 + v976 + v740;
          v783 = __ROR4__(v741 ^ v738, 8);
          v742 = v783 + v739;
          v777 = v742 ^ v740;
          v743 = v718 + v728 + (v881 ^ 0xBE5466CF);
          v744 = __ROR4__(v743 ^ v820, 16);
          v745 = v744 + v735;
          v746 = __ROR4__(v745 ^ v728, 12);
          v747 = v743 + v880 + v746;
          v748 = __ROR4__(v747 ^ v744, 8);
          v749 = v748 + v745;
          v795 = v749 ^ v746;
          v750 = v725 + v977 + v736;
          v751 = __ROR4__(v719 ^ v750, 16);
          v752 = v751 + v770;
          v753 = __ROR4__((v751 + v770) ^ v736, 12);
          v754 = v750 + v915 + v753;
          v755 = __ROR4__(v754 ^ v751, 8);
          v756 = v755 + v752;
          v771 = v756 ^ v753;
          v757 = v733 + (v873 ^ 0x452821E6) + v809;
          v758 = __ROR4__(v757 ^ v726, 16);
          v759 = v758 + v789;
          v760 = __ROR4__((v758 + v789) ^ v809, 12);
          v761 = v757 + v917 + v760;
          v762 = __ROR4__(v761 ^ v758, 8);
          v763 = v762 + v759;
          v947 ^= v949 ^ v756 ^ v741;
          v948 ^= v950 ^ v747 ^ v763;
          v946 ^= v951 ^ v754 ^ v742;
          v945 ^= v943 ^ v749 ^ v761;
          v937 ^= v949 ^ v748 ^ __ROR4__(v763 ^ v760, 7);
          v936 ^= v950 ^ v755 ^ __ROR4__(v777, 7);
          v935 ^= v951 ^ __ROR4__(v795, 7) ^ v762;
          result = (_DWORD *)v783;
          v934 ^= v943 ^ __ROR4__(v771, 7) ^ v783;
          v3 = 0;
        }
      }
      while ( n );
    }
    v765[17] = v947;
    v765[18] = v948;
    v765[19] = v946;
    v765[20] = v945;
    v765[21] = v937;
    v765[22] = v936;
    v765[23] = v935;
    v765[24] = v934;
    v765[25] = v949;
    v765[26] = v950;
    v765[27] = v951;
    v765[28] = v943;
    v765[29] = v932;
    v765[30] = v944;
    v765[16] = v3;
  }
  else
  {
    result = memcpy((char *)result + v3, a2, a3);
    v765[16] = n + v3;
  }
  return result;
}
