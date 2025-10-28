unsigned int __fastcall sph_luffa224_0(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r5
  unsigned int *v4; // r9
  size_t v5; // r4
  char *v6; // r0
  int v7; // r6
  int v8; // r7
  int v9; // r3
  int v10; // r5
  unsigned int v11; // lr
  unsigned int v12; // r9
  unsigned int v13; // r10
  int v14; // r1
  int v15; // r12
  unsigned int v16; // r2
  int v17; // r8
  int v18; // r5
  int v19; // r6
  unsigned int v20; // r1
  int v21; // lr
  int v22; // r6
  int v23; // r1
  int v24; // r2
  int v25; // r0
  int v26; // r11
  int v27; // r8
  int v28; // lr
  int v29; // r10
  int v30; // r4
  int v31; // r12
  int v32; // r1
  int v33; // r3
  int v34; // r9
  int v35; // r1
  int v36; // r9
  int v37; // r7
  int v38; // r5
  int v39; // r6
  int v40; // r0
  int v41; // r11
  int v42; // r3
  int v43; // r2
  int v44; // lr
  int v45; // r4
  int v46; // r0
  int v47; // r1
  int v48; // r6
  int v49; // r0
  int v50; // r7
  int v51; // r2
  int v52; // r1
  int v53; // lr
  int v54; // r12
  int v55; // r3
  int v56; // r9
  int v57; // r2
  int v58; // r1
  int v59; // r0
  int v60; // r4
  int v61; // r12
  int v62; // r3
  int v63; // lr
  int v64; // r9
  int v65; // r8
  int v66; // r10
  int v67; // r0
  unsigned int v68; // lr
  int v69; // r2
  unsigned int v70; // r3
  int v71; // r12
  unsigned int v72; // r11
  int v73; // r4
  int v74; // r1
  int v75; // r2
  int v76; // r11
  int v77; // r9
  int v78; // r5
  int v79; // r6
  int v80; // r1
  int v81; // r7
  int v82; // r3
  int v83; // r0
  int v84; // r4
  int v85; // r12
  int v86; // r1
  int v87; // r2
  int v88; // r6
  int v89; // r1
  int v90; // r9
  int v91; // r0
  int v92; // r2
  int v93; // r4
  int v94; // lr
  int v95; // r3
  int v96; // r11
  int v97; // r0
  int v98; // r2
  int v99; // r1
  int v100; // r12
  int v101; // lr
  int v102; // r3
  int v103; // r4
  int v104; // r11
  int v105; // r8
  int v106; // r10
  unsigned int v107; // lr
  int v108; // r2
  unsigned int v109; // r3
  int v110; // r12
  unsigned int v111; // r11
  int v112; // r4
  int v113; // r1
  int v114; // r2
  int v115; // r11
  int v116; // r9
  int v117; // r5
  unsigned int v118; // r6
  int v119; // r1
  int v120; // r7
  int v121; // r3
  unsigned int v122; // r0
  int v123; // r4
  int v124; // r12
  int v125; // r1
  int v126; // r2
  int v127; // r6
  int v128; // r1
  int v129; // r9
  int v130; // r0
  int v131; // r2
  int v132; // r4
  int v133; // lr
  int v134; // r3
  int v135; // r11
  int v136; // r0
  int v137; // r2
  int v138; // r1
  int v139; // r12
  int v140; // lr
  int v141; // r3
  int v142; // r4
  int v143; // r11
  size_t n; // [sp+0h] [bp-A4h]
  unsigned int v145; // [sp+4h] [bp-A0h]
  int v146; // [sp+4h] [bp-A0h]
  int v147; // [sp+4h] [bp-A0h]
  int v148; // [sp+4h] [bp-A0h]
  char *src; // [sp+8h] [bp-9Ch]
  int v150; // [sp+Ch] [bp-98h]
  unsigned int *v151; // [sp+10h] [bp-94h]
  int v152; // [sp+14h] [bp-90h]
  int v153; // [sp+14h] [bp-90h]
  int v154; // [sp+18h] [bp-8Ch]
  int v155; // [sp+18h] [bp-8Ch]
  int v156; // [sp+18h] [bp-8Ch]
  unsigned int v157; // [sp+1Ch] [bp-88h]
  unsigned int v158; // [sp+1Ch] [bp-88h]
  int v159; // [sp+20h] [bp-84h]
  int v160; // [sp+20h] [bp-84h]
  int v161; // [sp+24h] [bp-80h]
  int v162; // [sp+24h] [bp-80h]
  int v163; // [sp+28h] [bp-7Ch]
  int v164; // [sp+28h] [bp-7Ch]
  unsigned int v165; // [sp+2Ch] [bp-78h]
  unsigned int v166; // [sp+2Ch] [bp-78h]
  int v167; // [sp+30h] [bp-74h]
  int v168; // [sp+30h] [bp-74h]
  int v169; // [sp+30h] [bp-74h]
  int v170; // [sp+34h] [bp-70h]
  int v171; // [sp+38h] [bp-6Ch]
  unsigned int v172; // [sp+38h] [bp-6Ch]
  unsigned int v173; // [sp+3Ch] [bp-68h]
  int v174; // [sp+3Ch] [bp-68h]
  unsigned int v175; // [sp+40h] [bp-64h]
  unsigned int v176; // [sp+40h] [bp-64h]
  unsigned int v177; // [sp+44h] [bp-60h]
  unsigned int v178; // [sp+44h] [bp-60h]
  int v179; // [sp+48h] [bp-5Ch]
  int v180; // [sp+48h] [bp-5Ch]
  unsigned int v181; // [sp+4Ch] [bp-58h]
  unsigned int v182; // [sp+4Ch] [bp-58h]
  unsigned int v183; // [sp+50h] [bp-54h]
  unsigned int v184; // [sp+50h] [bp-54h]
  int v185; // [sp+54h] [bp-50h]
  int v186; // [sp+54h] [bp-50h]
  int v187; // [sp+58h] [bp-4Ch]
  int v188; // [sp+58h] [bp-4Ch]
  int v189; // [sp+5Ch] [bp-48h]
  int v190; // [sp+60h] [bp-44h]
  int v191; // [sp+64h] [bp-40h]
  unsigned int v192; // [sp+64h] [bp-40h]
  int v193; // [sp+68h] [bp-3Ch]
  unsigned int v194; // [sp+68h] [bp-3Ch]
  int v195; // [sp+6Ch] [bp-38h]
  unsigned int v196; // [sp+70h] [bp-34h]
  int v197; // [sp+74h] [bp-30h]
  int v198; // [sp+78h] [bp-2Ch]
  int v199; // [sp+7Ch] [bp-28h]
  int v200; // [sp+84h] [bp-20h]

  v3 = *(_DWORD *)(result + 32);
  v4 = (unsigned int *)result;
  n = a3;
  v5 = 32 - v3;
  src = a2;
  if ( 32 - v3 > a3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v4[8] = v3 + n;
    return result;
  }
  v195 = *(_DWORD *)(result + 36);
  v189 = *(_DWORD *)(result + 40);
  v170 = *(_DWORD *)(result + 44);
  v171 = *(_DWORD *)(result + 48);
  v191 = *(_DWORD *)(result + 52);
  v193 = *(_DWORD *)(result + 56);
  v190 = *(_DWORD *)(result + 60);
  v150 = *(_DWORD *)(result + 64);
  v187 = *(_DWORD *)(result + 68);
  v161 = *(_DWORD *)(result + 72);
  v163 = *(_DWORD *)(result + 76);
  v185 = *(_DWORD *)(result + 80);
  v167 = *(_DWORD *)(result + 84);
  v181 = *(_DWORD *)(result + 88);
  v183 = *(_DWORD *)(result + 92);
  v165 = *(_DWORD *)(result + 96);
  v179 = *(_DWORD *)(result + 100);
  v173 = *(_DWORD *)(result + 104);
  v152 = *(_DWORD *)(result + 108);
  v154 = *(_DWORD *)(result + 112);
  v159 = *(_DWORD *)(result + 116);
  v175 = *(_DWORD *)(result + 120);
  v177 = *(_DWORD *)(result + 124);
  v157 = *(_DWORD *)(result + 128);
  if ( !a3 )
    goto LABEL_20;
  v151 = (unsigned int *)result;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v6 = (char *)v151 + v3;
    v3 += v5;
    result = (unsigned int)memcpy(v6, src, v5);
    n -= v5;
    src += v5;
    if ( v3 == 32 )
      break;
    if ( !n )
      goto LABEL_19;
LABEL_5:
    v5 = 32 - v3;
  }
  v7 = v171;
  v8 = v157 ^ v165 ^ v150;
  v9 = v171 ^ v185 ^ v154 ^ v8;
  v10 = v170 ^ v163 ^ v152 ^ v8;
  v172 = bswap32(v151[3]);
  v11 = bswap32(v151[4]);
  v12 = bswap32(v151[7]);
  v196 = bswap32(v151[2]);
  v145 = bswap32(v151[5]);
  v13 = bswap32(v151[6]);
  v197 = v10 ^ v7;
  v14 = v191 ^ v167 ^ v159;
  v15 = v167;
  v168 = v10 ^ v185;
  v160 = __ROR4__(v9 ^ v159 ^ v13 ^ v12 ^ v196, 30);
  v198 = v191 ^ v9;
  v16 = bswap32(v151[1]);
  v200 = v10 ^ v154 ^ v16;
  v17 = v179 ^ v187 ^ v195 ^ v8;
  v155 = v14 ^ v175;
  v18 = v181 ^ v14 ^ v11;
  v19 = v193 ^ v181 ^ v175;
  v199 = v193 ^ v14;
  v20 = v11;
  v192 = bswap32(*v151);
  v21 = v183 ^ v190 ^ v177;
  v194 = v20;
  v166 = __ROR4__(v165 ^ v21 ^ v13, 31);
  v184 = __ROR4__(v183 ^ v19 ^ v145, 31);
  v178 = __ROR4__(v177 ^ v19 ^ v20, 30);
  v158 = __ROR4__(v157 ^ v21 ^ v145, 30);
  v22 = v13 ^ v19 ^ v190;
  v182 = __ROR4__(v18, 31);
  v186 = v12 ^ v196 ^ v168;
  v23 = v173 ^ v189 ^ v161;
  v169 = __ROR4__(v12 ^ v172 ^ v9 ^ v15, 31);
  v176 = __ROR4__(v12 ^ v172 ^ v155, 30);
  v156 = v13 ^ v200;
  v164 = v16 ^ v23 ^ v163;
  v24 = v16 ^ v17 ^ v189;
  v174 = v12 ^ v173 ^ v17 ^ v13;
  v180 = v13 ^ v8 ^ v179;
  v25 = v194 ^ v198;
  v188 = v12 ^ v187 ^ v8;
  v26 = v12 ^ v150 ^ v21;
  v162 = v12 ^ v192 ^ v17 ^ v161;
  v27 = 0;
  v153 = v12 ^ v192 ^ v23 ^ v152;
  v28 = v192 ^ v8 ^ v195;
  v29 = -533497832;
  v30 = v172 ^ v197;
  v31 = v145 ^ v199;
  v146 = 809079974;
  v32 = v196 ^ v23 ^ v170;
  v33 = v22;
  v34 = v26;
  while ( 1 )
  {
    v35 = v32 ^ v30;
    v36 = v34 ^ v25;
    v37 = v35 ^ v28 & v30;
    v38 = (v31 | v33) ^ v25;
    v39 = v28 & v30 ^ ~v24;
    v40 = v25 & v31;
    v41 = v39 | v37;
    v42 = ~v33 ^ v40;
    v43 = (v28 | v24) ^ v30;
    v44 = v28 ^ (v39 | v37);
    v45 = v36 & v38 ^ v42;
    v46 = v40 ^ v36;
    v47 = v35 & v43 ^ v39;
    v48 = v42 | v46;
    v49 = v46 ^ v44 ^ v45;
    v50 = v37 ^ v47;
    v51 = ~v43 ^ v41;
    v52 = v47 & v41;
    v53 = v49 ^ __ROR4__(v44, 30);
    v54 = v31 ^ v48 ^ v51;
    v55 = ~v38 ^ v48 ^ v52;
    v56 = v50 ^ v45 & v48;
    v57 = v54 ^ __ROR4__(v51, 30);
    v58 = v55 ^ __ROR4__(v52, 30);
    v59 = v53 ^ __ROR4__(v49, 18);
    v60 = v56 ^ __ROR4__(v50, 30);
    v61 = v57 ^ __ROR4__(v54, 18);
    v62 = v58 ^ __ROR4__(v55, 18);
    v63 = v59 ^ __ROR4__(v53, 22);
    v64 = v60 ^ __ROR4__(v56, 18);
    v24 = v61 ^ __ROR4__(v57, 22);
    v32 = v62 ^ __ROR4__(v58, 22);
    v30 = v64 ^ __ROR4__(v60, 22);
    v31 = __ROR4__(v61, 31);
    v33 = __ROR4__(v62, 31);
    v25 = v29 ^ __ROR4__(v59, 31);
    v34 = __ROR4__(v64, 31);
    ++v27;
    v28 = v63 ^ v146;
    if ( v27 == 8 )
      break;
    v146 = dword_180180[v27];
    v29 = dword_1801A0[v27];
  }
  v150 = v34;
  v65 = 0;
  v193 = v31;
  v171 = v30;
  v189 = v24;
  v170 = v32;
  v190 = v33;
  v195 = v28;
  v191 = v25;
  v66 = 23617341;
  v67 = v162;
  v68 = v182;
  v69 = v164;
  v70 = v184;
  v71 = v186;
  v72 = v166;
  v73 = v188;
  v74 = v169;
  v147 = -1226960659;
  while ( 1 )
  {
    v75 = v69 ^ v71;
    v76 = v72 ^ v74;
    v77 = v75 ^ v73 & v71;
    v78 = (v68 | v70) ^ v74;
    v79 = v73 & v71 ^ ~v67;
    v80 = v74 & v68;
    v81 = v79 | v77;
    v82 = ~v70 ^ v80;
    v83 = (v73 | v67) ^ v71;
    v84 = v73 ^ (v79 | v77);
    v85 = v76 & v78 ^ v82;
    v86 = v80 ^ v76;
    v87 = v75 & v83 ^ v79;
    v88 = v82 | v86;
    v89 = v86 ^ v84 ^ v85;
    v90 = v77 ^ v87;
    v91 = ~v83 ^ v81;
    v92 = v87 & v81;
    v93 = v89 ^ __ROR4__(v84, 30);
    v94 = v68 ^ v88 ^ v91;
    v95 = ~v78 ^ v88 ^ v92;
    v96 = v85 & v88 ^ v90;
    v97 = v94 ^ __ROR4__(v91, 30);
    v98 = v95 ^ __ROR4__(v92, 30);
    v99 = v93 ^ __ROR4__(v89, 18);
    v100 = v96 ^ __ROR4__(v90, 30);
    v101 = v97 ^ __ROR4__(v94, 18);
    v102 = v98 ^ __ROR4__(v95, 18);
    v103 = v99 ^ __ROR4__(v93, 22);
    v104 = v100 ^ __ROR4__(v96, 18);
    v67 = v101 ^ __ROR4__(v97, 22);
    v69 = v102 ^ __ROR4__(v98, 22);
    v71 = v104 ^ __ROR4__(v100, 22);
    v68 = __ROR4__(v101, 31);
    v70 = __ROR4__(v102, 31);
    v74 = v66 ^ __ROR4__(v99, 31);
    v72 = __ROR4__(v104, 31);
    ++v65;
    v73 = v103 ^ v147;
    if ( v65 == 8 )
      break;
    v147 = dword_1801C0[v65];
    v66 = dword_1801E0[v65];
  }
  v105 = 0;
  v161 = v67;
  v181 = v68;
  v163 = v69;
  v183 = v70;
  v185 = v71;
  v165 = v72;
  v187 = v73;
  v167 = v74;
  v106 = -497126719;
  result = v174;
  v107 = v176;
  v108 = v153;
  v109 = v178;
  v110 = v156;
  v111 = v158;
  v112 = v180;
  v113 = v160;
  v148 = -64955950;
  while ( 1 )
  {
    v114 = v108 ^ v110;
    v115 = v111 ^ v113;
    v116 = v114 ^ v112 & v110;
    v117 = (v107 | v109) ^ v113;
    v118 = v112 & v110 ^ ~result;
    v119 = v113 & v107;
    v120 = v118 | v116;
    v121 = ~v109 ^ v119;
    v122 = (v112 | result) ^ v110;
    v123 = v112 ^ (v118 | v116);
    v124 = v115 & v117 ^ v121;
    v125 = v119 ^ v115;
    v126 = v114 & v122 ^ v118;
    v127 = v121 | v125;
    v128 = v125 ^ v123 ^ v124;
    v129 = v116 ^ v126;
    v130 = ~v122 ^ v120;
    v131 = v126 & v120;
    v132 = v128 ^ __ROR4__(v123, 30);
    v133 = v107 ^ v127 ^ v130;
    v134 = ~v117 ^ v127 ^ v131;
    v135 = v124 & v127 ^ v129;
    v136 = v133 ^ __ROR4__(v130, 30);
    v137 = v134 ^ __ROR4__(v131, 30);
    v138 = v132 ^ __ROR4__(v128, 18);
    v139 = v135 ^ __ROR4__(v129, 30);
    v140 = v136 ^ __ROR4__(v133, 18);
    v141 = v137 ^ __ROR4__(v134, 18);
    v142 = v138 ^ __ROR4__(v132, 22);
    v143 = v139 ^ __ROR4__(v135, 18);
    result = v140 ^ __ROR4__(v136, 22);
    v108 = v141 ^ __ROR4__(v137, 22);
    v110 = v143 ^ __ROR4__(v139, 22);
    v107 = __ROR4__(v140, 31);
    v109 = __ROR4__(v141, 31);
    v113 = v106 ^ __ROR4__(v138, 31);
    v111 = __ROR4__(v143, 31);
    ++v105;
    v112 = v142 ^ v148;
    if ( v105 == 8 )
      break;
    v148 = dword_180200[v105];
    v106 = dword_180220[v105];
  }
  v177 = v109;
  v3 = 0;
  v173 = result;
  v175 = v107;
  v152 = v108;
  v154 = v110;
  v157 = v111;
  v179 = v112;
  v159 = v113;
  if ( n )
    goto LABEL_5;
LABEL_19:
  v4 = v151;
LABEL_20:
  v4[9] = v195;
  v4[10] = v189;
  v4[11] = v170;
  v4[12] = v171;
  v4[13] = v191;
  v4[14] = v193;
  v4[15] = v190;
  v4[16] = v150;
  v4[17] = v187;
  v4[18] = v161;
  v4[19] = v163;
  v4[20] = v185;
  v4[21] = v167;
  v4[22] = v181;
  v4[23] = v183;
  v4[24] = v165;
  v4[8] = v3;
  v4[25] = v179;
  v4[26] = v173;
  v4[27] = v152;
  v4[28] = v154;
  v4[29] = v159;
  v4[30] = v175;
  v4[31] = v177;
  v4[32] = v157;
  return result;
}
