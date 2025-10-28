int __fastcall sub_CBEA0(_DWORD *a1, unsigned __int64 *a2)
{
  __int64 *v3; // r12
  unsigned __int64 v5; // r0
  _DWORD *v6; // r3
  _DWORD *v7; // r1
  __int64 v8; // t1
  __int64 v9; // kr3A0_8
  int v10; // r1
  int v11; // lr
  int v12; // r2
  int v13; // r0
  unsigned int v14; // r11
  unsigned int v15; // r5
  unsigned int v16; // r6
  unsigned int v17; // r1
  unsigned int v18; // r2
  int v19; // r7
  int v20; // kr3B0_4
  __int64 v21; // kr3B8_8
  unsigned int v22; // lr
  unsigned int v23; // r2
  int v24; // r5
  int v25; // r0
  unsigned int v26; // r10
  unsigned int v27; // r12
  unsigned int v28; // lr
  unsigned int v29; // r5
  __int64 v30; // kr3D0_8
  int v31; // r7
  int v32; // r2
  int v33; // r1
  int v34; // r4
  __int64 v35; // r10
  __int64 v36; // kr3D8_8
  unsigned int v37; // r7
  unsigned int v38; // r1
  unsigned int v39; // r4
  unsigned int v40; // kr3E0_4
  __int64 v41; // kr3E8_8
  int v42; // r1
  int v43; // r12
  int v44; // lr
  unsigned int v45; // r12
  unsigned int v46; // r1
  int v47; // r0
  int v48; // r12
  unsigned int v49; // lr
  int v50; // kr3F0_4
  int v51; // r1
  unsigned int v52; // r7
  unsigned __int64 v53; // r8
  int v54; // r12
  unsigned int v55; // r5
  unsigned int v56; // r4
  unsigned __int64 v57; // kr400_8
  unsigned int v58; // r6
  int v59; // r6
  unsigned int v60; // r12
  unsigned int v61; // r6
  unsigned int v62; // r0
  int v63; // kr14_4
  unsigned int v64; // r2
  unsigned int v65; // r4
  int v66; // r12
  int v67; // r1
  unsigned int v68; // r7
  unsigned int v69; // lr
  unsigned __int64 v70; // kr410_8
  unsigned int v71; // r6
  __int64 v72; // r4
  unsigned int v73; // r2
  __int64 v74; // kr418_8
  __int64 v75; // r6
  unsigned int v76; // r1
  unsigned int v77; // r12
  unsigned __int64 v78; // kr428_8
  unsigned int v79; // r2
  unsigned int v80; // r0
  unsigned int v81; // lr
  __int64 v82; // r2
  unsigned int v83; // r1
  unsigned __int64 v84; // kr448_8
  unsigned int v85; // r0
  unsigned int v86; // lr
  unsigned __int64 v87; // kr458_8
  unsigned int v88; // kr38_4
  unsigned int v89; // r0
  unsigned __int64 v90; // kr460_8
  unsigned __int64 v91; // kr468_8
  unsigned int v92; // r12
  unsigned int v93; // kr470_4
  int v94; // lr
  unsigned __int64 v95; // kr478_8
  unsigned int v96; // r1
  unsigned int v97; // r1
  unsigned int v98; // r0
  unsigned int v99; // kr488_4
  int v100; // lr
  unsigned int v101; // kr490_4
  unsigned int v102; // lr
  unsigned int v103; // kr4C_4
  unsigned int v104; // lr
  unsigned int v105; // r12
  unsigned int v106; // r0
  unsigned int v107; // r1
  unsigned __int64 v108; // kr4B0_8
  unsigned int v109; // r12
  unsigned int v110; // r0
  unsigned __int64 v111; // kr4B8_8
  int v112; // r12
  unsigned int v113; // r0
  unsigned int v114; // lr
  unsigned int v115; // r12
  unsigned int v116; // r12
  unsigned __int64 v117; // kr4D0_8
  int v118; // lr
  int v119; // lr
  unsigned __int64 v120; // kr4D8_8
  unsigned __int64 v121; // kr4E0_8
  int v122; // lr
  unsigned __int64 v123; // kr4E8_8
  unsigned int v124; // lr
  unsigned __int64 v125; // kr500_8
  unsigned __int64 v126; // kr508_8
  __int64 v127; // r0
  int v128; // r12
  int v129; // r12
  unsigned int v130; // lr
  unsigned int v131; // r12
  signed __int64 v132; // r6
  int v133; // kr7C_4
  unsigned __int64 v134; // kr530_8
  unsigned __int64 v135; // kr538_8
  __int64 v136; // r10
  unsigned __int64 v137; // r8
  int v138; // r12
  unsigned int v139; // kr550_4
  unsigned __int64 v140; // kr558_8
  __int64 v141; // r0
  unsigned __int64 v142; // kr560_8
  unsigned __int64 v143; // kr578_8
  __int64 v144; // r0
  unsigned __int64 v145; // kr580_8
  unsigned __int64 v146; // kr588_8
  unsigned __int64 v147; // kr590_8
  unsigned __int64 v148; // r2
  unsigned __int64 v149; // kr598_8
  int v150; // r12
  unsigned int v151; // kr98_4
  __int64 v152; // r0
  unsigned int v153; // lr
  unsigned int v154; // r12
  unsigned __int64 v155; // kr5B0_8
  unsigned __int64 v156; // kr5B8_8
  int v157; // r12
  unsigned int v158; // lr
  unsigned int v159; // r12
  unsigned int v160; // r12
  unsigned int v161; // lr
  __int64 v162; // kr5D0_8
  int v163; // lr
  int v164; // lr
  unsigned __int64 v165; // kr5D8_8
  unsigned __int64 v166; // kr5E0_8
  int v167; // lr
  unsigned __int64 v168; // kr5E8_8
  unsigned int v169; // lr
  unsigned __int64 v170; // kr608_8
  unsigned __int64 v171; // kr610_8
  unsigned __int64 v172; // kr618_8
  unsigned int v173; // r12
  int v174; // r12
  int v175; // r12
  unsigned __int64 v176; // kr620_8
  unsigned int v177; // kr628_4
  unsigned int v178; // r12
  unsigned __int64 v179; // kr638_8
  unsigned int v180; // r12
  unsigned int v181; // kr640_4
  unsigned __int64 v182; // kr648_8
  unsigned __int64 v183; // r10
  unsigned int v184; // lr
  unsigned __int64 v185; // kr660_8
  __int64 v186; // r0
  unsigned __int64 v187; // kr668_8
  unsigned int v188; // r12
  unsigned __int64 v189; // kr678_8
  unsigned __int64 v190; // kr688_8
  unsigned __int64 v191; // kr690_8
  bool v192; // cf
  int v193; // r12
  unsigned int v194; // lr
  unsigned int v195; // r12
  unsigned __int64 v196; // kr6B8_8
  int v197; // r12
  unsigned int v198; // r12
  unsigned int v199; // lr
  unsigned int v200; // r12
  unsigned int v201; // r12
  unsigned __int64 v202; // kr6D0_8
  int v203; // lr
  int v204; // lr
  unsigned __int64 v205; // kr6D8_8
  unsigned __int64 v206; // kr6E0_8
  int v207; // lr
  int v208; // kr6E8_4
  unsigned int v209; // lr
  int v210; // r12
  unsigned __int64 v211; // kr700_8
  unsigned __int64 v212; // kr708_8
  unsigned int v213; // r12
  int v214; // r12
  int v215; // r12
  unsigned int v216; // lr
  unsigned int v217; // r12
  unsigned __int64 v218; // kr730_8
  unsigned int v219; // r12
  unsigned __int64 v220; // kr738_8
  unsigned __int64 v221; // kr740_8
  __int64 v222; // r10
  int v223; // r12
  unsigned __int64 v224; // kr760_8
  unsigned __int64 v225; // kr768_8
  __int64 v226; // r0
  unsigned __int64 v227; // kr770_8
  int v228; // r12
  unsigned __int64 v229; // kr780_8
  unsigned __int64 v230; // kr788_8
  unsigned __int64 v231; // kr790_8
  unsigned __int64 v232; // kr798_8
  int v233; // lr
  int v234; // r12
  unsigned int v235; // lr
  unsigned int v236; // r12
  unsigned __int64 v237; // kr7B0_8
  int v238; // r12
  unsigned int v239; // lr
  unsigned int v240; // r12
  unsigned int v241; // r12
  int v242; // lr
  int v243; // lr
  unsigned __int64 v244; // kr7D8_8
  unsigned __int64 v245; // kr7E0_8
  int v246; // lr
  unsigned __int64 v247; // kr7E8_8
  unsigned int v248; // lr
  int v249; // r12
  unsigned __int64 v250; // kr800_8
  unsigned __int64 v251; // kr808_8
  unsigned int v252; // r12
  unsigned int v253; // r12
  unsigned int v254; // kr820_4
  unsigned int v255; // r12
  unsigned __int64 v256; // kr830_8
  int v257; // lr
  unsigned int v258; // r12
  unsigned __int64 v259; // kr838_8
  unsigned __int64 v260; // kr840_8
  __int64 v261; // r10
  int v262; // r12
  unsigned __int64 v263; // kr858_8
  unsigned __int64 v264; // kr860_8
  __int64 v265; // r0
  unsigned __int64 v266; // kr868_8
  unsigned int v267; // r12
  int v268; // r12
  int v269; // r12
  unsigned __int64 v270; // kr878_8
  unsigned __int64 v271; // kr880_8
  unsigned __int64 v272; // kr888_8
  unsigned int v273; // lr
  int v274; // r12
  unsigned int v275; // lr
  unsigned int v276; // r12
  unsigned __int64 v277; // kr8A0_8
  unsigned int v278; // lr
  unsigned int v279; // r12
  unsigned int v280; // lr
  unsigned int v281; // kr8B8_4
  unsigned int v282; // r12
  unsigned int v283; // r12
  unsigned __int64 v284; // kr8C0_8
  unsigned int v285; // lr
  unsigned __int64 v286; // kr8C8_8
  unsigned __int64 v287; // kr8D0_8
  int v288; // lr
  unsigned __int64 v289; // kr8D8_8
  unsigned int v290; // lr
  unsigned __int64 v291; // kr8F0_8
  unsigned __int64 v292; // kr8F8_8
  unsigned int v293; // r12
  int v294; // r12
  int v295; // r12
  unsigned int v296; // lr
  unsigned int v297; // r12
  unsigned __int64 v298; // kr928_8
  unsigned __int64 v299; // kr930_8
  unsigned __int64 v300; // kr938_8
  __int64 v301; // r10
  int v302; // r12
  unsigned __int64 v303; // kr960_8
  __int64 v304; // r0
  unsigned __int64 v305; // kr968_8
  unsigned __int64 v306; // kr980_8
  signed __int64 v307; // r0
  unsigned __int64 v308; // kr988_8
  unsigned __int64 v309; // kr990_8
  unsigned int v310; // r12
  unsigned __int64 v311; // kr9A8_8
  int v312; // lr
  unsigned int v313; // kr9C0_4
  unsigned int v314; // r12
  unsigned int v315; // r12
  unsigned __int64 v316; // kr9C8_8
  int v317; // lr
  int v318; // lr
  unsigned __int64 v319; // kr9D0_8
  unsigned __int64 v320; // kr9D8_8
  int v321; // lr
  unsigned __int64 v322; // kr9E0_8
  unsigned int v323; // lr
  int v324; // r12
  unsigned int v325; // lr
  unsigned __int64 v326; // kr9F8_8
  unsigned __int64 v327; // krA00_8
  unsigned __int64 v328; // r10
  unsigned int v329; // r12
  unsigned __int64 v330; // krA08_8
  unsigned int v331; // r12
  unsigned int v332; // lr
  unsigned int v333; // r12
  unsigned __int64 v334; // krA20_8
  unsigned int v335; // r12
  int v336; // lr
  unsigned __int64 v337; // krA28_8
  unsigned __int64 v338; // krA30_8
  __int64 v339; // r10
  int v340; // r12
  unsigned __int64 v341; // krA48_8
  unsigned int v342; // r12
  signed __int64 v343; // r0
  unsigned __int64 v344; // krA50_8
  unsigned int v345; // r12
  int v346; // lr
  signed __int64 v347; // krA60_8
  unsigned __int64 v348; // krA68_8
  signed __int64 v349; // r0
  unsigned __int64 v350; // krA70_8
  unsigned int v351; // kr200_4
  unsigned int v352; // r12
  unsigned __int64 v353; // krA88_8
  int v354; // r12
  unsigned int v355; // lr
  unsigned int v356; // r12
  unsigned int v357; // r12
  unsigned __int64 v358; // krAA8_8
  int v359; // lr
  int v360; // lr
  unsigned __int64 v361; // krAB0_8
  unsigned __int64 v362; // krAB8_8
  int v363; // lr
  unsigned __int64 v364; // krAC0_8
  unsigned int v365; // lr
  unsigned __int64 v366; // krAD8_8
  unsigned int v367; // krAE0_4
  unsigned __int64 v368; // krAE8_8
  unsigned int v369; // r12
  int v370; // r12
  int v371; // r12
  unsigned int v372; // lr
  unsigned int v373; // r12
  unsigned __int64 v374; // krB08_8
  int v375; // lr
  unsigned __int64 v376; // krB18_8
  __int64 v377; // r10
  int v378; // r12
  unsigned __int64 v379; // krB30_8
  unsigned __int64 v380; // krB38_8
  unsigned __int64 v381; // krB48_8
  unsigned __int64 v382; // krB50_8
  unsigned __int64 v383; // krB58_8
  signed __int64 v384; // r0
  unsigned __int64 v385; // krB60_8
  unsigned int v386; // r12
  unsigned int v387; // lr
  unsigned int v388; // r12
  unsigned int v389; // r12
  unsigned int v390; // lr
  unsigned int v391; // r12
  unsigned int v392; // r12
  unsigned __int64 v393; // krBA8_8
  int v394; // lr
  int v395; // lr
  unsigned int v396; // krBB0_4
  unsigned __int64 v397; // krBB8_8
  int v398; // lr
  unsigned __int64 v399; // krBC0_8
  unsigned int v400; // lr
  unsigned __int64 v401; // r0
  unsigned __int64 v402; // krBE0_8
  unsigned __int64 v403; // krBE8_8
  unsigned int v404; // r12
  int v405; // r12
  int v406; // r12
  unsigned int v407; // lr
  unsigned int v408; // r12
  unsigned __int64 v409; // krC10_8
  unsigned int v410; // lr
  unsigned int v411; // krC18_4
  unsigned __int64 v412; // krC20_8
  __int64 v413; // r10
  int v414; // r12
  unsigned __int64 v415; // krC40_8
  unsigned __int64 v416; // krC48_8
  __int64 v417; // r0
  unsigned int v418; // lr
  unsigned __int64 v419; // krC68_8
  unsigned __int64 v420; // krC70_8
  unsigned __int64 v421; // krC88_8
  int v422; // r12
  unsigned int v423; // r12
  unsigned __int64 v424; // krCA0_8
  int v425; // r12
  unsigned int v426; // r12
  unsigned int v427; // lr
  unsigned int v428; // r12
  unsigned int v429; // r12
  unsigned __int64 v430; // krCC0_8
  int v431; // lr
  int v432; // lr
  unsigned __int64 v433; // krCC8_8
  unsigned __int64 v434; // krCD0_8
  int v435; // lr
  unsigned __int64 v436; // krCD8_8
  unsigned int v437; // lr
  unsigned __int64 v438; // krCF0_8
  unsigned __int64 v439; // krCF8_8
  unsigned int v440; // r12
  unsigned int v441; // r12
  unsigned int v442; // krD10_4
  unsigned int v443; // r12
  unsigned __int64 v444; // krD20_8
  unsigned __int64 v445; // krD28_8
  unsigned __int64 v446; // krD30_8
  __int64 v447; // r10
  int v448; // r12
  unsigned __int64 v449; // krD48_8
  signed __int64 v450; // r6
  unsigned __int64 v451; // krD50_8
  __int64 v452; // r0
  unsigned __int64 v453; // krD58_8
  unsigned __int64 v454; // krD70_8
  unsigned __int64 v455; // krD78_8
  unsigned __int64 v456; // krD80_8
  unsigned __int64 v457; // krD88_8
  int v458; // r12
  unsigned int v459; // lr
  unsigned int v460; // r12
  unsigned __int64 v461; // krDA8_8
  int v462; // r12
  unsigned int v463; // lr
  unsigned int v464; // r12
  unsigned int v465; // r12
  int v466; // lr
  int v467; // lr
  unsigned __int64 v468; // krDD0_8
  unsigned __int64 v469; // krDD8_8
  int v470; // lr
  unsigned __int64 v471; // krDE0_8
  unsigned int v472; // lr
  int v473; // r12
  int v474; // lr
  unsigned int v475; // r12
  unsigned __int64 v476; // krE08_8
  unsigned int v477; // r12
  unsigned __int64 v478; // krE10_8
  unsigned int v479; // lr
  int v480; // lr
  int v481; // r12
  int v482; // r12
  unsigned __int64 v483; // krE28_8
  unsigned int v484; // lr
  unsigned int v485; // r12
  unsigned __int64 v486; // krE38_8
  unsigned int v487; // lr
  unsigned __int64 v488; // krE40_8
  unsigned __int64 v489; // krE50_8
  unsigned int v490; // r12
  unsigned int v491; // r12
  unsigned __int64 v492; // krE70_8
  unsigned int v493; // krE80_4
  unsigned int v494; // lr
  unsigned __int64 v495; // krE88_8
  unsigned __int64 v496; // krE90_8
  unsigned __int64 v497; // krE98_8
  unsigned __int64 v498; // krEA0_8
  unsigned int v499; // r12
  unsigned __int64 v500; // krEA8_8
  unsigned int v501; // lr
  int v502; // lr
  unsigned __int64 v503; // krEC0_8
  unsigned __int64 v504; // krEC8_8
  unsigned __int64 v505; // krED8_8
  unsigned int v506; // r12
  unsigned int v507; // r12
  unsigned int v508; // krEE8_4
  unsigned __int64 v509; // krEF0_8
  unsigned __int64 v510; // krEF8_8
  unsigned __int64 v511; // krF10_8
  unsigned int v512; // r12
  unsigned __int64 v513; // r8
  unsigned __int64 v514; // r0
  unsigned int v515; // r12
  unsigned int v516; // krF28_4
  unsigned __int64 v517; // krF30_8
  unsigned int v518; // r1
  __int64 v519; // krF40_8
  unsigned __int64 v520; // krF48_8
  unsigned int v521; // lr
  unsigned int v522; // r12
  unsigned int v523; // r12
  int v524; // r12
  _DWORD *v525; // r2
  unsigned __int64 *v526; // lr
  unsigned __int64 v527; // r4
  unsigned __int64 v528; // t1
  int v529; // t1
  int v530; // r3
  int result; // r0
  int v532; // [sp+0h] [bp-20Ch]
  unsigned int v533; // [sp+4h] [bp-208h]
  __int64 v534; // [sp+8h] [bp-204h]
  unsigned __int64 v535; // [sp+10h] [bp-1FCh]
  int v536; // [sp+14h] [bp-1F8h]
  unsigned __int64 v537; // [sp+18h] [bp-1F4h]
  unsigned int v538; // [sp+20h] [bp-1ECh]
  unsigned __int64 v539; // [sp+20h] [bp-1ECh]
  unsigned int v540; // [sp+30h] [bp-1DCh]
  unsigned __int64 v541; // [sp+58h] [bp-1B4h]
  unsigned __int64 v542; // [sp+60h] [bp-1ACh]
  unsigned int v543; // [sp+70h] [bp-19Ch]
  unsigned int v544; // [sp+74h] [bp-198h]
  unsigned __int64 v545; // [sp+78h] [bp-194h]
  unsigned __int64 v546; // [sp+80h] [bp-18Ch]
  unsigned __int64 v547; // [sp+88h] [bp-184h]
  __int128 v548; // [sp+90h] [bp-17Ch]
  int v549; // [sp+98h] [bp-174h]
  int v550; // [sp+9Ch] [bp-170h]
  _DWORD *v551; // [sp+A0h] [bp-16Ch]
  _DWORD *v552; // [sp+A8h] [bp-164h]
  unsigned int v553; // [sp+ACh] [bp-160h]
  _BYTE v554[28]; // [sp+ACh] [bp-160h]
  unsigned int v555; // [sp+ACh] [bp-160h]
  unsigned int v556; // [sp+ACh] [bp-160h]
  unsigned int v557; // [sp+ACh] [bp-160h]
  unsigned int v558; // [sp+ACh] [bp-160h]
  unsigned int v559; // [sp+ACh] [bp-160h]
  int v560; // [sp+B0h] [bp-15Ch]
  unsigned int v561; // [sp+B0h] [bp-15Ch]
  unsigned int v562; // [sp+B0h] [bp-15Ch]
  unsigned int v563; // [sp+B0h] [bp-15Ch]
  unsigned int v564; // [sp+B0h] [bp-15Ch]
  int v565; // [sp+B4h] [bp-158h]
  unsigned int v566; // [sp+B4h] [bp-158h]
  unsigned int v567; // [sp+B4h] [bp-158h]
  unsigned int v568; // [sp+C0h] [bp-14Ch]
  __int64 v569; // [sp+C0h] [bp-14Ch]
  unsigned __int64 v570; // [sp+C0h] [bp-14Ch]
  unsigned __int64 v571; // [sp+C8h] [bp-144h]
  _BYTE v572[12]; // [sp+C8h] [bp-144h]
  unsigned int v573; // [sp+D0h] [bp-13Ch]
  unsigned int v574; // [sp+D0h] [bp-13Ch]
  int v575; // [sp+D0h] [bp-13Ch]
  unsigned int v576; // [sp+D0h] [bp-13Ch]
  unsigned int v577; // [sp+D0h] [bp-13Ch]
  unsigned int v578; // [sp+D0h] [bp-13Ch]
  unsigned int v579; // [sp+D0h] [bp-13Ch]
  unsigned int v580; // [sp+D0h] [bp-13Ch]
  int v581; // [sp+D4h] [bp-138h]
  unsigned __int64 v582; // [sp+D4h] [bp-138h]
  unsigned __int64 v583; // [sp+D4h] [bp-138h]
  int v584; // [sp+D8h] [bp-134h]
  unsigned int v585; // [sp+D8h] [bp-134h]
  __int64 v586; // [sp+DCh] [bp-130h]
  unsigned __int64 v587; // [sp+DCh] [bp-130h]
  unsigned __int64 v588; // [sp+DCh] [bp-130h]
  unsigned __int64 v589; // [sp+DCh] [bp-130h]
  unsigned __int64 v590; // [sp+DCh] [bp-130h]
  unsigned __int64 v591; // [sp+DCh] [bp-130h]
  unsigned __int64 v592; // [sp+DCh] [bp-130h]
  unsigned __int64 v593; // [sp+DCh] [bp-130h]
  unsigned __int64 v594; // [sp+DCh] [bp-130h]
  int v595; // [sp+E4h] [bp-128h]
  int v596; // [sp+E4h] [bp-128h]
  unsigned int v597; // [sp+E4h] [bp-128h]
  _BYTE v598[12]; // [sp+E4h] [bp-128h]
  int v599; // [sp+E4h] [bp-128h]
  unsigned int v600; // [sp+E4h] [bp-128h]
  unsigned int v601; // [sp+E8h] [bp-124h]
  int v602; // [sp+ECh] [bp-120h]
  int v603; // [sp+ECh] [bp-120h]
  _BYTE v604[24]; // [sp+F0h] [bp-11Ch] BYREF
  __int64 v605; // [sp+108h] [bp-104h]
  __int64 v606; // [sp+110h] [bp-FCh]
  __int64 v607; // [sp+118h] [bp-F4h]
  __int64 v608; // [sp+120h] [bp-ECh]
  __int64 v609; // [sp+128h] [bp-E4h]
  __int64 v610; // [sp+130h] [bp-DCh]
  __int64 v611; // [sp+138h] [bp-D4h]
  __int64 v612; // [sp+140h] [bp-CCh]
  __int64 v613; // [sp+148h] [bp-C4h]
  __int64 v614; // [sp+150h] [bp-BCh]
  __int64 v615; // [sp+158h] [bp-B4h]
  __int64 v616; // [sp+160h] [bp-ACh]
  __int64 v617; // [sp+168h] [bp-A4h]
  __int64 v618; // [sp+170h] [bp-9Ch]
  __int64 v619; // [sp+178h] [bp-94h]
  __int64 v620; // [sp+180h] [bp-8Ch] BYREF
  unsigned __int64 v621; // [sp+188h] [bp-84h]
  unsigned __int64 v622; // [sp+190h] [bp-7Ch] BYREF
  __int64 v623; // [sp+198h] [bp-74h]
  unsigned __int64 v624; // [sp+1A0h] [bp-6Ch]
  __int64 v625; // [sp+1A8h] [bp-64h]
  __int64 v626; // [sp+1B0h] [bp-5Ch]
  __int64 v627; // [sp+1B8h] [bp-54h]
  __int64 v628; // [sp+1C0h] [bp-4Ch]
  unsigned __int64 v629; // [sp+1C8h] [bp-44h]
  unsigned __int64 v630; // [sp+1D0h] [bp-3Ch]
  unsigned __int64 v631; // [sp+1D8h] [bp-34h]
  unsigned __int64 v632; // [sp+1E0h] [bp-2Ch]
  unsigned __int64 v633; // [sp+1E8h] [bp-24h]
  __int64 v634; // [sp+1F0h] [bp-1Ch]
  int v635; // [sp+1F8h] [bp-14h]
  int v636; // [sp+1FCh] [bp-10h]
  unsigned int v637; // [sp+200h] [bp-Ch]
  int v638; // [sp+204h] [bp-8h]

  v3 = (__int64 *)&v604[16];
  do
  {
    v5 = *a2++;
    v621 = v5;
    v3[1] = v5;
    ++v3;
  }
  while ( v3 != &v620 );
  v6 = a1;
  v551 = a1 - 2;
  v7 = a1 - 2;
  do
  {
    v8 = *((_QWORD *)v7 + 1);
    v7 += 2;
    v3[1] = v8;
    ++v3;
  }
  while ( v7 != a1 + 14 );
  v552 = v7;
  v9 = v625 + v621 + v605;
  v10 = HIDWORD(v9) ^ 0x510E527F ^ a1[17];
  v11 = v10 - 205731576;
  v12 = v9 ^ 0xADE682D1 ^ a1[16];
  v13 = __CFADD__(v10, -205731576) + v12 + 1779033703;
  v14 = (((unsigned int)v625 ^ (v10 - 205731576)) >> 24) | ((HIDWORD(v625) ^ v13) << 8);
  v16 = (v9
       + v606
       + __PAIR64__(((HIDWORD(v625) ^ (unsigned int)v13) >> 24) | (((unsigned int)v625 ^ (v10 - 205731576)) << 8), v14)) >> 32;
  v15 = v9 + v606 + v14;
  v17 = v10 ^ v15;
  v18 = v12 ^ v16;
  v537 = __PAIR64__(v16, v15);
  v553 = ((HIDWORD(v625) ^ (unsigned int)v13) >> 24) | (((unsigned int)v625 ^ v11) << 8);
  v19 = HIWORD(v17) | (v18 << 16);
  v20 = v11 + v19;
  v544 = v14;
  v550 = HIWORD(v18) | (v17 << 16);
  v21 = v626 + v622 + v607;
  v543 = (__PAIR64__(v13, v11) + __PAIR64__(v550, v19)) >> 32;
  v549 = v19;
  v22 = HIDWORD(v21) ^ 0x9B05688C ^ v6[19];
  v23 = v22 - 2067093701;
  v24 = v21 ^ 0x2B3E6C1F ^ v6[18];
  v25 = __CFADD__(v22, -2067093701) + v24 - 1150833019;
  HIDWORD(v534) = ((HIDWORD(v626) ^ (unsigned int)v25) >> 24) | (((unsigned int)v626 ^ (v22 - 2067093701)) << 8);
  v27 = (v21
       + v608
       + __PAIR64__(HIDWORD(v534), (((unsigned int)v626 ^ (v22 - 2067093701)) >> 24) | ((HIDWORD(v626) ^ v25) << 8))) >> 32;
  v26 = v21 + v608 + ((((unsigned int)v626 ^ (v22 - 2067093701)) >> 24) | ((HIDWORD(v626) ^ v25) << 8));
  v28 = v22 ^ v26;
  LODWORD(v534) = (((unsigned int)v626 ^ v23) >> 24) | ((HIDWORD(v626) ^ v25) << 8);
  v29 = v24 ^ v27;
  v542 = __PAIR64__(v27, v26);
  v30 = v627 + v623 + v609;
  v565 = HIWORD(v29) | (v28 << 16);
  v547 = __PAIR64__(v25, v23) + __PAIR64__(v565, HIWORD(v28) | (v29 << 16));
  v31 = HIDWORD(v30) ^ 0x1F83D9AB ^ v6[21];
  v32 = v31 - 23791573;
  v33 = v30 ^ 0xFB41BD6B ^ v6[20];
  v34 = __CFADD__(v31, -23791573) + v33 + 1013904242;
  v560 = HIWORD(v28) | (v29 << 16);
  LODWORD(v35) = (((unsigned int)v627 ^ (v31 - 23791573)) >> 24) | ((HIDWORD(v627) ^ v34) << 8);
  HIDWORD(v35) = ((HIDWORD(v627) ^ (unsigned int)v34) >> 24) | (((unsigned int)v627 ^ (v31 - 23791573)) << 8);
  v36 = v30 + v610 + v35;
  v37 = v31 ^ v36;
  v38 = v33 ^ HIDWORD(v36);
  v40 = v32 + (HIWORD(v37) | (v38 << 16));
  v39 = (__PAIR64__(v34, v32) + __PAIR64__(HIWORD(v38) | (v37 << 16), HIWORD(v37) | (v38 << 16))) >> 32;
  v41 = v628 + v624 + v611;
  v581 = HIWORD(v37) | (v38 << 16);
  v584 = HIWORD(v38) | (v37 << 16);
  v42 = HIDWORD(v41) ^ 0x5BE0CD19 ^ v6[23];
  v536 = v42 + 1595750129;
  v43 = v41 ^ 0x137E2179 ^ v6[22];
  v44 = __CFADD__(v42, 1595750129) + v43 - 1521486534;
  v538 = (((unsigned int)v628 ^ (v42 + 1595750129)) >> 24) | ((HIDWORD(v628) ^ v44) << 8);
  v568 = ((HIDWORD(v628) ^ (unsigned int)v44) >> 24) | (((unsigned int)v628 ^ (v42 + 1595750129)) << 8);
  v545 = v41 + v612 + __PAIR64__(v568, v538);
  v45 = v43 ^ HIDWORD(v545);
  v46 = v42 ^ v545;
  v47 = HIWORD(v45) | (v46 << 16);
  v48 = HIWORD(v46) | (v45 << 16);
  v50 = v536 + v48;
  v49 = (__PAIR64__(v44, v536) + __PAIR64__(v47, v48)) >> 32;
  v52 = (v537 + v613 + ((2 * (v547 ^ v534)) | ((unsigned int)(HIDWORD(v547) ^ HIDWORD(v534)) >> 31))) >> 32;
  v51 = v537 + v613 + ((2 * (v547 ^ v534)) | ((unsigned int)(HIDWORD(v547) ^ HIDWORD(v534)) >> 31));
  v53 = __PAIR64__(v39, v40) ^ v35;
  v54 = v48 ^ v51;
  v55 = ((2 * (v547 ^ v534)) | ((unsigned int)(HIDWORD(v547) ^ HIDWORD(v534)) >> 31)) ^ (v40 + (v47 ^ v52));
  v57 = __PAIR64__(v39, v40) + __PAIR64__(v54, v47 ^ v52);
  v56 = (__PAIR64__(v39, v40) + __PAIR64__(v54, v47 ^ v52)) >> 32;
  v58 = ((__int64)(v547 ^ v534) >> 31) ^ v56;
  LODWORD(v586) = HIBYTE(v55) | (v58 << 8);
  HIDWORD(v586) = HIBYTE(v58) | (v55 << 8);
  v59 = 2 * HIDWORD(v53);
  v60 = v54 ^ HIDWORD(v35);
  *(_DWORD *)&v554[16] = HIDWORD(v35);
  HIDWORD(v53) = (2 * v53) | (HIDWORD(v53) >> 31);
  *(_DWORD *)&v554[12] = v51 + v614 + v586;
  v61 = v59 | ((unsigned int)v53 >> 31);
  v62 = v47 ^ v52 ^ *(_DWORD *)&v554[12];
  v63 = HIWORD(v62) | (v60 << 16);
  *(_QWORD *)&v548 = __PAIR64__(v56, v57) + __PAIR64__(HIWORD(v60) | (v62 << 16), v63);
  v602 = HIWORD(v60) | (v62 << 16);
  v64 = (v542 + v615 + __PAIR64__(v61, HIDWORD(v53))) >> 32;
  v65 = v542 + v615 + HIDWORD(v53);
  v66 = v65 ^ v549;
  v67 = v64 ^ v550;
  HIDWORD(v53) ^= v50 + (v64 ^ v550);
  v68 = v49 ^ v568;
  v70 = __PAIR64__(v49, v50) + __PAIR64__(v65 ^ v549, v64 ^ v550);
  v69 = (__PAIR64__(v49, v50) + __PAIR64__(v65 ^ v549, v64 ^ v550)) >> 32;
  v71 = v61 ^ v69;
  HIDWORD(v72) = HIBYTE(v71) | (HIDWORD(v53) << 8);
  v595 = HIBYTE(HIDWORD(v53)) | (v71 << 8);
  v74 = __PAIR64__(v64, v65) + v616;
  v73 = (__PAIR64__(v64, v65) + v616) >> 32;
  LODWORD(v72) = v74;
  *(_DWORD *)v604 = HIDWORD(v72);
  LODWORD(v75) = v617;
  v76 = v67 ^ (v74 + v595);
  v77 = v66 ^ ((v72 + __PAIR64__(v73, v595)) >> 32);
  HIDWORD(v35) = (2 * (v50 ^ v538)) | (v68 >> 31);
  v569 = v72 + __PAIR64__(v73, v595);
  HIDWORD(v53) = (2 * v68) | ((v50 ^ v538) >> 31);
  *(_DWORD *)&v604[4] = HIWORD(v76) | (v77 << 16);
  *((_QWORD *)&v548 + 1) = __PAIR64__(v69, v70) + __PAIR64__(HIWORD(v77) | (v76 << 16), *(unsigned int *)&v604[4]);
  HIDWORD(v75) = HIDWORD(v36);
  *(_DWORD *)&v604[8] = HIWORD(v77) | (v76 << 16);
  v78 = __PAIR64__(HIDWORD(v617), v36) + v75 + __PAIR64__(HIDWORD(v53), HIDWORD(v35));
  v79 = (v20 + (HIDWORD(v78) ^ v565)) ^ HIDWORD(v35);
  v80 = ((__PAIR64__(v543, v20) + __PAIR64__((unsigned int)v78 ^ v560, HIDWORD(v78) ^ (unsigned int)v565)) >> 32)
      ^ HIDWORD(v53);
  HIDWORD(v53) = HIBYTE(v79) | (v80 << 8);
  HIDWORD(v35) = HIBYTE(v80) | (v79 << 8);
  LODWORD(v72) = (2 * (v20 ^ v544)) | ((v543 ^ v553) >> 31);
  v571 = v78 + v618 + __PAIR64__(HIDWORD(v35), HIDWORD(v53));
  v81 = HIDWORD(v78) ^ v565 ^ v571;
  HIDWORD(v72) = v78 ^ v560 ^ HIDWORD(v571);
  LODWORD(v75) = (2 * (v543 ^ v553)) | ((v20 ^ v544) >> 31);
  LODWORD(v82) = HIWORD(v81) | (HIDWORD(v72) << 16);
  HIDWORD(v82) = HIWORD(HIDWORD(v72)) | (v81 << 16);
  v83 = v20 + (HIDWORD(v78) ^ v565) + v82;
  *(_QWORD *)&v604[12] = v82;
  v573 = (__PAIR64__(v543, v20) + __PAIR64__((unsigned int)v78 ^ v560, HIDWORD(v78) ^ (unsigned int)v565) + v82) >> 32;
  LODWORD(v35) = (v545 + v619 + v72) ^ v581;
  v84 = v545 + v619 + __PAIR64__(v75, v72);
  LODWORD(v72) = v72 ^ (v547 + (HIDWORD(v84) ^ v584));
  v566 = v83 ^ HIDWORD(v53);
  v85 = (v547 + __PAIR64__(v35, HIDWORD(v84) ^ (unsigned int)v584)) >> 32;
  LODWORD(v82) = v547 + (HIDWORD(v84) ^ v584);
  LODWORD(v75) = v75 ^ v85;
  v86 = BYTE3(v72) | ((_DWORD)v75 << 8);
  LODWORD(v72) = BYTE3(v75) | ((_DWORD)v72 << 8);
  HIDWORD(v547) = DWORD2(v548) ^ v595;
  v87 = v84 + v620 + __PAIR64__(v72, v86);
  HIDWORD(v75) = HIDWORD(v84) ^ v584 ^ v87;
  LODWORD(v35) = v35 ^ HIDWORD(v87);
  v561 = HIDWORD(v548) ^ *(_DWORD *)v604;
  LODWORD(v75) = HIWORD(HIDWORD(v75)) | ((_DWORD)v35 << 16);
  LODWORD(v35) = WORD1(v35) | (HIDWORD(v75) << 16);
  v88 = v75;
  v596 = v75;
  LODWORD(v75) = (v82 + v75) ^ v86;
  v90 = __PAIR64__(v85, v82) + __PAIR64__(v35, v88);
  v89 = (__PAIR64__(v85, v82) + __PAIR64__(v35, v88)) >> 32;
  LODWORD(v72) = v72 ^ v89;
  HIDWORD(v75) = (2 * v75) | ((unsigned int)v72 >> 31);
  HIDWORD(v35) ^= v573;
  LODWORD(v72) = (2 * v72) | ((unsigned int)v75 >> 31);
  v91 = *(_QWORD *)&v554[12] + v619 + __PAIR64__(v72, HIDWORD(v75));
  v93 = v83 + (HIDWORD(v91) ^ *(_DWORD *)&v604[8]);
  v92 = (__PAIR64__(v573, v83) + __PAIR64__((unsigned int)v91 ^ *(_DWORD *)&v604[4], HIDWORD(v91) ^ *(_DWORD *)&v604[8])) >> 32;
  LODWORD(v72) = v72 ^ v92;
  HIDWORD(v53) = BYTE3(v72);
  LODWORD(v72) = ((v93 ^ HIDWORD(v75)) >> 24) | ((_DWORD)v72 << 8);
  v94 = HIDWORD(v53) | ((v93 ^ HIDWORD(v75)) << 8);
  HIDWORD(v75) = HIDWORD(v569);
  v95 = v615 + v91 + __PAIR64__(v94, v72);
  HIDWORD(v72) = HIDWORD(v91) ^ *(_DWORD *)&v604[8] ^ v95;
  LODWORD(v53) = v91 ^ *(_DWORD *)&v604[4] ^ HIDWORD(v95);
  *(_DWORD *)&v604[4] = WORD1(v53) | (HIDWORD(v72) << 16);
  *(_DWORD *)v604 = HIWORD(HIDWORD(v72)) | ((_DWORD)v53 << 16);
  LODWORD(v75) = (2 * (v548 ^ v586)) | ((unsigned int)(DWORD1(v548) ^ HIDWORD(v586)) >> 31);
  v96 = v569;
  v570 = __PAIR64__(v92, v93) + *(_QWORD *)v604;
  v555 = (v93 + *(_DWORD *)v604) ^ v72;
  LODWORD(v72) = (v609
                + __PAIR64__(HIDWORD(v75), v96)
                + ((2 * ((unsigned __int64)v548 ^ v586)) | ((unsigned int)(DWORD1(v548) ^ HIDWORD(v586)) >> 31))) >> 32;
  v97 = v609 + v96 + v75;
  *(_DWORD *)&v554[12] = ((__PAIR64__(v92, v93) + *(_QWORD *)v604) >> 32) ^ v94;
  HIDWORD(v72) = v97 ^ *(_DWORD *)&v604[12];
  HIDWORD(v75) = v72 ^ *(_DWORD *)&v604[16];
  LODWORD(v75) = v75 ^ (v90 + (v72 ^ *(_DWORD *)&v604[16]));
  v99 = v90 + (v72 ^ *(_DWORD *)&v604[16]);
  v98 = (__PAIR64__(v89, v90) + (v72 ^ *(unsigned int *)&v604[16])) >> 32;
  HIDWORD(v82) = ((__int64)(v548 ^ v586) >> 31) ^ v98;
  v100 = HIBYTE(HIDWORD(v82));
  HIDWORD(v82) = BYTE3(v75) | (HIDWORD(v82) << 8);
  LODWORD(v75) = v100 | ((_DWORD)v75 << 8);
  v101 = v613 + v97 + HIDWORD(v82);
  LODWORD(v72) = (v613 + __PAIR64__(v72, v97) + __PAIR64__(v75, HIDWORD(v82))) >> 32;
  HIDWORD(v75) ^= v101;
  HIDWORD(v72) = v97 ^ *(_DWORD *)&v604[12] ^ v72;
  HIDWORD(v586) = v72;
  *(_DWORD *)&v604[12] = HIWORD(HIDWORD(v72)) | (HIDWORD(v75) << 16);
  *(_DWORD *)&v604[8] = HIWORD(HIDWORD(v75)) | (HIDWORD(v72) << 16);
  LODWORD(v72) = (2 * HIDWORD(v547)) | (v561 >> 31);
  LODWORD(v53) = (2 * v561) | (HIDWORD(v547) >> 31);
  v102 = v571;
  HIDWORD(v82) ^= v99 + *(_DWORD *)&v604[8];
  LODWORD(v571) = v99 + *(_DWORD *)&v604[8];
  v103 = v102;
  v104 = HIDWORD(v571);
  HIDWORD(v571) = (__PAIR64__(v98, v99) + *(_QWORD *)&v604[8]) >> 32;
  v105 = (v614 + v103 + v72) ^ v596;
  v106 = (v614 + __PAIR64__(v104, v103) + __PAIR64__(v53, v72)) >> 32;
  LODWORD(v82) = v614 + v103 + v72;
  LODWORD(v35) = v35 ^ v106;
  HIDWORD(v72) = ((unsigned __int64)v548 + __PAIR64__(v105, v35)) >> 32;
  v107 = v548 + v35;
  LODWORD(v72) = v72 ^ (v548 + v35);
  LODWORD(v53) = v53 ^ HIDWORD(v72);
  HIDWORD(v75) = BYTE3(v72) | ((_DWORD)v53 << 8);
  LODWORD(v72) = BYTE3(v53) | ((_DWORD)v72 << 8);
  LODWORD(v53) = (2 * (HIDWORD(v571) ^ v75)) | (HIDWORD(v82) >> 31);
  LODWORD(v35) = v35 ^ (v620 + v82 + HIDWORD(v75));
  v108 = v620 + __PAIR64__(v106, v82) + __PAIR64__(v72, HIDWORD(v75));
  v109 = v105 ^ HIDWORD(v108);
  v110 = WORD1(v35) | (v109 << 16);
  HIDWORD(v82) = (2 * HIDWORD(v82)) | ((HIDWORD(v571) ^ (unsigned int)v75) >> 31);
  LODWORD(v35) = HIWORD(v109) | ((_DWORD)v35 << 16);
  v111 = __PAIR64__(HIDWORD(v72), v107) + __PAIR64__(v35, v110);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v107) + __PAIR64__(v35, v110)) >> 32;
  v112 = (2 * HIDWORD(v35)) | (v566 >> 31);
  LODWORD(v75) = (2 * v566) | (HIDWORD(v35) >> 31);
  LODWORD(v547) = v111 ^ HIDWORD(v75);
  *(_DWORD *)&v604[16] = v110;
  HIDWORD(v35) = (v618 + v87 + v75) ^ v63;
  v114 = (v618 + v87 + __PAIR64__(v112, v75)) >> 32;
  v113 = v618 + v87 + v75;
  *(_DWORD *)&v604[20] = v35;
  LODWORD(v548) = HIDWORD(v72) ^ v72;
  LODWORD(v75) = v75 ^ (DWORD2(v548) + (v114 ^ v602));
  LODWORD(v72) = (*((_QWORD *)&v548 + 1) + __PAIR64__(HIDWORD(v35), v114 ^ v602)) >> 32;
  LODWORD(v82) = DWORD2(v548) + (v114 ^ v602);
  v115 = v112 ^ v72;
  HIDWORD(v75) = HIBYTE(v115);
  v116 = BYTE3(v75) | (v115 << 8);
  LODWORD(v75) = HIDWORD(v75) | ((_DWORD)v75 << 8);
  v117 = v611 + __PAIR64__(v114, v113) + __PAIR64__(v75, v116);
  HIDWORD(v53) = v114 ^ v602 ^ v117;
  HIDWORD(v35) ^= HIDWORD(v117);
  v118 = HIWORD(HIDWORD(v35));
  HIDWORD(v35) = HIWORD(HIDWORD(v53)) | (HIDWORD(v35) << 16);
  v119 = v118 | (HIDWORD(v53) << 16);
  v120 = __PAIR64__(v72, v82) + __PAIR64__(v119, HIDWORD(v35));
  LODWORD(v72) = (__PAIR64__(v72, v82) + __PAIR64__(v119, HIDWORD(v35))) >> 32;
  HIDWORD(v75) = v120 ^ v116;
  LODWORD(v75) = v75 ^ v72;
  v121 = v606 + v95 + __PAIR64__(v53, HIDWORD(v82));
  HIDWORD(v35) ^= v121;
  v122 = v119 ^ HIDWORD(v121);
  v123 = __PAIR64__(HIDWORD(v72), v111) + __PAIR64__(HIDWORD(v35), v122);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v111) + __PAIR64__(HIDWORD(v35), v122)) >> 32;
  HIDWORD(v82) ^= v123;
  LODWORD(v53) = v53 ^ HIDWORD(v72);
  HIDWORD(v53) = (v617 + v121) >> 32;
  LODWORD(v35) = BYTE3(v53);
  LODWORD(v53) = HIBYTE(HIDWORD(v82)) | ((_DWORD)v53 << 8);
  HIDWORD(v82) = v35 | (HIDWORD(v82) << 8);
  v124 = v122 ^ (v617 + v121 + v53);
  HIDWORD(v35) ^= (__PAIR64__(HIDWORD(v82), (int)v617 + (int)v121) + v53) >> 32;
  *(_DWORD *)&v554[16] = v617 + v121 + v53;
  v585 = (__PAIR64__(HIDWORD(v82), (int)v617 + (int)v121) + v53) >> 32;
  HIDWORD(v547) = HIWORD(HIDWORD(v35)) | (v124 << 16);
  v603 = HIWORD(v124) | (HIDWORD(v35) << 16);
  HIDWORD(v53) = (2 * v547) | ((unsigned int)v548 >> 31);
  LODWORD(v35) = (2 * v548) | ((unsigned int)v547 >> 31);
  DWORD1(v548) = (v123 + v603) ^ v53;
  LODWORD(v547) = HIDWORD(v547) + __CFADD__((_DWORD)v123, v603) + HIDWORD(v72);
  v125 = v605 + __PAIR64__(HIDWORD(v586), v101) + __PAIR64__(v35, HIDWORD(v53));
  HIDWORD(v53) ^= v120 + (HIDWORD(v125) ^ *(_DWORD *)&v604[4]);
  v126 = __PAIR64__(v72, v120) + __PAIR64__((unsigned int)v125 ^ *(_DWORD *)v604, HIDWORD(v125) ^ *(_DWORD *)&v604[4]);
  LODWORD(v72) = (__PAIR64__(v72, v120)
                + __PAIR64__((unsigned int)v125 ^ *(_DWORD *)v604, HIDWORD(v125) ^ *(_DWORD *)&v604[4])) >> 32;
  DWORD2(v548) = v547 ^ HIDWORD(v82);
  HIDWORD(v82) = HIBYTE(HIDWORD(v53)) | (((unsigned int)v72 ^ (unsigned int)v35) << 8);
  HIDWORD(v35) = (((unsigned int)v72 ^ (unsigned int)v35) >> 24) | (HIDWORD(v53) << 8);
  HIDWORD(v72) = HIDWORD(v125) ^ *(_DWORD *)&v604[4] ^ (v607 + v125 + HIDWORD(v82));
  LODWORD(v53) = v125 ^ *(_DWORD *)v604 ^ ((v607 + v125 + __PAIR64__(HIDWORD(v35), HIDWORD(v82))) >> 32);
  v587 = v607 + v125 + __PAIR64__(HIDWORD(v35), HIDWORD(v82));
  LODWORD(v127) = HIWORD(HIDWORD(v72)) | ((_DWORD)v53 << 16);
  v128 = 2 * v75;
  LODWORD(v75) = v75 >> 31;
  HIDWORD(v127) = WORD1(v53) | (HIDWORD(v72) << 16);
  v129 = v128 | (HIDWORD(v75) >> 31);
  HIDWORD(v72) = (__PAIR64__(v72, v126) + v127) >> 32;
  v601 = v126 + v127;
  HIDWORD(v548) = (v126 + v127) ^ HIDWORD(v82);
  LODWORD(v35) = (v616 + v108 + v75) ^ *(_DWORD *)&v604[8];
  LODWORD(v72) = (v616 + v108 + __PAIR64__(v129, v75)) >> 32;
  v130 = v616 + v108 + v75;
  v597 = HIDWORD(v72);
  v562 = HIDWORD(v72) ^ HIDWORD(v35);
  LODWORD(v75) = v75 ^ (v570 + (v72 ^ *(_DWORD *)&v604[12]));
  HIDWORD(v72) = (v570 + __PAIR64__(v35, (unsigned int)v72 ^ *(_DWORD *)&v604[12])) >> 32;
  LODWORD(v82) = v570 + (v72 ^ *(_DWORD *)&v604[12]);
  v131 = v129 ^ HIDWORD(v72);
  LODWORD(v53) = BYTE3(v75) | (v131 << 8);
  HIDWORD(v82) = HIBYTE(v131) | ((_DWORD)v75 << 8);
  v132 = v612 + __PAIR64__(v72, v130) + __PAIR64__(HIDWORD(v82), v53);
  HIDWORD(v53) = v72 ^ *(_DWORD *)&v604[12] ^ v132;
  LODWORD(v35) = v35 ^ HIDWORD(v132);
  *(_QWORD *)&v554[20] = v132;
  HIDWORD(v35) = WORD1(v35) | (HIDWORD(v53) << 16);
  v133 = HIWORD(HIDWORD(v53)) | ((_DWORD)v35 << 16);
  v134 = __PAIR64__(HIDWORD(v72), v82) + __PAIR64__(HIDWORD(v35), v133);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v82) + __PAIR64__(HIDWORD(v35), v133)) >> 32;
  HIDWORD(v132) = (2 * v555) | (*(_DWORD *)&v554[12] >> 31);
  HIDWORD(v53) = (2 * *(_DWORD *)&v554[12]) | (v555 >> 31);
  *(_DWORD *)&v604[4] = HIDWORD(v35);
  v567 = HIDWORD(v72) ^ HIDWORD(v82);
  v556 = v134 ^ v53;
  HIDWORD(v35) = (v610 + v117 + HIDWORD(v132)) ^ *(_DWORD *)&v604[16];
  v135 = v610 + v117 + __PAIR64__(HIDWORD(v53), HIDWORD(v132));
  LODWORD(v35) = HIDWORD(v135) ^ *(_DWORD *)&v604[20];
  HIDWORD(v132) ^= v99 + *(_DWORD *)&v604[8] + (HIDWORD(v135) ^ *(_DWORD *)&v604[20]);
  LODWORD(v548) = v99 + *(_DWORD *)&v604[8] + (HIDWORD(v135) ^ *(_DWORD *)&v604[20]);
  LODWORD(v72) = (v571 + __PAIR64__(HIDWORD(v35), HIDWORD(v135) ^ *(_DWORD *)&v604[20])) >> 32;
  HIDWORD(v53) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v53) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v53)) | (HIDWORD(v132) << 8);
  v136 = v35 ^ (v608 + v135 + v132);
  v137 = v608 + v135 + v132;
  *(_DWORD *)&v554[12] = v608 + v135 + v132;
  v138 = HIWORD(HIDWORD(v136));
  HIDWORD(v136) = v136 >> 16;
  LODWORD(v136) = v138 | ((_DWORD)v136 << 16);
  LODWORD(v132) = v132 ^ (v548 + HIDWORD(v136));
  v139 = v548 + HIDWORD(v136);
  LODWORD(v72) = (__PAIR64__(v72, v548) + __PAIR64__(v136, HIDWORD(v136))) >> 32;
  HIDWORD(v132) ^= v72;
  LODWORD(v571) = HIDWORD(v137);
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v140 = v616 + __PAIR64__(v585, *(unsigned int *)&v554[16]) + __PAIR64__(v132, HIDWORD(v132));
  v141 = v127 ^ v140;
  v142 = __PAIR64__(HIDWORD(v72), v134) + __PAIR64__(v141, HIDWORD(v141));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v134) + __PAIR64__(v141, HIDWORD(v141))) >> 32;
  HIDWORD(v132) ^= v142;
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v141) ^= v613 + v140 + (_DWORD)v132;
  *(_DWORD *)&v554[16] = v613 + v140 + v132;
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  LODWORD(v141) = v141 ^ ((v613 + v140 + v132) >> 32);
  HIDWORD(v571) = (v613 + v140 + v132) >> 32;
  HIDWORD(v137) = HIWORD(HIDWORD(v141)) | ((_DWORD)v141 << 16);
  *(_DWORD *)&v604[12] = v141 >> 16;
  v143 = __PAIR64__(HIDWORD(v72), v142) + ((v141 << 16) | HIWORD(HIDWORD(v141)));
  v144 = 2LL * *(_QWORD *)((char *)&v548 + 4);
  LODWORD(v144) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  *(_QWORD *)&v548 = v143 ^ v132;
  v145 = v617 + v587 + v144;
  *(_DWORD *)&v604[8] = HIDWORD(v137);
  LODWORD(v144) = v144 ^ (v139 + (HIDWORD(v145) ^ *(_DWORD *)&v604[4]));
  v146 = __PAIR64__(v72, v139) + __PAIR64__((unsigned int)v145 ^ v133, HIDWORD(v145) ^ *(_DWORD *)&v604[4]);
  LODWORD(v72) = (__PAIR64__(v72, v139) + __PAIR64__((unsigned int)v145 ^ v133, HIDWORD(v145) ^ *(_DWORD *)&v604[4])) >> 32;
  HIDWORD(v144) ^= v72;
  HIDWORD(v132) = HIBYTE(HIDWORD(v144));
  HIDWORD(v144) = v144 >> 24;
  LODWORD(v144) = HIDWORD(v132) | ((_DWORD)v144 << 8);
  v147 = v605 + v145 + __PAIR64__(v144, HIDWORD(v144));
  LODWORD(v132) = HIDWORD(v145) ^ *(_DWORD *)&v604[4] ^ v147;
  HIDWORD(v72) = v145 ^ v133 ^ HIDWORD(v147);
  LODWORD(v82) = WORD1(v132);
  LODWORD(v132) = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  HIDWORD(v72) = v82 | (HIDWORD(v72) << 16);
  v148 = __PAIR64__(v547, v132);
  v149 = __PAIR64__(v72, v146) + __PAIR64__(v132, HIDWORD(v72));
  LODWORD(v72) = (__PAIR64__(v72, v146) + __PAIR64__(v132, HIDWORD(v72))) >> 32;
  LODWORD(v132) = (2 * v562) | (HIDWORD(v548) >> 31);
  v150 = (2 * HIDWORD(v548)) | (v562 >> 31);
  *(_QWORD *)v604 = __PAIR64__(v148, HIDWORD(v72));
  HIDWORD(v72) = v149;
  v151 = *(_DWORD *)&v554[20];
  v152 = v144 ^ v72;
  *(_DWORD *)&v554[20] = v72;
  LODWORD(v72) = (v610 + __PAIR64__(*(unsigned int *)&v554[24], v151) + __PAIR64__(v132, v150)) >> 32;
  v153 = v610 + v151 + v150;
  LODWORD(v148) = v72 ^ v136;
  HIDWORD(v136) ^= v153;
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v136), (int)v123 + v603) + v148) >> 32;
  HIDWORD(v132) = v123 + v603 + (v72 ^ v136);
  v154 = v150 ^ HIDWORD(v132);
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  LODWORD(v137) = (2 * v152) | (HIDWORD(v152) >> 31);
  HIDWORD(v137) = HIBYTE(v154) | ((_DWORD)v132 << 8);
  LODWORD(v136) = BYTE3(v132) | (v154 << 8);
  v155 = v607 + __PAIR64__(v72, v153) + __PAIR64__(v136, HIDWORD(v137));
  LODWORD(v148) = v148 ^ v155;
  HIDWORD(v136) ^= HIDWORD(v155);
  HIDWORD(v148) = v152 >> 31;
  *(_DWORD *)&v604[16] = WORD1(v148) | (HIDWORD(v136) << 16);
  v156 = __PAIR64__(HIDWORD(v72), HIDWORD(v132))
       + __PAIR64__(HIWORD(HIDWORD(v136)) | ((_DWORD)v148 << 16), *(unsigned int *)&v604[16]);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v132))
                + __PAIR64__(HIWORD(HIDWORD(v136)) | ((_DWORD)v148 << 16), *(unsigned int *)&v604[16])) >> 32;
  HIDWORD(v132) = v156 ^ HIDWORD(v137);
  LODWORD(v132) = (2 * v556) | (v567 >> 31);
  *(_DWORD *)&v604[20] = HIWORD(HIDWORD(v136)) | ((_DWORD)v148 << 16);
  v157 = (2 * v567) | (v556 >> 31);
  v158 = (v620 + __PAIR64__(v571, *(unsigned int *)&v554[12]) + __PAIR64__(v157, v132)) >> 32;
  LODWORD(v152) = v620 + *(_DWORD *)&v554[12] + v132;
  HIDWORD(v137) = v158 ^ HIDWORD(v547);
  DWORD2(v548) = HIDWORD(v132);
  LODWORD(v148) = v601 + (v158 ^ HIDWORD(v547));
  HIDWORD(v547) = HIDWORD(v72) ^ v136;
  LODWORD(v132) = v132 ^ v148;
  LODWORD(v72) = (__PAIR64__(v597, v601) + __PAIR64__((unsigned int)v152 ^ v603, HIDWORD(v137))) >> 32;
  LODWORD(v148) = v601 + HIDWORD(v137);
  v159 = v157 ^ v72;
  HIDWORD(v132) = HIBYTE(v159);
  v160 = BYTE3(v132) | (v159 << 8);
  v162 = v618 + __PAIR64__(v158, v152);
  v161 = (v618 + __PAIR64__(v158, v152)) >> 32;
  HIDWORD(v137) ^= v162 + v160;
  *(_DWORD *)&v554[8] = v162 + v160;
  LODWORD(v132) = HIDWORD(v132) | ((_DWORD)v132 << 8);
  HIDWORD(v136) = v152 ^ v603 ^ ((__PAIR64__(v161, v162) + __PAIR64__(v132, v160)) >> 32);
  *(_DWORD *)&v554[12] = (__PAIR64__(v161, v162) + __PAIR64__(v132, v160)) >> 32;
  v163 = HIWORD(HIDWORD(v136));
  HIDWORD(v136) = HIWORD(HIDWORD(v137)) | (HIDWORD(v136) << 16);
  v164 = v163 | (HIDWORD(v137) << 16);
  v165 = __PAIR64__(v72, v148) + __PAIR64__(v164, HIDWORD(v136));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v164, HIDWORD(v136))) >> 32;
  HIDWORD(v132) = v165 ^ v160;
  LODWORD(v132) = v132 ^ v72;
  v166 = v615 + __PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[16]) + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v136) ^= v166;
  v167 = v164 ^ HIDWORD(v166);
  v168 = __PAIR64__(HIDWORD(v72), v156) + __PAIR64__(HIDWORD(v136), v167);
  HIDWORD(v148) ^= v156 + v167;
  LODWORD(v137) = v137 ^ ((__PAIR64__(HIDWORD(v72), v156) + __PAIR64__(HIDWORD(v136), v167)) >> 32);
  LODWORD(v136) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v137) = (v619 + v166) >> 32;
  HIDWORD(v148) = v136 | (HIDWORD(v148) << 8);
  HIDWORD(v136) ^= (__PAIR64__(HIDWORD(v148), (int)v619 + (int)v166) + v137) >> 32;
  LODWORD(v571) = (__PAIR64__(HIDWORD(v148), (int)v619 + (int)v166) + v137) >> 32;
  v169 = v167 ^ (v619 + v166 + v137);
  *(_DWORD *)&v554[16] = v619 + v166 + v137;
  *(_DWORD *)&v598[8] = HIWORD(HIDWORD(v136)) | (v169 << 16);
  *(_DWORD *)&v598[4] = HIWORD(v169) | (HIDWORD(v136) << 16);
  HIDWORD(v137) = (2 * DWORD2(v548)) | (HIDWORD(v547) >> 31);
  LODWORD(v136) = (2 * HIDWORD(v547)) | (DWORD2(v548) >> 31);
  HIDWORD(v547) = (v168 + *(_DWORD *)&v598[4]) ^ v137;
  DWORD2(v548) = ((v168 + *(_QWORD *)&v598[4]) >> 32) ^ HIDWORD(v148);
  v170 = v608 + v147 + __PAIR64__(v136, HIDWORD(v137));
  HIDWORD(v137) ^= v165 + (HIDWORD(v170) ^ *(_DWORD *)&v604[12]);
  v171 = __PAIR64__(v72, v165)
       + __PAIR64__((unsigned int)v170 ^ *(_DWORD *)&v604[8], HIDWORD(v170) ^ *(_DWORD *)&v604[12]);
  LODWORD(v72) = (__PAIR64__(v72, v165)
                + __PAIR64__((unsigned int)v170 ^ *(_DWORD *)&v604[8], HIDWORD(v170) ^ *(_DWORD *)&v604[12])) >> 32;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v136) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v136) >> 24) | (HIDWORD(v137) << 8);
  v172 = v611 + v170 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  HIDWORD(v152) = ((v170 ^ *(_QWORD *)&v604[8]) >> 32) ^ v172;
  LODWORD(v152) = v170 ^ *(_DWORD *)&v604[8] ^ HIDWORD(v172);
  v173 = WORD1(v152);
  LODWORD(v152) = HIWORD(HIDWORD(v152)) | ((_DWORD)v152 << 16);
  HIDWORD(v152) = v173 | (HIDWORD(v152) << 16);
  v174 = 2 * v132;
  LODWORD(v132) = v132 >> 31;
  v175 = v174 | (HIDWORD(v132) >> 31);
  v176 = __PAIR64__(v72, v171) + v152;
  HIDWORD(v548) = (v171 + v152) ^ HIDWORD(v148);
  *(_DWORD *)&v554[24] = (__PAIR64__(v72, v171) + v152) >> 32;
  LODWORD(v136) = (v612 + v155 + v132) ^ *(_DWORD *)v604;
  v177 = v612 + v155 + v132;
  LODWORD(v72) = (v612 + v155 + __PAIR64__(v175, v132)) >> 32;
  v557 = *(_DWORD *)&v554[24] ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v143 + (v72 ^ *(_DWORD *)&v604[4]));
  HIDWORD(v72) = (v143 + __PAIR64__(v136, (unsigned int)v72 ^ *(_DWORD *)&v604[4])) >> 32;
  LODWORD(v148) = v143 + (v72 ^ *(_DWORD *)&v604[4]);
  v178 = v175 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v178 << 8);
  HIDWORD(v148) = HIBYTE(v178) | ((_DWORD)v132 << 8);
  v179 = v606 + __PAIR64__(v72, v177) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)&v604[4] ^ v179;
  LODWORD(v136) = v136 ^ HIDWORD(v179);
  LODWORD(v72) = HIWORD(HIDWORD(v137)) | ((_DWORD)v136 << 16);
  v599 = v72;
  v180 = WORD1(v136) | (HIDWORD(v137) << 16);
  HIDWORD(v132) = (2 * v548) | (DWORD1(v548) >> 31);
  HIDWORD(v137) = (__int64)v548 >> 31;
  v181 = v148 + v72;
  HIDWORD(v72) = (__PAIR64__(v180, v148) + v72) >> 32;
  *(_DWORD *)v604 = v180;
  LODWORD(v548) = (v148 + v72) ^ v137;
  DWORD1(v548) = HIDWORD(v72) ^ HIDWORD(v148);
  v182 = v614 + *(_QWORD *)&v554[8] + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v136) = v182 ^ *(_DWORD *)&v604[16];
  LODWORD(v136) = HIDWORD(v182) ^ *(_DWORD *)&v604[20];
  HIDWORD(v132) ^= v149 + (HIDWORD(v182) ^ *(_DWORD *)&v604[20]);
  HIDWORD(v148) = v149 + (HIDWORD(v182) ^ *(_DWORD *)&v604[20]);
  HIDWORD(v137) ^= (__PAIR64__(*(unsigned int *)&v554[20], v149) + v136) >> 32;
  v563 = (__PAIR64__(*(unsigned int *)&v554[20], v149) + v136) >> 32;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v183 = v136 ^ (v609 + v182 + v132);
  v184 = WORD1(v183);
  *(_QWORD *)&v554[8] = v609 + v182 + v132;
  LODWORD(v183) = HIWORD(HIDWORD(v183)) | ((_DWORD)v183 << 16);
  HIDWORD(v183) = v184 | (HIDWORD(v183) << 16);
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v183));
  LODWORD(v72) = (__PAIR64__(v563, HIDWORD(v148)) + __PAIR64__(v183, HIDWORD(v183))) >> 32;
  HIDWORD(v148) += HIDWORD(v183);
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v185 = v612 + __PAIR64__(v571, *(unsigned int *)&v554[16]) + __PAIR64__(v132, HIDWORD(v132));
  v186 = v152 ^ v185;
  v187 = __PAIR64__(HIDWORD(v72), v181) + __PAIR64__(v186, HIDWORD(v186));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v181) + __PAIR64__(v186, HIDWORD(v186))) >> 32;
  HIDWORD(v132) ^= v187;
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  v188 = v186;
  HIDWORD(v186) ^= v614 + v185 + (_DWORD)v132;
  *(_QWORD *)&v554[16] = v614 + v185 + v132;
  LODWORD(v186) = HIWORD(HIDWORD(v186)) | (((unsigned int)v186 ^ *(_DWORD *)&v554[20]) << 16);
  HIDWORD(v186) = ((v188 ^ *(_DWORD *)&v554[20]) >> 16) | (HIDWORD(v186) << 16);
  *(_QWORD *)&v604[4] = v186;
  v189 = __PAIR64__(HIDWORD(v72), v187) + v186;
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v187) + v186) >> 32;
  LODWORD(v186) = (2 * HIDWORD(v547)) | (DWORD2(v548) >> 31);
  HIDWORD(v186) = (2 * DWORD2(v548)) | (HIDWORD(v547) >> 31);
  v574 = HIDWORD(v72);
  DWORD2(v548) = v189 ^ v132;
  v564 = HIDWORD(v72) ^ HIDWORD(v132);
  HIDWORD(v72) = (v608 + v172 + v186) ^ v599;
  v190 = v608 + v172 + v186;
  LODWORD(v186) = v186 ^ (HIDWORD(v148) + (HIDWORD(v190) ^ *(_DWORD *)v604));
  v191 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(HIDWORD(v72), HIDWORD(v190) ^ *(_DWORD *)v604);
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(HIDWORD(v72), HIDWORD(v190) ^ *(_DWORD *)v604)) >> 32;
  HIDWORD(v186) ^= v72;
  HIDWORD(v132) = HIBYTE(HIDWORD(v186));
  HIDWORD(v186) = v186 >> 24;
  LODWORD(v186) = HIDWORD(v132) | ((_DWORD)v186 << 8);
  LODWORD(v132) = HIDWORD(v190) ^ *(_DWORD *)v604 ^ (v606 + v190 + HIDWORD(v186));
  HIDWORD(v72) ^= (v606 + v190 + __PAIR64__(v186, HIDWORD(v186))) >> 32;
  v600 = (v606 + v190 + __PAIR64__(v186, HIDWORD(v186))) >> 32;
  LODWORD(v587) = v606 + v190 + HIDWORD(v186);
  *(_DWORD *)&v604[12] = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  LODWORD(v148) = WORD1(v132) | (HIDWORD(v72) << 16);
  v192 = __CFADD__((_DWORD)v191, (_DWORD)v148);
  *(_DWORD *)v604 = v148;
  HIDWORD(v72) = (2 * HIDWORD(v548)) | (v557 >> 31);
  v193 = (2 * v557) | (HIDWORD(v548) >> 31);
  LODWORD(v148) = v191 + v148;
  HIDWORD(v148) = *(_DWORD *)&v604[12] + v192 + (_DWORD)v72;
  HIDWORD(v186) ^= v148;
  v582 = v148;
  LODWORD(v186) = v186 ^ HIDWORD(v148);
  LODWORD(v72) = (v618 + v179 + __PAIR64__(v193, HIDWORD(v72))) >> 32;
  v194 = v618 + v179 + HIDWORD(v72);
  HIDWORD(v183) ^= v194;
  LODWORD(v132) = v72 ^ v183;
  HIDWORD(v72) ^= v168 + *(_DWORD *)&v598[4] + (v72 ^ v183);
  LODWORD(v137) = (2 * v186) | (HIDWORD(v186) >> 31);
  LODWORD(v148) = (v168 + *(_QWORD *)&v598[4] + (v183 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v168 + *(_DWORD *)&v598[4] + (v183 ^ v72);
  v195 = v193 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v195 << 8);
  LODWORD(v183) = HIBYTE(v195) | (HIDWORD(v72) << 8);
  v196 = v617 + __PAIR64__(v72, v194) + __PAIR64__(v183, HIDWORD(v137));
  HIDWORD(v183) ^= HIDWORD(v196);
  v197 = HIWORD(HIDWORD(v183));
  HIDWORD(v183) = (((unsigned int)v196 ^ (unsigned int)v132) >> 16) | (HIDWORD(v183) << 16);
  HIDWORD(v72) = v197 | (((unsigned int)v196 ^ (unsigned int)v132) << 16);
  HIDWORD(v148) = 2 * HIDWORD(v186);
  HIDWORD(v186) = HIDWORD(v132) + HIDWORD(v183);
  *(_DWORD *)&v604[16] = HIDWORD(v183);
  HIDWORD(v148) |= (unsigned int)v186 >> 31;
  LODWORD(v132) = (2 * v548) | (DWORD1(v548) >> 31);
  v198 = (__int64)v548 >> 31;
  LODWORD(v547) = (HIDWORD(v132) + HIDWORD(v183)) ^ HIDWORD(v137);
  *(_DWORD *)&v604[20] = HIDWORD(v72);
  HIDWORD(v72) += __CFADD__(HIDWORD(v132), HIDWORD(v183)) + (_DWORD)v148;
  HIDWORD(v183) = (v616 + *(_DWORD *)&v554[8] + v132) ^ *(_DWORD *)&v598[4];
  LODWORD(v548) = HIDWORD(v72) ^ v183;
  v199 = (v616 + *(_QWORD *)&v554[8] + __PAIR64__(v198, v132)) >> 32;
  LODWORD(v186) = v616 + *(_DWORD *)&v554[8] + v132;
  LODWORD(v132) = v132 ^ (v176 + (v199 ^ *(_DWORD *)&v598[8]));
  LODWORD(v72) = (__PAIR64__(*(unsigned int *)&v554[24], v176) + __PAIR64__(HIDWORD(v183), v199 ^ *(_DWORD *)&v598[8])) >> 32;
  LODWORD(v148) = v176 + (v199 ^ *(_DWORD *)&v598[8]);
  v200 = v198 ^ v72;
  LODWORD(v183) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(v200) | ((_DWORD)v132 << 8);
  v201 = v183 | (v200 << 8);
  v202 = v619 + __PAIR64__(v199, v186) + __PAIR64__(v132, v201);
  HIDWORD(v137) = v199 ^ *(_DWORD *)&v598[8] ^ v202;
  HIDWORD(v183) ^= HIDWORD(v202);
  v203 = HIWORD(HIDWORD(v183));
  HIDWORD(v183) = HIWORD(HIDWORD(v137)) | (HIDWORD(v183) << 16);
  v204 = v203 | (HIDWORD(v137) << 16);
  v205 = __PAIR64__(v72, v148) + __PAIR64__(v204, HIDWORD(v183));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v204, HIDWORD(v183))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v206 = v607 + *(_QWORD *)&v554[16] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v132) = v205 ^ v201;
  v207 = v204 ^ HIDWORD(v206);
  HIDWORD(v183) ^= v206;
  HIDWORD(v148) ^= HIDWORD(v186) + v207;
  v208 = HIDWORD(v186) + v207;
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v186)) + __PAIR64__(HIDWORD(v183), v207)) >> 32;
  HIDWORD(v137) = (v611 + v206) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v183) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v148) = v183 | (HIDWORD(v148) << 8);
  v209 = v207 ^ (v611 + v206 + v137);
  HIDWORD(v183) ^= (__PAIR64__(HIDWORD(v148), (int)v611 + (int)v206) + v137) >> 32;
  *(_QWORD *)&v554[16] = __PAIR64__(HIDWORD(v148), (int)v611 + (int)v206) + v137;
  v210 = HIWORD(v209) | (HIDWORD(v183) << 16);
  HIDWORD(v547) = HIWORD(HIDWORD(v183)) | (v209 << 16);
  *(_DWORD *)&v598[8] = v210;
  HIDWORD(v137) = (2 * v547) | ((unsigned int)v548 >> 31);
  LODWORD(v183) = (2 * v548) | ((unsigned int)v547 >> 31);
  *(_DWORD *)&v554[24] = v208 + v210;
  HIDWORD(v571) = HIDWORD(v547) + __CFADD__(v208, v210) + HIDWORD(v72);
  LODWORD(v548) = HIDWORD(v571) ^ HIDWORD(v148);
  LODWORD(v547) = (v208 + v210) ^ v137;
  v211 = v610 + __PAIR64__(v600, v587) + __PAIR64__(v183, HIDWORD(v137));
  v212 = __PAIR64__(v72, v205)
       + __PAIR64__((unsigned int)v211 ^ *(_DWORD *)&v604[4], HIDWORD(v211) ^ *(_DWORD *)&v604[8]);
  LODWORD(v72) = (__PAIR64__(v72, v205)
                + __PAIR64__((unsigned int)v211 ^ *(_DWORD *)&v604[4], HIDWORD(v211) ^ *(_DWORD *)&v604[8])) >> 32;
  HIDWORD(v137) ^= v212;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v183) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v183) >> 24) | (HIDWORD(v137) << 8);
  HIDWORD(v186) = ((v211 ^ *(_QWORD *)&v604[4]) >> 32) ^ (v615 + v211 + HIDWORD(v148));
  LODWORD(v186) = v211 ^ *(_DWORD *)&v604[4] ^ ((v615 + v211 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32);
  v213 = WORD1(v186);
  v588 = v615 + v211 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  LODWORD(v186) = HIWORD(HIDWORD(v186)) | ((_DWORD)v186 << 16);
  HIDWORD(v186) = v213 | (HIDWORD(v186) << 16);
  v214 = 2 * v132;
  LODWORD(v132) = v132 >> 31;
  v215 = v214 | (HIDWORD(v132) >> 31);
  HIDWORD(v132) = (__PAIR64__(v72, v212) + v186) >> 32;
  *(_QWORD *)v598 = __PAIR64__(v72, v212) + v186;
  DWORD1(v548) = (v212 + v186) ^ HIDWORD(v148);
  LODWORD(v72) = (v609 + v196 + __PAIR64__(v215, v132)) >> 32;
  v216 = v609 + v196 + v132;
  HIDWORD(v548) = HIDWORD(v132) ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v189 + (v72 ^ *(_DWORD *)&v604[12]));
  HIDWORD(v72) = (__PAIR64__(v574, v189) + __PAIR64__(v216 ^ *(_DWORD *)v604, (unsigned int)v72 ^ *(_DWORD *)&v604[12])) >> 32;
  v217 = v215 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v217 << 8);
  HIDWORD(v148) = HIBYTE(v217) | ((_DWORD)v132 << 8);
  v218 = v605 + __PAIR64__(v72, v216) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)&v604[12] ^ v218;
  LODWORD(v183) = v216 ^ *(_DWORD *)v604 ^ HIDWORD(v218);
  v219 = WORD1(v183);
  LODWORD(v183) = HIWORD(HIDWORD(v137)) | ((_DWORD)v183 << 16);
  HIDWORD(v183) = v219 | (HIDWORD(v137) << 16);
  HIDWORD(v132) = (2 * DWORD2(v548)) | (v564 >> 31);
  HIDWORD(v137) = (2 * v564) | (DWORD2(v548) >> 31);
  v220 = __PAIR64__(v574, v189) + __PAIR64__(v216 ^ *(_DWORD *)v604, (unsigned int)v72 ^ *(_DWORD *)&v604[12]) + v183;
  *(_QWORD *)v604 = v183;
  DWORD2(v548) = v220 ^ v137;
  v221 = v620 + v202 + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v183) = v221 ^ *(_DWORD *)&v604[16];
  v558 = HIDWORD(v220) ^ HIDWORD(v148);
  LODWORD(v183) = HIDWORD(v221) ^ *(_DWORD *)&v604[20];
  LODWORD(v72) = (v582 + v183) >> 32;
  HIDWORD(v148) = v582 + (HIDWORD(v221) ^ *(_DWORD *)&v604[20]);
  HIDWORD(v132) ^= HIDWORD(v148);
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132));
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  LODWORD(v132) = v132 | (HIDWORD(v137) << 8);
  v222 = v183 ^ (v613 + v221 + v132);
  v223 = HIWORD(HIDWORD(v222));
  LODWORD(v582) = (v613 + v221 + v132) >> 32;
  HIDWORD(v222) = v222 >> 16;
  LODWORD(v222) = v223 | ((_DWORD)v222 << 16);
  *(_DWORD *)&v554[12] = v613 + v221 + v132;
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v222));
  v224 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v222, HIDWORD(v222));
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v222, HIDWORD(v222))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v225 = v614 + *(_QWORD *)&v554[16] + __PAIR64__(v132, HIDWORD(v132));
  v226 = v186 ^ v225;
  HIDWORD(v132) ^= v220 + HIDWORD(v226);
  v227 = v220 + __PAIR64__(v226, HIDWORD(v226));
  HIDWORD(v72) = (v220 + __PAIR64__(v226, HIDWORD(v226))) >> 32;
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v226) ^= v605 + v225 + (_DWORD)v132;
  LODWORD(v226) = v226 ^ ((v605 + v225 + v132) >> 32);
  *(_QWORD *)&v554[16] = v605 + v225 + v132;
  *(_DWORD *)&v604[8] = HIWORD(HIDWORD(v226)) | ((_DWORD)v226 << 16);
  v228 = v226 >> 16;
  v229 = __PAIR64__(HIDWORD(v72), v227) + ((v226 << 16) | HIWORD(HIDWORD(v226)));
  LODWORD(v226) = (2 * v547) | ((unsigned int)v548 >> 31);
  HIDWORD(v226) = (2 * v548) | ((unsigned int)v547 >> 31);
  *(_DWORD *)&v604[12] = v228;
  *(_QWORD *)&v554[4] = v229 ^ v132;
  v230 = v610 + v588 + v226;
  LODWORD(v226) = v226 ^ (v224 + (HIDWORD(v230) ^ *(_DWORD *)&v604[4]));
  v231 = __PAIR64__(v72, v224) + __PAIR64__((unsigned int)v230 ^ *(_DWORD *)v604, HIDWORD(v230) ^ *(_DWORD *)&v604[4]);
  LODWORD(v72) = (__PAIR64__(v72, v224)
                + __PAIR64__((unsigned int)v230 ^ *(_DWORD *)v604, HIDWORD(v230) ^ *(_DWORD *)&v604[4])) >> 32;
  HIDWORD(v226) ^= v72;
  HIDWORD(v132) = HIBYTE(HIDWORD(v226));
  HIDWORD(v226) = v226 >> 24;
  LODWORD(v226) = HIDWORD(v132) | ((_DWORD)v226 << 8);
  v232 = v612 + v230 + __PAIR64__(v226, HIDWORD(v226));
  LODWORD(v132) = HIDWORD(v230) ^ *(_DWORD *)&v604[4] ^ v232;
  HIDWORD(v72) = v230 ^ *(_DWORD *)v604 ^ HIDWORD(v232);
  v233 = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  *(_DWORD *)v604 = WORD1(v132) | (HIDWORD(v72) << 16);
  HIDWORD(v72) = (2 * DWORD1(v548)) | (HIDWORD(v548) >> 31);
  v234 = (2 * HIDWORD(v548)) | (DWORD1(v548) >> 31);
  *(_DWORD *)&v604[4] = v233;
  LODWORD(v226) = v226 ^ (v233 + __CFADD__((_DWORD)v231, *(_DWORD *)v604) + (_DWORD)v72);
  LODWORD(v571) = v231 + *(_DWORD *)v604;
  HIDWORD(v226) ^= v231 + *(_DWORD *)v604;
  v575 = v233 + __CFADD__((_DWORD)v231, *(_DWORD *)v604) + (_DWORD)v72;
  LODWORD(v137) = (2 * v226) | (HIDWORD(v226) >> 31);
  LODWORD(v72) = (v607 + v218 + __PAIR64__(v234, HIDWORD(v72))) >> 32;
  v235 = v607 + v218 + HIDWORD(v72);
  HIDWORD(v222) ^= v235;
  LODWORD(v132) = v72 ^ v222;
  HIDWORD(v72) ^= *(_DWORD *)&v554[24] + (v72 ^ v222);
  LODWORD(v148) = (__PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[24]) + (v222 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = *(_DWORD *)&v554[24] + (v222 ^ v72);
  v236 = v234 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v236 << 8);
  LODWORD(v222) = HIBYTE(v236) | (HIDWORD(v72) << 8);
  v237 = v609 + __PAIR64__(v72, v235) + __PAIR64__(v222, HIDWORD(v137));
  HIDWORD(v222) ^= HIDWORD(v237);
  *(_DWORD *)&v604[20] = HIWORD(HIDWORD(v222)) | (((unsigned int)v237 ^ (unsigned int)v132) << 16);
  *(_DWORD *)&v604[16] = (((unsigned int)v237 ^ (unsigned int)v132) >> 16) | (HIDWORD(v222) << 16);
  LODWORD(v132) = (2 * DWORD2(v548)) | (v558 >> 31);
  v238 = (2 * v558) | (DWORD2(v548) >> 31);
  HIDWORD(v148) = v226 >> 31;
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132)) + *(_QWORD *)&v604[16]) >> 32;
  DWORD2(v548) = HIDWORD(v132) + *(_DWORD *)&v604[16];
  LODWORD(v548) = (HIDWORD(v132) + *(_DWORD *)&v604[16]) ^ HIDWORD(v137);
  v239 = (v615 + __PAIR64__(v582, *(unsigned int *)&v554[12]) + __PAIR64__(v238, v132)) >> 32;
  LODWORD(v226) = v615 + *(_DWORD *)&v554[12] + v132;
  DWORD1(v548) = HIDWORD(v72) ^ v222;
  LODWORD(v132) = v132 ^ (*(_DWORD *)v598 + (v239 ^ HIDWORD(v547)));
  LODWORD(v72) = (*(_QWORD *)v598 + __PAIR64__((unsigned int)v226 ^ *(_DWORD *)&v598[8], v239 ^ HIDWORD(v547))) >> 32;
  LODWORD(v148) = *(_DWORD *)v598 + (v239 ^ HIDWORD(v547));
  v240 = v238 ^ v72;
  HIDWORD(v132) = HIBYTE(v240);
  v241 = BYTE3(v132) | (v240 << 8);
  LODWORD(v132) = HIDWORD(v132) | ((_DWORD)v132 << 8);
  HIDWORD(v226) = (v620 + __PAIR64__(v239, v226) + __PAIR64__(v132, v241)) >> 32;
  HIDWORD(v137) = v239 ^ HIDWORD(v547) ^ (v620 + v226 + v241);
  HIDWORD(v222) = v226 ^ *(_DWORD *)&v598[8] ^ HIDWORD(v226);
  v242 = HIWORD(HIDWORD(v222));
  *(_DWORD *)&v554[12] = v620 + v226 + v241;
  HIDWORD(v222) = HIWORD(HIDWORD(v137)) | (HIDWORD(v222) << 16);
  v243 = v242 | (HIDWORD(v137) << 16);
  HIDWORD(v571) = HIDWORD(v226);
  v244 = __PAIR64__(v72, v148) + __PAIR64__(v243, HIDWORD(v222));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v243, HIDWORD(v222))) >> 32;
  HIDWORD(v132) = v244 ^ v241;
  LODWORD(v132) = v132 ^ v72;
  v245 = v619 + *(_QWORD *)&v554[16] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v222) ^= v245;
  v246 = v243 ^ HIDWORD(v245);
  v247 = __PAIR64__(HIDWORD(v72), DWORD2(v548)) + __PAIR64__(HIDWORD(v222), v246);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), DWORD2(v548)) + __PAIR64__(HIDWORD(v222), v246)) >> 32;
  HIDWORD(v148) ^= v247;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v222) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v137) = (v606 + v245) >> 32;
  HIDWORD(v148) = v222 | (HIDWORD(v148) << 8);
  v248 = v246 ^ (v606 + v245 + v137);
  HIDWORD(v222) ^= (__PAIR64__(HIDWORD(v148), (int)v606 + (int)v245) + v137) >> 32;
  *(_QWORD *)&v554[16] = __PAIR64__(HIDWORD(v148), (int)v606 + (int)v245) + v137;
  HIDWORD(v137) = HIWORD(HIDWORD(v222));
  v249 = HIWORD(v248) | (HIDWORD(v222) << 16);
  HIDWORD(v222) = v548;
  LODWORD(v548) = HIDWORD(v137) | (v248 << 16);
  *(_DWORD *)&v598[8] = v249;
  LODWORD(v582) = v247 + v249;
  HIDWORD(v137) = (2 * HIDWORD(v222)) | (DWORD1(v548) >> 31);
  LODWORD(v222) = (2 * DWORD1(v548)) | (HIDWORD(v222) >> 31);
  HIDWORD(v547) = v548 + __CFADD__((_DWORD)v247, v249) + HIDWORD(v72);
  DWORD1(v548) = (v247 + v249) ^ v137;
  v250 = v616 + v232 + __PAIR64__(v222, HIDWORD(v137));
  HIDWORD(v137) ^= v244 + (HIDWORD(v250) ^ *(_DWORD *)&v604[12]);
  v251 = __PAIR64__(v72, v244)
       + __PAIR64__((unsigned int)v250 ^ *(_DWORD *)&v604[8], HIDWORD(v250) ^ *(_DWORD *)&v604[12]);
  LODWORD(v72) = (__PAIR64__(v72, v244)
                + __PAIR64__((unsigned int)v250 ^ *(_DWORD *)&v604[8], HIDWORD(v250) ^ *(_DWORD *)&v604[12])) >> 32;
  DWORD2(v548) = HIDWORD(v547) ^ HIDWORD(v148);
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v222) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v222) >> 24) | (HIDWORD(v137) << 8);
  HIDWORD(v226) = ((v250 ^ *(_QWORD *)&v604[8]) >> 32) ^ (v617 + v250 + HIDWORD(v148));
  LODWORD(v226) = v250 ^ *(_DWORD *)&v604[8] ^ ((v617 + v250 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32);
  v252 = WORD1(v226);
  v589 = v617 + v250 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  LODWORD(v226) = HIWORD(HIDWORD(v226)) | ((_DWORD)v226 << 16);
  HIDWORD(v226) = v252 | (HIDWORD(v226) << 16);
  v253 = (2 * v132) | (HIDWORD(v132) >> 31);
  *(_DWORD *)v598 = v251 + v226;
  LODWORD(v132) = v132 >> 31;
  HIDWORD(v548) = (v251 + v226) ^ HIDWORD(v148);
  *(_DWORD *)&v554[24] = (__PAIR64__(v72, v251) + v226) >> 32;
  LODWORD(v222) = (v611 + v237 + v132) ^ *(_DWORD *)v604;
  v254 = v611 + v237 + v132;
  LODWORD(v72) = (v611 + v237 + __PAIR64__(v253, v132)) >> 32;
  v559 = *(_DWORD *)&v554[24] ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v229 + (v72 ^ *(_DWORD *)&v604[4]));
  HIDWORD(v72) = (v229 + __PAIR64__(v222, (unsigned int)v72 ^ *(_DWORD *)&v604[4])) >> 32;
  v255 = v253 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v255 << 8);
  HIDWORD(v148) = HIBYTE(v255) | ((_DWORD)v132 << 8);
  v256 = v613 + __PAIR64__(v72, v254) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)&v604[4] ^ v256;
  LODWORD(v222) = v222 ^ HIDWORD(v256);
  v257 = HIWORD(HIDWORD(v137)) | ((_DWORD)v222 << 16);
  v258 = WORD1(v222) | (HIDWORD(v137) << 16);
  HIDWORD(v137) = *(__int64 *)&v554[4] >> 31;
  v259 = __PAIR64__(HIDWORD(v72), v229 + (v72 ^ *(_DWORD *)&v604[4])) + __PAIR64__(v258, v257);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v229 + (v72 ^ *(_DWORD *)&v604[4])) + __PAIR64__(v258, v257)) >> 32;
  *(_QWORD *)v604 = __PAIR64__(v258, v257);
  HIDWORD(v132) = (2 * *(_DWORD *)&v554[4]) | (*(_DWORD *)&v554[8] >> 31);
  *(_DWORD *)&v554[4] = HIDWORD(v72) ^ HIDWORD(v148);
  v260 = v608 + __PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[12]) + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v222) = v260 ^ *(_DWORD *)&v604[16];
  LODWORD(v222) = HIDWORD(v260) ^ *(_DWORD *)&v604[20];
  HIDWORD(v132) ^= v571 + (HIDWORD(v260) ^ *(_DWORD *)&v604[20]);
  LODWORD(v72) = (__PAIR64__(v575, v571) + v222) >> 32;
  HIDWORD(v148) = v571 + (HIDWORD(v260) ^ *(_DWORD *)&v604[20]);
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v261 = v222 ^ (v618 + v260 + v132);
  v262 = HIWORD(HIDWORD(v261));
  *(_QWORD *)&v554[8] = v618 + v260 + v132;
  HIDWORD(v261) = v261 >> 16;
  LODWORD(v261) = v262 | ((_DWORD)v261 << 16);
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v261));
  v263 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v261, HIDWORD(v261));
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v261, HIDWORD(v261))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v264 = v607 + *(_QWORD *)&v554[16] + __PAIR64__(v132, HIDWORD(v132));
  v265 = v226 ^ v264;
  v266 = __PAIR64__(HIDWORD(v72), v259) + __PAIR64__(v265, HIDWORD(v265));
  HIDWORD(v132) ^= v259 + HIDWORD(v265);
  *(_DWORD *)&v554[16] = (__PAIR64__(HIDWORD(v72), v259) + __PAIR64__(v265, HIDWORD(v265))) >> 32;
  LODWORD(v132) = v132 ^ *(_DWORD *)&v554[16];
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v265) ^= v617 + v264 + (_DWORD)v132;
  LODWORD(v265) = v265 ^ ((v617 + v264 + v132) >> 32);
  v267 = WORD1(v265);
  *(_DWORD *)&v554[20] = v617 + v264 + v132;
  LODWORD(v571) = (v617 + v264 + v132) >> 32;
  LODWORD(v265) = HIWORD(HIDWORD(v265)) | ((_DWORD)v265 << 16);
  v268 = v267 | (HIDWORD(v265) << 16);
  v192 = __CFADD__((_DWORD)v266, (_DWORD)v265);
  LODWORD(v148) = v266 + v265;
  *(_QWORD *)&v604[8] = __PAIR64__(v268, v265);
  LODWORD(v265) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  HIDWORD(v72) = v148;
  HIDWORD(v265) = *(__int64 *)((char *)&v548 + 4) >> 31;
  LODWORD(v148) = v268;
  v269 = *(_DWORD *)&v554[16];
  *(_DWORD *)&v554[16] = HIDWORD(v72);
  DWORD1(v548) = HIDWORD(v72) ^ v132;
  v270 = v611 + v589 + v265;
  HIDWORD(v571) = v148 + v192 + v269;
  DWORD2(v548) = HIDWORD(v571) ^ HIDWORD(v132);
  LODWORD(v265) = v265 ^ (v263 + (HIDWORD(v270) ^ *(_DWORD *)&v604[4]));
  v271 = __PAIR64__(v72, v263) + __PAIR64__((unsigned int)v270 ^ *(_DWORD *)v604, HIDWORD(v270) ^ *(_DWORD *)&v604[4]);
  LODWORD(v72) = (__PAIR64__(v72, v263)
                + __PAIR64__((unsigned int)v270 ^ *(_DWORD *)v604, HIDWORD(v270) ^ *(_DWORD *)&v604[4])) >> 32;
  HIDWORD(v265) ^= v72;
  HIDWORD(v132) = HIBYTE(HIDWORD(v265));
  HIDWORD(v265) = v265 >> 24;
  LODWORD(v265) = HIDWORD(v132) | ((_DWORD)v265 << 8);
  v272 = v615 + v270 + __PAIR64__(v265, HIDWORD(v265));
  LODWORD(v132) = HIDWORD(v270) ^ *(_DWORD *)&v604[4] ^ v272;
  HIDWORD(v72) = v270 ^ *(_DWORD *)v604 ^ HIDWORD(v272);
  v576 = v615 + v270 + HIDWORD(v265);
  v273 = WORD1(v132) | (HIDWORD(v72) << 16);
  *(_DWORD *)&v604[4] = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  *(_DWORD *)v604 = v273;
  HIDWORD(v265) ^= v271 + v273;
  HIDWORD(v72) = (2 * HIDWORD(v548)) | (v559 >> 31);
  v274 = (2 * v559) | (HIDWORD(v548) >> 31);
  HIDWORD(v582) = v271 + v273;
  LODWORD(v265) = v265 ^ ((__PAIR64__(v72, v271) + __PAIR64__(*(unsigned int *)&v604[4], v273)) >> 32);
  HIDWORD(v589) = (__PAIR64__(v72, v271) + __PAIR64__(*(unsigned int *)&v604[4], v273)) >> 32;
  LODWORD(v72) = (v605 + v256 + __PAIR64__(v274, HIDWORD(v72))) >> 32;
  v275 = v605 + v256 + HIDWORD(v72);
  HIDWORD(v261) ^= v275;
  LODWORD(v132) = v72 ^ v261;
  HIDWORD(v72) ^= v582 + (v72 ^ v261);
  LODWORD(v148) = (__PAIR64__(HIDWORD(v547), v582) + (v261 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v582 + (v261 ^ v72);
  v276 = v274 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v276 << 8);
  LODWORD(v261) = HIBYTE(v276) | (HIDWORD(v72) << 8);
  v277 = v616 + __PAIR64__(v72, v275) + __PAIR64__(v261, HIDWORD(v137));
  HIDWORD(v261) ^= HIDWORD(v277);
  *(_DWORD *)&v598[4] = (((unsigned int)v277 ^ (unsigned int)v132) >> 16) | (HIDWORD(v261) << 16);
  v278 = HIWORD(HIDWORD(v261)) | (((unsigned int)v277 ^ (unsigned int)v132) << 16);
  HIDWORD(v148) = v265 >> 31;
  v279 = (2 * *(_DWORD *)&v554[4]) | (((unsigned int)v259 ^ (unsigned int)v137) >> 31);
  LODWORD(v132) = (2 * (v259 ^ v137)) | (*(_DWORD *)&v554[4] >> 31);
  LODWORD(v137) = (2 * v265) | (HIDWORD(v265) >> 31);
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132)) + __PAIR64__(v278, *(unsigned int *)&v598[4])) >> 32;
  HIDWORD(v265) = HIDWORD(v132) + *(_DWORD *)&v598[4];
  LODWORD(v547) = (HIDWORD(v132) + *(_DWORD *)&v598[4]) ^ HIDWORD(v137);
  *(_DWORD *)&v604[16] = v278;
  LODWORD(v72) = v548;
  v280 = (v613 + *(_QWORD *)&v554[8] + __PAIR64__(v279, v132)) >> 32;
  LODWORD(v265) = v613 + *(_DWORD *)&v554[8] + v132;
  LODWORD(v548) = HIDWORD(v72) ^ v261;
  HIDWORD(v137) = v280 ^ v72;
  LODWORD(v132) = v132 ^ (*(_DWORD *)v598 + (v280 ^ v72));
  v281 = *(_DWORD *)v598 + (v280 ^ v72);
  LODWORD(v72) = (__PAIR64__(*(unsigned int *)&v554[24], *(unsigned int *)v598)
                + __PAIR64__((unsigned int)v265 ^ *(_DWORD *)&v598[8], v280 ^ (unsigned int)v72)) >> 32;
  v282 = v279 ^ v72;
  HIDWORD(v132) = HIBYTE(v282);
  v283 = BYTE3(v132) | (v282 << 8);
  LODWORD(v132) = HIDWORD(v132) | ((_DWORD)v132 << 8);
  v284 = v608 + __PAIR64__(v280, v265) + __PAIR64__(v132, v283);
  HIDWORD(v137) ^= v284;
  v285 = (((unsigned int)v265 ^ *(_DWORD *)&v598[8] ^ HIDWORD(v284)) >> 16) | (HIDWORD(v137) << 16);
  HIDWORD(v261) = HIWORD(HIDWORD(v137)) | (((unsigned int)v265 ^ *(_DWORD *)&v598[8] ^ HIDWORD(v284)) << 16);
  v286 = __PAIR64__(v72, v281) + __PAIR64__(v285, HIDWORD(v261));
  LODWORD(v72) = (__PAIR64__(v72, v281) + __PAIR64__(v285, HIDWORD(v261))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v287 = v609 + __PAIR64__(v571, *(unsigned int *)&v554[20]) + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v132) = v286 ^ v283;
  v288 = v285 ^ HIDWORD(v287);
  HIDWORD(v261) ^= v287;
  HIDWORD(v148) ^= HIDWORD(v265) + v288;
  v289 = __PAIR64__(HIDWORD(v72), HIDWORD(v265)) + __PAIR64__(HIDWORD(v261), v288);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v265)) + __PAIR64__(HIDWORD(v261), v288)) >> 32;
  HIDWORD(v137) = (v618 + v287) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v261) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v148) = v261 | (HIDWORD(v148) << 8);
  v290 = v288 ^ (v618 + v287 + v137);
  HIDWORD(v261) ^= (__PAIR64__(HIDWORD(v148), (int)v618 + (int)v287) + v137) >> 32;
  *(_QWORD *)&v554[20] = __PAIR64__(HIDWORD(v148), (int)v618 + (int)v287) + v137;
  HIDWORD(v547) = HIWORD(HIDWORD(v261)) | (v290 << 16);
  *(_DWORD *)&v598[8] = HIWORD(v290) | (HIDWORD(v261) << 16);
  HIDWORD(v137) = (2 * v547) | ((unsigned int)v548 >> 31);
  LODWORD(v261) = (2 * v548) | ((unsigned int)v547 >> 31);
  LODWORD(v548) = ((v612 + __PAIR64__(HIDWORD(v272), v576)) >> 32) ^ v137;
  v291 = v612 + __PAIR64__(HIDWORD(v272), v576) + __PAIR64__(v261, HIDWORD(v137));
  LODWORD(v547) = HIDWORD(v547) + __CFADD__((_DWORD)v289, *(_DWORD *)&v598[8]) + HIDWORD(v72);
  HIDWORD(v137) ^= v286 + (HIDWORD(v291) ^ *(_DWORD *)&v604[12]);
  v292 = __PAIR64__(v72, v286)
       + __PAIR64__((unsigned int)v291 ^ *(_DWORD *)&v604[8], HIDWORD(v291) ^ *(_DWORD *)&v604[12]);
  LODWORD(v72) = (__PAIR64__(v72, v286)
                + __PAIR64__((unsigned int)v291 ^ *(_DWORD *)&v604[8], HIDWORD(v291) ^ *(_DWORD *)&v604[12])) >> 32;
  HIDWORD(v548) = v547 ^ HIDWORD(v148);
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v261) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v261) >> 24) | (HIDWORD(v137) << 8);
  HIDWORD(v265) = ((v291 ^ *(_QWORD *)&v604[8]) >> 32) ^ (v610 + v291 + HIDWORD(v148));
  LODWORD(v265) = v291 ^ *(_DWORD *)&v604[8] ^ ((v610 + v291 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32);
  LODWORD(v589) = (v610 + v291 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32;
  v293 = WORD1(v265);
  LODWORD(v265) = HIWORD(HIDWORD(v265)) | ((_DWORD)v265 << 16);
  HIDWORD(v265) = v293 | (HIDWORD(v265) << 16);
  v294 = 2 * v132;
  LODWORD(v132) = v132 >> 31;
  v295 = v294 | (HIDWORD(v132) >> 31);
  HIDWORD(v132) = (__PAIR64__(v72, v292) + v265) >> 32;
  *(_DWORD *)v598 = v292 + v265;
  v577 = v610 + v291 + HIDWORD(v148);
  LODWORD(v261) = (v620 + v277 + v132) ^ *(_DWORD *)v604;
  *(_DWORD *)v554 = (v292 + v265) ^ HIDWORD(v148);
  LODWORD(v72) = (v620 + v277 + __PAIR64__(v295, v132)) >> 32;
  v296 = v620 + v277 + v132;
  LODWORD(v582) = HIDWORD(v132);
  *(_DWORD *)&v554[4] = HIDWORD(v132) ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (*(_DWORD *)&v554[16] + (v72 ^ *(_DWORD *)&v604[4]));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[16])
                + __PAIR64__(v261, (unsigned int)v72 ^ *(_DWORD *)&v604[4])) >> 32;
  v297 = v295 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v297 << 8);
  HIDWORD(v148) = HIBYTE(v297) | ((_DWORD)v132 << 8);
  v298 = v619 + __PAIR64__(v72, v296) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)&v604[4] ^ v298;
  LODWORD(v261) = v261 ^ HIDWORD(v298);
  *(_DWORD *)v604 = HIWORD(HIDWORD(v137)) | ((_DWORD)v261 << 16);
  HIDWORD(v132) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  v299 = __PAIR64__(HIDWORD(v72), *(_DWORD *)&v554[16] + ((unsigned int)v72 ^ *(_DWORD *)&v604[4]))
       + __PAIR64__(WORD1(v261) | (HIDWORD(v137) << 16), *(unsigned int *)v604);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), *(_DWORD *)&v554[16] + ((unsigned int)v72 ^ *(_DWORD *)&v604[4]))
                + __PAIR64__(WORD1(v261) | (HIDWORD(v137) << 16), *(unsigned int *)v604)) >> 32;
  *(_DWORD *)&v604[4] = WORD1(v261) | (HIDWORD(v137) << 16);
  HIDWORD(v137) = *(__int64 *)((char *)&v548 + 4) >> 31;
  DWORD2(v548) = HIDWORD(v72) ^ HIDWORD(v148);
  DWORD1(v548) = v299 ^ v137;
  v300 = v606 + v284 + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v261) = v300 ^ *(_DWORD *)&v598[4];
  LODWORD(v261) = HIDWORD(v300) ^ *(_DWORD *)&v604[16];
  *(_DWORD *)&v554[8] = HIDWORD(v582) + (HIDWORD(v300) ^ *(_DWORD *)&v604[16]);
  HIDWORD(v132) ^= *(_DWORD *)&v554[8];
  LODWORD(v72) = (__PAIR64__(HIDWORD(v589), HIDWORD(v582)) + v261) >> 32;
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v301 = v261 ^ (v614 + v300 + v132);
  v302 = HIWORD(HIDWORD(v301));
  HIDWORD(v582) = (v614 + v300 + v132) >> 32;
  HIDWORD(v301) = v301 >> 16;
  LODWORD(v301) = v302 | ((_DWORD)v301 << 16);
  *(_DWORD *)&v554[12] = v614 + v300 + v132;
  LODWORD(v132) = v132 ^ (*(_DWORD *)&v554[8] + HIDWORD(v301));
  LODWORD(v72) = (__PAIR64__(v72, *(unsigned int *)&v554[8]) + __PAIR64__(v301, HIDWORD(v301))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v303 = v617 + *(_QWORD *)&v554[20] + __PAIR64__(v132, HIDWORD(v132));
  v304 = v265 ^ v303;
  HIDWORD(v132) ^= v299 + HIDWORD(v304);
  v305 = __PAIR64__(HIDWORD(v72), v299) + __PAIR64__(v304, HIDWORD(v304));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v299) + __PAIR64__(v304, HIDWORD(v304))) >> 32;
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v304) ^= v610 + v303 + (_DWORD)v132;
  LODWORD(v304) = v304 ^ ((v610 + v303 + v132) >> 32);
  *(_QWORD *)&v554[20] = v610 + v303 + v132;
  LODWORD(v137) = v304 >> 16;
  *(_DWORD *)&v598[4] = HIWORD(HIDWORD(v304)) | ((_DWORD)v304 << 16);
  LODWORD(v304) = (2 * v548) | (HIDWORD(v548) >> 31);
  HIDWORD(v304) = (2 * HIDWORD(v548)) | ((unsigned int)v548 >> 31);
  LODWORD(v548) = (v305 + *(_DWORD *)&v598[4]) ^ v132;
  v306 = v606 + __PAIR64__(v589, v577) + v304;
  HIDWORD(v548) = ((__PAIR64__(v137, v305) + __PAIR64__(HIDWORD(v72), *(unsigned int *)&v598[4])) >> 32) ^ HIDWORD(v132);
  v307 = v304
       ^ (__PAIR64__(v72, *(_DWORD *)&v554[8] + HIDWORD(v301))
        + __PAIR64__((unsigned int)v306 ^ *(_DWORD *)v604, HIDWORD(v306) ^ *(_DWORD *)&v604[4]));
  v308 = __PAIR64__(v72, *(_DWORD *)&v554[8] + HIDWORD(v301))
       + __PAIR64__((unsigned int)v306 ^ *(_DWORD *)v604, HIDWORD(v306) ^ *(_DWORD *)&v604[4]);
  v578 = (__PAIR64__(v137, v305) + __PAIR64__(HIDWORD(v72), *(unsigned int *)&v598[4])) >> 32;
  HIDWORD(v132) = HIBYTE(HIDWORD(v307));
  HIDWORD(v307) = v307 >> 24;
  LODWORD(v307) = HIDWORD(v132) | ((_DWORD)v307 << 8);
  *(_DWORD *)&v604[8] = v137;
  v309 = v620 + v306 + __PAIR64__(v307, HIDWORD(v307));
  LODWORD(v132) = HIDWORD(v306) ^ *(_DWORD *)&v604[4] ^ v309;
  HIDWORD(v72) = v306 ^ *(_DWORD *)v604 ^ HIDWORD(v309);
  *(_DWORD *)&v604[4] = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  *(_DWORD *)v604 = WORD1(v132) | (HIDWORD(v72) << 16);
  *(_DWORD *)&v554[16] = v308 + *(_DWORD *)v604;
  LODWORD(v307) = v307 ^ v132;
  HIDWORD(v307) ^= v308 + *(_DWORD *)v604;
  HIDWORD(v571) = v132;
  LODWORD(v72) = (v619 + v298 + ((2LL * *(_QWORD *)v554) | (*(_DWORD *)&v554[4] >> 31))) >> 32;
  HIDWORD(v301) ^= v619 + v298 + ((2 * *(_DWORD *)v554) | (*(_DWORD *)&v554[4] >> 31));
  LODWORD(v132) = v72 ^ v301;
  LODWORD(v137) = (2 * v307) | (HIDWORD(v307) >> 31);
  HIDWORD(v72) = ((2 * *(_DWORD *)v554) | (*(_DWORD *)&v554[4] >> 31)) ^ (v289 + *(_DWORD *)&v598[8] + (v72 ^ v301));
  LODWORD(v148) = (__PAIR64__(v547, (int)v289 + *(_DWORD *)&v598[8]) + (v301 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v289 + *(_DWORD *)&v598[8] + (v301 ^ v72);
  v310 = (*(__int64 *)v554 >> 31) ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v310 << 8);
  LODWORD(v301) = HIBYTE(v310) | (HIDWORD(v72) << 8);
  v311 = v618 + v619 + v298 + ((2LL * *(_QWORD *)v554) | (*(_DWORD *)&v554[4] >> 31)) + __PAIR64__(v301, HIDWORD(v137));
  HIDWORD(v301) ^= HIDWORD(v311);
  LODWORD(v72) = HIWORD(HIDWORD(v301)) | (((unsigned int)v311 ^ (unsigned int)v132) << 16);
  HIDWORD(v301) = (((unsigned int)v311 ^ (unsigned int)v132) >> 16) | (HIDWORD(v301) << 16);
  HIDWORD(v148) = v307 >> 31;
  *(_DWORD *)&v604[16] = v72;
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132)) + __PAIR64__(v72, HIDWORD(v301))) >> 32;
  HIDWORD(v307) = HIDWORD(v132) + HIDWORD(v301);
  *(_DWORD *)&v604[12] = HIDWORD(v301);
  LODWORD(v547) = (HIDWORD(v132) + HIDWORD(v301)) ^ HIDWORD(v137);
  v312 = (v609
        + __PAIR64__(HIDWORD(v582), *(unsigned int *)&v554[12])
        + ((2LL * *(_QWORD *)((char *)&v548 + 4)) | (DWORD2(v548) >> 31))) >> 32;
  LODWORD(v307) = v609 + *(_DWORD *)&v554[12] + ((2 * DWORD1(v548)) | (DWORD2(v548) >> 31));
  LODWORD(v72) = HIDWORD(v547);
  HIDWORD(v547) = HIDWORD(v72) ^ v301;
  HIDWORD(v137) = v312 ^ v72;
  LODWORD(v132) = ((2 * DWORD1(v548)) | (DWORD2(v548) >> 31)) ^ (*(_DWORD *)v598 + (v312 ^ v72));
  v313 = *(_DWORD *)v598 + (v312 ^ v72);
  LODWORD(v72) = (__PAIR64__(v582, *(unsigned int *)v598)
                + __PAIR64__((unsigned int)v307 ^ *(_DWORD *)&v598[8], v312 ^ (unsigned int)v72)) >> 32;
  v314 = (*(__int64 *)((char *)&v548 + 4) >> 31) ^ v72;
  LODWORD(v301) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(v314) | ((_DWORD)v132 << 8);
  v315 = v301 | (v314 << 8);
  v316 = v615
       + v609
       + __PAIR64__(HIDWORD(v582), *(unsigned int *)&v554[12])
       + ((2LL * *(_QWORD *)((char *)&v548 + 4)) | (DWORD2(v548) >> 31))
       + __PAIR64__(v132, v315);
  HIDWORD(v137) ^= v316;
  HIDWORD(v301) = v307 ^ *(_DWORD *)&v598[8] ^ HIDWORD(v316);
  *(_DWORD *)&v554[12] = v615 + v307 + v315;
  v317 = HIWORD(HIDWORD(v301));
  HIDWORD(v301) = HIWORD(HIDWORD(v137)) | (HIDWORD(v301) << 16);
  v318 = v317 | (HIDWORD(v137) << 16);
  v319 = __PAIR64__(v72, v313) + __PAIR64__(v318, HIDWORD(v301));
  LODWORD(v72) = (__PAIR64__(v72, v313) + __PAIR64__(v318, HIDWORD(v301))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v320 = v605 + *(_QWORD *)&v554[20] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v132) = v319 ^ v315;
  v321 = v318 ^ HIDWORD(v320);
  HIDWORD(v301) ^= v320;
  HIDWORD(v148) ^= HIDWORD(v307) + v321;
  v322 = __PAIR64__(HIDWORD(v72), HIDWORD(v307)) + __PAIR64__(HIDWORD(v301), v321);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v307)) + __PAIR64__(HIDWORD(v301), v321)) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v301) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v137) = (v612 + v320) >> 32;
  HIDWORD(v148) = v301 | (HIDWORD(v148) << 8);
  v323 = v321 ^ (v612 + v320 + v137);
  *(_QWORD *)&v554[20] = __PAIR64__(HIDWORD(v148), (int)v612 + (int)v320) + v137;
  HIDWORD(v301) ^= (__PAIR64__(HIDWORD(v148), (int)v612 + (int)v320) + v137) >> 32;
  LODWORD(v301) = HIWORD(HIDWORD(v301)) | (v323 << 16);
  v324 = HIWORD(v323) | (HIDWORD(v301) << 16);
  HIDWORD(v301) = v547;
  v325 = v301;
  *(_DWORD *)&v598[8] = v324;
  LODWORD(v547) = v322 + v324;
  LODWORD(v301) = (2 * HIDWORD(v547)) | (HIDWORD(v301) >> 31);
  HIDWORD(v137) = (2 * HIDWORD(v301)) | (HIDWORD(v547) >> 31);
  HIDWORD(v547) = (__PAIR64__(HIDWORD(v72), v322) + __PAIR64__(v325, v324)) >> 32;
  *(_DWORD *)&v604[20] = v325;
  DWORD1(v548) = (v322 + v324) ^ v137;
  v326 = v611 + v309 + __PAIR64__(v301, HIDWORD(v137));
  DWORD2(v548) = HIDWORD(v547) ^ HIDWORD(v148);
  HIDWORD(v137) ^= v319 + (HIDWORD(v326) ^ *(_DWORD *)&v604[8]);
  v327 = __PAIR64__(v72, v319)
       + __PAIR64__((unsigned int)v326 ^ *(_DWORD *)&v598[4], HIDWORD(v326) ^ *(_DWORD *)&v604[8]);
  LODWORD(v72) = (__PAIR64__(v72, v319)
                + __PAIR64__((unsigned int)v326 ^ *(_DWORD *)&v598[4], HIDWORD(v326) ^ *(_DWORD *)&v604[8])) >> 32;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v301) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v301) >> 24) | (HIDWORD(v137) << 8);
  v328 = v608 + v326 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  HIDWORD(v307) = HIDWORD(v326) ^ *(_DWORD *)&v604[8] ^ v328;
  LODWORD(v307) = v326 ^ *(_DWORD *)&v598[4] ^ HIDWORD(v328);
  v329 = WORD1(v307);
  LODWORD(v307) = HIWORD(HIDWORD(v307)) | ((_DWORD)v307 << 16);
  HIDWORD(v307) = v329 | (HIDWORD(v307) << 16);
  v583 = v328;
  v330 = __PAIR64__(v72, v327) + v307;
  LODWORD(v72) = (__PAIR64__(v72, v327) + v307) >> 32;
  v331 = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = v132 >> 31;
  v590 = __PAIR64__(v72, v330);
  *(_DWORD *)v554 = v330 ^ HIDWORD(v148);
  HIDWORD(v72) ^= v72;
  LODWORD(v72) = (v614 + v311 + __PAIR64__(v331, v132)) >> 32;
  v332 = v614 + v311 + v132;
  *(_DWORD *)&v554[4] = HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v305 + *(_DWORD *)&v598[4] + (v72 ^ *(_DWORD *)&v604[4]));
  HIDWORD(v72) = (__PAIR64__(v578, (int)v305 + *(_DWORD *)&v598[4])
                + __PAIR64__(v332 ^ *(_DWORD *)v604, (unsigned int)v72 ^ *(_DWORD *)&v604[4])) >> 32;
  v333 = v331 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v333 << 8);
  HIDWORD(v148) = HIBYTE(v333) | ((_DWORD)v132 << 8);
  v334 = v607 + __PAIR64__(v72, v332) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)&v604[4] ^ v334;
  LODWORD(v328) = v332 ^ *(_DWORD *)v604 ^ HIDWORD(v334);
  v335 = WORD1(v328) | (HIDWORD(v137) << 16);
  v336 = HIWORD(HIDWORD(v137)) | ((_DWORD)v328 << 16);
  HIDWORD(v137) = (2 * HIDWORD(v548)) | ((unsigned int)v548 >> 31);
  HIDWORD(v132) = (2 * v548) | (HIDWORD(v548) >> 31);
  *(_DWORD *)v604 = v335;
  v337 = __PAIR64__(HIDWORD(v72), v305 + *(_DWORD *)&v598[4] + (v72 ^ *(_DWORD *)&v604[4])) + __PAIR64__(v335, v336);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v305 + *(_DWORD *)&v598[4] + (v72 ^ *(_DWORD *)&v604[4]))
                + __PAIR64__(v335, v336)) >> 32;
  *(_DWORD *)&v598[4] = v336;
  HIDWORD(v548) = v337 ^ v137;
  v338 = v613 + __PAIR64__(HIDWORD(v316), *(unsigned int *)&v554[12]) + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v328) = v338 ^ *(_DWORD *)&v604[12];
  LODWORD(v328) = HIDWORD(v338) ^ *(_DWORD *)&v604[16];
  *(_DWORD *)&v554[8] = HIDWORD(v72) ^ HIDWORD(v148);
  HIDWORD(v132) ^= *(_DWORD *)&v554[16] + (HIDWORD(v338) ^ *(_DWORD *)&v604[16]);
  LODWORD(v72) = (__PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[16]) + v328) >> 32;
  HIDWORD(v148) = *(_DWORD *)&v554[16] + (HIDWORD(v338) ^ *(_DWORD *)&v604[16]);
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132));
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  LODWORD(v132) = v132 | (HIDWORD(v137) << 8);
  v339 = v328 ^ (v616 + v338 + v132);
  v340 = HIWORD(HIDWORD(v339));
  *(_QWORD *)&v554[12] = v616 + v338 + v132;
  HIDWORD(v339) = v339 >> 16;
  LODWORD(v339) = v340 | ((_DWORD)v339 << 16);
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v339));
  v341 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v339, HIDWORD(v339));
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v339, HIDWORD(v339))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v342 = v618 + *(_DWORD *)&v554[20] + HIDWORD(v132);
  v343 = v307 ^ (v618 + *(_QWORD *)&v554[20] + __PAIR64__(v132, HIDWORD(v132)));
  LODWORD(v548) = (v618 + *(_QWORD *)&v554[20] + __PAIR64__(v132, HIDWORD(v132))) >> 32;
  HIDWORD(v132) ^= v337 + HIDWORD(v343);
  v344 = __PAIR64__(HIDWORD(v72), v337) + __PAIR64__(v343, HIDWORD(v343));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v337) + __PAIR64__(v343, HIDWORD(v343))) >> 32;
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v137) = (v616 + __PAIR64__(v548, v342) + v132) >> 32;
  v345 = v616 + v342 + v132;
  HIDWORD(v343) ^= v345;
  LODWORD(v343) = v343 ^ HIDWORD(v137);
  *(_QWORD *)&v554[20] = __PAIR64__(HIDWORD(v137), v345);
  v346 = HIWORD(HIDWORD(v343)) | ((_DWORD)v343 << 16);
  LODWORD(v548) = v343 >> 16;
  LODWORD(v343) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  *(_DWORD *)&v604[4] = v346;
  HIDWORD(v343) = *(__int64 *)((char *)&v548 + 4) >> 31;
  DWORD1(v548) = (v344 + v346) ^ v132;
  HIDWORD(v571) = v548 + __CFADD__((_DWORD)v344, v346) + HIDWORD(v72);
  LODWORD(v571) = v344 + v346;
  v347 = v612 + v583 + v343;
  v348 = __PAIR64__(v72, v341) + __PAIR64__((unsigned int)v347 ^ *(_DWORD *)&v598[4], HIDWORD(v347) ^ *(_DWORD *)v604);
  LODWORD(v72) = (__PAIR64__(v72, v341)
                + __PAIR64__((unsigned int)v347 ^ *(_DWORD *)&v598[4], HIDWORD(v347) ^ *(_DWORD *)v604)) >> 32;
  v349 = v343 ^ __PAIR64__(v72, v348);
  DWORD2(v548) = HIDWORD(v571) ^ HIDWORD(v132);
  HIDWORD(v132) = HIBYTE(HIDWORD(v349));
  HIDWORD(v349) = v349 >> 24;
  LODWORD(v349) = HIDWORD(v132) | ((_DWORD)v349 << 8);
  v350 = v619 + v347 + __PAIR64__(v349, HIDWORD(v349));
  LODWORD(v132) = HIDWORD(v347) ^ *(_DWORD *)v604 ^ v350;
  HIDWORD(v72) = v347 ^ *(_DWORD *)&v598[4] ^ HIDWORD(v350);
  v351 = WORD1(v132) | (HIDWORD(v72) << 16);
  HIDWORD(v349) ^= v348 + v351;
  *(_DWORD *)v604 = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  LODWORD(v349) = v349 ^ ((__PAIR64__(v72, v348) + __PAIR64__(*(unsigned int *)v604, v351)) >> 32);
  *(_DWORD *)v598 = (__PAIR64__(v72, v348) + __PAIR64__(*(unsigned int *)v604, v351)) >> 32;
  LODWORD(v137) = (2 * v349) | (HIDWORD(v349) >> 31);
  LODWORD(v72) = (v617 + v334 + ((2LL * *(_QWORD *)v554) | (*(_DWORD *)&v554[4] >> 31))) >> 32;
  LODWORD(v132) = v72 ^ v339;
  HIDWORD(v339) ^= v617 + v334 + ((2 * *(_DWORD *)v554) | (*(_DWORD *)&v554[4] >> 31));
  HIDWORD(v72) = ((2 * *(_DWORD *)v554) | (*(_DWORD *)&v554[4] >> 31)) ^ (v547 + (v72 ^ v339));
  LODWORD(v148) = (v547 + (v339 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v547 + (v339 ^ v72);
  v352 = (*(__int64 *)v554 >> 31) ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v352 << 8);
  LODWORD(v339) = HIBYTE(v352) | (HIDWORD(v72) << 8);
  v353 = v606 + v617 + v334 + ((2LL * *(_QWORD *)v554) | (*(_DWORD *)&v554[4] >> 31)) + __PAIR64__(v339, HIDWORD(v137));
  HIDWORD(v339) ^= HIDWORD(v353);
  *(_DWORD *)&v604[8] = (((unsigned int)v353 ^ (unsigned int)v132) >> 16) | (HIDWORD(v339) << 16);
  *(_DWORD *)&v604[12] = HIWORD(HIDWORD(v339)) | (((unsigned int)v353 ^ (unsigned int)v132) << 16);
  LODWORD(v132) = (2 * HIDWORD(v548)) | (*(_DWORD *)&v554[8] >> 31);
  v354 = (2 * *(_DWORD *)&v554[8]) | (HIDWORD(v548) >> 31);
  HIDWORD(v148) = v349 >> 31;
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132)) + *(_QWORD *)&v604[8]) >> 32;
  HIDWORD(v349) = HIDWORD(v132) + *(_DWORD *)&v604[8];
  LODWORD(v547) = (HIDWORD(v132) + *(_DWORD *)&v604[8]) ^ HIDWORD(v137);
  HIDWORD(v548) = HIDWORD(v72) ^ v339;
  v355 = (v608 + *(_QWORD *)&v554[12] + __PAIR64__(v354, v132)) >> 32;
  LODWORD(v349) = v608 + *(_DWORD *)&v554[12] + v132;
  LODWORD(v132) = v132 ^ (v590 + (v355 ^ *(_DWORD *)&v604[20]));
  LODWORD(v72) = (v590 + __PAIR64__((unsigned int)v349 ^ *(_DWORD *)&v598[8], v355 ^ *(_DWORD *)&v604[20])) >> 32;
  LODWORD(v148) = v590 + (v355 ^ *(_DWORD *)&v604[20]);
  v356 = v354 ^ v72;
  LODWORD(v339) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(v356) | ((_DWORD)v132 << 8);
  v357 = v339 | (v356 << 8);
  v358 = v614 + __PAIR64__(v355, v349) + __PAIR64__(v132, v357);
  HIDWORD(v137) = v355 ^ *(_DWORD *)&v604[20] ^ v358;
  HIDWORD(v339) = v349 ^ *(_DWORD *)&v598[8] ^ HIDWORD(v358);
  v359 = HIWORD(HIDWORD(v339));
  HIDWORD(v339) = HIWORD(HIDWORD(v137)) | (HIDWORD(v339) << 16);
  v360 = v359 | (HIDWORD(v137) << 16);
  v361 = __PAIR64__(v72, v148) + __PAIR64__(v360, HIDWORD(v339));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v360, HIDWORD(v339))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v362 = v610 + *(_QWORD *)&v554[20] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v132) = v361 ^ v357;
  v363 = v360 ^ HIDWORD(v362);
  HIDWORD(v339) ^= v362;
  HIDWORD(v148) ^= HIDWORD(v349) + v363;
  v364 = __PAIR64__(HIDWORD(v72), HIDWORD(v349)) + __PAIR64__(HIDWORD(v339), v363);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v349)) + __PAIR64__(HIDWORD(v339), v363)) >> 32;
  HIDWORD(v137) = (v605 + v362) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v339) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v148) = v339 | (HIDWORD(v148) << 8);
  v365 = v363 ^ (v605 + v362 + v137);
  *(_QWORD *)&v554[16] = __PAIR64__(HIDWORD(v148), (int)v605 + (int)v362) + v137;
  HIDWORD(v339) ^= (__PAIR64__(HIDWORD(v148), (int)v605 + (int)v362) + v137) >> 32;
  HIDWORD(v547) = HIWORD(v365) | (HIDWORD(v339) << 16);
  *(_DWORD *)&v598[8] = HIWORD(HIDWORD(v339)) | (v365 << 16);
  HIDWORD(v137) = (2 * v547) | (HIDWORD(v548) >> 31);
  LODWORD(v339) = (2 * HIDWORD(v548)) | ((unsigned int)v547 >> 31);
  *(_DWORD *)&v554[24] = (__PAIR64__(HIDWORD(v72), v364) + __PAIR64__(*(unsigned int *)&v598[8], HIDWORD(v547))) >> 32;
  v366 = v620 + v350 + __PAIR64__(v339, HIDWORD(v137));
  HIDWORD(v548) = (v364 + HIDWORD(v547)) ^ v137;
  HIDWORD(v349) = HIDWORD(v366) ^ v548;
  LODWORD(v148) = v361 + (HIDWORD(v366) ^ v548);
  LODWORD(v548) = *(_DWORD *)&v554[24] ^ HIDWORD(v148);
  HIDWORD(v137) ^= v148;
  v367 = v361 + HIDWORD(v349);
  LODWORD(v72) = (__PAIR64__(v72, v361) + __PAIR64__((unsigned int)v366 ^ *(_DWORD *)&v604[4], HIDWORD(v349))) >> 32;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v339) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v339) >> 24) | (HIDWORD(v137) << 8);
  v368 = v609 + v366 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  HIDWORD(v349) ^= v368;
  LODWORD(v349) = v366 ^ *(_DWORD *)&v604[4] ^ HIDWORD(v368);
  v369 = WORD1(v349);
  LODWORD(v349) = HIWORD(HIDWORD(v349)) | ((_DWORD)v349 << 16);
  HIDWORD(v349) = v369 | (HIDWORD(v349) << 16);
  v370 = 2 * v132;
  LODWORD(v132) = v132 >> 31;
  v371 = v370 | (HIDWORD(v132) >> 31);
  HIDWORD(v132) = (__PAIR64__(v72, v367) + v349) >> 32;
  v591 = __PAIR64__(v72, v367) + v349;
  *(_DWORD *)v554 = (v367 + v349) ^ HIDWORD(v148);
  LODWORD(v339) = (v613 + v353 + v132) ^ v351;
  LODWORD(v72) = (v613 + v353 + __PAIR64__(v371, v132)) >> 32;
  v372 = v613 + v353 + v132;
  *(_DWORD *)&v554[4] = HIDWORD(v132) ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v571 + (v72 ^ *(_DWORD *)v604));
  HIDWORD(v72) = (v571 + __PAIR64__(v339, (unsigned int)v72 ^ *(_DWORD *)v604)) >> 32;
  LODWORD(v148) = v571 + (v72 ^ *(_DWORD *)v604);
  v373 = v371 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v373 << 8);
  HIDWORD(v148) = HIBYTE(v373) | ((_DWORD)v132 << 8);
  v374 = v611 + __PAIR64__(v72, v372) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)v604 ^ v374;
  LODWORD(v339) = v339 ^ HIDWORD(v374);
  v375 = HIWORD(HIDWORD(v137)) | ((_DWORD)v339 << 16);
  HIDWORD(v132) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  *(_DWORD *)v604 = WORD1(v339) | (HIDWORD(v137) << 16);
  LODWORD(v72) = (__PAIR64__(HIDWORD(v72), v148) + __PAIR64__(*(unsigned int *)v604, v375)) >> 32;
  LODWORD(v148) = v148 + v375;
  HIDWORD(v137) = *(__int64 *)((char *)&v548 + 4) >> 31;
  DWORD1(v548) = v148 ^ v137;
  HIDWORD(v339) = (v607 + v358 + HIDWORD(v132)) ^ *(_DWORD *)&v604[8];
  v376 = v607 + v358 + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  *(_DWORD *)&v554[8] = v72;
  LODWORD(v339) = HIDWORD(v376) ^ *(_DWORD *)&v604[12];
  DWORD2(v548) = v72 ^ HIDWORD(v148);
  HIDWORD(v132) ^= v348 + v351 + (HIDWORD(v376) ^ *(_DWORD *)&v604[12]);
  LODWORD(v72) = (__PAIR64__(*(unsigned int *)v598, (unsigned int)v348 + v351) + v339) >> 32;
  HIDWORD(v148) = v348 + v351 + (HIDWORD(v376) ^ *(_DWORD *)&v604[12]);
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v377 = v339 ^ (v615 + v376 + v132);
  v378 = HIWORD(HIDWORD(v377));
  *(_DWORD *)&v554[12] = v615 + v376 + v132;
  HIDWORD(v377) = v377 >> 16;
  LODWORD(v377) = v378 | ((_DWORD)v377 << 16);
  v579 = (v615 + v376 + v132) >> 32;
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v377));
  v379 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v377, HIDWORD(v377));
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v377, HIDWORD(v377))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v380 = v611 + *(_QWORD *)&v554[16] + __PAIR64__(v132, HIDWORD(v132));
  LODWORD(v349) = v349 ^ v380;
  HIDWORD(v132) ^= v148 + (HIDWORD(v349) ^ HIDWORD(v380));
  HIDWORD(v72) = (__PAIR64__(v349, v148) + __PAIR64__(*(unsigned int *)&v554[8], HIDWORD(v349) ^ HIDWORD(v380))) >> 32;
  LODWORD(v148) = v148 + (HIDWORD(v349) ^ HIDWORD(v380));
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v137) = v620 + v380 + v132;
  *(_DWORD *)&v554[8] = HIDWORD(v137);
  LODWORD(v349) = v349 ^ ((v620 + v380 + v132) >> 32);
  *(_DWORD *)&v554[16] = (v620 + v380 + v132) >> 32;
  HIDWORD(v349) ^= HIDWORD(v380) ^ HIDWORD(v137);
  *(_DWORD *)&v604[8] = v349 >> 16;
  *(_DWORD *)&v604[4] = HIWORD(HIDWORD(v349)) | ((_DWORD)v349 << 16);
  v381 = __PAIR64__(HIDWORD(v72), v148) + ((v349 << 16) | HIWORD(HIDWORD(v349)));
  LODWORD(v349) = (2 * HIDWORD(v548)) | ((unsigned int)v548 >> 31);
  HIDWORD(v349) = (2 * v548) | (HIDWORD(v548) >> 31);
  LODWORD(v548) = v381 ^ v132;
  v382 = v619 + v368 + v349;
  HIDWORD(v548) = HIDWORD(v381) ^ HIDWORD(v132);
  v383 = __PAIR64__(v72, v379) + __PAIR64__((unsigned int)v382 ^ v375, HIDWORD(v382) ^ *(_DWORD *)v604);
  LODWORD(v72) = (__PAIR64__(v72, v379) + __PAIR64__((unsigned int)v382 ^ v375, HIDWORD(v382) ^ *(_DWORD *)v604)) >> 32;
  v384 = v349 ^ __PAIR64__(v72, v383);
  HIDWORD(v132) = HIBYTE(HIDWORD(v384));
  HIDWORD(v384) = v384 >> 24;
  LODWORD(v384) = HIDWORD(v132) | ((_DWORD)v384 << 8);
  v385 = v614 + v382 + __PAIR64__(v384, HIDWORD(v384));
  LODWORD(v132) = HIDWORD(v382) ^ *(_DWORD *)v604 ^ v385;
  HIDWORD(v72) = v382 ^ v375 ^ HIDWORD(v385);
  HIDWORD(v583) = v614 + v382 + HIDWORD(v384);
  *(_DWORD *)v604 = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  *(_DWORD *)&v598[4] = WORD1(v132) | (HIDWORD(v72) << 16);
  HIDWORD(v72) = (2 * *(_DWORD *)v554) | (*(_DWORD *)&v554[4] >> 31);
  v386 = *(__int64 *)v554 >> 31;
  HIDWORD(v384) ^= v383 + *(_DWORD *)&v598[4];
  *(_DWORD *)&v554[4] = v383 + *(_DWORD *)&v598[4];
  LODWORD(v384) = v384 ^ ((__PAIR64__(v72, v383) + __PAIR64__(*(unsigned int *)v604, *(unsigned int *)&v598[4])) >> 32);
  LODWORD(v571) = (__PAIR64__(v72, v383) + __PAIR64__(*(unsigned int *)v604, *(unsigned int *)&v598[4])) >> 32;
  LODWORD(v72) = (v616 + v374 + __PAIR64__(v386, HIDWORD(v72))) >> 32;
  v387 = v616 + v374 + HIDWORD(v72);
  HIDWORD(v377) ^= v387;
  LODWORD(v132) = v72 ^ v377;
  HIDWORD(v72) ^= v364 + HIDWORD(v547) + (v72 ^ v377);
  LODWORD(v148) = (__PAIR64__(*(unsigned int *)&v554[24], (int)v364 + HIDWORD(v547)) + (v377 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v364 + HIDWORD(v547) + (v377 ^ v72);
  v388 = v386 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v388 << 8);
  LODWORD(v377) = HIBYTE(v388) | (HIDWORD(v72) << 8);
  *(_DWORD *)v554 = v608 + v387 + HIDWORD(v137);
  LODWORD(v72) = (v608 + __PAIR64__(v72, v387) + __PAIR64__(v377, HIDWORD(v137))) >> 32;
  HIDWORD(v377) ^= v72;
  *(_DWORD *)&v554[24] = v72;
  LODWORD(v137) = (2 * v384) | (HIDWORD(v384) >> 31);
  *(_DWORD *)&v604[12] = ((*(_DWORD *)v554 ^ (unsigned int)v132) >> 16) | (HIDWORD(v377) << 16);
  *(_DWORD *)&v604[16] = HIWORD(HIDWORD(v377)) | ((*(_DWORD *)v554 ^ (unsigned int)v132) << 16);
  LODWORD(v132) = (2 * DWORD1(v548)) | (DWORD2(v548) >> 31);
  v389 = *(__int64 *)((char *)&v548 + 4) >> 31;
  HIDWORD(v148) = v384 >> 31;
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132)) + *(_QWORD *)&v604[12]) >> 32;
  HIDWORD(v384) = HIDWORD(v132) + *(_DWORD *)&v604[12];
  DWORD1(v548) = (HIDWORD(v132) + *(_DWORD *)&v604[12]) ^ HIDWORD(v137);
  v390 = (v605 + __PAIR64__(v579, *(unsigned int *)&v554[12]) + __PAIR64__(v389, v132)) >> 32;
  LODWORD(v384) = v605 + *(_DWORD *)&v554[12] + v132;
  HIDWORD(v377) = HIDWORD(v547);
  HIDWORD(v547) = HIDWORD(v72) ^ v377;
  HIDWORD(v377) ^= v384;
  LODWORD(v132) = v132 ^ (v591 + (v390 ^ *(_DWORD *)&v598[8]));
  LODWORD(v72) = (v591 + __PAIR64__(HIDWORD(v377), v390 ^ *(_DWORD *)&v598[8])) >> 32;
  v391 = v389 ^ v72;
  HIDWORD(v132) = HIBYTE(v391);
  v392 = BYTE3(v132) | (v391 << 8);
  LODWORD(v132) = HIDWORD(v132) | ((_DWORD)v132 << 8);
  v393 = v613 + __PAIR64__(v390, v384) + __PAIR64__(v132, v392);
  HIDWORD(v137) = v390 ^ *(_DWORD *)&v598[8] ^ v393;
  HIDWORD(v377) ^= HIDWORD(v393);
  LODWORD(v148) = v591 + (v390 ^ *(_DWORD *)&v598[8]);
  v394 = HIWORD(HIDWORD(v377));
  HIDWORD(v377) = HIWORD(HIDWORD(v137)) | (HIDWORD(v377) << 16);
  v395 = v394 | (HIDWORD(v137) << 16);
  v396 = v148 + HIDWORD(v377);
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v395, HIDWORD(v377))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v397 = v617 + __PAIR64__(*(unsigned int *)&v554[16], *(unsigned int *)&v554[8]) + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v377) ^= v397;
  v398 = v395 ^ HIDWORD(v397);
  HIDWORD(v132) = v396 ^ v392;
  v399 = __PAIR64__(HIDWORD(v72), HIDWORD(v384)) + __PAIR64__(HIDWORD(v377), v398);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v384)) + __PAIR64__(HIDWORD(v377), v398)) >> 32;
  HIDWORD(v148) ^= v399;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v377) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v137) = (v607 + v397) >> 32;
  HIDWORD(v148) = v377 | (HIDWORD(v148) << 8);
  v400 = v398 ^ (v607 + v397 + v137);
  *(_DWORD *)&v554[8] = v607 + v397 + v137;
  HIDWORD(v377) ^= (__PAIR64__(HIDWORD(v148), (int)v607 + (int)v397) + v137) >> 32;
  *(_DWORD *)&v554[16] = (__PAIR64__(HIDWORD(v148), (int)v607 + (int)v397) + v137) >> 32;
  LODWORD(v547) = HIWORD(v400) | (HIDWORD(v377) << 16);
  *(_DWORD *)&v598[8] = HIWORD(HIDWORD(v377)) | (v400 << 16);
  LODWORD(v377) = (2 * HIDWORD(v547)) | (DWORD1(v548) >> 31);
  HIDWORD(v137) = (2 * DWORD1(v548)) | (HIDWORD(v547) >> 31);
  v401 = __PAIR64__(HIDWORD(v618), HIDWORD(v583));
  HIDWORD(v583) = (__PAIR64__(HIDWORD(v72), v399) + __PAIR64__(*(unsigned int *)&v598[8], v547)) >> 32;
  HIDWORD(v547) = (v399 + v547) ^ v137;
  v402 = __PAIR64__(HIDWORD(v385), v618) + v401 + __PAIR64__(v377, HIDWORD(v137));
  DWORD1(v548) = HIDWORD(v583) ^ HIDWORD(v148);
  v403 = __PAIR64__(v72, v396)
       + __PAIR64__((unsigned int)v402 ^ *(_DWORD *)&v604[4], HIDWORD(v402) ^ *(_DWORD *)&v604[8]);
  LODWORD(v72) = (__PAIR64__(v72, v396)
                + __PAIR64__((unsigned int)v402 ^ *(_DWORD *)&v604[4], HIDWORD(v402) ^ *(_DWORD *)&v604[8])) >> 32;
  HIDWORD(v137) ^= v403;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v377) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v377) >> 24) | (HIDWORD(v137) << 8);
  HIDWORD(v401) = HIDWORD(v402) ^ *(_DWORD *)&v604[8] ^ (v612 + v402 + HIDWORD(v148));
  LODWORD(v401) = v402 ^ *(_DWORD *)&v604[4] ^ ((v612 + v402 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32);
  v404 = WORD1(v401);
  LODWORD(v401) = HIWORD(HIDWORD(v401)) | ((_DWORD)v401 << 16);
  HIDWORD(v401) = v404 | (HIDWORD(v401) << 16);
  v405 = 2 * v132;
  LODWORD(v132) = v132 >> 31;
  v592 = v612 + v402 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  v406 = v405 | (HIDWORD(v132) >> 31);
  LODWORD(v148) = v606;
  HIDWORD(v132) = (__PAIR64__(v72, v403) + v401) >> 32;
  DWORD2(v548) = (v403 + v401) ^ HIDWORD(v148);
  HIDWORD(v148) = *(_DWORD *)&v554[24];
  *(_DWORD *)v598 = v403 + v401;
  LODWORD(v72) = (v148 + __PAIR64__(HIDWORD(v606), *(unsigned int *)v554) + __PAIR64__(v406, v132)) >> 32;
  v407 = v606 + *(_DWORD *)v554 + v132;
  *(_DWORD *)v554 = HIDWORD(v132) ^ HIDWORD(v72);
  LODWORD(v132) = v132 ^ (v381 + (v72 ^ *(_DWORD *)v604));
  HIDWORD(v72) = (v381 + __PAIR64__(v407 ^ *(_DWORD *)&v598[4], (unsigned int)v72 ^ *(_DWORD *)v604)) >> 32;
  LODWORD(v148) = v381 + (v72 ^ *(_DWORD *)v604);
  v408 = v406 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v408 << 8);
  HIDWORD(v148) = HIBYTE(v408) | ((_DWORD)v132 << 8);
  v409 = v609 + __PAIR64__(v72, v407) + __PAIR64__(HIDWORD(v148), v137);
  LODWORD(v132) = v409;
  HIDWORD(v137) = v72 ^ *(_DWORD *)v604 ^ v409;
  LODWORD(v377) = v407 ^ *(_DWORD *)&v598[4] ^ HIDWORD(v409);
  *(_QWORD *)&v554[20] = v132;
  v410 = WORD1(v377) | (HIDWORD(v137) << 16);
  LODWORD(v72) = HIWORD(HIDWORD(v137)) | ((_DWORD)v377 << 16);
  *(_DWORD *)&v598[4] = v72;
  v411 = v148 + v72;
  HIDWORD(v132) = (2 * v548) | (HIDWORD(v548) >> 31);
  HIDWORD(v137) = (2 * HIDWORD(v548)) | ((unsigned int)v548 >> 31);
  *(_DWORD *)v604 = v410;
  *(_DWORD *)&v554[12] = (__PAIR64__(v410, v148) + v72) >> 32;
  LODWORD(v548) = (v148 + v72) ^ v137;
  v412 = v615 + v393 + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v548) = *(_DWORD *)&v554[12] ^ HIDWORD(v148);
  HIDWORD(v377) = (v615 + v393 + HIDWORD(v132)) ^ *(_DWORD *)&v604[12];
  LODWORD(v377) = HIDWORD(v412) ^ *(_DWORD *)&v604[16];
  HIDWORD(v132) ^= *(_DWORD *)&v554[4] + (HIDWORD(v412) ^ *(_DWORD *)&v604[16]);
  LODWORD(v72) = (__PAIR64__(v571, *(unsigned int *)&v554[4]) + v377) >> 32;
  HIDWORD(v148) = *(_DWORD *)&v554[4] + (HIDWORD(v412) ^ *(_DWORD *)&v604[16]);
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v413 = v377 ^ (v610 + v412 + v132);
  v414 = HIWORD(HIDWORD(v413));
  LODWORD(v571) = (v610 + v412 + v132) >> 32;
  HIDWORD(v413) = v413 >> 16;
  LODWORD(v413) = v414 | ((_DWORD)v413 << 16);
  *(_DWORD *)&v554[4] = v610 + v412 + v132;
  LODWORD(v132) = v132 ^ (HIDWORD(v148) + HIDWORD(v413));
  v415 = __PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v413, HIDWORD(v413));
  LODWORD(v72) = (__PAIR64__(v72, HIDWORD(v148)) + __PAIR64__(v413, HIDWORD(v413))) >> 32;
  HIDWORD(v132) ^= v72;
  HIDWORD(v137) = 2 * HIDWORD(v132);
  HIDWORD(v132) = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = HIDWORD(v137) | ((unsigned int)v132 >> 31);
  v416 = v615 + __PAIR64__(*(unsigned int *)&v554[16], *(unsigned int *)&v554[8]) + __PAIR64__(v132, HIDWORD(v132));
  v417 = v401 ^ v416;
  HIDWORD(v132) ^= v411 + HIDWORD(v417);
  HIDWORD(v72) = (__PAIR64__(*(unsigned int *)&v554[12], v411) + __PAIR64__(v417, HIDWORD(v417))) >> 32;
  LODWORD(v148) = v411 + HIDWORD(v417);
  LODWORD(v132) = v132 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v132);
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | ((_DWORD)v132 << 8);
  HIDWORD(v132) = HIDWORD(v137) | (HIDWORD(v132) << 8);
  HIDWORD(v417) ^= v607 + v416 + (_DWORD)v132;
  LODWORD(v417) = v417 ^ ((v607 + v416 + v132) >> 32);
  *(_QWORD *)&v554[8] = v607 + v416 + v132;
  v418 = v417 >> 16;
  *(_DWORD *)&v604[4] = HIWORD(HIDWORD(v417)) | ((_DWORD)v417 << 16);
  *(_DWORD *)&v554[16] = v148 + *(_DWORD *)&v604[4];
  LODWORD(v417) = (2 * HIDWORD(v547)) | (DWORD1(v548) >> 31);
  HIDWORD(v417) = (2 * DWORD1(v548)) | (HIDWORD(v547) >> 31);
  HIDWORD(v547) = (v148 + *(_DWORD *)&v604[4]) ^ v132;
  *(_DWORD *)&v604[8] = v418;
  DWORD1(v548) = ((__PAIR64__(HIDWORD(v72), v148) + __PAIR64__(v418, *(unsigned int *)&v604[4])) >> 32) ^ HIDWORD(v132);
  v419 = v613 + v592 + v417;
  HIDWORD(v571) = (__PAIR64__(HIDWORD(v72), v148) + __PAIR64__(v418, *(unsigned int *)&v604[4])) >> 32;
  LODWORD(v417) = v417 ^ (v415 + (HIDWORD(v419) ^ *(_DWORD *)v604));
  v420 = __PAIR64__(v72, v415) + __PAIR64__((unsigned int)v419 ^ *(_DWORD *)&v598[4], HIDWORD(v419) ^ *(_DWORD *)v604);
  LODWORD(v72) = (__PAIR64__(v72, v415)
                + __PAIR64__((unsigned int)v419 ^ *(_DWORD *)&v598[4], HIDWORD(v419) ^ *(_DWORD *)v604)) >> 32;
  HIDWORD(v417) ^= v72;
  HIDWORD(v132) = HIBYTE(HIDWORD(v417));
  HIDWORD(v417) = v417 >> 24;
  LODWORD(v417) = HIDWORD(v132) | ((_DWORD)v417 << 8);
  LODWORD(v132) = HIDWORD(v419) ^ *(_DWORD *)v604 ^ (v609 + v419 + HIDWORD(v417));
  HIDWORD(v72) = v419 ^ *(_DWORD *)&v598[4] ^ ((v609 + v419 + __PAIR64__(v417, HIDWORD(v417))) >> 32);
  v593 = v609 + v419 + __PAIR64__(v417, HIDWORD(v417));
  *(_DWORD *)&v598[4] = WORD1(v132) | (HIDWORD(v72) << 16);
  v421 = __PAIR64__(v72, v420) + __PAIR64__(HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16), *(unsigned int *)&v598[4]);
  *(_DWORD *)v604 = HIWORD(HIDWORD(v72)) | ((_DWORD)v132 << 16);
  v422 = (2 * *(_DWORD *)v554) | (DWORD2(v548) >> 31);
  LODWORD(v417) = v417 ^ ((__PAIR64__(v72, v420) + __PAIR64__(*(unsigned int *)v604, *(unsigned int *)&v598[4])) >> 32);
  HIDWORD(v417) ^= v420 + *(_DWORD *)&v598[4];
  LODWORD(v137) = (2 * v417) | (HIDWORD(v417) >> 31);
  LODWORD(v72) = (v612
                + __PAIR64__(HIDWORD(v409), *(unsigned int *)&v554[20])
                + __PAIR64__(v422, (unsigned int)(2 * DWORD2(v548)) | (*(_DWORD *)v554 >> 31))) >> 32;
  LODWORD(v132) = v72 ^ v413;
  HIDWORD(v413) ^= v612 + *(_DWORD *)&v554[20] + ((2 * DWORD2(v548)) | (*(_DWORD *)v554 >> 31));
  HIDWORD(v72) = ((2 * DWORD2(v548)) | (*(_DWORD *)v554 >> 31)) ^ (v399 + v547 + (v72 ^ v413));
  LODWORD(v148) = (__PAIR64__(HIDWORD(v583), (int)v399 + (int)v547) + (v413 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v132) = v399 + v547 + (v413 ^ v72);
  v423 = v422 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v423 << 8);
  LODWORD(v413) = HIBYTE(v423) | (HIDWORD(v72) << 8);
  v424 = v611
       + __PAIR64__(v72, v612 + *(_DWORD *)&v554[20] + ((2 * DWORD2(v548)) | (*(_DWORD *)v554 >> 31)))
       + __PAIR64__(v413, HIDWORD(v137));
  HIDWORD(v413) ^= HIDWORD(v424);
  v425 = HIWORD(HIDWORD(v413));
  HIDWORD(v413) = (((unsigned int)v424 ^ (unsigned int)v132) >> 16) | (HIDWORD(v413) << 16);
  HIDWORD(v148) = 2 * HIDWORD(v417);
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v132))
                + __PAIR64__(v425 | (((unsigned int)v424 ^ (unsigned int)v132) << 16), HIDWORD(v413))) >> 32;
  HIDWORD(v417) = HIDWORD(v132) + HIDWORD(v413);
  HIDWORD(v148) |= (unsigned int)v417 >> 31;
  *(_DWORD *)&v604[16] = v425 | (((unsigned int)v424 ^ (unsigned int)v132) << 16);
  LODWORD(v132) = (2 * v548) | (HIDWORD(v548) >> 31);
  *(_DWORD *)&v604[12] = HIDWORD(v413);
  v426 = (2 * HIDWORD(v548)) | ((unsigned int)v548 >> 31);
  DWORD2(v548) = HIDWORD(v72) ^ v413;
  LODWORD(v548) = (HIDWORD(v132) + HIDWORD(v413)) ^ HIDWORD(v137);
  v427 = (v606 + __PAIR64__(v571, *(unsigned int *)&v554[4]) + __PAIR64__(v426, v132)) >> 32;
  LODWORD(v417) = v606 + *(_DWORD *)&v554[4] + v132;
  LODWORD(v132) = v132 ^ (*(_DWORD *)v598 + (v427 ^ *(_DWORD *)&v598[8]));
  LODWORD(v72) = (__PAIR64__(*(unsigned int *)&v554[24], *(unsigned int *)v598)
                + __PAIR64__((unsigned int)v417 ^ (unsigned int)v547, v427 ^ *(_DWORD *)&v598[8])) >> 32;
  LODWORD(v148) = *(_DWORD *)v598 + (v427 ^ *(_DWORD *)&v598[8]);
  v428 = v426 ^ v72;
  HIDWORD(v132) = HIBYTE(v428);
  v429 = BYTE3(v132) | (v428 << 8);
  LODWORD(v132) = HIDWORD(v132) | ((_DWORD)v132 << 8);
  v430 = v610 + __PAIR64__(v427, v417) + __PAIR64__(v132, v429);
  HIDWORD(v137) = v427 ^ *(_DWORD *)&v598[8] ^ v430;
  HIDWORD(v413) = v417 ^ v547 ^ HIDWORD(v430);
  *(_DWORD *)&v554[4] = v610 + v417 + v429;
  v431 = HIWORD(HIDWORD(v413));
  HIDWORD(v413) = HIWORD(HIDWORD(v137)) | (HIDWORD(v413) << 16);
  v432 = v431 | (HIDWORD(v137) << 16);
  v433 = __PAIR64__(v72, v148) + __PAIR64__(v432, HIDWORD(v413));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v432, HIDWORD(v413))) >> 32;
  LODWORD(v132) = v132 ^ v72;
  v434 = v620 + *(_QWORD *)&v554[8] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v132) = v433 ^ v429;
  v435 = v432 ^ HIDWORD(v434);
  HIDWORD(v413) ^= v434;
  HIDWORD(v148) ^= HIDWORD(v417) + v435;
  v436 = __PAIR64__(HIDWORD(v72), HIDWORD(v417)) + __PAIR64__(HIDWORD(v413), v435);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v417)) + __PAIR64__(HIDWORD(v413), v435)) >> 32;
  HIDWORD(v137) = (v616 + v434) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v413) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v148) = v413 | (HIDWORD(v148) << 8);
  v437 = v435 ^ (v616 + v434 + v137);
  HIDWORD(v413) ^= (__PAIR64__(HIDWORD(v148), (int)v616 + (int)v434) + v137) >> 32;
  *(_QWORD *)&v554[8] = __PAIR64__(HIDWORD(v148), (int)v616 + (int)v434) + v137;
  LODWORD(v547) = HIWORD(HIDWORD(v413)) | (v437 << 16);
  *(_DWORD *)&v598[8] = HIWORD(v437) | (HIDWORD(v413) << 16);
  HIDWORD(v137) = (2 * v548) | (DWORD2(v548) >> 31);
  LODWORD(v413) = (2 * DWORD2(v548)) | ((unsigned int)v548 >> 31);
  LODWORD(v548) = (v436 + *(_DWORD *)&v598[8]) ^ v137;
  HIDWORD(v583) = v547 + __CFADD__((_DWORD)v436, *(_DWORD *)&v598[8]) + HIDWORD(v72);
  DWORD2(v548) = HIDWORD(v583) ^ HIDWORD(v148);
  v438 = v614 + v593 + __PAIR64__(v413, HIDWORD(v137));
  HIDWORD(v137) ^= v433 + (HIDWORD(v438) ^ *(_DWORD *)&v604[8]);
  v439 = __PAIR64__(v72, v433)
       + __PAIR64__((unsigned int)v438 ^ *(_DWORD *)&v604[4], HIDWORD(v438) ^ *(_DWORD *)&v604[8]);
  LODWORD(v72) = (__PAIR64__(v72, v433)
                + __PAIR64__((unsigned int)v438 ^ *(_DWORD *)&v604[4], HIDWORD(v438) ^ *(_DWORD *)&v604[8])) >> 32;
  HIDWORD(v148) = HIBYTE(HIDWORD(v137)) | (((unsigned int)v72 ^ (unsigned int)v413) << 8);
  HIDWORD(v72) = (((unsigned int)v72 ^ (unsigned int)v413) >> 24) | (HIDWORD(v137) << 8);
  HIDWORD(v417) = HIDWORD(v438) ^ *(_DWORD *)&v604[8] ^ (v619 + v438 + HIDWORD(v148));
  LODWORD(v417) = v438 ^ *(_DWORD *)&v604[4] ^ ((v619 + v438 + __PAIR64__(HIDWORD(v72), HIDWORD(v148))) >> 32);
  v440 = WORD1(v417);
  LODWORD(v417) = HIWORD(HIDWORD(v417)) | ((_DWORD)v417 << 16);
  v594 = v619 + v438 + __PAIR64__(HIDWORD(v72), HIDWORD(v148));
  HIDWORD(v417) = v440 | (HIDWORD(v417) << 16);
  v441 = (2 * v132) | (HIDWORD(v132) >> 31);
  LODWORD(v132) = v132 >> 31;
  *(_DWORD *)v598 = v439 + v417;
  HIDWORD(v548) = (v439 + v417) ^ HIDWORD(v148);
  v580 = (__PAIR64__(v72, v439) + v417) >> 32;
  LODWORD(v413) = (v608 + v424 + v132) ^ *(_DWORD *)&v598[4];
  v442 = v608 + v424 + v132;
  LODWORD(v72) = (v608 + v424 + __PAIR64__(v441, v132)) >> 32;
  LODWORD(v132) = v132 ^ (*(_DWORD *)&v554[16] + (v72 ^ *(_DWORD *)v604));
  *(_DWORD *)v554 = v580 ^ HIDWORD(v72);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v571), *(unsigned int *)&v554[16])
                + __PAIR64__(v413, (unsigned int)v72 ^ *(_DWORD *)v604)) >> 32;
  v443 = v441 ^ HIDWORD(v72);
  LODWORD(v137) = BYTE3(v132) | (v443 << 8);
  HIDWORD(v148) = HIBYTE(v443) | ((_DWORD)v132 << 8);
  v444 = v617 + __PAIR64__(v72, v442) + __PAIR64__(HIDWORD(v148), v137);
  HIDWORD(v137) = v72 ^ *(_DWORD *)v604 ^ v444;
  LODWORD(v413) = v413 ^ HIDWORD(v444);
  LODWORD(v132) = HIWORD(HIDWORD(v137)) | ((_DWORD)v413 << 16);
  v445 = __PAIR64__(WORD1(v413) | (HIDWORD(v137) << 16), *(_DWORD *)&v554[16] + ((unsigned int)v72 ^ *(_DWORD *)v604))
       + __PAIR64__(HIDWORD(v72), v132);
  HIDWORD(v72) = (__PAIR64__(
                    WORD1(v413) | (HIDWORD(v137) << 16),
                    *(_DWORD *)&v554[16] + ((unsigned int)v72 ^ *(_DWORD *)v604))
                + __PAIR64__(HIDWORD(v72), v132)) >> 32;
  *(_DWORD *)v604 = WORD1(v413) | (HIDWORD(v137) << 16);
  HIDWORD(v132) = (2 * HIDWORD(v547)) | (DWORD1(v548) >> 31);
  LODWORD(v413) = *(_DWORD *)&v554[4];
  HIDWORD(v137) = (2 * DWORD1(v548)) | (HIDWORD(v547) >> 31);
  *(_DWORD *)&v554[4] = HIDWORD(v72) ^ HIDWORD(v148);
  DWORD1(v548) = v445 ^ v137;
  *(_DWORD *)&v598[4] = v132;
  v446 = v618 + __PAIR64__(HIDWORD(v430), v413) + __PAIR64__(HIDWORD(v137), HIDWORD(v132));
  HIDWORD(v413) = v446 ^ *(_DWORD *)&v604[12];
  LODWORD(v413) = HIDWORD(v446) ^ *(_DWORD *)&v604[16];
  HIDWORD(v132) ^= v421 + (HIDWORD(v446) ^ *(_DWORD *)&v604[16]);
  LODWORD(v72) = (v421 + v413) >> 32;
  HIDWORD(v137) ^= v72;
  LODWORD(v132) = HIBYTE(HIDWORD(v132)) | (HIDWORD(v137) << 8);
  HIDWORD(v132) = HIBYTE(HIDWORD(v137)) | (HIDWORD(v132) << 8);
  v447 = v413 ^ (v605 + v446 + v132);
  v448 = HIWORD(HIDWORD(v447));
  HIDWORD(v447) = v447 >> 16;
  *(_QWORD *)&v554[20] = v605 + v446 + v132;
  LODWORD(v447) = v448 | ((_DWORD)v447 << 16);
  v449 = __PAIR64__(v72, (int)v421 + (HIDWORD(v446) ^ *(_DWORD *)&v604[16])) + __PAIR64__(v447, HIDWORD(v447));
  LODWORD(v72) = (__PAIR64__(v72, (int)v421 + (HIDWORD(v446) ^ *(_DWORD *)&v604[16])) + __PAIR64__(v447, HIDWORD(v447))) >> 32;
  v450 = v132 ^ __PAIR64__(v72, v449);
  HIDWORD(v137) = 2 * HIDWORD(v450);
  HIDWORD(v450) = (2 * v450) | (HIDWORD(v450) >> 31);
  LODWORD(v450) = HIDWORD(v137) | ((unsigned int)v450 >> 31);
  v451 = v605 + *(_QWORD *)&v554[8] + __PAIR64__(v450, HIDWORD(v450));
  v452 = v417 ^ v451;
  HIDWORD(v450) ^= v445 + HIDWORD(v452);
  v453 = __PAIR64__(HIDWORD(v72), v445) + __PAIR64__(v452, HIDWORD(v452));
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v445) + __PAIR64__(v452, HIDWORD(v452))) >> 32;
  LODWORD(v450) = v450 ^ HIDWORD(v72);
  HIDWORD(v137) = BYTE3(v450);
  LODWORD(v450) = HIBYTE(HIDWORD(v450)) | ((_DWORD)v450 << 8);
  HIDWORD(v452) ^= v606 + v451 + (_DWORD)v450;
  *(_DWORD *)&v554[8] = v606 + v451 + v450;
  HIDWORD(v450) = HIDWORD(v137) | (HIDWORD(v450) << 8);
  LODWORD(v452) = v452 ^ ((v606 + v451 + v450) >> 32);
  *(_DWORD *)&v554[12] = (v606 + v451 + v450) >> 32;
  *(_DWORD *)&v604[4] = HIWORD(HIDWORD(v452)) | ((_DWORD)v452 << 16);
  v454 = __PAIR64__(HIDWORD(v72), v453) + ((v452 << 16) | HIWORD(HIDWORD(v452)));
  *(_DWORD *)&v604[8] = v452 >> 16;
  HIDWORD(v452) = (2 * DWORD2(v548)) | ((unsigned int)v548 >> 31);
  LODWORD(v452) = (2 * v548) | (DWORD2(v548) >> 31);
  LODWORD(v548) = v454 ^ v450;
  v455 = v607 + v594 + v452;
  DWORD2(v548) = HIDWORD(v454) ^ HIDWORD(v450);
  LODWORD(v452) = v452 ^ (v449 + (HIDWORD(v455) ^ *(_DWORD *)v604));
  v456 = __PAIR64__(v72, v449) + __PAIR64__((unsigned int)v455 ^ *(_DWORD *)&v598[4], HIDWORD(v455) ^ *(_DWORD *)v604);
  LODWORD(v72) = (__PAIR64__(v72, v449)
                + __PAIR64__((unsigned int)v455 ^ *(_DWORD *)&v598[4], HIDWORD(v455) ^ *(_DWORD *)v604)) >> 32;
  HIDWORD(v452) ^= v72;
  HIDWORD(v450) = HIBYTE(HIDWORD(v452));
  HIDWORD(v452) = v452 >> 24;
  LODWORD(v452) = HIDWORD(v450) | ((_DWORD)v452 << 8);
  v457 = v608 + v455 + __PAIR64__(v452, HIDWORD(v452));
  LODWORD(v450) = HIDWORD(v455) ^ *(_DWORD *)v604 ^ v457;
  HIDWORD(v72) = v455 ^ *(_DWORD *)&v598[4] ^ HIDWORD(v457);
  *(_DWORD *)&v598[4] = WORD1(v450) | (HIDWORD(v72) << 16);
  HIDWORD(v148) = (__PAIR64__(v72, v456)
                 + __PAIR64__(HIWORD(HIDWORD(v72)) | ((_DWORD)v450 << 16), *(unsigned int *)&v598[4])) >> 32;
  *(_DWORD *)v604 = HIWORD(HIDWORD(v72)) | ((_DWORD)v450 << 16);
  HIDWORD(v72) = (2 * HIDWORD(v548)) | (*(_DWORD *)v554 >> 31);
  v458 = (2 * *(_DWORD *)v554) | (HIDWORD(v548) >> 31);
  HIDWORD(v452) ^= v456 + *(_DWORD *)&v598[4];
  *(_DWORD *)&v554[16] = v456 + *(_DWORD *)&v598[4];
  LODWORD(v452) = v452 ^ HIDWORD(v148);
  LODWORD(v72) = (v609 + v444 + __PAIR64__(v458, HIDWORD(v72))) >> 32;
  v459 = v609 + v444 + HIDWORD(v72);
  HIDWORD(v447) ^= v459;
  LODWORD(v450) = v72 ^ v447;
  HIDWORD(v72) ^= v436 + *(_DWORD *)&v598[8] + (v72 ^ v447);
  LODWORD(v137) = (2 * v452) | (HIDWORD(v452) >> 31);
  LODWORD(v148) = (__PAIR64__(HIDWORD(v583), (int)v436 + *(_DWORD *)&v598[8]) + (v447 ^ (unsigned int)v72)) >> 32;
  HIDWORD(v450) = v436 + *(_DWORD *)&v598[8] + (v447 ^ v72);
  v460 = v458 ^ v148;
  HIDWORD(v137) = HIBYTE(HIDWORD(v72)) | (v460 << 8);
  LODWORD(v447) = HIBYTE(v460) | (HIDWORD(v72) << 8);
  v461 = v610 + __PAIR64__(v72, v459) + __PAIR64__(v447, HIDWORD(v137));
  HIDWORD(v447) ^= HIDWORD(v461);
  *(_QWORD *)v572 = __PAIR64__(HIDWORD(v148), v461);
  *(_DWORD *)&v604[12] = (((unsigned int)v461 ^ (unsigned int)v450) >> 16) | (HIDWORD(v447) << 16);
  HIDWORD(v148) = v452 >> 31;
  *(_DWORD *)&v604[16] = HIWORD(HIDWORD(v447)) | (((unsigned int)v461 ^ (unsigned int)v450) << 16);
  LODWORD(v450) = (2 * DWORD1(v548)) | (*(_DWORD *)&v554[4] >> 31);
  v462 = (2 * *(_DWORD *)&v554[4]) | (DWORD1(v548) >> 31);
  HIDWORD(v72) = (__PAIR64__(v148, HIDWORD(v450)) + *(_QWORD *)&v604[12]) >> 32;
  HIDWORD(v452) = HIDWORD(v450) + *(_DWORD *)&v604[12];
  DWORD1(v548) = (HIDWORD(v450) + *(_DWORD *)&v604[12]) ^ HIDWORD(v137);
  v463 = (v611 + *(_QWORD *)&v554[20] + __PAIR64__(v462, v450)) >> 32;
  LODWORD(v452) = v611 + *(_DWORD *)&v554[20] + v450;
  HIDWORD(v447) = v452 ^ *(_DWORD *)&v598[8];
  HIDWORD(v137) = v463 ^ v547;
  LODWORD(v547) = HIDWORD(v72) ^ v447;
  LODWORD(v450) = v450 ^ (*(_DWORD *)v598 + HIDWORD(v137));
  LODWORD(v72) = (__PAIR64__(v580, *(unsigned int *)v598)
                + __PAIR64__((unsigned int)v452 ^ *(_DWORD *)&v598[8], HIDWORD(v137))) >> 32;
  LODWORD(v148) = *(_DWORD *)v598 + HIDWORD(v137);
  v464 = v462 ^ v72;
  LODWORD(v447) = BYTE3(v450);
  LODWORD(v450) = HIBYTE(v464) | ((_DWORD)v450 << 8);
  v465 = v447 | (v464 << 8);
  HIDWORD(v450) = (v612 + __PAIR64__(v463, v452) + __PAIR64__(v450, v465)) >> 32;
  LODWORD(v452) = v612 + v452 + v465;
  HIDWORD(v137) ^= v452;
  HIDWORD(v447) ^= HIDWORD(v450);
  *(_DWORD *)&v554[4] = v452;
  v466 = HIWORD(HIDWORD(v447));
  HIDWORD(v447) = HIWORD(HIDWORD(v137)) | (HIDWORD(v447) << 16);
  v467 = v466 | (HIDWORD(v137) << 16);
  v468 = __PAIR64__(v72, v148) + __PAIR64__(v467, HIDWORD(v447));
  LODWORD(v72) = (__PAIR64__(v72, v148) + __PAIR64__(v467, HIDWORD(v447))) >> 32;
  HIDWORD(v548) = v468 ^ v465;
  LODWORD(v450) = v450 ^ v72;
  v469 = v613 + *(_QWORD *)&v554[8] + __PAIR64__(v137, HIDWORD(v148));
  HIDWORD(v447) ^= v469;
  v470 = v467 ^ HIDWORD(v469);
  HIDWORD(v148) ^= HIDWORD(v452) + v470;
  v471 = __PAIR64__(HIDWORD(v72), HIDWORD(v452)) + __PAIR64__(HIDWORD(v447), v470);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), HIDWORD(v452)) + __PAIR64__(HIDWORD(v447), v470)) >> 32;
  LODWORD(v137) = v137 ^ HIDWORD(v72);
  LODWORD(v447) = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v137 << 8);
  HIDWORD(v137) = (v614 + v469) >> 32;
  HIDWORD(v148) = v447 | (HIDWORD(v148) << 8);
  v472 = v470 ^ (v614 + v469 + v137);
  *(_QWORD *)&v554[8] = __PAIR64__(HIDWORD(v148), (int)v614 + (int)v469) + v137;
  HIDWORD(v447) ^= (__PAIR64__(HIDWORD(v148), (int)v614 + (int)v469) + v137) >> 32;
  v473 = HIWORD(HIDWORD(v447));
  HIDWORD(v447) = HIWORD(v472) | (HIDWORD(v447) << 16);
  v474 = v473 | (v472 << 16);
  *(_DWORD *)v598 = HIDWORD(v447);
  LODWORD(v452) = (2 * DWORD1(v548)) | ((unsigned int)v547 >> 31);
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v72), v471) + __PAIR64__(v474, HIDWORD(v447))) >> 32;
  v475 = (2 * v547) | (DWORD1(v548) >> 31);
  *(_DWORD *)&v598[8] = v474;
  *(_QWORD *)&v554[20] = __PAIR64__(HIDWORD(v72), (int)v471 + HIDWORD(v447));
  DWORD1(v548) = (v471 + HIDWORD(v447)) ^ v137;
  *(_DWORD *)v554 = HIDWORD(v72) ^ HIDWORD(v148);
  LODWORD(v137) = (v615 + v457 + __PAIR64__(v475, v452)) >> 32;
  HIDWORD(v452) = v615 + v457 + v452;
  LODWORD(v452) = v452 ^ (v468 + (v137 ^ *(_DWORD *)&v604[8]));
  v476 = __PAIR64__(v72, v468)
       + __PAIR64__(HIDWORD(v452) ^ *(_DWORD *)&v604[4], (unsigned int)v137 ^ *(_DWORD *)&v604[8]);
  LODWORD(v72) = (__PAIR64__(v72, v468)
                + __PAIR64__(HIDWORD(v452) ^ *(_DWORD *)&v604[4], (unsigned int)v137 ^ *(_DWORD *)&v604[8])) >> 32;
  v477 = v475 ^ v72;
  HIDWORD(v447) = BYTE3(v452) | (v477 << 8);
  LODWORD(v452) = HIBYTE(v477) | ((_DWORD)v452 << 8);
  v478 = v616 + __PAIR64__(v137, HIDWORD(v452)) + __PAIR64__(v452, HIDWORD(v447));
  v479 = v137 ^ *(_DWORD *)&v604[8] ^ v478;
  HIDWORD(v72) = HIDWORD(v452) ^ *(_DWORD *)&v604[4] ^ HIDWORD(v478);
  HIDWORD(v148) = HIWORD(HIDWORD(v72));
  HIDWORD(v72) = HIWORD(v479) | (HIDWORD(v72) << 16);
  v480 = HIDWORD(v148) | (v479 << 16);
  v481 = 2 * v450;
  LODWORD(v148) = (__PAIR64__(v72, v476) + __PAIR64__(v480, HIDWORD(v72))) >> 32;
  LODWORD(v450) = (2 * HIDWORD(v548)) | ((unsigned int)v450 >> 31);
  v482 = v481 | (HIDWORD(v548) >> 31);
  *(_QWORD *)&v604[4] = __PAIR64__(v480, HIDWORD(v72));
  LODWORD(v547) = (v476 + HIDWORD(v72)) ^ HIDWORD(v447);
  v483 = v617 + __PAIR64__(HIDWORD(v461), *(unsigned int *)v572) + __PAIR64__(v482, v450);
  *(_DWORD *)v572 = v476 + HIDWORD(v72);
  LODWORD(v450) = v450 ^ (v454 + (HIDWORD(v483) ^ *(_DWORD *)v604));
  HIDWORD(v548) = v148 ^ v452;
  v484 = (v454 + __PAIR64__((unsigned int)v483 ^ *(_DWORD *)&v598[4], HIDWORD(v483) ^ *(_DWORD *)v604)) >> 32;
  LODWORD(v452) = v454 + (HIDWORD(v483) ^ *(_DWORD *)v604);
  v485 = v482 ^ v484;
  HIDWORD(v137) = BYTE3(v450) | (v485 << 8);
  LODWORD(v447) = HIBYTE(v485) | ((_DWORD)v450 << 8);
  v486 = v618 + v483 + __PAIR64__(v447, HIDWORD(v137));
  HIDWORD(v452) = HIDWORD(v483) ^ *(_DWORD *)v604 ^ v486;
  LODWORD(v72) = v483 ^ *(_DWORD *)&v598[4] ^ HIDWORD(v486);
  LODWORD(v583) = v618 + v483 + HIDWORD(v137);
  *(_DWORD *)&v598[4] = HIWORD(HIDWORD(v452)) | ((_DWORD)v72 << 16);
  *(_DWORD *)v604 = WORD1(v72) | (HIDWORD(v452) << 16);
  LODWORD(v450) = v619;
  LODWORD(v72) = (2 * v548) | (DWORD2(v548) >> 31);
  HIDWORD(v452) = (2 * DWORD2(v548)) | ((unsigned int)v548 >> 31);
  v488 = __PAIR64__(v484, v452) + __PAIR64__(*(unsigned int *)v604, *(unsigned int *)&v598[4]);
  v487 = (__PAIR64__(v484, v452) + __PAIR64__(*(unsigned int *)v604, *(unsigned int *)&v598[4])) >> 32;
  HIDWORD(v137) ^= v488;
  HIDWORD(v447) = (v619 + *(_DWORD *)&v554[4] + v72) ^ *(_DWORD *)&v604[12];
  v489 = v450 + __PAIR64__(HIDWORD(v619), *(unsigned int *)&v554[4]) + __PAIR64__(HIDWORD(v452), v72);
  LODWORD(v72) = v72 ^ (*(_DWORD *)&v554[16] + (HIDWORD(v489) ^ *(_DWORD *)&v604[16]));
  v490 = (__PAIR64__(*(unsigned int *)&v572[4], *(unsigned int *)&v554[16])
        + __PAIR64__(HIDWORD(v447), HIDWORD(v489) ^ *(_DWORD *)&v604[16])) >> 32;
  HIDWORD(v452) ^= v490;
  HIDWORD(v72) = HIBYTE(HIDWORD(v452));
  HIDWORD(v452) = BYTE3(v72) | (HIDWORD(v452) << 8);
  LODWORD(v72) = HIDWORD(v72) | ((_DWORD)v72 << 8);
  LODWORD(v450) = HIDWORD(v489) ^ *(_DWORD *)&v604[16] ^ (v620 + v489 + HIDWORD(v452));
  HIDWORD(v447) ^= (v620 + v489 + __PAIR64__(v72, HIDWORD(v452))) >> 32;
  LODWORD(v548) = v620 + v489 + HIDWORD(v452);
  HIDWORD(v148) = HIWORD(HIDWORD(v447));
  HIDWORD(v72) = WORD1(v450) | (HIDWORD(v447) << 16);
  HIDWORD(v447) = DWORD1(v548);
  DWORD2(v548) = (v620 + v489 + __PAIR64__(v72, HIDWORD(v452))) >> 32;
  HIDWORD(v452) ^= *(_DWORD *)&v554[16] + (HIDWORD(v489) ^ *(_DWORD *)&v604[16]) + HIDWORD(v72);
  v492 = __PAIR64__(HIDWORD(v148) | ((_DWORD)v450 << 16), *(_DWORD *)&v554[16] + (HIDWORD(v489) ^ *(_DWORD *)&v604[16]))
       + __PAIR64__(v490, HIDWORD(v72));
  v491 = (__PAIR64__(
            HIDWORD(v148) | ((_DWORD)v450 << 16),
            *(_DWORD *)&v554[16] + (HIDWORD(v489) ^ *(_DWORD *)&v604[16]))
        + __PAIR64__(v490, HIDWORD(v72))) >> 32;
  LODWORD(v72) = v72 ^ v491;
  *(_DWORD *)&v554[4] = HIDWORD(v72);
  DWORD1(v548) = (2 * DWORD1(v548)) | (*(_DWORD *)v554 >> 31);
  LODWORD(v137) = (2 * *(_DWORD *)v554) | (HIDWORD(v447) >> 31);
  *(_DWORD *)v554 = HIDWORD(v148) | ((_DWORD)v450 << 16);
  LODWORD(v450) = 2 * v72;
  LODWORD(v72) = (2 * HIDWORD(v452)) | ((unsigned int)v72 >> 31);
  HIDWORD(v452) = v450 | (HIDWORD(v452) >> 31);
  HIDWORD(v72) = (unsigned __int64)(v619 + *(_QWORD *)&v554[8]) >> 32;
  v493 = v619 + *(_DWORD *)&v554[8] + v72;
  HIDWORD(v72) = (__PAIR64__(HIDWORD(v452), (int)v619 + *(_DWORD *)&v554[8]) + v72) >> 32;
  HIDWORD(v545) = (2 * v547) | (HIDWORD(v548) >> 31);
  LODWORD(v547) = (2 * HIDWORD(v548)) | ((unsigned int)v547 >> 31);
  LODWORD(v72) = v72 ^ (v488 + (HIDWORD(v72) ^ *(_DWORD *)&v604[8]));
  HIDWORD(v547) = (2 * HIDWORD(v137)) | (((unsigned int)v447 ^ v487) >> 31);
  HIDWORD(v548) = (2 * (v447 ^ v487)) | (HIDWORD(v137) >> 31);
  v495 = __PAIR64__(v487, v488) + __PAIR64__(v493 ^ *(_DWORD *)&v604[4], HIDWORD(v72) ^ *(_DWORD *)&v604[8]);
  v494 = (__PAIR64__(v487, v488) + __PAIR64__(v493 ^ *(_DWORD *)&v604[4], HIDWORD(v72) ^ *(_DWORD *)&v604[8])) >> 32;
  HIDWORD(v452) ^= v494;
  LODWORD(v447) = HIBYTE(HIDWORD(v452));
  HIDWORD(v452) = BYTE3(v72) | (HIDWORD(v452) << 8);
  LODWORD(v72) = v447 | ((_DWORD)v72 << 8);
  v496 = v615 + __PAIR64__(HIDWORD(v72), v493) + __PAIR64__(v72, HIDWORD(v452));
  HIDWORD(v450) = HIDWORD(v72) ^ *(_DWORD *)&v604[8] ^ v496;
  LODWORD(v450) = v493 ^ *(_DWORD *)&v604[4] ^ HIDWORD(v496);
  *(_DWORD *)&v554[8] = HIWORD(HIDWORD(v450)) | ((_DWORD)v450 << 16);
  v497 = __PAIR64__(v494, v495) + ((v450 << 16) | HIWORD(HIDWORD(v450)));
  HIDWORD(v452) ^= v497;
  LODWORD(v72) = v72 ^ HIDWORD(v497);
  *(_DWORD *)&v554[12] = v450 >> 16;
  HIDWORD(v447) = (v609 + v478 + DWORD1(v548)) ^ *(_DWORD *)&v598[4];
  v498 = v609 + v478 + __PAIR64__(v137, DWORD1(v548));
  HIDWORD(v450) = (v492 + (HIDWORD(v498) ^ *(_DWORD *)v604)) ^ DWORD1(v548);
  v500 = __PAIR64__(v491, v492) + __PAIR64__(HIDWORD(v447), HIDWORD(v498) ^ *(_DWORD *)v604);
  v499 = (__PAIR64__(v491, v492) + __PAIR64__(HIDWORD(v447), HIDWORD(v498) ^ *(_DWORD *)v604)) >> 32;
  LODWORD(v137) = v137 ^ v499;
  v501 = BYTE3(v137);
  LODWORD(v137) = HIBYTE(HIDWORD(v450)) | ((_DWORD)v137 << 8);
  v502 = v501 | (HIDWORD(v450) << 8);
  HIDWORD(v72) = HIDWORD(v498) ^ *(_DWORD *)v604 ^ (v613 + v498 + v137);
  HIDWORD(v534) = v613 + v498 + v137;
  DWORD1(v548) = (2 * HIDWORD(v452)) | ((unsigned int)v72 >> 31);
  HIDWORD(v450) = (v613 + v498 + __PAIR64__(v502, v137)) >> 32;
  HIDWORD(v447) ^= HIDWORD(v450);
  LODWORD(v72) = (2 * v72) | (HIDWORD(v452) >> 31);
  LODWORD(v452) = HIWORD(HIDWORD(v72)) | (HIDWORD(v447) << 16);
  HIDWORD(v452) = HIWORD(HIDWORD(v447)) | (HIDWORD(v72) << 16);
  *(_DWORD *)&v554[16] = v72;
  LODWORD(v137) = v137 ^ (v500 + v452);
  LODWORD(v545) = HIDWORD(v450);
  *(_QWORD *)&v572[4] = v452;
  v535 = __PAIR64__(v499, v500) + v452;
  HIDWORD(v447) = (v614 + v583 + HIDWORD(v545)) ^ *(_DWORD *)&v554[4];
  v503 = v614 + __PAIR64__(HIDWORD(v486), v583) + __PAIR64__(v547, HIDWORD(v545));
  HIDWORD(v450) = ((__PAIR64__(v499, v500) + v452) >> 32) ^ v502;
  v504 = *(_QWORD *)&v554[20] + __PAIR64__(HIDWORD(v447), HIDWORD(v503) ^ *(_DWORD *)v554);
  HIDWORD(v148) = (*(_DWORD *)&v554[20] + (HIDWORD(v503) ^ *(_DWORD *)v554)) ^ HIDWORD(v545);
  LODWORD(v452) = ((*(_QWORD *)&v554[20] + __PAIR64__(HIDWORD(v447), HIDWORD(v503) ^ *(_DWORD *)v554)) >> 32) ^ v547;
  LODWORD(v72) = HIBYTE(HIDWORD(v148)) | ((_DWORD)v452 << 8);
  LODWORD(v447) = BYTE3(v452) | (HIDWORD(v148) << 8);
  HIDWORD(v447) ^= (v620 + v503 + __PAIR64__(v447, v72)) >> 32;
  v539 = v620 + v503 + __PAIR64__(v447, v72);
  LODWORD(v450) = HIDWORD(v503) ^ *(_DWORD *)v554 ^ (v620 + v503 + v72);
  HIDWORD(v72) = (2 * HIDWORD(v450)) | ((unsigned int)v137 >> 31);
  v505 = v504 + __PAIR64__(HIWORD(HIDWORD(v447)) | ((_DWORD)v450 << 16), WORD1(v450) | (HIDWORD(v447) << 16));
  LODWORD(v72) = v72 ^ (v504 + (WORD1(v450) | (HIDWORD(v447) << 16)));
  *(_DWORD *)v554 = HIWORD(HIDWORD(v447)) | ((_DWORD)v450 << 16);
  LODWORD(v547) = WORD1(v450) | (HIDWORD(v447) << 16);
  LODWORD(v450) = ((v618 + __PAIR64__(DWORD2(v548), v548) + __PAIR64__(HIDWORD(v548), HIDWORD(v547))) >> 32)
                ^ *(_DWORD *)&v598[8];
  HIDWORD(v545) = (2 * v137) | (HIDWORD(v450) >> 31);
  LODWORD(v452) = *(_DWORD *)v572 + v450;
  LODWORD(v534) = HIDWORD(v505) ^ v447;
  v506 = ((v618 + v548 + HIDWORD(v547)) ^ *(_DWORD *)v598) + __CFADD__(*(_DWORD *)v572, (_DWORD)v450) + (_DWORD)v148;
  HIDWORD(v447) = (((unsigned int)(*(_DWORD *)v572 + v450) ^ HIDWORD(v547)) >> 24) | ((v506 ^ HIDWORD(v548)) << 8);
  LODWORD(v447) = ((v506 ^ HIDWORD(v548)) >> 24) | (((*(_DWORD *)v572 + (_DWORD)v450) ^ HIDWORD(v547)) << 8);
  HIDWORD(v137) = (2 * v72) | ((unsigned int)v534 >> 31);
  v541 = v611
       + v618
       + __PAIR64__(DWORD2(v548), v548)
       + __PAIR64__(HIDWORD(v548), HIDWORD(v547))
       + __PAIR64__(v447, HIDWORD(v447));
  LODWORD(v450) = v450 ^ v541;
  LODWORD(v534) = (2 * v534) | ((unsigned int)v72 >> 31);
  HIDWORD(v450) = (v618 + v548 + HIDWORD(v547)) ^ *(_DWORD *)v598 ^ HIDWORD(v541);
  LODWORD(v72) = v450 >> 16;
  LODWORD(v148) = HIWORD(HIDWORD(v450)) | ((_DWORD)v450 << 16);
  v508 = v452 + v72;
  v507 = (__PAIR64__(v506, v452) + __PAIR64__(v148, v72)) >> 32;
  HIDWORD(v447) ^= v452 + (_DWORD)v72;
  LODWORD(v447) = v447 ^ v507;
  v509 = v606 + v496 + __PAIR64__(HIDWORD(v72), HIDWORD(v545));
  LODWORD(v148) = v148 ^ HIDWORD(v509);
  v510 = v505 + __PAIR64__((unsigned int)v72 ^ (unsigned int)v509, v148);
  HIDWORD(v72) ^= (v505 + __PAIR64__((unsigned int)v72 ^ (unsigned int)v509, v148)) >> 32;
  LODWORD(v137) = HIBYTE(HIDWORD(v72));
  HIDWORD(v72) = (((unsigned int)(v505 + v148) ^ HIDWORD(v545)) >> 24) | (HIDWORD(v72) << 8);
  HIDWORD(v450) = v137 | ((((_DWORD)v505 + (_DWORD)v148) ^ HIDWORD(v545)) << 8);
  v546 = v617 + v509 + __PAIR64__(HIDWORD(v450), HIDWORD(v72));
  v540 = (2 * v447) | (HIDWORD(v447) >> 31);
  LODWORD(v148) = v148 ^ v546;
  v621 = v546;
  LODWORD(v537) = v447 >> 31;
  HIDWORD(v148) = (((unsigned int)v72 ^ (unsigned int)v509 ^ HIDWORD(v546)) >> 16) | ((_DWORD)v148 << 16);
  v637 = WORD1(v148) | (((unsigned int)v72 ^ (unsigned int)v509 ^ HIDWORD(v546)) << 16);
  v638 = HIDWORD(v148);
  HIDWORD(v72) ^= v510 + v637;
  HIDWORD(v450) ^= (v510 + __PAIR64__(HIDWORD(v148), v637)) >> 32;
  v631 = v510 + __PAIR64__(HIDWORD(v148), v637);
  HIDWORD(v447) = HIDWORD(v137);
  v511 = v605 + __PAIR64__(v545, HIDWORD(v534)) + __PAIR64__(v534, HIDWORD(v137));
  LODWORD(v137) = HIDWORD(v511) ^ *(_DWORD *)&v554[12];
  LODWORD(v452) = v452 + v72 + (HIDWORD(v511) ^ *(_DWORD *)&v554[12]);
  HIDWORD(v137) = v511 ^ *(_DWORD *)&v554[8];
  HIDWORD(v534) = v452;
  v512 = (__PAIR64__(v507, v508) + v137) >> 32;
  LODWORD(v72) = (((unsigned int)v452 ^ HIDWORD(v447)) >> 24) | ((v512 ^ (unsigned int)v534) << 8);
  LODWORD(v450) = ((v512 ^ (unsigned int)v534) >> 24) | (((unsigned int)v452 ^ HIDWORD(v447)) << 8);
  v513 = v137 ^ (v607 + v511 + __PAIR64__(v450, v72));
  v514 = v513 >> 16;
  v622 = v607 + v511 + __PAIR64__(v450, v72);
  HIDWORD(v514) = (v513 >> 16 >> 32) | ((_DWORD)v513 << 16);
  v633 = v514;
  LODWORD(v626) = (2 * HIDWORD(v72)) | (HIDWORD(v450) >> 31);
  HIDWORD(v626) = (2 * HIDWORD(v450)) | (HIDWORD(v72) >> 31);
  LODWORD(v72) = v72 ^ (HIDWORD(v534) + (v513 >> 16));
  v516 = HIDWORD(v534) + (v513 >> 16);
  v515 = (__PAIR64__(v512, HIDWORD(v534)) + v514) >> 32;
  LODWORD(v450) = v450 ^ v515;
  v517 = v616 + v539 + __PAIR64__(v540, v537);
  HIDWORD(v513) = v517 ^ *(_DWORD *)&v572[4];
  LODWORD(v513) = HIDWORD(v517) ^ *(_DWORD *)&v572[8];
  LODWORD(v447) = (v497 + (HIDWORD(v517) ^ *(_DWORD *)&v572[8])) ^ v537;
  HIDWORD(v514) = (v497 + v513) >> 32;
  HIDWORD(v148) = v497 + (HIDWORD(v517) ^ *(_DWORD *)&v572[8]);
  HIDWORD(v447) = HIDWORD(v514) ^ v540;
  HIDWORD(v72) = v447 >> 24;
  HIDWORD(v450) = ((HIDWORD(v514) ^ v540) >> 24) | ((_DWORD)v447 << 8);
  LODWORD(v513) = HIDWORD(v517) ^ *(_DWORD *)&v572[8] ^ (v612 + v616 + v539 + v537 + HIDWORD(v72));
  v532 = v612 + v616 + v539 + v537 + HIDWORD(v72);
  HIDWORD(v513) = v517 ^ *(_DWORD *)&v572[4] ^ ((v612 + v517 + __PAIR64__(HIDWORD(v450), HIDWORD(v72))) >> 32);
  LODWORD(v627) = (2 * v72) | ((unsigned int)v450 >> 31);
  HIDWORD(v623) = (v612 + v517 + __PAIR64__(HIDWORD(v450), HIDWORD(v72))) >> 32;
  LODWORD(v634) = (__int64)v513 >> 16;
  HIDWORD(v627) = (2 * v450) | ((unsigned int)v72 >> 31);
  v632 = __PAIR64__(v515, v516);
  HIDWORD(v634) = HIWORD(HIDWORD(v513)) | ((_DWORD)v513 << 16);
  HIDWORD(v72) ^= HIDWORD(v148) + v634;
  v519 = __PAIR64__(HIDWORD(v514), HIDWORD(v148)) + v634;
  v518 = (__PAIR64__(HIDWORD(v514), HIDWORD(v148)) + v634) >> 32;
  HIDWORD(v450) ^= v518;
  v520 = v610 + v541 + __PAIR64__(*(unsigned int *)&v554[16], DWORD1(v548));
  v533 = (v610 + v541 + DWORD1(v548)) ^ v547;
  v629 = __PAIR64__(v518, v519);
  LODWORD(v513) = (v535 + __PAIR64__(v533, HIDWORD(v520) ^ *(_DWORD *)v554)) >> 32;
  v521 = v535 + (HIDWORD(v520) ^ *(_DWORD *)v554);
  v522 = ((v521 ^ DWORD1(v548)) >> 24) | (((unsigned int)v513 ^ *(_DWORD *)&v554[16]) << 8);
  LODWORD(v72) = (((unsigned int)v513 ^ *(_DWORD *)&v554[16]) >> 24) | ((v521 ^ DWORD1(v548)) << 8);
  LODWORD(v623) = v532;
  LODWORD(v514) = (v608 + v520 + __PAIR64__(v72, v522)) >> 32;
  LODWORD(v450) = HIDWORD(v520) ^ *(_DWORD *)v554 ^ (v608 + v520 + v522);
  v624 = v608 + v520 + __PAIR64__(v72, v522);
  HIDWORD(v628) = (2 * HIDWORD(v450)) | (HIDWORD(v72) >> 31);
  HIDWORD(v513) = WORD1(v450) | ((v533 ^ (unsigned int)v514) << 16);
  LODWORD(v628) = (2 * HIDWORD(v72)) | (HIDWORD(v450) >> 31);
  LODWORD(v450) = ((v533 ^ (unsigned int)v514) >> 16) | ((_DWORD)v450 << 16);
  v635 = HIDWORD(v513);
  v523 = v522 ^ (v521 + HIDWORD(v513));
  LODWORD(v72) = v72
               ^ ((v535 + __PAIR64__(v533, HIDWORD(v520) ^ *(_DWORD *)v554) + __PAIR64__(v450, HIDWORD(v513))) >> 32);
  v636 = v450;
  v630 = v535 + __PAIR64__(v533, HIDWORD(v520) ^ *(_DWORD *)v554) + __PAIR64__(v450, HIDWORD(v513));
  LODWORD(v625) = (2 * v523) | ((unsigned int)v72 >> 31);
  HIDWORD(v625) = (2 * v72) | (v523 >> 31);
  v524 = v519;
  v525 = v551;
  v526 = &v622;
  v527 = v546;
  while ( 1 )
  {
    v529 = v525[2];
    v525 += 2;
    v530 = v525[1];
    result = v529 ^ v524 ^ v527;
    *v525 = result;
    v525[1] = v530 ^ v518 ^ HIDWORD(v527);
    if ( v525 == v552 )
      break;
    v528 = *v526++;
    v527 = v528;
    v524 = *((_DWORD *)v526 + 14);
    v518 = *((_DWORD *)v526 + 15);
  }
  return result;
}
