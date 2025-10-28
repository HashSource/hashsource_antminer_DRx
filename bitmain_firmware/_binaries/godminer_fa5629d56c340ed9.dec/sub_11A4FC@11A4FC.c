_DWORD *__fastcall sub_11A4FC(_DWORD *a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r4
  unsigned int v6; // r12
  unsigned int v7; // r6
  size_t v8; // r4
  unsigned int v9; // r5
  int v10; // r6
  char *v11; // r3
  int *v12; // r12
  int *v13; // r4
  int v14; // r0
  int v15; // r1
  int *v16; // lr
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r12
  int v21; // r11
  int v22; // r3
  unsigned int v23; // r4
  unsigned int v24; // r6
  int v25; // r0
  unsigned int v26; // r2
  unsigned int v27; // r3
  unsigned int v28; // r5
  _QWORD *v29; // r4
  _QWORD *v30; // lr
  int v31; // r11
  int *v32; // r10
  int v33; // r10
  int v34; // r3
  int v35; // r5
  _QWORD *v36; // r6
  _QWORD *v37; // r2
  int v38; // r12
  int v39; // r0
  int v40; // r4
  int v41; // r0
  int v42; // r7
  _DWORD *v43; // r12
  int v44; // r1
  int v45; // r5
  int v46; // r2
  int v47; // r0
  int v48; // r9
  int v49; // r7
  __int64 v50; // r2
  int v51; // r1
  int v52; // r9
  _QWORD *v53; // r4
  int v54; // r5
  int v55; // r0
  int v56; // r5
  _QWORD *v57; // r6
  int v58; // r7
  int v59; // r0
  int v60; // r1
  int v61; // r8
  int v62; // r0
  int v63; // r4
  int v64; // r7
  unsigned int v65; // r7
  int v66; // r5
  unsigned int v67; // r12
  _QWORD *v68; // lr
  int v69; // r1
  int v70; // r6
  __int64 v71; // r10
  int v72; // r0
  _QWORD *v73; // r9
  __int64 v74; // r2
  int v75; // r1
  int v76; // r5
  int v77; // r8
  _QWORD *v78; // r12
  int v79; // r8
  int v80; // r4
  int v81; // r12
  int v82; // r7
  int v83; // r12
  int v84; // r1
  int v85; // r9
  int v86; // r4
  _DWORD *v87; // r0
  int v88; // r8
  _DWORD *v89; // r12
  int v90; // r1
  int v91; // r6
  int v92; // r7
  int v93; // r0
  _DWORD *v94; // r4
  int v95; // r1
  int v96; // lr
  int v97; // r7
  int v98; // r4
  void **p_dest; // r3
  int *v100; // r1
  unsigned int v101; // t1
  unsigned int v102; // r2
  int *v103; // r1
  char *v104; // r3
  int v105; // r2
  int v106; // r0
  _DWORD *v107; // r3
  __int64 v109; // [sp+0h] [bp-1BCh]
  unsigned int v110; // [sp+14h] [bp-1A8h]
  unsigned int v111; // [sp+14h] [bp-1A8h]
  int v112; // [sp+14h] [bp-1A8h]
  int v113; // [sp+14h] [bp-1A8h]
  unsigned int v114; // [sp+18h] [bp-1A4h]
  int v115; // [sp+18h] [bp-1A4h]
  int v116; // [sp+1Ch] [bp-1A0h]
  __int64 v117; // [sp+1Ch] [bp-1A0h]
  unsigned int v118; // [sp+24h] [bp-198h]
  unsigned int v119; // [sp+24h] [bp-198h]
  _QWORD *v120; // [sp+24h] [bp-198h]
  int v121; // [sp+24h] [bp-198h]
  int v122; // [sp+28h] [bp-194h]
  unsigned int v123; // [sp+28h] [bp-194h]
  int v124; // [sp+28h] [bp-194h]
  unsigned int v125; // [sp+28h] [bp-194h]
  int v126; // [sp+2Ch] [bp-190h]
  unsigned int v127; // [sp+2Ch] [bp-190h]
  unsigned int v128; // [sp+2Ch] [bp-190h]
  int v129; // [sp+2Ch] [bp-190h]
  int v130; // [sp+30h] [bp-18Ch]
  unsigned int v131; // [sp+30h] [bp-18Ch]
  unsigned int v132; // [sp+30h] [bp-18Ch]
  int v133; // [sp+30h] [bp-18Ch]
  unsigned int v134; // [sp+34h] [bp-188h]
  unsigned int v135; // [sp+34h] [bp-188h]
  int v136; // [sp+34h] [bp-188h]
  int v137; // [sp+38h] [bp-184h]
  unsigned int v138; // [sp+38h] [bp-184h]
  unsigned int v139; // [sp+38h] [bp-184h]
  int v140; // [sp+3Ch] [bp-180h]
  __int16 v141; // [sp+3Ch] [bp-180h]
  _QWORD *v142; // [sp+3Ch] [bp-180h]
  unsigned int v143; // [sp+3Ch] [bp-180h]
  unsigned int v144; // [sp+3Ch] [bp-180h]
  int v145; // [sp+40h] [bp-17Ch]
  unsigned int v146; // [sp+40h] [bp-17Ch]
  _QWORD *v147; // [sp+40h] [bp-17Ch]
  int v148; // [sp+40h] [bp-17Ch]
  int v149; // [sp+40h] [bp-17Ch]
  int v150; // [sp+44h] [bp-178h]
  int v151; // [sp+44h] [bp-178h]
  int v152; // [sp+44h] [bp-178h]
  char *v153; // [sp+44h] [bp-178h]
  int v154; // [sp+44h] [bp-178h]
  unsigned int v155; // [sp+44h] [bp-178h]
  int v156; // [sp+48h] [bp-174h]
  int v157; // [sp+48h] [bp-174h]
  int v158; // [sp+48h] [bp-174h]
  _QWORD *v159; // [sp+48h] [bp-174h]
  unsigned int v160; // [sp+4Ch] [bp-170h]
  _DWORD *v161; // [sp+4Ch] [bp-170h]
  unsigned int v162; // [sp+50h] [bp-16Ch]
  int v163; // [sp+50h] [bp-16Ch]
  char *v164; // [sp+54h] [bp-168h]
  int v165; // [sp+54h] [bp-168h]
  int v166; // [sp+54h] [bp-168h]
  int v167; // [sp+58h] [bp-164h]
  int v168; // [sp+58h] [bp-164h]
  char *v169; // [sp+58h] [bp-164h]
  __int64 v170; // [sp+5Ch] [bp-160h]
  _DWORD *v171; // [sp+5Ch] [bp-160h]
  int v172; // [sp+5Ch] [bp-160h]
  int v173; // [sp+5Ch] [bp-160h]
  int v174; // [sp+60h] [bp-15Ch]
  char *v175; // [sp+60h] [bp-15Ch]
  _QWORD *v176; // [sp+64h] [bp-158h]
  int v177; // [sp+64h] [bp-158h]
  _QWORD *v178; // [sp+64h] [bp-158h]
  _QWORD *v179; // [sp+64h] [bp-158h]
  unsigned int v180; // [sp+68h] [bp-154h]
  _DWORD *v181; // [sp+68h] [bp-154h]
  _QWORD *v182; // [sp+68h] [bp-154h]
  _QWORD *v183; // [sp+6Ch] [bp-150h]
  int v184; // [sp+6Ch] [bp-150h]
  unsigned int v185; // [sp+6Ch] [bp-150h]
  _QWORD *v186; // [sp+6Ch] [bp-150h]
  _QWORD *v187; // [sp+6Ch] [bp-150h]
  unsigned int v188; // [sp+70h] [bp-14Ch]
  unsigned int v189; // [sp+70h] [bp-14Ch]
  _QWORD *v190; // [sp+70h] [bp-14Ch]
  _QWORD *v191; // [sp+70h] [bp-14Ch]
  int v192; // [sp+74h] [bp-148h]
  char *v193; // [sp+74h] [bp-148h]
  char *v194; // [sp+78h] [bp-144h]
  int v195; // [sp+78h] [bp-144h]
  _QWORD *v196; // [sp+78h] [bp-144h]
  _QWORD *v197; // [sp+78h] [bp-144h]
  _QWORD *v198; // [sp+7Ch] [bp-140h]
  _QWORD *v199; // [sp+7Ch] [bp-140h]
  _QWORD *v200; // [sp+7Ch] [bp-140h]
  unsigned int v201; // [sp+80h] [bp-13Ch]
  _QWORD *v202; // [sp+80h] [bp-13Ch]
  int v203; // [sp+80h] [bp-13Ch]
  char *v204; // [sp+84h] [bp-138h]
  char *v205; // [sp+84h] [bp-138h]
  int v206; // [sp+84h] [bp-138h]
  _QWORD *v207; // [sp+88h] [bp-134h]
  _QWORD *v208; // [sp+88h] [bp-134h]
  int v209; // [sp+88h] [bp-134h]
  _QWORD *v210; // [sp+8Ch] [bp-130h]
  _QWORD *v211; // [sp+8Ch] [bp-130h]
  _QWORD *v212; // [sp+90h] [bp-12Ch]
  _DWORD *v213; // [sp+90h] [bp-12Ch]
  _QWORD *v214; // [sp+94h] [bp-128h]
  int v215; // [sp+94h] [bp-128h]
  _QWORD *v216; // [sp+94h] [bp-128h]
  char *v217; // [sp+98h] [bp-124h]
  _QWORD *v218; // [sp+98h] [bp-124h]
  _QWORD *v219; // [sp+9Ch] [bp-120h]
  char *v220; // [sp+9Ch] [bp-120h]
  _QWORD *v221; // [sp+A0h] [bp-11Ch]
  char *v222; // [sp+A0h] [bp-11Ch]
  _QWORD *v223; // [sp+A4h] [bp-118h]
  _QWORD *v224; // [sp+A8h] [bp-114h]
  int v225; // [sp+A8h] [bp-114h]
  _DWORD *v226; // [sp+A8h] [bp-114h]
  int v227; // [sp+ACh] [bp-110h]
  _QWORD *v228; // [sp+ACh] [bp-110h]
  _QWORD *v229; // [sp+ACh] [bp-110h]
  char *v230; // [sp+B0h] [bp-10Ch]
  char *v231; // [sp+B0h] [bp-10Ch]
  char *v232; // [sp+B4h] [bp-108h]
  _DWORD *v233; // [sp+B4h] [bp-108h]
  _QWORD *v234; // [sp+B8h] [bp-104h]
  int v235; // [sp+BCh] [bp-100h]
  _QWORD *v236; // [sp+BCh] [bp-100h]
  _DWORD *v237; // [sp+BCh] [bp-100h]
  _QWORD *v238; // [sp+C0h] [bp-FCh]
  char *v239; // [sp+C0h] [bp-FCh]
  int v240; // [sp+C4h] [bp-F8h]
  _QWORD *v241; // [sp+C4h] [bp-F8h]
  int v242; // [sp+C4h] [bp-F8h]
  char *v243; // [sp+C8h] [bp-F4h]
  int v244; // [sp+C8h] [bp-F4h]
  int v245; // [sp+CCh] [bp-F0h]
  unsigned int v246; // [sp+CCh] [bp-F0h]
  int v247; // [sp+CCh] [bp-F0h]
  int v248; // [sp+D0h] [bp-ECh]
  int v249; // [sp+D0h] [bp-ECh]
  int v250; // [sp+D0h] [bp-ECh]
  int v251; // [sp+D0h] [bp-ECh]
  int v252; // [sp+D4h] [bp-E8h]
  unsigned int v253; // [sp+D4h] [bp-E8h]
  int v254; // [sp+D8h] [bp-E4h]
  unsigned int v255; // [sp+D8h] [bp-E4h]
  int v256; // [sp+DCh] [bp-E0h]
  void *dest; // [sp+E8h] [bp-D4h] BYREF
  _DWORD *v259; // [sp+ECh] [bp-D0h]
  int v260; // [sp+F0h] [bp-CCh] BYREF
  int v261; // [sp+F4h] [bp-C8h]
  __int64 v262; // [sp+F8h] [bp-C4h]
  int v263; // [sp+100h] [bp-BCh]
  int v264; // [sp+104h] [bp-B8h]
  int v265; // [sp+108h] [bp-B4h]
  int v266; // [sp+10Ch] [bp-B0h]
  int v267; // [sp+110h] [bp-ACh] BYREF
  int v268; // [sp+114h] [bp-A8h]
  int v269; // [sp+118h] [bp-A4h]
  int v270; // [sp+11Ch] [bp-A0h]
  int v271; // [sp+120h] [bp-9Ch]
  int v272; // [sp+124h] [bp-98h]
  int v273; // [sp+128h] [bp-94h] BYREF
  int v274; // [sp+12Ch] [bp-90h]
  int v275; // [sp+130h] [bp-8Ch] BYREF
  int v276; // [sp+134h] [bp-88h]
  __int64 v277; // [sp+138h] [bp-84h] BYREF
  int v278; // [sp+140h] [bp-7Ch]
  int v279; // [sp+144h] [bp-78h]
  int v280; // [sp+148h] [bp-74h]
  int v281; // [sp+14Ch] [bp-70h]
  int v282; // [sp+150h] [bp-6Ch]
  int v283; // [sp+154h] [bp-68h]
  int v284; // [sp+158h] [bp-64h]
  int v285; // [sp+15Ch] [bp-60h]
  int v286; // [sp+160h] [bp-5Ch]
  int v287; // [sp+164h] [bp-58h]
  int v288; // [sp+168h] [bp-54h]
  int v289; // [sp+16Ch] [bp-50h]
  char v290[76]; // [sp+170h] [bp-4Ch] BYREF

  v5 = a1[16];
  dest = a4;
  v6 = a1[34];
  v7 = a1[35];
  v290[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x37 )
  {
    v8 = 128 - v5;
    v10 = (__PAIR64__(v7, v6) + 2) >> 32;
    v9 = v6 + 2;
  }
  else
  {
    v8 = 64 - v5;
    v10 = (__PAIR64__(v7, v6) + 1) >> 32;
    v9 = v6 + 1;
  }
  memset(&v290[1], 0, v8 - 9);
  v290[v8 - 8] = HIBYTE(v10);
  v11 = &v290[v8 - 8];
  v11[7] = v9;
  v11[4] = HIBYTE(v9);
  v11[1] = BYTE2(v10);
  v11[2] = BYTE1(v10);
  v11[5] = BYTE2(v9);
  v11[6] = BYTE1(v9);
  v11[3] = v10;
  v259 = a1 + 18;
  sph_groestl224_0(a1, v290, v8);
  v12 = a1 + 18;
  v13 = &v260;
  do
  {
    v14 = *v12;
    v12 += 4;
    v15 = *(v12 - 3);
    v16 = v13;
    v17 = *(v12 - 2);
    v13 += 4;
    v18 = *(v12 - 1);
    *v16 = v14;
    v16[1] = v15;
    v16[2] = v17;
    v16[3] = v18;
  }
  while ( v12 != a1 + 34 );
  v275 = v260;
  v276 = v261;
  v277 = v262;
  v109 = 0;
  v278 = v263;
  v279 = v264;
  v280 = v265;
  v281 = v266;
  v282 = v267;
  v283 = v268;
  v284 = v269;
  v285 = v270;
  v286 = v271;
  v287 = v272;
  v288 = v273;
  v289 = v274;
  v145 = v260;
  v19 = v270;
  v20 = v271;
  v167 = v261;
  v21 = v273;
  v170 = v262;
  v140 = v263;
  v150 = v264;
  v116 = v265;
  v137 = v266;
  v122 = v267;
  v126 = v268;
  v130 = v269;
  v156 = v274;
  v22 = v272;
  do
  {
    v110 = v145 ^ v109;
    v23 = (v109 + 48) ^ v116;
    v134 = (v109 + 112) ^ v21;
    v24 = v122 ^ (v109 + 64);
    v118 = v150 ^ ((unsigned __int64)(v109 + 32) >> 32);
    v127 = v126 ^ ((unsigned __int64)(v109 + 64) >> 32);
    v131 = v130 ^ (v109 + 80);
    v25 = (v156 ^ ((unsigned __int64)(v109 + 112) >> 32)) >> 24;
    v151 = v156 ^ ((unsigned __int64)(v109 + 112) >> 32);
    v123 = v137 ^ ((unsigned __int64)(v109 + 48) >> 32);
    v117 = v170 ^ (v109 + 16);
    v26 = v19 ^ ((unsigned __int64)(v109 + 80) >> 32);
    v27 = v22 ^ ((unsigned __int64)(v109 + 96) >> 32);
    v138 = v23;
    v28 = (v109 + 32) ^ v140;
    v157 = (HIDWORD(v170) ^ ((unsigned __int64)(v109 + 16) >> 32)) >> 24;
    v141 = v24;
    v164 = (char *)&unk_17F360 + 8 * HIBYTE(v23);
    v194 = (char *)&unk_17F360 + 8 * HIBYTE(v24);
    v171 = &dword_17DB68[2 * (((unsigned int)v167 ^ HIDWORD(v109)) >> 24)];
    v146 = (v109 + 96) ^ v20;
    v204 = (char *)&unk_17F360 + 8 * HIBYTE(v131);
    v188 = HIBYTE(v27);
    v217 = (char *)&unk_17F360 + 8 * HIBYTE(v146);
    v230 = (char *)&unk_17F360 + 8 * HIBYTE(v134);
    v180 = HIBYTE(v26);
    v232 = (char *)&unk_17F360 + 8 * HIBYTE(v110);
    v29 = &qword_17E370[BYTE1(v117)];
    v30 = &qword_17EB70[BYTE2(v28)];
    v243 = (char *)&unk_17F360 + 8 * HIBYTE(v28);
    v235 = dword_180368[2 * BYTE1(v26) + 1];
    v227 = dword_180368[2 * BYTE1(v26)];
    v252 = (unsigned __int8)v28;
    v176 = &qword_17E370[BYTE1(v28)];
    v183 = &qword_17EB70[BYTE2(v138)];
    v198 = &qword_17FB70[(unsigned __int8)v26];
    v31 = BYTE1(v27);
    v192 = BYTE2(v26);
    v32 = &dword_180B68[2 * BYTE2(v27)];
    v240 = *v32;
    v245 = v32[1];
    v33 = (unsigned __int8)(((unsigned int)v167 ^ HIDWORD(v109)) >> 16);
    v207 = &qword_17FB70[(unsigned __int8)v27];
    v34 = BYTE2(v151);
    v35 = v171[1] ^ ((unsigned __int64)(v109 + 17) >> 32) ^ HIDWORD(qword_17D368[(unsigned __int8)v117]);
    v248 = *v171 ^ (v109 + 17) ^ LODWORD(qword_17D368[(unsigned __int8)v117]);
    v36 = &qword_17EB70[BYTE2(v24)];
    v37 = &qword_17FB70[(unsigned __int8)v127];
    v38 = HIDWORD(qword_17D368[(unsigned __int8)v110])
        ^ ((unsigned __int64)(v109 + 1) >> 32)
        ^ dword_17DB68[2 * v25 + 1]
        ^ *((_DWORD *)v29 - 1)
        ^ *((_DWORD *)v30 - 1)
        ^ *((_DWORD *)v164 + 3)
        ^ *((_DWORD *)v37 - 1);
    v39 = LODWORD(qword_17D368[(unsigned __int8)v110])
        ^ (v109 + 1)
        ^ dword_17DB68[2 * v25]
        ^ *((_DWORD *)v29 - 2)
        ^ *((_DWORD *)v30 - 2)
        ^ *((_DWORD *)v164 + 2)
        ^ *((_DWORD *)v37 - 2);
    v40 = BYTE1(v151);
    v219 = &qword_17FB70[(unsigned __int8)v151];
    v254 = (unsigned __int8)((unsigned __int16)(v167 ^ WORD2(v109)) >> 8);
    v221 = &qword_17FB70[(unsigned __int8)(v167 ^ BYTE4(v109))];
    v152 = (unsigned __int8)v141;
    v212 = &qword_17E370[HIBYTE(v141)];
    v214 = &qword_17EB70[BYTE2(v131)];
    v256 = BYTE6(v117);
    v172 = (unsigned __int8)v131;
    v224 = &qword_17E370[BYTE1(v131)];
    v41 = v39 ^ v227;
    v228 = &qword_17EB70[BYTE2(v146)];
    v42 = BYTE4(v117);
    v165 = BYTE5(v117);
    HIDWORD(v117) = v38 ^ v235 ^ v245;
    v238 = &qword_17FB70[v42];
    v43 = &dword_180B68[2 * v33];
    v168 = BYTE2(v118);
    v114 = v41 ^ v240;
    v44 = v248 ^ *((_DWORD *)v176 - 2) ^ *((_DWORD *)v183 - 2) ^ *((_DWORD *)v194 + 2);
    v45 = v35 ^ *((_DWORD *)v176 - 1) ^ *((_DWORD *)v183 - 1) ^ *((_DWORD *)v194 + 3);
    v46 = *((_DWORD *)v198 - 1);
    v236 = &qword_17E370[BYTE1(v146)];
    v47 = *((_DWORD *)v198 - 2);
    v177 = (unsigned __int8)v146;
    v48 = dword_17DB68[2 * v157 + 1];
    v49 = dword_17DB68[2 * v157];
    v195 = dword_17DB68[2 * HIBYTE(v118)];
    v249 = dword_17DB68[2 * HIBYTE(v118) + 1];
    v199 = &qword_17EB70[BYTE2(v134)];
    v158 = BYTE1(v118);
    v246 = v44 ^ v47 ^ dword_180368[2 * v31] ^ dword_180B68[2 * v34];
    v210 = &qword_17FB70[(unsigned __int8)v118];
    v142 = &qword_17EB70[BYTE2(v110)];
    v241 = &qword_17E370[BYTE1(v110)];
    v184 = (unsigned __int8)v134;
    v147 = &qword_17E370[BYTE1(v134)];
    v111 = dword_180368[2 * v31 + 1] ^ v45 ^ v46 ^ dword_180B68[2 * v34 + 1];
    v50 = qword_17E370[BYTE1(v138) - 1];
    v119 = v49
         ^ *v43
         ^ LODWORD(qword_17D368[v252])
         ^ (v109 + 33)
         ^ v50
         ^ *((_DWORD *)v36 - 2)
         ^ *((_DWORD *)v204 + 2)
         ^ *((_DWORD *)v207 - 2)
         ^ dword_180368[2 * v40];
    v132 = v48
         ^ v43[1]
         ^ HIDWORD(qword_17D368[v252])
         ^ (__CFADD__((_DWORD)v109, 33) + HIDWORD(v109))
         ^ HIDWORD(v50)
         ^ *((_DWORD *)v36 - 1)
         ^ *((_DWORD *)v204 + 3)
         ^ *((_DWORD *)v207 - 1)
         ^ dword_180368[2 * v40 + 1];
    v135 = LODWORD(qword_17D368[(unsigned __int8)v138])
         ^ dword_180368[2 * v254]
         ^ (v109 + 49)
         ^ v195
         ^ *((_DWORD *)v212 - 2)
         ^ *((_DWORD *)v214 - 2)
         ^ *((_DWORD *)v217 + 2)
         ^ *((_DWORD *)v219 - 2)
         ^ dword_180B68[2 * v256];
    v139 = *((_DWORD *)v217 + 3)
         ^ HIDWORD(qword_17D368[(unsigned __int8)v138])
         ^ dword_180368[2 * v254 + 1]
         ^ ((unsigned __int64)(v109 + 49) >> 32)
         ^ v249
         ^ *((_DWORD *)v212 - 1)
         ^ *((_DWORD *)v214 - 1)
         ^ *((_DWORD *)v219 - 1)
         ^ dword_180B68[2 * v256 + 1];
    v51 = *((_DWORD *)v224 - 1);
    v52 = dword_17DB68[2 * HIBYTE(v123)]
        ^ *((_DWORD *)v221 - 2)
        ^ LODWORD(qword_17D368[v152])
        ^ (v109 + 65)
        ^ *((_DWORD *)v224 - 2);
    v225 = dword_180B68[2 * BYTE2(v123)];
    v250 = dword_180B68[2 * BYTE2(v123) + 1];
    v53 = &qword_17EB70[BYTE2(v117)];
    HIDWORD(v50) = dword_17DB68[2 * HIBYTE(v123) + 1]
                 ^ *((_DWORD *)v221 - 1)
                 ^ HIDWORD(qword_17D368[v152])
                 ^ ((unsigned __int64)(v109 + 65) >> 32)
                 ^ v51
                 ^ *((_DWORD *)v228 - 1);
    v153 = (char *)&unk_17F360 + 8 * BYTE3(v117);
    v54 = (v109 + 81) ^ *((_DWORD *)v232 + 2) ^ LODWORD(qword_17D368[v172]) ^ dword_17DB68[2 * HIBYTE(v127)];
    v173 = HIDWORD(qword_17D368[v172])
         ^ *((_DWORD *)v232 + 3)
         ^ ((unsigned __int64)(v109 + 81) >> 32)
         ^ dword_17DB68[2 * HIBYTE(v127) + 1];
    v55 = *((_DWORD *)v142 - 2) ^ LODWORD(qword_17D368[v177]);
    v174 = v54 ^ *((_DWORD *)v236 - 2);
    LODWORD(v50) = HIDWORD(qword_17D368[v184]) ^ *((_DWORD *)v241 - 1);
    v56 = *((_DWORD *)v142 - 1);
    v143 = dword_17DB68[2 * v188 + 1];
    v57 = &qword_17FB70[(unsigned __int8)v123];
    v162 = *((_DWORD *)v53 - 1);
    v58 = BYTE1(v123);
    v124 = *((_DWORD *)v147 - 1);
    v59 = v55 ^ (v109 + 97) ^ dword_17DB68[2 * v180] ^ *((_DWORD *)v147 - 2);
    v60 = LODWORD(qword_17D368[v184])
        ^ *((_DWORD *)v241 - 2)
        ^ (v109 + 113)
        ^ dword_17DB68[2 * v188]
        ^ *((_DWORD *)v53 - 2);
    v185 = *((_DWORD *)v57 - 1);
    v148 = dword_180368[2 * v58];
    v61 = *((_DWORD *)v153 + 3);
    v189 = dword_180368[2 * BYTE1(v127) + 1];
    v62 = v59 ^ *((_DWORD *)v153 + 2) ^ *((_DWORD *)v210 - 2);
    v63 = dword_180368[2 * BYTE1(v127)];
    v154 = dword_180368[2 * v58 + 1];
    v64 = dword_180B68[2 * BYTE2(v127) + 1];
    v128 = v62 ^ v148 ^ dword_180B68[2 * BYTE2(v127)];
    v65 = v64
        ^ HIDWORD(qword_17D368[v177])
        ^ v56
        ^ ((unsigned __int64)(v109 + 97) >> 32)
        ^ dword_17DB68[2 * v180 + 1]
        ^ v124
        ^ v61
        ^ *((_DWORD *)v210 - 1)
        ^ v154;
    LODWORD(v117) = v52
                  ^ *((_DWORD *)v228 - 2)
                  ^ *((_DWORD *)v230 + 2)
                  ^ dword_180368[2 * v165]
                  ^ dword_180B68[2 * v168];
    v66 = ((unsigned int)v50
         ^ ((unsigned __int64)(v109 + 113) >> 32)
         ^ v143
         ^ v162
         ^ *((_DWORD *)v243 + 3)
         ^ v185
         ^ v189
         ^ dword_180B68[2 * v192 + 1]) >> 24;
    v149 = v50
         ^ ((unsigned __int64)(v109 + 113) >> 32)
         ^ v143
         ^ v162
         ^ *((_DWORD *)v243 + 3)
         ^ v185
         ^ v189
         ^ dword_180B68[2 * v192 + 1];
    v67 = v173
        ^ *((_DWORD *)v236 - 1)
        ^ *((_DWORD *)v199 - 1)
        ^ *((_DWORD *)v238 - 1)
        ^ dword_180368[2 * v158 + 1]
        ^ v250;
    v144 = v60 ^ *((_DWORD *)v243 + 2) ^ *((_DWORD *)v57 - 2) ^ v63 ^ dword_180B68[2 * v192];
    v201 = v174 ^ *((_DWORD *)v199 - 2) ^ *((_DWORD *)v238 - 2) ^ dword_180368[2 * v158] ^ v225;
    v155 = HIBYTE(v111);
    v125 = HIDWORD(v50) ^ *((_DWORD *)v230 + 3) ^ dword_180368[2 * v165 + 1] ^ dword_180B68[2 * v168 + 1];
    v169 = (char *)&unk_17F360 + 8 * HIBYTE(v135);
    v175 = (char *)&unk_17F360 + 8 * BYTE3(v117);
    v160 = HIBYTE(v139);
    v193 = (char *)&unk_17F360 + 8 * HIBYTE(v201);
    v205 = (char *)&unk_17F360 + 8 * HIBYTE(v128);
    v181 = &dword_17DB68[2 * HIBYTE(v111)];
    v220 = (char *)&unk_17F360 + 8 * HIBYTE(v144);
    v213 = &dword_17DB68[2 * HIBYTE(v139)];
    v222 = (char *)&unk_17F360 + 8 * HIBYTE(v114);
    v226 = &dword_17DB68[2 * HIBYTE(v125)];
    v231 = (char *)&unk_17F360 + 8 * HIBYTE(v246);
    v237 = &dword_17DB68[2 * HIBYTE(v65)];
    v233 = &dword_17DB68[2 * HIBYTE(v67)];
    v253 = HIBYTE(v67);
    v68 = &qword_17E370[BYTE1(v246)];
    HIDWORD(v50) = &qword_17E370[BYTE1(v119)];
    v255 = HIBYTE(v65);
    v239 = (char *)&unk_17F360 + 8 * HIBYTE(v119);
    v178 = &qword_17FB70[(unsigned __int8)v67];
    v69 = qword_17D368[(unsigned __int8)v246];
    v234 = &qword_17EB70[BYTE2(v246)];
    v109 += 2;
    v70 = BYTE1(v67);
    v242 = (unsigned __int8)v119;
    v166 = BYTE2(v67);
    v120 = &qword_17EB70[BYTE2(v119)];
    v71 = *(_QWORD *)(HIDWORD(v50) - 8);
    v215 = *((_DWORD *)v68 - 2) ^ dword_17DB68[2 * v66];
    v72 = HIDWORD(qword_17D368[(unsigned __int8)v246]) ^ dword_17DB68[2 * HIBYTE(HIDWORD(v117)) + 1] ^ HIDWORD(v71);
    v73 = &qword_17FB70[(unsigned __int8)v125];
    v196 = &qword_17FB70[(unsigned __int8)v65];
    HIDWORD(v71) = BYTE6(v117);
    v247 = (unsigned __int8)v135;
    v74 = qword_17EB70[BYTE2(v135) - 1];
    v186 = &qword_17E370[BYTE1(v135)];
    v75 = v69 ^ dword_17DB68[2 * HIBYTE(HIDWORD(v117))] ^ v71 ^ v74 ^ *((_DWORD *)v175 + 2);
    v190 = &qword_17EB70[BYTE2(v117)];
    LODWORD(v71) = BYTE1(v149);
    v208 = &qword_17FB70[(unsigned __int8)v149];
    v244 = BYTE5(v117);
    v211 = &qword_17FB70[BYTE4(v117)];
    HIDWORD(v170) = v72
                  ^ HIDWORD(v74)
                  ^ *((_DWORD *)v175 + 3)
                  ^ *((_DWORD *)v178 - 1)
                  ^ dword_180368[2 * BYTE1(v65) + 1]
                  ^ dword_180B68[2 * BYTE2(v149) + 1];
    v251 = BYTE2(v111);
    LODWORD(v170) = v75 ^ *((_DWORD *)v178 - 2) ^ dword_180368[2 * BYTE1(v65)] ^ dword_180B68[2 * BYTE2(v149)];
    LOWORD(v65) = v201;
    v179 = &qword_17E370[BYTE1(v117)];
    v202 = &qword_17EB70[BYTE2(v201)];
    v76 = HIDWORD(qword_17D368[(unsigned __int8)v114])
        ^ *((_DWORD *)v68 - 1)
        ^ dword_17DB68[2 * v66 + 1]
        ^ *((_DWORD *)v120 - 1);
    v77 = LODWORD(qword_17D368[(unsigned __int8)v114]) ^ v215 ^ *((_DWORD *)v120 - 2);
    v78 = &qword_17FB70[(unsigned __int8)v111];
    v112 = BYTE1(v111);
    v121 = (unsigned __int8)v65;
    v223 = v78;
    v216 = &qword_17E370[BYTE1(v65)];
    v218 = &qword_17EB70[BYTE2(v128)];
    v79 = v77 ^ *((_DWORD *)v169 + 2) ^ *((_DWORD *)v73 - 2) ^ dword_180368[2 * v70];
    v136 = (unsigned __int8)v128;
    HIDWORD(v117) = BYTE2(v132);
    v229 = &qword_17E370[BYTE1(v128)];
    v80 = dword_180B68[2 * BYTE2(v65)];
    LODWORD(v74) = dword_180B68[2 * HIDWORD(v71)];
    v81 = v76
        ^ *((_DWORD *)v169 + 3)
        ^ *((_DWORD *)v73 - 1)
        ^ dword_180368[2 * v70 + 1]
        ^ dword_180B68[2 * BYTE2(v65) + 1];
    v82 = dword_17DB68[2 * HIBYTE(v132) + 1];
    v167 = v81;
    v145 = v79 ^ v80;
    v83 = dword_17DB68[2 * HIBYTE(v132)];
    v84 = HIDWORD(qword_17D368[v242]) ^ dword_180B68[2 * HIDWORD(v71) + 1] ^ v181[1] ^ *((_DWORD *)v186 - 1);
    v159 = &qword_17EB70[BYTE2(v144)];
    HIDWORD(v71) = BYTE1(v132);
    v200 = &qword_17FB70[(unsigned __int8)v132];
    v129 = BYTE2(v139);
    v85 = *((_DWORD *)v190 - 1);
    v182 = &qword_17EB70[BYTE2(v114)];
    v86 = *((_DWORD *)v190 - 2) ^ v74 ^ LODWORD(qword_17D368[v242]) ^ dword_17DB68[2 * v155] ^ *((_DWORD *)v186 - 2);
    v191 = &qword_17E370[BYTE1(v114)];
    v133 = (unsigned __int8)v144;
    v187 = &qword_17E370[BYTE1(v144)];
    v150 = v85 ^ v84 ^ *((_DWORD *)v193 + 3) ^ *((_DWORD *)v196 - 1) ^ dword_180368[2 * (_DWORD)v71 + 1];
    v140 = v86 ^ *((_DWORD *)v193 + 2) ^ *((_DWORD *)v196 - 2) ^ dword_180368[2 * (_DWORD)v71];
    v87 = &qword_17D368[(unsigned __int8)v117];
    v88 = dword_180B68[2 * v251] ^ LODWORD(qword_17D368[v247]) ^ dword_180368[2 * v244] ^ v83 ^ *((_DWORD *)v179 - 2);
    v89 = &dword_180B68[2 * BYTE2(v139)];
    v115 = BYTE1(v139);
    v197 = &qword_17FB70[(unsigned __int8)v139];
    v137 = v82
         ^ HIDWORD(qword_17D368[v247])
         ^ dword_180368[2 * v244 + 1]
         ^ dword_180B68[2 * v251 + 1]
         ^ *((_DWORD *)v179 - 1)
         ^ *((_DWORD *)v202 - 1)
         ^ *((_DWORD *)v205 + 3)
         ^ *((_DWORD *)v208 - 1);
    v116 = v88 ^ *((_DWORD *)v202 - 2) ^ *((_DWORD *)v205 + 2) ^ *((_DWORD *)v208 - 2);
    v90 = *((_DWORD *)v211 - 1) ^ v87[1] ^ dword_180368[2 * v112 + 1];
    v163 = dword_180368[2 * HIDWORD(v71)];
    v91 = *((_DWORD *)v216 - 2)
        ^ *((_DWORD *)v211 - 2)
        ^ *v87
        ^ dword_180368[2 * v112]
        ^ dword_17DB68[2 * v160]
        ^ *((_DWORD *)v218 - 2);
    v203 = dword_180368[2 * HIDWORD(v71) + 1];
    v92 = BYTE1(v125);
    v206 = dword_180B68[2 * v129];
    v113 = BYTE2(v125);
    v209 = v89[1];
    v93 = v91 ^ *((_DWORD *)v220 + 2) ^ dword_180B68[2 * HIDWORD(v117)];
    v126 = *((_DWORD *)v216 - 1)
         ^ v90
         ^ v213[1]
         ^ *((_DWORD *)v218 - 1)
         ^ *((_DWORD *)v220 + 3)
         ^ dword_180B68[2 * HIDWORD(v117) + 1];
    v161 = &dword_180368[2 * BYTE1(v125)];
    v94 = &dword_180B68[2 * BYTE2(v125)];
    v122 = v93;
    v20 = *((_DWORD *)v182 - 2)
        ^ LODWORD(qword_17D368[v136])
        ^ *((_DWORD *)v231 + 2)
        ^ dword_17DB68[2 * v253]
        ^ *((_DWORD *)v187 - 2)
        ^ *((_DWORD *)v200 - 2)
        ^ dword_180368[2 * v115]
        ^ dword_180B68[2 * v113];
    v95 = HIDWORD(qword_17D368[v133])
        ^ *((_DWORD *)v191 - 1)
        ^ *((_DWORD *)v234 - 1)
        ^ v237[1]
        ^ *((_DWORD *)v239 + 3)
        ^ *((_DWORD *)v197 - 1)
        ^ v161[1]
        ^ dword_180B68[2 * v166 + 1];
    v21 = *((_DWORD *)v191 - 2)
        ^ LODWORD(qword_17D368[v133])
        ^ *((_DWORD *)v234 - 2)
        ^ dword_17DB68[2 * v255]
        ^ *((_DWORD *)v239 + 2)
        ^ *((_DWORD *)v197 - 2)
        ^ dword_180368[2 * v92]
        ^ dword_180B68[2 * v166];
    v130 = *((_DWORD *)v223 - 2)
         ^ LODWORD(qword_17D368[v121])
         ^ *((_DWORD *)v222 + 2)
         ^ *v226
         ^ *((_DWORD *)v229 - 2)
         ^ *((_DWORD *)v159 - 2)
         ^ v163
         ^ v206;
    v19 = HIDWORD(qword_17D368[v121])
        ^ *((_DWORD *)v222 + 3)
        ^ *((_DWORD *)v223 - 1)
        ^ v226[1]
        ^ *((_DWORD *)v229 - 1)
        ^ *((_DWORD *)v159 - 1)
        ^ v203
        ^ v209;
    v156 = v95;
    v22 = *((_DWORD *)v182 - 1)
        ^ HIDWORD(qword_17D368[v136])
        ^ *((_DWORD *)v231 + 3)
        ^ v233[1]
        ^ *((_DWORD *)v187 - 1)
        ^ *((_DWORD *)v200 - 1)
        ^ dword_180368[2 * v115 + 1]
        ^ v94[1];
  }
  while ( v109 != 10 );
  v96 = v145;
  v97 = *((_DWORD *)v182 - 1)
      ^ HIDWORD(qword_17D368[v136])
      ^ *((_DWORD *)v231 + 3)
      ^ v233[1]
      ^ *((_DWORD *)v187 - 1)
      ^ *((_DWORD *)v200 - 1)
      ^ dword_180368[2 * v115 + 1]
      ^ v94[1];
  v98 = v167;
  p_dest = &dest;
  v277 = v170;
  v100 = (int *)&v277;
  v275 = v145;
  v276 = v167;
  v285 = v19;
  v286 = v20;
  v278 = v140;
  v287 = v97;
  v288 = v21;
  v279 = v150;
  v280 = v116;
  v281 = v137;
  v282 = v93;
  v283 = v126;
  v284 = v130;
  v289 = v156;
  while ( 1 )
  {
    v101 = (unsigned int)p_dest[2];
    p_dest += 2;
    v102 = (unsigned int)p_dest[1];
    *p_dest = (void *)(v101 ^ v96);
    p_dest[1] = (void *)(v102 ^ v98);
    if ( &v273 == (int *)p_dest )
      break;
    v96 = *v100;
    v100 += 2;
    v98 = *(v100 - 1);
  }
  v103 = &v267;
  v104 = v290;
  do
  {
    v105 = *v103;
    v103 += 2;
    v106 = *(v103 - 1);
    v104 += 8;
    *((_DWORD *)v104 - 2) = v105;
    *((_DWORD *)v104 - 1) = v106;
  }
  while ( &v275 != v103 );
  memcpy(dest, &v290[32 - n], n);
  v107 = v259;
  a1[16] = 0;
  do
  {
    *(_QWORD *)v107 = 0;
    v107 += 2;
  }
  while ( a1 + 32 != v107 );
  *((_QWORD *)a1 + 17) = 0;
  a1[32] = 0;
  a1[33] = (n << 11) & 0xFF0000 | (n << 27);
  return a1;
}
