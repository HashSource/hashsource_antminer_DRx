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
  int v22; // r5
  int v23; // r8
  int v24; // r0
  int v25; // lr
  int v26; // r2
  int v27; // r3
  int v28; // r11
  int v29; // r6
  int v30; // r5
  int v31; // r4
  unsigned int v32; // r11
  int v33; // r1
  int v34; // r2
  int v35; // lr
  int v36; // r7
  int v37; // r12
  int v38; // r2
  int v39; // r3
  int v40; // r6
  int v41; // lr
  int v42; // r12
  int v43; // r8
  int v44; // r2
  int v45; // r3
  int v46; // r5
  int v47; // r8
  int v48; // r10
  int v49; // lr
  int v50; // r4
  int v51; // r0
  int v52; // r12
  int v53; // r3
  int v54; // r1
  int v55; // r11
  int v56; // r2
  int v57; // r11
  int v58; // r9
  int v59; // r5
  int v60; // r6
  int v61; // r1
  int v62; // r7
  int v63; // r3
  int v64; // r0
  int v65; // r4
  int v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // r6
  int v70; // r1
  int v71; // r9
  int v72; // r0
  int v73; // r2
  int v74; // r4
  int v75; // lr
  int v76; // r3
  int v77; // r11
  int v78; // r0
  int v79; // r2
  int v80; // r1
  int v81; // r12
  int v82; // lr
  int v83; // r3
  int v84; // r4
  int v85; // r11
  int v86; // r9
  int v87; // r8
  int v88; // r0
  unsigned int v89; // lr
  int v90; // r2
  unsigned int v91; // r3
  int v92; // r12
  unsigned int v93; // r11
  int v94; // r4
  int v95; // r1
  int v96; // r2
  int v97; // r11
  int v98; // r10
  int v99; // r5
  int v100; // r6
  int v101; // r1
  int v102; // r7
  int v103; // r3
  int v104; // r0
  int v105; // r4
  int v106; // r12
  int v107; // r1
  int v108; // r2
  int v109; // r6
  int v110; // r1
  int v111; // r10
  int v112; // r0
  int v113; // r2
  int v114; // r4
  int v115; // lr
  int v116; // r3
  int v117; // r11
  int v118; // r0
  int v119; // r2
  int v120; // r1
  int v121; // r12
  int v122; // lr
  int v123; // r3
  int v124; // r4
  int v125; // r11
  int v126; // r8
  int v127; // r10
  int v128; // r0
  unsigned int v129; // lr
  int v130; // r2
  unsigned int v131; // r3
  int v132; // r12
  unsigned int v133; // r11
  int v134; // r4
  int v135; // r1
  int v136; // r2
  int v137; // r11
  int v138; // r9
  int v139; // r5
  int v140; // r6
  int v141; // r1
  int v142; // r7
  int v143; // r3
  int v144; // r0
  int v145; // r4
  int v146; // r12
  int v147; // r1
  int v148; // r2
  int v149; // r6
  int v150; // r1
  int v151; // r9
  int v152; // r0
  int v153; // r2
  int v154; // r4
  int v155; // lr
  int v156; // r3
  int v157; // r11
  int v158; // r0
  int v159; // r2
  int v160; // r1
  int v161; // r12
  int v162; // lr
  int v163; // r3
  int v164; // r4
  int v165; // r11
  int v166; // r9
  int v167; // r8
  unsigned int v168; // lr
  int v169; // r2
  unsigned int v170; // r3
  int v171; // r12
  unsigned int v172; // r11
  int v173; // r4
  int v174; // r1
  int v175; // r2
  int v176; // r11
  int v177; // r10
  int v178; // r5
  unsigned int v179; // r6
  int v180; // r1
  int v181; // r7
  int v182; // r3
  unsigned int v183; // r0
  int v184; // r4
  int v185; // r12
  int v186; // r1
  int v187; // r2
  int v188; // r6
  int v189; // r1
  int v190; // r10
  int v191; // r0
  int v192; // r2
  int v193; // r4
  int v194; // lr
  int v195; // r3
  int v196; // r11
  int v197; // r0
  int v198; // r2
  int v199; // r1
  int v200; // r12
  int v201; // lr
  int v202; // r3
  int v203; // r4
  int v204; // r11
  size_t n; // [sp+4h] [bp-D8h]
  unsigned int v206; // [sp+8h] [bp-D4h]
  int v207; // [sp+8h] [bp-D4h]
  int v208; // [sp+8h] [bp-D4h]
  int v209; // [sp+8h] [bp-D4h]
  int v210; // [sp+8h] [bp-D4h]
  char *src; // [sp+Ch] [bp-D0h]
  unsigned int *v212; // [sp+10h] [bp-CCh]
  int v213; // [sp+14h] [bp-C8h]
  int v214; // [sp+14h] [bp-C8h]
  int v215; // [sp+18h] [bp-C4h]
  int v216; // [sp+18h] [bp-C4h]
  int v217; // [sp+18h] [bp-C4h]
  int v218; // [sp+1Ch] [bp-C0h]
  int v219; // [sp+1Ch] [bp-C0h]
  int v220; // [sp+20h] [bp-BCh]
  int v221; // [sp+20h] [bp-BCh]
  int v222; // [sp+24h] [bp-B8h]
  int v223; // [sp+24h] [bp-B8h]
  int v224; // [sp+28h] [bp-B4h]
  int v225; // [sp+28h] [bp-B4h]
  int v226; // [sp+28h] [bp-B4h]
  int v227; // [sp+28h] [bp-B4h]
  unsigned int v228; // [sp+2Ch] [bp-B0h]
  int v229; // [sp+2Ch] [bp-B0h]
  unsigned int v230; // [sp+2Ch] [bp-B0h]
  int v231; // [sp+30h] [bp-ACh]
  int v232; // [sp+30h] [bp-ACh]
  int v233; // [sp+30h] [bp-ACh]
  unsigned int v234; // [sp+34h] [bp-A8h]
  int v235; // [sp+34h] [bp-A8h]
  unsigned int v236; // [sp+34h] [bp-A8h]
  unsigned int v237; // [sp+38h] [bp-A4h]
  int v238; // [sp+38h] [bp-A4h]
  unsigned int v239; // [sp+38h] [bp-A4h]
  int v240; // [sp+3Ch] [bp-A0h]
  int v241; // [sp+3Ch] [bp-A0h]
  int v242; // [sp+40h] [bp-9Ch]
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
  v220 = *(_DWORD *)(result + 48);
  v213 = *(_DWORD *)(result + 52);
  v215 = *(_DWORD *)(result + 56);
  v218 = *(_DWORD *)(result + 60);
  v222 = *(_DWORD *)(result + 64);
  v240 = *(_DWORD *)(result + 68);
  v224 = *(_DWORD *)(result + 72);
  v231 = *(_DWORD *)(result + 76);
  v290 = *(_DWORD *)(result + 80);
  v242 = *(_DWORD *)(result + 84);
  v228 = *(_DWORD *)(result + 88);
  v234 = *(_DWORD *)(result + 92);
  v237 = *(_DWORD *)(result + 96);
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
  v212 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v212 + v3;
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
  v7 = v261 ^ v237 ^ v222 ^ v283;
  v8 = v275 ^ v252 ^ v296 ^ v231 ^ v7;
  v9 = v220 ^ v290 ^ v280 ^ v258 ^ v7;
  v10 = v8 ^ v290;
  v291 = v7;
  v11 = bswap32(v212[5]);
  v12 = v280;
  v206 = bswap32(v212[7]);
  v281 = bswap32(v212[2]);
  v13 = bswap32(v212[6]);
  v308 = v8 ^ v12;
  v301 = v10;
  v14 = v278 ^ v255 ^ v218 ^ v234;
  v303 = v8 ^ v258;
  v15 = v242 ^ v213 ^ v288;
  v16 = v272 ^ v249 ^ v228 ^ v215;
  v259 = v14 ^ v283;
  v17 = v14 ^ v222;
  v243 = v9 ^ v242;
  v223 = v14 ^ v237;
  v18 = v246 ^ v269 ^ v294 ^ v224;
  v19 = v213;
  v214 = v17;
  v238 = v14 ^ v261;
  v20 = v15 ^ v267;
  v21 = v9 ^ v267 ^ v8 ^ v12 ^ v14 ^ v283 ^ v11;
  v262 = v9 ^ v19;
  v306 = v18 ^ v275;
  v276 = bswap32(v212[1]);
  v313 = v9 ^ v288;
  v298 = bswap32(v212[3]);
  v312 = v20 ^ v249;
  v250 = v20 ^ v272;
  v22 = v20 ^ v228;
  v273 = v20 ^ v215;
  v299 = v16 ^ v218;
  v23 = v16 ^ v255;
  v24 = v16 ^ v234;
  v229 = v16 ^ v278;
  v25 = v285 ^ v297 ^ v240 ^ v264 ^ v291;
  v305 = v285 ^ v291;
  v221 = v8 ^ v220;
  v219 = v18 ^ v296;
  v310 = v18 ^ v231;
  v286 = v18 ^ v252;
  v26 = v22 ^ v9 ^ v267;
  v27 = v303 ^ v243 ^ v238;
  v28 = v243 ^ v273;
  v29 = v291;
  v232 = v25 ^ v246;
  v235 = v11 ^ v22 ^ v299;
  v247 = v291 ^ v297;
  v292 = v240 ^ v291;
  v265 = v29 ^ v264;
  v253 = bswap32(v212[4]);
  v244 = v21 ^ v276 ^ v13;
  v216 = v25 ^ v294;
  v30 = v25 ^ v269;
  v31 = v25 ^ v224;
  v256 = v26 ^ v298 ^ v206;
  v225 = v28 ^ v253;
  v295 = v219 ^ v214 ^ v308;
  v32 = bswap32(*v212);
  v309 = v286 ^ v238 ^ v301;
  v33 = v298 ^ v206 ^ v23 ^ v250;
  v34 = v244;
  v35 = v13 ^ v281 ^ v206;
  v245 = __ROR4__(v262 ^ v301 ^ v223 ^ v298 ^ v206, 31);
  v36 = v238;
  v268 = __ROR4__(v27 ^ v35, 30);
  v289 = __ROR4__(v34, 29);
  v314 = v306 ^ v14 ^ v283 ^ v303 ^ v11;
  v37 = v229;
  v302 = v262 ^ v250;
  v251 = __ROR4__(v256, 30);
  v38 = v238 ^ v229 ^ v253;
  v236 = __ROR4__(v235, 31);
  v263 = __ROR4__(v23 ^ v223 ^ v11, 30);
  v279 = __ROR4__(v33, 29);
  v230 = __ROR4__(v225, 31);
  v284 = __ROR4__(v38, 29);
  v304 = v273 ^ v37;
  v239 = __ROR4__(v24 ^ v214 ^ v13, 31);
  v39 = v305 ^ v259 ^ v232 ^ v11 ^ v13;
  v257 = __ROR4__(v24 ^ v312 ^ v253, 30);
  v300 = v299 ^ v259;
  v274 = __ROR4__(v35 ^ v312 ^ v313, 29);
  v270 = v216 ^ v306;
  v307 = v310 ^ v232;
  v40 = v310 ^ v223 ^ v221;
  v311 = v286 ^ v30;
  v41 = v265 ^ v36 ^ v31;
  v226 = v265 ^ v259;
  v42 = v292 ^ v36;
  v43 = v292 ^ v223 ^ v216;
  v260 = v309 ^ v276 ^ v13;
  v217 = v302 ^ v11;
  v293 = v40 ^ v281 ^ v206;
  v44 = v270 ^ v281;
  v233 = v219 ^ v31 ^ v276;
  v271 = v39;
  v45 = v247 ^ v214 ^ v30 ^ v276;
  v287 = v11 ^ v226;
  v266 = v13 ^ v42;
  v241 = v206 ^ v247 ^ v223;
  v248 = v41 ^ v13 ^ v206;
  v277 = v311 ^ v13 ^ v206;
  v282 = v314 ^ v32 ^ v206;
  v46 = v253 ^ v221 ^ v313 ^ v214;
  v227 = v43 ^ v32 ^ v206;
  v47 = 0;
  v48 = -533497832;
  v49 = v217;
  v50 = v214 ^ v305 ^ v32;
  v254 = v307 ^ v32 ^ v206;
  v51 = v45;
  v52 = v295 ^ v298;
  v53 = v304 ^ v13;
  v54 = v46;
  v55 = v300 ^ v206;
  v207 = 809079974;
  while ( 1 )
  {
    v56 = v44 ^ v52;
    v57 = v55 ^ v54;
    v58 = v56 ^ v50 & v52;
    v59 = (v49 | v53) ^ v54;
    v60 = v50 & v52 ^ ~v51;
    v61 = v54 & v49;
    v62 = v60 | v58;
    v63 = ~v53 ^ v61;
    v64 = (v50 | v51) ^ v52;
    v65 = v50 ^ (v60 | v58);
    v66 = v57 & v59 ^ v63;
    v67 = v61 ^ v57;
    v68 = v56 & v64 ^ v60;
    v69 = v63 | v67;
    v70 = v67 ^ v65 ^ v66;
    v71 = v58 ^ v68;
    v72 = ~v64 ^ v62;
    v73 = v68 & v62;
    v74 = v70 ^ __ROR4__(v65, 30);
    v75 = v49 ^ v69 ^ v72;
    v76 = ~v59 ^ v69 ^ v73;
    v77 = v66 & v69 ^ v71;
    v78 = v75 ^ __ROR4__(v72, 30);
    v79 = v76 ^ __ROR4__(v73, 30);
    v80 = v74 ^ __ROR4__(v70, 18);
    v81 = v77 ^ __ROR4__(v71, 30);
    v82 = v78 ^ __ROR4__(v75, 18);
    v83 = v79 ^ __ROR4__(v76, 18);
    v84 = v80 ^ __ROR4__(v74, 22);
    v85 = v81 ^ __ROR4__(v77, 18);
    v51 = v82 ^ __ROR4__(v78, 22);
    v44 = v83 ^ __ROR4__(v79, 22);
    v52 = v85 ^ __ROR4__(v81, 22);
    v49 = __ROR4__(v82, 31);
    v53 = __ROR4__(v83, 31);
    v54 = v48 ^ __ROR4__(v80, 31);
    v55 = __ROR4__(v85, 31);
    ++v47;
    v50 = v84 ^ v207;
    if ( v47 == 8 )
      break;
    v207 = dword_181AA8[v47];
    v48 = dword_181AC8[v47];
  }
  v86 = 23617341;
  v294 = v51;
  v215 = v49;
  v87 = 0;
  v296 = v44;
  v218 = v53;
  v220 = v52;
  v222 = v55;
  v297 = v50;
  v213 = v54;
  v88 = v227;
  v89 = v230;
  v90 = v233;
  v91 = v236;
  v92 = v293;
  v93 = v239;
  v94 = v241;
  v95 = v245;
  v208 = -1226960659;
  while ( 1 )
  {
    v96 = v90 ^ v92;
    v97 = v93 ^ v95;
    v98 = v96 ^ v94 & v92;
    v99 = (v89 | v91) ^ v95;
    v100 = v94 & v92 ^ ~v88;
    v101 = v95 & v89;
    v102 = v100 | v98;
    v103 = ~v91 ^ v101;
    v104 = (v94 | v88) ^ v92;
    v105 = v94 ^ (v100 | v98);
    v106 = v97 & v99 ^ v103;
    v107 = v101 ^ v97;
    v108 = v96 & v104 ^ v100;
    v109 = v103 | v107;
    v110 = v107 ^ v105 ^ v106;
    v111 = v98 ^ v108;
    v112 = ~v104 ^ v102;
    v113 = v108 & v102;
    v114 = v110 ^ __ROR4__(v105, 30);
    v115 = v89 ^ v109 ^ v112;
    v116 = ~v99 ^ v109 ^ v113;
    v117 = v106 & v109 ^ v111;
    v118 = v115 ^ __ROR4__(v112, 30);
    v119 = v116 ^ __ROR4__(v113, 30);
    v120 = v114 ^ __ROR4__(v110, 18);
    v121 = v117 ^ __ROR4__(v111, 30);
    v122 = v118 ^ __ROR4__(v115, 18);
    v123 = v119 ^ __ROR4__(v116, 18);
    v124 = v120 ^ __ROR4__(v114, 22);
    v125 = v121 ^ __ROR4__(v117, 18);
    v88 = v122 ^ __ROR4__(v118, 22);
    v90 = v123 ^ __ROR4__(v119, 22);
    v92 = v125 ^ __ROR4__(v121, 22);
    v89 = __ROR4__(v122, 31);
    v91 = __ROR4__(v123, 31);
    v95 = v86 ^ __ROR4__(v120, 31);
    v93 = __ROR4__(v125, 31);
    ++v87;
    v94 = v124 ^ v208;
    if ( v87 == 8 )
      break;
    v208 = dword_181AE8[v87];
    v86 = dword_181B08[v87];
  }
  v126 = 0;
  v224 = v88;
  v228 = v89;
  v231 = v90;
  v234 = v91;
  v290 = v92;
  v237 = v93;
  v240 = v94;
  v242 = v95;
  v127 = -497126719;
  v128 = v248;
  v129 = v251;
  v130 = v254;
  v131 = v257;
  v132 = v260;
  v133 = v263;
  v134 = v266;
  v135 = v268;
  v209 = -64955950;
  while ( 1 )
  {
    v136 = v130 ^ v132;
    v137 = v133 ^ v135;
    v138 = v136 ^ v134 & v132;
    v139 = (v129 | v131) ^ v135;
    v140 = v134 & v132 ^ ~v128;
    v141 = v135 & v129;
    v142 = v140 | v138;
    v143 = ~v131 ^ v141;
    v144 = (v134 | v128) ^ v132;
    v145 = v134 ^ (v140 | v138);
    v146 = v137 & v139 ^ v143;
    v147 = v141 ^ v137;
    v148 = v136 & v144 ^ v140;
    v149 = v143 | v147;
    v150 = v147 ^ v145 ^ v146;
    v151 = v138 ^ v148;
    v152 = ~v144 ^ v142;
    v153 = v148 & v142;
    v154 = v150 ^ __ROR4__(v145, 30);
    v155 = v129 ^ v149 ^ v152;
    v156 = ~v139 ^ v149 ^ v153;
    v157 = v146 & v149 ^ v151;
    v158 = v155 ^ __ROR4__(v152, 30);
    v159 = v156 ^ __ROR4__(v153, 30);
    v160 = v154 ^ __ROR4__(v150, 18);
    v161 = v157 ^ __ROR4__(v151, 30);
    v162 = v158 ^ __ROR4__(v155, 18);
    v163 = v159 ^ __ROR4__(v156, 18);
    v164 = v160 ^ __ROR4__(v154, 22);
    v165 = v161 ^ __ROR4__(v157, 18);
    v128 = v162 ^ __ROR4__(v158, 22);
    v130 = v163 ^ __ROR4__(v159, 22);
    v132 = v165 ^ __ROR4__(v161, 22);
    v129 = __ROR4__(v162, 31);
    v131 = __ROR4__(v163, 31);
    v135 = v127 ^ __ROR4__(v160, 31);
    v133 = __ROR4__(v165, 31);
    ++v126;
    v134 = v164 ^ v209;
    if ( v126 == 8 )
      break;
    v209 = dword_181B28[v126];
    v127 = dword_181B48[v126];
  }
  v166 = -534197825;
  v246 = v128;
  v249 = v129;
  v167 = 0;
  v252 = v130;
  v255 = v131;
  v258 = v132;
  v261 = v133;
  v264 = v134;
  v267 = v135;
  result = v271;
  v168 = v274;
  v169 = v277;
  v170 = v279;
  v171 = v282;
  v172 = v284;
  v173 = v287;
  v174 = v289;
  v210 = -1307332699;
  while ( 1 )
  {
    v175 = v169 ^ v171;
    v176 = v172 ^ v174;
    v177 = v175 ^ v173 & v171;
    v178 = (v168 | v170) ^ v174;
    v179 = v173 & v171 ^ ~result;
    v180 = v174 & v168;
    v181 = v179 | v177;
    v182 = ~v170 ^ v180;
    v183 = (v173 | result) ^ v171;
    v184 = v173 ^ (v179 | v177);
    v185 = v176 & v178 ^ v182;
    v186 = v180 ^ v176;
    v187 = v175 & v183 ^ v179;
    v188 = v182 | v186;
    v189 = v186 ^ v184 ^ v185;
    v190 = v177 ^ v187;
    v191 = ~v183 ^ v181;
    v192 = v187 & v181;
    v193 = v189 ^ __ROR4__(v184, 30);
    v194 = v168 ^ v188 ^ v191;
    v195 = ~v178 ^ v188 ^ v192;
    v196 = v185 & v188 ^ v190;
    v197 = v194 ^ __ROR4__(v191, 30);
    v198 = v195 ^ __ROR4__(v192, 30);
    v199 = v193 ^ __ROR4__(v189, 18);
    v200 = v196 ^ __ROR4__(v190, 30);
    v201 = v197 ^ __ROR4__(v194, 18);
    v202 = v198 ^ __ROR4__(v195, 18);
    v203 = v199 ^ __ROR4__(v193, 22);
    v204 = v200 ^ __ROR4__(v196, 18);
    result = v201 ^ __ROR4__(v197, 22);
    v169 = v202 ^ __ROR4__(v198, 22);
    v171 = v204 ^ __ROR4__(v200, 22);
    v168 = __ROR4__(v201, 31);
    v170 = __ROR4__(v202, 31);
    v174 = v166 ^ __ROR4__(v199, 31);
    v172 = __ROR4__(v204, 31);
    ++v167;
    v173 = v203 ^ v210;
    if ( v167 == 8 )
      break;
    v210 = dword_181C08[v167];
    v166 = dword_181C28[v167];
  }
  v275 = v169;
  v278 = v170;
  v3 = 0;
  v269 = result;
  v272 = v168;
  v280 = v171;
  v283 = v172;
  v285 = v173;
  v288 = v174;
  if ( n )
    goto LABEL_5;
LABEL_22:
  v4 = v212;
LABEL_23:
  v4[9] = v297;
  v4[10] = v294;
  v4[11] = v296;
  v4[12] = v220;
  v4[13] = v213;
  v4[14] = v215;
  v4[15] = v218;
  v4[16] = v222;
  v4[17] = v240;
  v4[18] = v224;
  v4[19] = v231;
  v4[20] = v290;
  v4[21] = v242;
  v4[22] = v228;
  v4[23] = v234;
  v4[24] = v237;
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
