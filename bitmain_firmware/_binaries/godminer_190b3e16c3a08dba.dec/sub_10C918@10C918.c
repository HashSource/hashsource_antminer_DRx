unsigned int __fastcall sub_10C918(unsigned int *a1, char a2, char a3, _BYTE *a4, int a5)
{
  unsigned int v5; // r4
  unsigned int v7; // r8
  unsigned int v8; // r9
  int v9; // r10
  unsigned int v10; // r7
  unsigned int v11; // r2
  unsigned int v12; // r3
  int v13; // r5
  unsigned int v14; // r0
  int v15; // r3
  int v16; // r4
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r8
  int v21; // r4
  int v22; // r0
  int v23; // r10
  int v24; // r2
  int v25; // lr
  unsigned int v26; // r3
  int v27; // r12
  unsigned int v28; // r11
  int v29; // r1
  int v30; // r2
  int v31; // r11
  int v32; // r9
  int v33; // r5
  int v34; // r6
  int v35; // r1
  int v36; // r7
  int v37; // r3
  int v38; // r0
  int v39; // r4
  int v40; // r12
  int v41; // r1
  int v42; // r2
  int v43; // r6
  int v44; // r1
  int v45; // r9
  int v46; // r0
  int v47; // r2
  int v48; // r4
  int v49; // lr
  int v50; // r3
  int v51; // r11
  int v52; // r0
  int v53; // r2
  int v54; // r1
  int v55; // r12
  int v56; // lr
  int v57; // r3
  int v58; // r4
  int v59; // r11
  int v60; // r8
  int v61; // r10
  int v62; // r0
  unsigned int v63; // lr
  int v64; // r2
  unsigned int v65; // r3
  int v66; // r12
  unsigned int v67; // r11
  int v68; // r4
  int v69; // r1
  int v70; // r2
  int v71; // r11
  int v72; // r9
  int v73; // r5
  int v74; // r6
  int v75; // r1
  int v76; // r7
  int v77; // r3
  int v78; // r0
  int v79; // r4
  int v80; // r12
  int v81; // r1
  int v82; // r2
  int v83; // r6
  int v84; // r1
  int v85; // r9
  int v86; // r0
  int v87; // r2
  int v88; // r4
  int v89; // lr
  int v90; // r3
  int v91; // r11
  int v92; // r0
  int v93; // r2
  int v94; // r1
  int v95; // r12
  int v96; // lr
  int v97; // r3
  int v98; // r4
  int v99; // r11
  int v100; // r8
  int v101; // r10
  int v102; // r0
  unsigned int v103; // lr
  int v104; // r2
  unsigned int v105; // r3
  int v106; // r12
  unsigned int v107; // r11
  int v108; // r4
  int v109; // r1
  int v110; // r2
  int v111; // r11
  int v112; // r9
  int v113; // r5
  int v114; // r6
  int v115; // r1
  int v116; // r7
  int v117; // r3
  int v118; // r0
  int v119; // r4
  int v120; // r12
  int v121; // r1
  int v122; // r2
  int v123; // r6
  int v124; // r1
  int v125; // r9
  int v126; // r0
  int v127; // r2
  int v128; // r4
  int v129; // lr
  int v130; // r3
  int v131; // r11
  int v132; // r0
  int v133; // r2
  int v134; // r1
  int v135; // r12
  int v136; // lr
  int v137; // r3
  int v138; // r4
  int v139; // r11
  int v140; // r5
  int v141; // r7
  int v142; // r4
  int v143; // r1
  int v144; // r6
  unsigned int v145; // r0
  unsigned int v146; // r2
  unsigned int v147; // r12
  unsigned int v148; // r8
  unsigned int result; // r0
  unsigned int v150; // r2
  int v151; // [sp+4h] [bp-A0h]
  int v152; // [sp+4h] [bp-A0h]
  int v153; // [sp+4h] [bp-A0h]
  int v154; // [sp+4h] [bp-A0h]
  unsigned int v155; // [sp+8h] [bp-9Ch]
  unsigned int v156; // [sp+Ch] [bp-98h]
  int v157; // [sp+Ch] [bp-98h]
  int v158; // [sp+Ch] [bp-98h]
  unsigned int v159; // [sp+10h] [bp-94h]
  int v160; // [sp+10h] [bp-94h]
  unsigned int v161; // [sp+14h] [bp-90h]
  int v162; // [sp+14h] [bp-90h]
  unsigned int v163; // [sp+18h] [bp-8Ch]
  int v164; // [sp+18h] [bp-8Ch]
  unsigned int v165; // [sp+1Ch] [bp-88h]
  unsigned int v166; // [sp+20h] [bp-84h]
  int v167; // [sp+20h] [bp-84h]
  unsigned int v168; // [sp+24h] [bp-80h]
  int v169; // [sp+24h] [bp-80h]
  unsigned int v170; // [sp+24h] [bp-80h]
  unsigned int v171; // [sp+28h] [bp-7Ch]
  int v172; // [sp+28h] [bp-7Ch]
  unsigned int v173; // [sp+2Ch] [bp-78h]
  unsigned int v174; // [sp+2Ch] [bp-78h]
  unsigned int v175; // [sp+30h] [bp-74h]
  int v176; // [sp+30h] [bp-74h]
  int v177; // [sp+30h] [bp-74h]
  unsigned int v178; // [sp+34h] [bp-70h]
  int v179; // [sp+34h] [bp-70h]
  unsigned int v180; // [sp+38h] [bp-6Ch]
  unsigned int v181; // [sp+38h] [bp-6Ch]
  unsigned int v182; // [sp+3Ch] [bp-68h]
  int v183; // [sp+3Ch] [bp-68h]
  unsigned int v184; // [sp+40h] [bp-64h]
  unsigned int v185; // [sp+40h] [bp-64h]
  unsigned int v186; // [sp+44h] [bp-60h]
  int v187; // [sp+44h] [bp-60h]
  unsigned int v188; // [sp+48h] [bp-5Ch]
  int v189; // [sp+48h] [bp-5Ch]
  unsigned int v190; // [sp+4Ch] [bp-58h]
  int v191; // [sp+4Ch] [bp-58h]
  unsigned int v192; // [sp+50h] [bp-54h]
  unsigned int v193; // [sp+50h] [bp-54h]
  unsigned int v194; // [sp+54h] [bp-50h]
  int v195; // [sp+54h] [bp-50h]
  unsigned int v196; // [sp+58h] [bp-4Ch]
  unsigned int v197; // [sp+58h] [bp-4Ch]
  unsigned int v198; // [sp+5Ch] [bp-48h]
  unsigned int v199; // [sp+5Ch] [bp-48h]
  unsigned int v201; // [sp+64h] [bp-40h]
  unsigned int v202; // [sp+68h] [bp-3Ch]
  int v203; // [sp+6Ch] [bp-38h]
  int v204; // [sp+70h] [bp-34h]
  unsigned int v205; // [sp+74h] [bp-30h]
  unsigned int v206; // [sp+78h] [bp-2Ch]
  int v207; // [sp+7Ch] [bp-28h]
  int v208; // [sp+7Ch] [bp-28h]
  int v209; // [sp+80h] [bp-24h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v165 = a1[14];
  v202 = a1[9];
  v166 = a1[15];
  v155 = a1[10];
  v175 = a1[16];
  v201 = a1[11];
  v161 = a1[17];
  v168 = a1[12];
  v190 = a1[18];
  v171 = a1[13];
  v203 = 2;
  v194 = a1[19];
  v159 = a1[20];
  v163 = a1[21];
  v192 = a1[22];
  v196 = a1[23];
  v173 = a1[32];
  v198 = a1[24];
  v186 = a1[25];
  v178 = a1[26];
  v182 = a1[27];
  v156 = a1[28];
  v188 = a1[29];
  v180 = a1[30];
  v184 = a1[31];
  while ( 1 )
  {
    v7 = bswap32(a1[6]);
    v8 = bswap32(a1[5]);
    v9 = v175 ^ v173 ^ v198;
    v10 = bswap32(a1[7]);
    v11 = bswap32(a1[4]);
    v12 = bswap32(a1[2]);
    v13 = v168 ^ v156 ^ v159 ^ v9;
    v151 = v171 ^ v188 ^ v163;
    v14 = bswap32(a1[3]);
    v205 = bswap32(a1[1]);
    v207 = v156 ^ v205;
    v157 = v10 ^ v12 ^ v159;
    v204 = v12 ^ v201;
    v209 = v175 ^ v10;
    v206 = bswap32(*a1);
    v189 = __ROR4__(v188 ^ v7 ^ v10 ^ v12 ^ v13, 30);
    v15 = v165 ^ v180 ^ v192;
    v181 = __ROR4__(v10 ^ v14 ^ v180 ^ v151, 30);
    v176 = v15;
    v16 = v166 ^ v184 ^ v196;
    v193 = __ROR4__(v11 ^ v192 ^ v151, 31);
    v185 = __ROR4__(v15 ^ v11 ^ v184, 30);
    v164 = __ROR4__(v10 ^ v14 ^ v163 ^ v13, 31);
    v199 = __ROR4__(v7 ^ v198 ^ v16, 31);
    v197 = __ROR4__(v8 ^ v196 ^ v15, 31);
    v172 = v171 ^ v11 ^ v13;
    v174 = __ROR4__(v16 ^ v173 ^ v8, 30);
    v208 = v207 ^ v7;
    v17 = v182 ^ v194 ^ v201 ^ v9;
    v18 = v186 ^ v161 ^ v202 ^ v9;
    v19 = v190 ^ v178 ^ v155;
    v167 = v176 ^ v166 ^ v7;
    v162 = v10 ^ v161 ^ v9;
    v187 = v9 ^ v186 ^ v7;
    v191 = v10 ^ v206 ^ v190 ^ v18;
    v179 = v18 ^ v178 ^ v7 ^ v10;
    v177 = v16 ^ v209;
    v160 = v157 ^ v17;
    v20 = 0;
    v183 = v19 ^ v182 ^ v10 ^ v206;
    v169 = v168 ^ v14 ^ v17;
    v21 = v206 ^ v202 ^ v9;
    v158 = v17 ^ v208;
    v22 = v205 ^ v155 ^ v18;
    v23 = -533497832;
    v24 = v204 ^ v19;
    v195 = v205 ^ v194 ^ v19;
    v25 = v8 ^ v165 ^ v151;
    v26 = v167;
    v27 = v169;
    v28 = v177;
    v29 = v172;
    v152 = 809079974;
    while ( 1 )
    {
      v30 = v24 ^ v27;
      v31 = v28 ^ v29;
      v32 = v30 ^ v21 & v27;
      v33 = (v25 | v26) ^ v29;
      v34 = v21 & v27 ^ ~v22;
      v35 = v29 & v25;
      v36 = v34 | v32;
      v37 = ~v26 ^ v35;
      v38 = (v21 | v22) ^ v27;
      v39 = v21 ^ (v34 | v32);
      v40 = v31 & v33 ^ v37;
      v41 = v35 ^ v31;
      v42 = v30 & v38 ^ v34;
      v43 = v37 | v41;
      v44 = v41 ^ v39 ^ v40;
      v45 = v32 ^ v42;
      v46 = ~v38 ^ v36;
      v47 = v42 & v36;
      v48 = v44 ^ __ROR4__(v39, 30);
      v49 = v25 ^ v43 ^ v46;
      v50 = ~v33 ^ v43 ^ v47;
      v51 = v40 & v43 ^ v45;
      v52 = v49 ^ __ROR4__(v46, 30);
      v53 = v50 ^ __ROR4__(v47, 30);
      v54 = v48 ^ __ROR4__(v44, 18);
      v55 = v51 ^ __ROR4__(v45, 30);
      v56 = v52 ^ __ROR4__(v49, 18);
      v57 = v53 ^ __ROR4__(v50, 18);
      v58 = v54 ^ __ROR4__(v48, 22);
      v59 = v55 ^ __ROR4__(v51, 18);
      v22 = v56 ^ __ROR4__(v52, 22);
      v24 = v57 ^ __ROR4__(v53, 22);
      v27 = v59 ^ __ROR4__(v55, 22);
      v25 = __ROR4__(v56, 31);
      v26 = __ROR4__(v57, 31);
      v29 = v23 ^ __ROR4__(v54, 31);
      v28 = __ROR4__(v59, 31);
      ++v20;
      v21 = v58 ^ v152;
      if ( v20 == 8 )
        break;
      v152 = dword_165C98[v20];
      v23 = dword_165CB8[v20];
    }
    v60 = 0;
    v155 = v22;
    v165 = v25;
    v201 = v24;
    v166 = v26;
    v168 = v27;
    v175 = v28;
    v202 = v21;
    v171 = v29;
    v61 = 23617341;
    v62 = v191;
    v63 = v193;
    v64 = v195;
    v65 = v197;
    v66 = v160;
    v67 = v199;
    v68 = v162;
    v69 = v164;
    v153 = -1226960659;
    while ( 1 )
    {
      v70 = v64 ^ v66;
      v71 = v67 ^ v69;
      v72 = v70 ^ v68 & v66;
      v73 = (v63 | v65) ^ v69;
      v74 = v68 & v66 ^ ~v62;
      v75 = v69 & v63;
      v76 = v74 | v72;
      v77 = ~v65 ^ v75;
      v78 = (v68 | v62) ^ v66;
      v79 = v68 ^ (v74 | v72);
      v80 = v71 & v73 ^ v77;
      v81 = v75 ^ v71;
      v82 = v70 & v78 ^ v74;
      v83 = v77 | v81;
      v84 = v81 ^ v79 ^ v80;
      v85 = v72 ^ v82;
      v86 = ~v78 ^ v76;
      v87 = v82 & v76;
      v88 = v84 ^ __ROR4__(v79, 30);
      v89 = v63 ^ v83 ^ v86;
      v90 = ~v73 ^ v83 ^ v87;
      v91 = v80 & v83 ^ v85;
      v92 = v89 ^ __ROR4__(v86, 30);
      v93 = v90 ^ __ROR4__(v87, 30);
      v94 = v88 ^ __ROR4__(v84, 18);
      v95 = v91 ^ __ROR4__(v85, 30);
      v96 = v92 ^ __ROR4__(v89, 18);
      v97 = v93 ^ __ROR4__(v90, 18);
      v98 = v94 ^ __ROR4__(v88, 22);
      v99 = v95 ^ __ROR4__(v91, 18);
      v62 = v96 ^ __ROR4__(v92, 22);
      v64 = v97 ^ __ROR4__(v93, 22);
      v66 = v99 ^ __ROR4__(v95, 22);
      v63 = __ROR4__(v96, 31);
      v65 = __ROR4__(v97, 31);
      v69 = v61 ^ __ROR4__(v94, 31);
      v67 = __ROR4__(v99, 31);
      ++v60;
      v68 = v98 ^ v153;
      if ( v60 == 8 )
        break;
      v153 = dword_165CD8[v60];
      v61 = dword_165CF8[v60];
    }
    v100 = 0;
    v190 = v62;
    v192 = v63;
    v194 = v64;
    v196 = v65;
    v159 = v66;
    v198 = v67;
    v161 = v68;
    v163 = v69;
    v101 = -497126719;
    v102 = v179;
    v103 = v181;
    v104 = v183;
    v105 = v185;
    v106 = v158;
    v107 = v174;
    v108 = v187;
    v109 = v189;
    v154 = -64955950;
    while ( 1 )
    {
      v110 = v104 ^ v106;
      v111 = v107 ^ v109;
      v112 = v110 ^ v108 & v106;
      v113 = (v103 | v105) ^ v109;
      v114 = v108 & v106 ^ ~v102;
      v115 = v109 & v103;
      v116 = v114 | v112;
      v117 = ~v105 ^ v115;
      v118 = (v108 | v102) ^ v106;
      v119 = v108 ^ (v114 | v112);
      v120 = v111 & v113 ^ v117;
      v121 = v115 ^ v111;
      v122 = v110 & v118 ^ v114;
      v123 = v117 | v121;
      v124 = v121 ^ v119 ^ v120;
      v125 = v112 ^ v122;
      v126 = ~v118 ^ v116;
      v127 = v122 & v116;
      v128 = v124 ^ __ROR4__(v119, 30);
      v129 = v103 ^ v123 ^ v126;
      v130 = ~v113 ^ v123 ^ v127;
      v131 = v120 & v123 ^ v125;
      v132 = v129 ^ __ROR4__(v126, 30);
      v133 = v130 ^ __ROR4__(v127, 30);
      v134 = v128 ^ __ROR4__(v124, 18);
      v135 = v131 ^ __ROR4__(v125, 30);
      v136 = v132 ^ __ROR4__(v129, 18);
      v137 = v133 ^ __ROR4__(v130, 18);
      v138 = v134 ^ __ROR4__(v128, 22);
      v139 = v135 ^ __ROR4__(v131, 18);
      v102 = v136 ^ __ROR4__(v132, 22);
      v104 = v137 ^ __ROR4__(v133, 22);
      v106 = v139 ^ __ROR4__(v135, 22);
      v103 = __ROR4__(v136, 31);
      v105 = __ROR4__(v137, 31);
      v109 = v101 ^ __ROR4__(v134, 31);
      v107 = __ROR4__(v139, 31);
      ++v100;
      v108 = v138 ^ v154;
      if ( v100 == 8 )
        break;
      v154 = dword_165D18[v100];
      v101 = dword_165D38[v100];
    }
    v182 = v104;
    v184 = v105;
    v178 = v102;
    v188 = v109;
    v180 = v103;
    v156 = v106;
    v173 = v107;
    v186 = v108;
    memset(a1, 0, 0x20u);
    if ( v203 == 1 )
      break;
    v203 = 1;
  }
  v140 = v180 ^ v192 ^ v165;
  v141 = v108 ^ v161 ^ v202;
  v142 = v190 ^ v155 ^ v178;
  v143 = v194 ^ v201 ^ v182;
  v144 = v156 ^ v159 ^ v168;
  v145 = v188 ^ v163 ^ v171;
  v146 = v145 >> 8;
  v147 = v196 ^ v166 ^ v184;
  v148 = HIWORD(v145);
  v170 = HIBYTE(v145);
  *a4 = HIBYTE(v141);
  a4[3] = v141;
  a4[7] = v142;
  a4[4] = HIBYTE(v142);
  a4[11] = v143;
  a4[15] = v144;
  a4[5] = BYTE2(v142);
  a4[19] = v145;
  result = v147 >> 8;
  a4[27] = v147;
  a4[6] = BYTE1(v142);
  a4[23] = v140;
  a4[1] = BYTE2(v141);
  a4[8] = HIBYTE(v143);
  a4[2] = BYTE1(v141);
  a4[14] = BYTE1(v144);
  a4[9] = BYTE2(v143);
  a4[10] = BYTE1(v143);
  a4[12] = HIBYTE(v144);
  a4[13] = BYTE2(v144);
  a4[17] = v148;
  a4[18] = v146;
  a4[16] = v170;
  a4[21] = BYTE2(v140);
  a4[22] = BYTE1(v140);
  a4[20] = HIBYTE(v140);
  a4[24] = HIBYTE(v147);
  a4[25] = BYTE2(v147);
  a4[26] = BYTE1(v147);
  if ( a5 == 8 )
  {
    v150 = v107 ^ v198 ^ v175;
    a4[31] = v150;
    a4[28] = HIBYTE(v150);
    a4[29] = BYTE2(v150);
    a4[30] = BYTE1(v150);
    return HIBYTE(v150);
  }
  return result;
}
