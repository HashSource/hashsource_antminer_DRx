void *__fastcall sph_luffa384_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v5; // lr
  unsigned int *v6; // r3
  unsigned int v7; // r11
  int v8; // r5
  unsigned int v9; // r8
  int v10; // r6
  int v11; // r4
  int v12; // r11
  int v13; // r3
  int v14; // r2
  int v15; // lr
  int v16; // r1
  int v17; // r6
  int v18; // r0
  int v19; // r12
  int v20; // r4
  int v21; // r8
  int v22; // r4
  int v23; // r11
  int v24; // r5
  unsigned int v25; // lr
  int v26; // r12
  unsigned int v27; // r10
  int v28; // r2
  int v29; // r3
  int v30; // r9
  int v31; // r10
  int v32; // r12
  int v33; // r2
  int v34; // r10
  int v35; // r2
  int v36; // r8
  int v37; // r1
  int v38; // r5
  int v39; // r1
  int v40; // lr
  int v41; // r11
  int v42; // r0
  int v43; // r7
  int v44; // r2
  int v45; // r3
  int v46; // r4
  int v47; // r1
  int v48; // r7
  unsigned int v49; // lr
  int v50; // r8
  int v51; // r2
  int v52; // r6
  int v53; // r5
  int v54; // r4
  int v55; // r4
  int v56; // r0
  int v57; // r10
  unsigned int v58; // r3
  int v59; // r12
  int v60; // r11
  int v61; // r1
  int v62; // r2
  int v63; // r11
  int v64; // r9
  int v65; // r5
  int v66; // r6
  int v67; // r1
  int v68; // r7
  int v69; // r3
  int v70; // r0
  int v71; // r4
  int v72; // r12
  int v73; // r1
  int v74; // r2
  int v75; // r6
  int v76; // r1
  int v77; // r9
  int v78; // r0
  int v79; // r2
  int v80; // r4
  int v81; // lr
  int v82; // r3
  int v83; // r11
  int v84; // r0
  int v85; // r2
  int v86; // r1
  int v87; // r12
  int v88; // lr
  int v89; // r3
  int v90; // r4
  int v91; // r11
  int v92; // r9
  int v93; // r8
  int v94; // r0
  unsigned int v95; // lr
  int v96; // r2
  unsigned int v97; // r3
  int v98; // r12
  int v99; // r1
  int v100; // r4
  unsigned int v101; // r11
  int v102; // r2
  int v103; // r11
  int v104; // r10
  int v105; // r5
  int v106; // r6
  int v107; // r1
  int v108; // r7
  int v109; // r3
  int v110; // r0
  int v111; // r4
  int v112; // r12
  int v113; // r1
  int v114; // r2
  int v115; // r6
  int v116; // r1
  int v117; // r10
  int v118; // r0
  int v119; // r2
  int v120; // r4
  int v121; // lr
  int v122; // r3
  int v123; // r11
  int v124; // r0
  int v125; // r2
  int v126; // r1
  int v127; // r12
  int v128; // lr
  int v129; // r3
  int v130; // r4
  int v131; // r11
  int v132; // r8
  int v133; // r10
  int v134; // r0
  unsigned int v135; // lr
  int v136; // r2
  unsigned int v137; // r3
  int v138; // r12
  unsigned int v139; // r11
  int v140; // r4
  int v141; // r1
  int v142; // r2
  int v143; // r11
  int v144; // r9
  int v145; // r5
  int v146; // r6
  int v147; // r1
  int v148; // r7
  int v149; // r3
  int v150; // r0
  int v151; // r4
  int v152; // r12
  int v153; // r1
  int v154; // r2
  int v155; // r6
  int v156; // r1
  int v157; // r9
  int v158; // r0
  int v159; // r2
  int v160; // r4
  int v161; // lr
  int v162; // r3
  int v163; // r11
  int v164; // r0
  int v165; // r2
  int v166; // r1
  int v167; // r12
  int v168; // lr
  int v169; // r3
  int v170; // r4
  int v171; // r11
  int v172; // r9
  int v173; // r8
  int v174; // r0
  unsigned int v175; // lr
  int v176; // r2
  unsigned int v177; // r3
  int v178; // r12
  unsigned int v179; // r11
  int v180; // r4
  int v181; // r1
  int v182; // r2
  int v183; // r11
  int v184; // r10
  int v185; // r5
  int v186; // r6
  int v187; // r1
  int v188; // r7
  int v189; // r3
  int v190; // r0
  int v191; // r4
  int v192; // r12
  int v193; // r1
  int v194; // r2
  int v195; // r6
  int v196; // r1
  int v197; // r10
  int v198; // r0
  int v199; // r2
  int v200; // r4
  int v201; // lr
  int v202; // r3
  int v203; // r11
  int v204; // r0
  int v205; // r2
  int v206; // r1
  int v207; // r12
  int v208; // lr
  int v209; // r3
  int v210; // r4
  int v211; // r11
  int v212; // r2
  int v213; // r0
  int v214; // r5
  int v215; // r3
  void *result; // r0
  int v217; // r12
  int v218; // lr
  int v219; // r7
  int v220; // r3
  int v221; // r2
  int v222; // r1
  int v223; // r3
  unsigned int v224; // [sp+0h] [bp-DCh]
  int v225; // [sp+0h] [bp-DCh]
  int v226; // [sp+0h] [bp-DCh]
  int v227; // [sp+0h] [bp-DCh]
  int v228; // [sp+0h] [bp-DCh]
  int v229; // [sp+4h] [bp-D8h]
  unsigned int v230; // [sp+8h] [bp-D4h]
  unsigned int v231; // [sp+Ch] [bp-D0h]
  int v232; // [sp+10h] [bp-CCh]
  int v233; // [sp+10h] [bp-CCh]
  int v234; // [sp+10h] [bp-CCh]
  int v235; // [sp+14h] [bp-C8h]
  int v236; // [sp+14h] [bp-C8h]
  int v237; // [sp+14h] [bp-C8h]
  int v238; // [sp+18h] [bp-C4h]
  int v239; // [sp+18h] [bp-C4h]
  int v240; // [sp+1Ch] [bp-C0h]
  int v241; // [sp+1Ch] [bp-C0h]
  int v242; // [sp+1Ch] [bp-C0h]
  int v243; // [sp+20h] [bp-BCh]
  int v244; // [sp+20h] [bp-BCh]
  int v245; // [sp+20h] [bp-BCh]
  int v246; // [sp+24h] [bp-B8h]
  int v247; // [sp+24h] [bp-B8h]
  int v248; // [sp+24h] [bp-B8h]
  int v249; // [sp+24h] [bp-B8h]
  int v250; // [sp+28h] [bp-B4h]
  int v251; // [sp+28h] [bp-B4h]
  int v252; // [sp+28h] [bp-B4h]
  int v253; // [sp+2Ch] [bp-B0h]
  int v254; // [sp+2Ch] [bp-B0h]
  int v255; // [sp+2Ch] [bp-B0h]
  unsigned int v256; // [sp+30h] [bp-ACh]
  int v257; // [sp+30h] [bp-ACh]
  int v258; // [sp+30h] [bp-ACh]
  int v259; // [sp+30h] [bp-ACh]
  unsigned int v260; // [sp+34h] [bp-A8h]
  int v261; // [sp+34h] [bp-A8h]
  int v262; // [sp+34h] [bp-A8h]
  int v263; // [sp+38h] [bp-A4h]
  int v264; // [sp+38h] [bp-A4h]
  unsigned int v265; // [sp+3Ch] [bp-A0h]
  int v266; // [sp+3Ch] [bp-A0h]
  unsigned int v267; // [sp+3Ch] [bp-A0h]
  unsigned int v268; // [sp+40h] [bp-9Ch]
  int v269; // [sp+40h] [bp-9Ch]
  unsigned int v270; // [sp+40h] [bp-9Ch]
  unsigned int v271; // [sp+44h] [bp-98h]
  unsigned int v272; // [sp+44h] [bp-98h]
  unsigned int v273; // [sp+48h] [bp-94h]
  unsigned int v274; // [sp+48h] [bp-94h]
  unsigned int v275; // [sp+4Ch] [bp-90h]
  int v276; // [sp+4Ch] [bp-90h]
  unsigned int v277; // [sp+4Ch] [bp-90h]
  int v278; // [sp+50h] [bp-8Ch]
  int v279; // [sp+50h] [bp-8Ch]
  int v280; // [sp+50h] [bp-8Ch]
  unsigned int v281; // [sp+54h] [bp-88h]
  unsigned int v282; // [sp+54h] [bp-88h]
  unsigned int v283; // [sp+58h] [bp-84h]
  unsigned int v284; // [sp+58h] [bp-84h]
  unsigned int v285; // [sp+5Ch] [bp-80h]
  int v286; // [sp+5Ch] [bp-80h]
  unsigned int v287; // [sp+5Ch] [bp-80h]
  int v288; // [sp+60h] [bp-7Ch]
  int v289; // [sp+60h] [bp-7Ch]
  unsigned int v290; // [sp+64h] [bp-78h]
  int v291; // [sp+64h] [bp-78h]
  int v292; // [sp+64h] [bp-78h]
  unsigned int v293; // [sp+68h] [bp-74h]
  int v294; // [sp+68h] [bp-74h]
  int v295; // [sp+6Ch] [bp-70h]
  int v296; // [sp+6Ch] [bp-70h]
  int v297; // [sp+6Ch] [bp-70h]
  unsigned int v298; // [sp+70h] [bp-6Ch]
  int v299; // [sp+70h] [bp-6Ch]
  int v300; // [sp+70h] [bp-6Ch]
  int v301; // [sp+74h] [bp-68h]
  int v302; // [sp+74h] [bp-68h]
  int v303; // [sp+74h] [bp-68h]
  int v304; // [sp+78h] [bp-64h]
  int v305; // [sp+78h] [bp-64h]
  int v306; // [sp+7Ch] [bp-60h]
  int v307; // [sp+7Ch] [bp-60h]
  int v308; // [sp+7Ch] [bp-60h]
  unsigned int v309; // [sp+80h] [bp-5Ch]
  unsigned int v310; // [sp+80h] [bp-5Ch]
  unsigned int v311; // [sp+84h] [bp-58h]
  int v312; // [sp+84h] [bp-58h]
  int v313; // [sp+88h] [bp-54h]
  unsigned int v315; // [sp+90h] [bp-4Ch]
  int v316; // [sp+90h] [bp-4Ch]
  unsigned int v317; // [sp+94h] [bp-48h]
  int v318; // [sp+94h] [bp-48h]
  unsigned int v319; // [sp+98h] [bp-44h]
  unsigned int v320; // [sp+9Ch] [bp-40h]
  unsigned int v321; // [sp+A0h] [bp-3Ch]
  int v322; // [sp+A0h] [bp-3Ch]
  int v323; // [sp+A4h] [bp-38h]
  int v324; // [sp+ACh] [bp-30h]
  unsigned int v325; // [sp+B0h] [bp-2Ch]
  int v326; // [sp+B0h] [bp-2Ch]
  int v327; // [sp+B4h] [bp-28h]
  int v328; // [sp+B8h] [bp-24h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v6 = a1;
  v7 = a1[12];
  v315 = a1[10];
  v298 = a1[20];
  v8 = v7 ^ v298;
  v293 = a1[18];
  v325 = a1[9];
  v9 = a1[11] ^ a1[19];
  v317 = a1[11];
  v256 = a1[14];
  v260 = a1[15];
  v10 = v6[13] ^ v6[21];
  v11 = v315 ^ v293;
  v295 = v6[19];
  v263 = v6[16];
  v290 = v7;
  v301 = v6[13];
  v306 = v6[17];
  v304 = v6[21];
  v265 = v6[22];
  v268 = v6[23];
  v324 = 0;
  v309 = v6[24];
  v240 = v6[25];
  v232 = v6[26];
  v235 = v6[27];
  v238 = v6[28];
  v278 = v6[29];
  v271 = v6[30];
  v273 = v6[31];
  v275 = v6[32];
  v253 = v6[33];
  v243 = v6[34];
  v246 = v6[35];
  v250 = v6[36];
  v288 = v6[37];
  v281 = v6[38];
  v283 = v6[39];
  v285 = v6[40];
  while ( 1 )
  {
    v311 = bswap32(a1[1]);
    v231 = bswap32(a1[6]);
    v230 = bswap32(a1[7]);
    v12 = v273 ^ v283 ^ v260 ^ v268;
    v320 = bswap32(a1[2]);
    v321 = bswap32(a1[3]);
    v224 = bswap32(a1[5]);
    v13 = v275 ^ v285 ^ v263 ^ v309;
    v14 = v8 ^ v238 ^ v250 ^ v13;
    v15 = v10 ^ v278 ^ v288;
    v16 = v9 ^ v235 ^ v246 ^ v13;
    v17 = v12 ^ v309;
    v313 = v12 ^ v285;
    v229 = v12 ^ v275;
    v286 = v15 ^ v256;
    v18 = v281 ^ v256 ^ v265 ^ v271;
    v319 = bswap32(*a1);
    v302 = v301 ^ v14;
    v257 = v18 ^ v260;
    v19 = v11 ^ v232 ^ v243;
    v276 = v304 ^ v14;
    v20 = v278;
    v279 = v18 ^ v268;
    v21 = v14 ^ v20;
    v22 = v12 ^ v263;
    v328 = v18 ^ v273;
    v323 = v18 ^ v283;
    v23 = v15 ^ v265;
    v24 = v15 ^ v271;
    v266 = v15 ^ v281;
    v25 = bswap32(a1[4]);
    v269 = v317 ^ v19;
    v327 = v295 ^ v19;
    v261 = v19 ^ v235;
    v264 = v19 ^ v246;
    v318 = v14 ^ v288;
    v26 = v231 ^ v320 ^ v230;
    v27 = v298;
    v299 = v13 ^ v306;
    v247 = v27 ^ v16;
    v28 = v306 ^ v240 ^ v253;
    v296 = v16 ^ v238;
    v251 = v16 ^ v250;
    v307 = v13 ^ v240;
    v254 = v13 ^ v253;
    v241 = v13 ^ v325;
    v29 = v13 ^ v28 ^ v325;
    v289 = __ROR4__(v224 ^ v311 ^ v231 ^ v313 ^ v21 ^ v251, 29);
    v236 = v290 ^ v16;
    v30 = v24 ^ v26;
    v31 = v229 ^ v26 ^ v276;
    v32 = v279 ^ v24;
    v305 = __ROR4__(v17 ^ v321 ^ v230 ^ v302 ^ v247, 31);
    v33 = v22 ^ v279 ^ v231;
    v280 = __ROR4__(v31 ^ v16 ^ v238, 30);
    v282 = __ROR4__(v30 ^ v318, 29);
    v310 = __ROR4__(v33, 31);
    v274 = __ROR4__(v32 ^ v25, 30);
    v34 = v293 ^ v29;
    v316 = v315 ^ v29;
    v233 = v29 ^ v232;
    v244 = v29 ^ v243;
    v35 = v21;
    v36 = v286;
    v239 = v261 ^ v229 ^ v311 ^ v231 ^ v247;
    v37 = v269;
    v291 = v269 ^ v22 ^ v321;
    v270 = __ROR4__(v257 ^ v23 ^ v224, 31);
    v38 = v25 ^ v286 ^ v276;
    v284 = __ROR4__(v321 ^ v230 ^ v328 ^ v266, 29);
    v272 = __ROR4__(v23 ^ v321 ^ v230 ^ v35, 30);
    v277 = __ROR4__(v17 ^ v328 ^ v224, 30);
    v326 = v311 ^ v37;
    v322 = v257 ^ v313;
    v39 = v266;
    v267 = __ROR4__(v38, 31);
    v287 = __ROR4__(v229 ^ v323 ^ v25, 29);
    v258 = v224 ^ v39;
    v40 = v25 ^ v22 ^ v236;
    v41 = v224 ^ v231 ^ v254 ^ v313;
    v248 = v22 ^ v254;
    v42 = v241 ^ v17;
    v312 = v22 ^ v241 ^ v311;
    v43 = v307 ^ v313;
    v44 = v299 ^ v229;
    v45 = v299 ^ v17;
    v46 = v307 ^ v229 ^ v231 ^ v230 ^ v34;
    v47 = v231 ^ v230 ^ v261;
    v292 = v291 ^ v251;
    v259 = v258 ^ v302;
    v303 = v40 ^ v318;
    v262 = v36 ^ v323 ^ v231;
    v300 = v17 ^ v327 ^ v320 ^ v230 ^ v236;
    v252 = v224 ^ v319 ^ v230 ^ v264 ^ v313 ^ v296;
    v242 = v231 ^ v44;
    v308 = v230 ^ v42;
    v255 = v224 ^ v43;
    v48 = v248 ^ v319;
    v49 = v259;
    v50 = 0;
    v51 = v320 ^ v264 ^ v316;
    v294 = v45 ^ v319 ^ v230 ^ v316;
    v52 = v233;
    v234 = v46;
    v297 = v326 ^ v34;
    v53 = v244;
    v237 = v327 ^ v319 ^ v230 ^ v52;
    v54 = v47 ^ v244;
    v245 = v41 ^ v52;
    v249 = v54;
    v55 = v48;
    v56 = v312 ^ v53;
    v57 = -533497832;
    v58 = v262;
    v59 = v292;
    v60 = v322 ^ v230;
    v61 = v303;
    v225 = 809079974;
    while ( 1 )
    {
      v62 = v51 ^ v59;
      v63 = v60 ^ v61;
      v64 = v62 ^ v55 & v59;
      v65 = (v49 | v58) ^ v61;
      v66 = v55 & v59 ^ ~v56;
      v67 = v61 & v49;
      v68 = v66 | v64;
      v69 = ~v58 ^ v67;
      v70 = (v55 | v56) ^ v59;
      v71 = v55 ^ (v66 | v64);
      v72 = v63 & v65 ^ v69;
      v73 = v67 ^ v63;
      v74 = v62 & v70 ^ v66;
      v75 = v69 | v73;
      v76 = v73 ^ v71 ^ v72;
      v77 = v64 ^ v74;
      v78 = ~v70 ^ v68;
      v79 = v74 & v68;
      v80 = v76 ^ __ROR4__(v71, 30);
      v81 = v49 ^ v75 ^ v78;
      v82 = ~v65 ^ v75 ^ v79;
      v83 = v72 & v75 ^ v77;
      v84 = v81 ^ __ROR4__(v78, 30);
      v85 = v82 ^ __ROR4__(v79, 30);
      v86 = v80 ^ __ROR4__(v76, 18);
      v87 = v83 ^ __ROR4__(v77, 30);
      v88 = v84 ^ __ROR4__(v81, 18);
      v89 = v85 ^ __ROR4__(v82, 18);
      v90 = v86 ^ __ROR4__(v80, 22);
      v91 = v87 ^ __ROR4__(v83, 18);
      v56 = v88 ^ __ROR4__(v84, 22);
      v51 = v89 ^ __ROR4__(v85, 22);
      v59 = v91 ^ __ROR4__(v87, 22);
      v49 = __ROR4__(v88, 31);
      v58 = __ROR4__(v89, 31);
      v61 = v57 ^ __ROR4__(v86, 31);
      v60 = __ROR4__(v91, 31);
      ++v50;
      v55 = v90 ^ v225;
      if ( v50 == 8 )
        break;
      v225 = dword_165C98[v50];
      v57 = dword_165CB8[v50];
    }
    v92 = 23617341;
    v301 = v61;
    v315 = v56;
    v256 = v49;
    v93 = 0;
    v317 = v51;
    v260 = v58;
    v290 = v59;
    v263 = v60;
    v325 = v55;
    v94 = v294;
    v95 = v267;
    v96 = v297;
    v97 = v270;
    v98 = v300;
    v99 = v305;
    v100 = v308;
    v101 = v310;
    v226 = -1226960659;
    while ( 1 )
    {
      v102 = v96 ^ v98;
      v103 = v101 ^ v99;
      v104 = v102 ^ v100 & v98;
      v105 = (v95 | v97) ^ v99;
      v106 = v100 & v98 ^ ~v94;
      v107 = v99 & v95;
      v108 = v106 | v104;
      v109 = ~v97 ^ v107;
      v110 = (v100 | v94) ^ v98;
      v111 = v100 ^ (v106 | v104);
      v112 = v103 & v105 ^ v109;
      v113 = v107 ^ v103;
      v114 = v102 & v110 ^ v106;
      v115 = v109 | v113;
      v116 = v113 ^ v111 ^ v112;
      v117 = v104 ^ v114;
      v118 = ~v110 ^ v108;
      v119 = v114 & v108;
      v120 = v116 ^ __ROR4__(v111, 30);
      v121 = v95 ^ v115 ^ v118;
      v122 = ~v105 ^ v115 ^ v119;
      v123 = v112 & v115 ^ v117;
      v124 = v121 ^ __ROR4__(v118, 30);
      v125 = v122 ^ __ROR4__(v119, 30);
      v126 = v120 ^ __ROR4__(v116, 18);
      v127 = v123 ^ __ROR4__(v117, 30);
      v128 = v124 ^ __ROR4__(v121, 18);
      v129 = v125 ^ __ROR4__(v122, 18);
      v130 = v126 ^ __ROR4__(v120, 22);
      v131 = v127 ^ __ROR4__(v123, 18);
      v94 = v128 ^ __ROR4__(v124, 22);
      v96 = v129 ^ __ROR4__(v125, 22);
      v98 = v131 ^ __ROR4__(v127, 22);
      v95 = __ROR4__(v128, 31);
      v97 = __ROR4__(v129, 31);
      v99 = v92 ^ __ROR4__(v126, 31);
      v101 = __ROR4__(v131, 31);
      ++v93;
      v100 = v130 ^ v226;
      if ( v93 == 8 )
        break;
      v226 = dword_165CD8[v93];
      v92 = dword_165CF8[v93];
    }
    v132 = 0;
    v293 = v94;
    v265 = v95;
    v295 = v96;
    v268 = v97;
    v298 = v98;
    v309 = v101;
    v306 = v100;
    v304 = v99;
    v133 = -497126719;
    v134 = v234;
    v135 = v272;
    v136 = v237;
    v137 = v274;
    v138 = v239;
    v139 = v277;
    v140 = v242;
    v141 = v280;
    v227 = -64955950;
    while ( 1 )
    {
      v142 = v136 ^ v138;
      v143 = v139 ^ v141;
      v144 = v142 ^ v140 & v138;
      v145 = (v135 | v137) ^ v141;
      v146 = v140 & v138 ^ ~v134;
      v147 = v141 & v135;
      v148 = v146 | v144;
      v149 = ~v137 ^ v147;
      v150 = (v140 | v134) ^ v138;
      v151 = v140 ^ (v146 | v144);
      v152 = v143 & v145 ^ v149;
      v153 = v147 ^ v143;
      v154 = v142 & v150 ^ v146;
      v155 = v149 | v153;
      v156 = v153 ^ v151 ^ v152;
      v157 = v144 ^ v154;
      v158 = ~v150 ^ v148;
      v159 = v154 & v148;
      v160 = v156 ^ __ROR4__(v151, 30);
      v161 = v135 ^ v155 ^ v158;
      v162 = ~v145 ^ v155 ^ v159;
      v163 = v152 & v155 ^ v157;
      v164 = v161 ^ __ROR4__(v158, 30);
      v165 = v162 ^ __ROR4__(v159, 30);
      v166 = v160 ^ __ROR4__(v156, 18);
      v167 = v163 ^ __ROR4__(v157, 30);
      v168 = v164 ^ __ROR4__(v161, 18);
      v169 = v165 ^ __ROR4__(v162, 18);
      v170 = v166 ^ __ROR4__(v160, 22);
      v171 = v167 ^ __ROR4__(v163, 18);
      v134 = v168 ^ __ROR4__(v164, 22);
      v136 = v169 ^ __ROR4__(v165, 22);
      v138 = v171 ^ __ROR4__(v167, 22);
      v135 = __ROR4__(v168, 31);
      v137 = __ROR4__(v169, 31);
      v141 = v133 ^ __ROR4__(v166, 31);
      v139 = __ROR4__(v171, 31);
      ++v132;
      v140 = v170 ^ v227;
      if ( v132 == 8 )
        break;
      v227 = dword_165D18[v132];
      v133 = dword_165D38[v132];
    }
    v172 = -534197825;
    v232 = v134;
    v271 = v135;
    v173 = 0;
    v235 = v136;
    v273 = v137;
    v238 = v138;
    v275 = v139;
    v240 = v140;
    v278 = v141;
    v174 = v245;
    v175 = v282;
    v176 = v249;
    v177 = v284;
    v178 = v252;
    v179 = v287;
    v180 = v255;
    v181 = v289;
    v228 = -1307332699;
    while ( 1 )
    {
      v182 = v176 ^ v178;
      v183 = v179 ^ v181;
      v184 = v182 ^ v180 & v178;
      v185 = (v175 | v177) ^ v181;
      v186 = v180 & v178 ^ ~v174;
      v187 = v181 & v175;
      v188 = v186 | v184;
      v189 = ~v177 ^ v187;
      v190 = (v180 | v174) ^ v178;
      v191 = v180 ^ (v186 | v184);
      v192 = v183 & v185 ^ v189;
      v193 = v187 ^ v183;
      v194 = v182 & v190 ^ v186;
      v195 = v189 | v193;
      v196 = v193 ^ v191 ^ v192;
      v197 = v184 ^ v194;
      v198 = ~v190 ^ v188;
      v199 = v194 & v188;
      v200 = v196 ^ __ROR4__(v191, 30);
      v201 = v175 ^ v195 ^ v198;
      v202 = ~v185 ^ v195 ^ v199;
      v203 = v192 & v195 ^ v197;
      v204 = v201 ^ __ROR4__(v198, 30);
      v205 = v202 ^ __ROR4__(v199, 30);
      v206 = v200 ^ __ROR4__(v196, 18);
      v207 = v203 ^ __ROR4__(v197, 30);
      v208 = v204 ^ __ROR4__(v201, 18);
      v209 = v205 ^ __ROR4__(v202, 18);
      v210 = v206 ^ __ROR4__(v200, 22);
      v211 = v207 ^ __ROR4__(v203, 18);
      v174 = v208 ^ __ROR4__(v204, 22);
      v176 = v209 ^ __ROR4__(v205, 22);
      v178 = v211 ^ __ROR4__(v207, 22);
      v175 = __ROR4__(v208, 31);
      v177 = __ROR4__(v209, 31);
      v181 = v172 ^ __ROR4__(v206, 31);
      v179 = __ROR4__(v211, 31);
      ++v173;
      v180 = v210 ^ v228;
      if ( v173 == 8 )
        break;
      v228 = dword_165DF8[v173];
      v172 = dword_165E18[v173];
    }
    v283 = v177;
    v243 = v174;
    v281 = v175;
    v246 = v176;
    v250 = v178;
    v285 = v179;
    v253 = v180;
    v288 = v181;
    if ( v324 != 1 )
      break;
    v11 = v315 ^ v293;
    v9 = v317 ^ v295;
    v8 = v290 ^ v298;
    v10 = v301 ^ v304;
    v217 = v256 ^ v265 ^ v271 ^ v175;
    v218 = v260 ^ v268 ^ v273 ^ v177;
    v219 = v263 ^ v309 ^ v275 ^ v179;
    a4[3] = v325 ^ v306 ^ v240 ^ v253;
    *a4 = (v325 ^ v306 ^ v240 ^ v253) >> 24;
    a4[2] = (unsigned __int16)(v325 ^ v306 ^ v240 ^ v253) >> 8;
    a4[1] = (v325 ^ v306 ^ v240 ^ v253) >> 16;
    v220 = v315 ^ v293 ^ v232 ^ v174;
    a4[7] = v220;
    a4[4] = HIBYTE(v220);
    a4[5] = BYTE2(v220);
    v221 = v317 ^ v295 ^ v235 ^ v176;
    a4[11] = v221;
    a4[6] = BYTE1(v220);
    v222 = v290 ^ v298 ^ v238 ^ v250;
    a4[8] = HIBYTE(v221);
    a4[15] = v222;
    a4[23] = v217;
    a4[10] = BYTE1(v221);
    v223 = v301 ^ v304 ^ v278 ^ v288;
    a4[9] = BYTE2(v221);
    a4[12] = HIBYTE(v222);
    a4[19] = v223;
    a4[13] = BYTE2(v222);
    a4[14] = BYTE1(v222);
    a4[16] = HIBYTE(v223);
    a4[21] = BYTE2(v217);
    a4[17] = BYTE2(v223);
    a4[18] = BYTE1(v223);
    a4[20] = HIBYTE(v217);
    a4[22] = BYTE1(v217);
    a4[24] = HIBYTE(v218);
    a4[26] = BYTE1(v218);
    a4[25] = BYTE2(v218);
    a4[27] = v218;
    a4[31] = v219;
    a4[28] = HIBYTE(v219);
    a4[29] = BYTE2(v219);
    a4[30] = BYTE1(v219);
LABEL_18:
    ++v324;
  }
  if ( v324 != 2 )
  {
    memset(a1, 0, 0x20u);
    v11 = v315 ^ v293;
    v10 = v304 ^ v301;
    v8 = v290 ^ v298;
    v9 = v317 ^ v295;
    goto LABEL_18;
  }
  v212 = v180 ^ v325 ^ v306 ^ v240;
  v213 = v174 ^ v232 ^ v315 ^ v293;
  v214 = v235 ^ v317 ^ v295 ^ v246;
  v215 = v178 ^ v290 ^ v298 ^ v238;
  a4[35] = v212;
  a4[39] = v213;
  a4[43] = v214;
  a4[47] = v215;
  a4[32] = HIBYTE(v212);
  a4[33] = BYTE2(v212);
  a4[34] = BYTE1(v212);
  a4[36] = HIBYTE(v213);
  a4[37] = BYTE2(v213);
  a4[38] = BYTE1(v213);
  a4[40] = HIBYTE(v214);
  a4[41] = BYTE2(v214);
  a4[44] = HIBYTE(v215);
  a4[42] = BYTE1(v214);
  a4[45] = BYTE2(v215);
  a4[46] = BYTE1(v215);
  result = memcpy(a1 + 9, &unk_165D58, 0x80u);
  a1[8] = 0;
  return result;
}
