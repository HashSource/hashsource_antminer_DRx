unsigned int __fastcall sph_luffa384(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r5
  unsigned int *v4; // r10
  size_t v5; // r4
  char *v6; // r0
  int v7; // r2
  int v8; // r6
  int v9; // r3
  int v10; // r11
  unsigned int v11; // r10
  int v12; // r4
  unsigned int v13; // r9
  int v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r8
  int v18; // r2
  int v19; // r11
  int v20; // r0
  int v21; // r4
  int v22; // r12
  int v23; // r5
  int v24; // r8
  int v25; // r0
  int v26; // lr
  int v27; // r2
  int v28; // r7
  int v29; // r3
  int v30; // r6
  int v31; // r5
  int v32; // r4
  unsigned int v33; // r11
  int v34; // r1
  int v35; // r2
  int v36; // lr
  int v37; // r7
  int v38; // r12
  int v39; // r2
  int v40; // r3
  int v41; // r6
  int v42; // lr
  int v43; // r12
  int v44; // r8
  int v45; // r2
  int v46; // r3
  int v47; // r5
  int v48; // r8
  int v49; // r10
  int v50; // lr
  int v51; // r4
  int v52; // r0
  int v53; // r12
  int v54; // r3
  int v55; // r1
  int v56; // r11
  int v57; // r2
  int v58; // r11
  int v59; // r9
  int v60; // r5
  int v61; // r6
  int v62; // r1
  int v63; // r7
  int v64; // r3
  int v65; // r0
  int v66; // r4
  int v67; // r12
  int v68; // r1
  int v69; // r2
  int v70; // r6
  int v71; // r1
  int v72; // r9
  int v73; // r0
  int v74; // r2
  int v75; // r4
  int v76; // lr
  int v77; // r3
  int v78; // r11
  int v79; // r0
  int v80; // r2
  int v81; // r1
  int v82; // r12
  int v83; // lr
  int v84; // r3
  int v85; // r4
  int v86; // r11
  int v87; // r9
  int v88; // r8
  int v89; // r0
  unsigned int v90; // lr
  int v91; // r2
  unsigned int v92; // r3
  int v93; // r12
  unsigned int v94; // r11
  int v95; // r4
  int v96; // r1
  int v97; // r2
  int v98; // r11
  int v99; // r10
  int v100; // r5
  int v101; // r6
  int v102; // r1
  int v103; // r7
  int v104; // r3
  int v105; // r0
  int v106; // r4
  int v107; // r12
  int v108; // r1
  int v109; // r2
  int v110; // r6
  int v111; // r1
  int v112; // r10
  int v113; // r0
  int v114; // r2
  int v115; // r4
  int v116; // lr
  int v117; // r3
  int v118; // r11
  int v119; // r0
  int v120; // r2
  int v121; // r1
  int v122; // r12
  int v123; // lr
  int v124; // r3
  int v125; // r4
  int v126; // r11
  int v127; // r8
  int v128; // r10
  int v129; // r0
  unsigned int v130; // lr
  int v131; // r2
  unsigned int v132; // r3
  int v133; // r12
  unsigned int v134; // r11
  int v135; // r4
  int v136; // r1
  int v137; // r2
  int v138; // r11
  int v139; // r9
  int v140; // r5
  int v141; // r6
  int v142; // r1
  int v143; // r7
  int v144; // r3
  int v145; // r0
  int v146; // r4
  int v147; // r12
  int v148; // r1
  int v149; // r2
  int v150; // r6
  int v151; // r1
  int v152; // r9
  int v153; // r0
  int v154; // r2
  int v155; // r4
  int v156; // lr
  int v157; // r3
  int v158; // r11
  int v159; // r0
  int v160; // r2
  int v161; // r1
  int v162; // r12
  int v163; // lr
  int v164; // r3
  int v165; // r4
  int v166; // r11
  int v167; // r9
  int v168; // r8
  unsigned int v169; // lr
  int v170; // r2
  unsigned int v171; // r3
  int v172; // r12
  unsigned int v173; // r11
  int v174; // r4
  int v175; // r1
  int v176; // r2
  int v177; // r11
  int v178; // r10
  int v179; // r5
  unsigned int v180; // r6
  int v181; // r1
  int v182; // r7
  int v183; // r3
  unsigned int v184; // r0
  int v185; // r4
  int v186; // r12
  int v187; // r1
  int v188; // r2
  int v189; // r6
  int v190; // r1
  int v191; // r10
  int v192; // r0
  int v193; // r2
  int v194; // r4
  int v195; // lr
  int v196; // r3
  int v197; // r11
  int v198; // r0
  int v199; // r2
  int v200; // r1
  int v201; // r12
  int v202; // lr
  int v203; // r3
  int v204; // r4
  int v205; // r11
  size_t n; // [sp+4h] [bp-D8h]
  unsigned int v207; // [sp+8h] [bp-D4h]
  int v208; // [sp+8h] [bp-D4h]
  int v209; // [sp+8h] [bp-D4h]
  int v210; // [sp+8h] [bp-D4h]
  int v211; // [sp+8h] [bp-D4h]
  char *src; // [sp+Ch] [bp-D0h]
  unsigned int *v213; // [sp+10h] [bp-CCh]
  int v214; // [sp+14h] [bp-C8h]
  int v215; // [sp+14h] [bp-C8h]
  int v216; // [sp+18h] [bp-C4h]
  int v217; // [sp+18h] [bp-C4h]
  int v218; // [sp+18h] [bp-C4h]
  int v219; // [sp+1Ch] [bp-C0h]
  int v220; // [sp+1Ch] [bp-C0h]
  int v221; // [sp+20h] [bp-BCh]
  int v222; // [sp+20h] [bp-BCh]
  int v223; // [sp+24h] [bp-B8h]
  int v224; // [sp+24h] [bp-B8h]
  int v225; // [sp+28h] [bp-B4h]
  int v226; // [sp+28h] [bp-B4h]
  int v227; // [sp+28h] [bp-B4h]
  int v228; // [sp+28h] [bp-B4h]
  unsigned int v229; // [sp+2Ch] [bp-B0h]
  int v230; // [sp+2Ch] [bp-B0h]
  unsigned int v231; // [sp+2Ch] [bp-B0h]
  int v232; // [sp+30h] [bp-ACh]
  int v233; // [sp+30h] [bp-ACh]
  int v234; // [sp+30h] [bp-ACh]
  unsigned int v235; // [sp+34h] [bp-A8h]
  int v236; // [sp+34h] [bp-A8h]
  unsigned int v237; // [sp+34h] [bp-A8h]
  unsigned int v238; // [sp+38h] [bp-A4h]
  int v239; // [sp+38h] [bp-A4h]
  unsigned int v240; // [sp+38h] [bp-A4h]
  int v241; // [sp+3Ch] [bp-A0h]
  int v242; // [sp+3Ch] [bp-A0h]
  int v243; // [sp+40h] [bp-9Ch]
  int v244; // [sp+40h] [bp-9Ch]
  int v245; // [sp+40h] [bp-9Ch]
  int v246; // [sp+44h] [bp-98h]
  int v247; // [sp+44h] [bp-98h]
  int v248; // [sp+44h] [bp-98h]
  unsigned int v249; // [sp+48h] [bp-94h]
  int v250; // [sp+48h] [bp-94h]
  unsigned int v251; // [sp+48h] [bp-94h]
  int v252; // [sp+4Ch] [bp-90h]
  unsigned int v253; // [sp+4Ch] [bp-90h]
  int v254; // [sp+4Ch] [bp-90h]
  unsigned int v255; // [sp+50h] [bp-8Ch]
  int v256; // [sp+50h] [bp-8Ch]
  unsigned int v257; // [sp+50h] [bp-8Ch]
  int v258; // [sp+54h] [bp-88h]
  int v259; // [sp+54h] [bp-88h]
  int v260; // [sp+54h] [bp-88h]
  unsigned int v261; // [sp+58h] [bp-84h]
  int v262; // [sp+58h] [bp-84h]
  unsigned int v263; // [sp+58h] [bp-84h]
  int v264; // [sp+5Ch] [bp-80h]
  int v265; // [sp+5Ch] [bp-80h]
  int v266; // [sp+5Ch] [bp-80h]
  int v267; // [sp+60h] [bp-7Ch]
  int v268; // [sp+60h] [bp-7Ch]
  unsigned int v269; // [sp+64h] [bp-78h]
  int v270; // [sp+64h] [bp-78h]
  unsigned int v271; // [sp+64h] [bp-78h]
  unsigned int v272; // [sp+68h] [bp-74h]
  int v273; // [sp+68h] [bp-74h]
  unsigned int v274; // [sp+68h] [bp-74h]
  int v275; // [sp+6Ch] [bp-70h]
  unsigned int v276; // [sp+6Ch] [bp-70h]
  int v277; // [sp+6Ch] [bp-70h]
  unsigned int v278; // [sp+70h] [bp-6Ch]
  unsigned int v279; // [sp+70h] [bp-6Ch]
  int v280; // [sp+74h] [bp-68h]
  unsigned int v281; // [sp+74h] [bp-68h]
  int v282; // [sp+74h] [bp-68h]
  unsigned int v283; // [sp+78h] [bp-64h]
  unsigned int v284; // [sp+78h] [bp-64h]
  int v285; // [sp+7Ch] [bp-60h]
  int v286; // [sp+7Ch] [bp-60h]
  int v287; // [sp+7Ch] [bp-60h]
  int v288; // [sp+80h] [bp-5Ch]
  int v289; // [sp+80h] [bp-5Ch]
  int v290; // [sp+84h] [bp-58h]
  int v291; // [sp+84h] [bp-58h]
  int v292; // [sp+84h] [bp-58h]
  int v293; // [sp+84h] [bp-58h]
  int v294; // [sp+88h] [bp-54h]
  int v295; // [sp+88h] [bp-54h]
  int v296; // [sp+8Ch] [bp-50h]
  int v297; // [sp+90h] [bp-4Ch]
  unsigned int v298; // [sp+94h] [bp-48h]
  int v299; // [sp+98h] [bp-44h]
  int v300; // [sp+98h] [bp-44h]
  int v301; // [sp+9Ch] [bp-40h]
  int v302; // [sp+9Ch] [bp-40h]
  int v303; // [sp+A0h] [bp-3Ch]
  int v304; // [sp+A0h] [bp-3Ch]
  int v305; // [sp+A4h] [bp-38h]
  int v306; // [sp+A8h] [bp-34h]
  int v307; // [sp+A8h] [bp-34h]
  int v308; // [sp+ACh] [bp-30h]
  int v309; // [sp+ACh] [bp-30h]
  int v310; // [sp+B0h] [bp-2Ch]
  int v311; // [sp+B0h] [bp-2Ch]
  int v312; // [sp+B4h] [bp-28h]
  int v313; // [sp+B8h] [bp-24h]
  int v314; // [sp+BCh] [bp-20h]

  v3 = *(_DWORD *)(result + 32);
  v4 = (unsigned int *)result;
  n = a3;
  v5 = 32 - v3;
  src = a2;
  if ( a3 < 32 - v3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v4[8] = n + v3;
    return result;
  }
  v297 = *(_DWORD *)(result + 36);
  v294 = *(_DWORD *)(result + 40);
  v296 = *(_DWORD *)(result + 44);
  v221 = *(_DWORD *)(result + 48);
  v214 = *(_DWORD *)(result + 52);
  v216 = *(_DWORD *)(result + 56);
  v219 = *(_DWORD *)(result + 60);
  v223 = *(_DWORD *)(result + 64);
  v241 = *(_DWORD *)(result + 68);
  v225 = *(_DWORD *)(result + 72);
  v232 = *(_DWORD *)(result + 76);
  v290 = *(_DWORD *)(result + 80);
  v243 = *(_DWORD *)(result + 84);
  v229 = *(_DWORD *)(result + 88);
  v235 = *(_DWORD *)(result + 92);
  v238 = *(_DWORD *)(result + 96);
  v264 = *(_DWORD *)(result + 100);
  v246 = *(_DWORD *)(result + 104);
  v252 = *(_DWORD *)(result + 108);
  v258 = *(_DWORD *)(result + 112);
  v267 = *(_DWORD *)(result + 116);
  v249 = *(_DWORD *)(result + 120);
  v255 = *(_DWORD *)(result + 124);
  v261 = *(_DWORD *)(result + 128);
  v285 = *(_DWORD *)(result + 132);
  v269 = *(_DWORD *)(result + 136);
  v275 = *(_DWORD *)(result + 140);
  v280 = *(_DWORD *)(result + 144);
  v288 = *(_DWORD *)(result + 148);
  v272 = *(_DWORD *)(result + 152);
  v278 = *(_DWORD *)(result + 156);
  v283 = *(_DWORD *)(result + 160);
  if ( !a3 )
    goto LABEL_23;
  v213 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v213 + v3;
    v3 += v5;
    result = (unsigned int)memcpy(v6, src, v5);
    n -= v5;
    src += v5;
    if ( v3 == 32 )
      break;
    if ( !n )
      goto LABEL_22;
LABEL_5:
    v5 = 32 - v3;
  }
  v7 = v261 ^ v238 ^ v223 ^ v283;
  v8 = v275 ^ v252 ^ v296 ^ v232 ^ v7;
  v9 = v221 ^ v290 ^ v280 ^ v258 ^ v7;
  v10 = v8 ^ v290;
  v291 = v7;
  v11 = bswap32(v213[5]);
  v12 = v280;
  v207 = bswap32(v213[7]);
  v281 = bswap32(v213[2]);
  v13 = bswap32(v213[6]);
  v308 = v8 ^ v12;
  v301 = v10;
  v14 = v278 ^ v255 ^ v219 ^ v235;
  v303 = v8 ^ v258;
  v15 = v243 ^ v214 ^ v288;
  v16 = v272 ^ v249 ^ v229 ^ v216;
  v259 = v14 ^ v283;
  v17 = v14 ^ v223;
  v224 = v14 ^ v238;
  v18 = v246 ^ v269 ^ v294 ^ v225;
  v19 = v214;
  v215 = v17;
  v239 = v14 ^ v261;
  v20 = v15 ^ v267;
  v21 = v9 ^ v267 ^ v8 ^ v12 ^ v14 ^ v283 ^ v11;
  v262 = v9 ^ v19;
  v306 = v18 ^ v275;
  v276 = bswap32(v213[1]);
  v313 = v9 ^ v288;
  v22 = v9 ^ v19 ^ v301;
  v298 = bswap32(v213[3]);
  v312 = v20 ^ v249;
  v250 = v20 ^ v272;
  v23 = v20 ^ v229;
  v273 = v20 ^ v216;
  v299 = v16 ^ v219;
  v24 = v16 ^ v255;
  v25 = v16 ^ v235;
  v230 = v16 ^ v278;
  v26 = v285 ^ v297 ^ v241 ^ v264 ^ v291;
  v305 = v285 ^ v291;
  v222 = v8 ^ v221;
  v220 = v18 ^ v296;
  v310 = v18 ^ v232;
  v286 = v18 ^ v252;
  v27 = v23 ^ v9 ^ v267;
  v28 = v9 ^ v243;
  v29 = v303 ^ v9 ^ v243 ^ v239;
  v30 = v291;
  v233 = v26 ^ v246;
  v236 = v11 ^ v23 ^ v299;
  v247 = v291 ^ v297;
  v292 = v241 ^ v291;
  v265 = v30 ^ v264;
  v253 = bswap32(v213[4]);
  v244 = v21 ^ v276 ^ v13;
  v217 = v26 ^ v294;
  v31 = v26 ^ v269;
  v32 = v26 ^ v225;
  v256 = v27 ^ v298 ^ v207;
  v226 = v28 ^ v273 ^ v253;
  v295 = v220 ^ v215 ^ v308;
  v33 = bswap32(*v213);
  v309 = v286 ^ v239 ^ v301;
  v34 = v298 ^ v207 ^ v24 ^ v250;
  v35 = v244;
  v36 = v13 ^ v281 ^ v207;
  v245 = __ROR4__(v22 ^ v224 ^ v298 ^ v207, 31);
  v37 = v239;
  v268 = __ROR4__(v29 ^ v36, 30);
  v289 = __ROR4__(v35, 29);
  v314 = v306 ^ v259 ^ v303 ^ v11;
  v38 = v230;
  v302 = v262 ^ v250;
  v251 = __ROR4__(v256, 30);
  v39 = v239 ^ v230 ^ v253;
  v237 = __ROR4__(v236, 31);
  v263 = __ROR4__(v24 ^ v224 ^ v11, 30);
  v279 = __ROR4__(v34, 29);
  v231 = __ROR4__(v226, 31);
  v284 = __ROR4__(v39, 29);
  v304 = v273 ^ v38;
  v240 = __ROR4__(v25 ^ v215 ^ v13, 31);
  v40 = v305 ^ v259 ^ v233 ^ v11 ^ v13;
  v257 = __ROR4__(v25 ^ v312 ^ v253, 30);
  v300 = v299 ^ v259;
  v274 = __ROR4__(v36 ^ v312 ^ v313, 29);
  v270 = v217 ^ v306;
  v307 = v310 ^ v233;
  v41 = v310 ^ v224 ^ v222;
  v311 = v286 ^ v31;
  v42 = v265 ^ v37 ^ v32;
  v227 = v265 ^ v259;
  v43 = v292 ^ v37;
  v44 = v292 ^ v224 ^ v217;
  v260 = v309 ^ v276 ^ v13;
  v218 = v302 ^ v11;
  v293 = v41 ^ v281 ^ v207;
  v45 = v270 ^ v281;
  v234 = v220 ^ v32 ^ v276;
  v271 = v40;
  v46 = v247 ^ v215 ^ v31 ^ v276;
  v287 = v11 ^ v227;
  v266 = v13 ^ v43;
  v242 = v207 ^ v247 ^ v224;
  v248 = v42 ^ v13 ^ v207;
  v277 = v311 ^ v13 ^ v207;
  v282 = v314 ^ v33 ^ v207;
  v47 = v253 ^ v222 ^ v313 ^ v215;
  v228 = v44 ^ v33 ^ v207;
  v48 = 0;
  v49 = -533497832;
  v50 = v218;
  v51 = v215 ^ v305 ^ v33;
  v254 = v307 ^ v33 ^ v207;
  v52 = v46;
  v53 = v295 ^ v298;
  v54 = v304 ^ v13;
  v55 = v47;
  v56 = v300 ^ v207;
  v208 = 809079974;
  while ( 1 )
  {
    v57 = v45 ^ v53;
    v58 = v56 ^ v55;
    v59 = v57 ^ v51 & v53;
    v60 = (v50 | v54) ^ v55;
    v61 = v51 & v53 ^ ~v52;
    v62 = v55 & v50;
    v63 = v61 | v59;
    v64 = ~v54 ^ v62;
    v65 = (v51 | v52) ^ v53;
    v66 = v51 ^ (v61 | v59);
    v67 = v58 & v60 ^ v64;
    v68 = v62 ^ v58;
    v69 = v57 & v65 ^ v61;
    v70 = v64 | v68;
    v71 = v68 ^ v66 ^ v67;
    v72 = v59 ^ v69;
    v73 = ~v65 ^ v63;
    v74 = v69 & v63;
    v75 = v71 ^ __ROR4__(v66, 30);
    v76 = v50 ^ v70 ^ v73;
    v77 = ~v60 ^ v70 ^ v74;
    v78 = v67 & v70 ^ v72;
    v79 = v76 ^ __ROR4__(v73, 30);
    v80 = v77 ^ __ROR4__(v74, 30);
    v81 = v75 ^ __ROR4__(v71, 18);
    v82 = v78 ^ __ROR4__(v72, 30);
    v83 = v79 ^ __ROR4__(v76, 18);
    v84 = v80 ^ __ROR4__(v77, 18);
    v85 = v81 ^ __ROR4__(v75, 22);
    v86 = v82 ^ __ROR4__(v78, 18);
    v52 = v83 ^ __ROR4__(v79, 22);
    v45 = v84 ^ __ROR4__(v80, 22);
    v53 = v86 ^ __ROR4__(v82, 22);
    v50 = __ROR4__(v83, 31);
    v54 = __ROR4__(v84, 31);
    v55 = v49 ^ __ROR4__(v81, 31);
    v56 = __ROR4__(v86, 31);
    ++v48;
    v51 = v85 ^ v208;
    if ( v48 == 8 )
      break;
    v208 = dword_180180[v48];
    v49 = dword_1801A0[v48];
  }
  v87 = 23617341;
  v294 = v52;
  v216 = v50;
  v88 = 0;
  v296 = v45;
  v219 = v54;
  v221 = v53;
  v223 = v56;
  v297 = v51;
  v214 = v55;
  v89 = v228;
  v90 = v231;
  v91 = v234;
  v92 = v237;
  v93 = v293;
  v94 = v240;
  v95 = v242;
  v96 = v245;
  v209 = -1226960659;
  while ( 1 )
  {
    v97 = v91 ^ v93;
    v98 = v94 ^ v96;
    v99 = v97 ^ v95 & v93;
    v100 = (v90 | v92) ^ v96;
    v101 = v95 & v93 ^ ~v89;
    v102 = v96 & v90;
    v103 = v101 | v99;
    v104 = ~v92 ^ v102;
    v105 = (v95 | v89) ^ v93;
    v106 = v95 ^ (v101 | v99);
    v107 = v98 & v100 ^ v104;
    v108 = v102 ^ v98;
    v109 = v97 & v105 ^ v101;
    v110 = v104 | v108;
    v111 = v108 ^ v106 ^ v107;
    v112 = v99 ^ v109;
    v113 = ~v105 ^ v103;
    v114 = v109 & v103;
    v115 = v111 ^ __ROR4__(v106, 30);
    v116 = v90 ^ v110 ^ v113;
    v117 = ~v100 ^ v110 ^ v114;
    v118 = v107 & v110 ^ v112;
    v119 = v116 ^ __ROR4__(v113, 30);
    v120 = v117 ^ __ROR4__(v114, 30);
    v121 = v115 ^ __ROR4__(v111, 18);
    v122 = v118 ^ __ROR4__(v112, 30);
    v123 = v119 ^ __ROR4__(v116, 18);
    v124 = v120 ^ __ROR4__(v117, 18);
    v125 = v121 ^ __ROR4__(v115, 22);
    v126 = v122 ^ __ROR4__(v118, 18);
    v89 = v123 ^ __ROR4__(v119, 22);
    v91 = v124 ^ __ROR4__(v120, 22);
    v93 = v126 ^ __ROR4__(v122, 22);
    v90 = __ROR4__(v123, 31);
    v92 = __ROR4__(v124, 31);
    v96 = v87 ^ __ROR4__(v121, 31);
    v94 = __ROR4__(v126, 31);
    ++v88;
    v95 = v125 ^ v209;
    if ( v88 == 8 )
      break;
    v209 = dword_1801C0[v88];
    v87 = dword_1801E0[v88];
  }
  v127 = 0;
  v225 = v89;
  v229 = v90;
  v232 = v91;
  v235 = v92;
  v290 = v93;
  v238 = v94;
  v241 = v95;
  v243 = v96;
  v128 = -497126719;
  v129 = v248;
  v130 = v251;
  v131 = v254;
  v132 = v257;
  v133 = v260;
  v134 = v263;
  v135 = v266;
  v136 = v268;
  v210 = -64955950;
  while ( 1 )
  {
    v137 = v131 ^ v133;
    v138 = v134 ^ v136;
    v139 = v137 ^ v135 & v133;
    v140 = (v130 | v132) ^ v136;
    v141 = v135 & v133 ^ ~v129;
    v142 = v136 & v130;
    v143 = v141 | v139;
    v144 = ~v132 ^ v142;
    v145 = (v135 | v129) ^ v133;
    v146 = v135 ^ (v141 | v139);
    v147 = v138 & v140 ^ v144;
    v148 = v142 ^ v138;
    v149 = v137 & v145 ^ v141;
    v150 = v144 | v148;
    v151 = v148 ^ v146 ^ v147;
    v152 = v139 ^ v149;
    v153 = ~v145 ^ v143;
    v154 = v149 & v143;
    v155 = v151 ^ __ROR4__(v146, 30);
    v156 = v130 ^ v150 ^ v153;
    v157 = ~v140 ^ v150 ^ v154;
    v158 = v147 & v150 ^ v152;
    v159 = v156 ^ __ROR4__(v153, 30);
    v160 = v157 ^ __ROR4__(v154, 30);
    v161 = v155 ^ __ROR4__(v151, 18);
    v162 = v158 ^ __ROR4__(v152, 30);
    v163 = v159 ^ __ROR4__(v156, 18);
    v164 = v160 ^ __ROR4__(v157, 18);
    v165 = v161 ^ __ROR4__(v155, 22);
    v166 = v162 ^ __ROR4__(v158, 18);
    v129 = v163 ^ __ROR4__(v159, 22);
    v131 = v164 ^ __ROR4__(v160, 22);
    v133 = v166 ^ __ROR4__(v162, 22);
    v130 = __ROR4__(v163, 31);
    v132 = __ROR4__(v164, 31);
    v136 = v128 ^ __ROR4__(v161, 31);
    v134 = __ROR4__(v166, 31);
    ++v127;
    v135 = v165 ^ v210;
    if ( v127 == 8 )
      break;
    v210 = dword_180200[v127];
    v128 = dword_180220[v127];
  }
  v167 = -534197825;
  v246 = v129;
  v249 = v130;
  v168 = 0;
  v252 = v131;
  v255 = v132;
  v258 = v133;
  v261 = v134;
  v264 = v135;
  v267 = v136;
  result = v271;
  v169 = v274;
  v170 = v277;
  v171 = v279;
  v172 = v282;
  v173 = v284;
  v174 = v287;
  v175 = v289;
  v211 = -1307332699;
  while ( 1 )
  {
    v176 = v170 ^ v172;
    v177 = v173 ^ v175;
    v178 = v176 ^ v174 & v172;
    v179 = (v169 | v171) ^ v175;
    v180 = v174 & v172 ^ ~result;
    v181 = v175 & v169;
    v182 = v180 | v178;
    v183 = ~v171 ^ v181;
    v184 = (v174 | result) ^ v172;
    v185 = v174 ^ (v180 | v178);
    v186 = v177 & v179 ^ v183;
    v187 = v181 ^ v177;
    v188 = v176 & v184 ^ v180;
    v189 = v183 | v187;
    v190 = v187 ^ v185 ^ v186;
    v191 = v178 ^ v188;
    v192 = ~v184 ^ v182;
    v193 = v188 & v182;
    v194 = v190 ^ __ROR4__(v185, 30);
    v195 = v169 ^ v189 ^ v192;
    v196 = ~v179 ^ v189 ^ v193;
    v197 = v186 & v189 ^ v191;
    v198 = v195 ^ __ROR4__(v192, 30);
    v199 = v196 ^ __ROR4__(v193, 30);
    v200 = v194 ^ __ROR4__(v190, 18);
    v201 = v197 ^ __ROR4__(v191, 30);
    v202 = v198 ^ __ROR4__(v195, 18);
    v203 = v199 ^ __ROR4__(v196, 18);
    v204 = v200 ^ __ROR4__(v194, 22);
    v205 = v201 ^ __ROR4__(v197, 18);
    result = v202 ^ __ROR4__(v198, 22);
    v170 = v203 ^ __ROR4__(v199, 22);
    v172 = v205 ^ __ROR4__(v201, 22);
    v169 = __ROR4__(v202, 31);
    v171 = __ROR4__(v203, 31);
    v175 = v167 ^ __ROR4__(v200, 31);
    v173 = __ROR4__(v205, 31);
    ++v168;
    v174 = v204 ^ v211;
    if ( v168 == 8 )
      break;
    v211 = dword_1802E0[v168];
    v167 = dword_180300[v168];
  }
  v275 = v170;
  v278 = v171;
  v3 = 0;
  v269 = result;
  v272 = v169;
  v280 = v172;
  v283 = v173;
  v285 = v174;
  v288 = v175;
  if ( n )
    goto LABEL_5;
LABEL_22:
  v4 = v213;
LABEL_23:
  v4[9] = v297;
  v4[10] = v294;
  v4[11] = v296;
  v4[12] = v221;
  v4[13] = v214;
  v4[14] = v216;
  v4[15] = v219;
  v4[16] = v223;
  v4[17] = v241;
  v4[18] = v225;
  v4[19] = v232;
  v4[20] = v290;
  v4[21] = v243;
  v4[22] = v229;
  v4[23] = v235;
  v4[24] = v238;
  v4[25] = v264;
  v4[26] = v246;
  v4[27] = v252;
  v4[28] = v258;
  v4[29] = v267;
  v4[30] = v249;
  v4[31] = v255;
  v4[32] = v261;
  v4[33] = v285;
  v4[34] = v269;
  v4[35] = v275;
  v4[36] = v280;
  v4[37] = v288;
  v4[38] = v272;
  v4[39] = v278;
  v4[40] = v283;
  v4[8] = v3;
  return result;
}
