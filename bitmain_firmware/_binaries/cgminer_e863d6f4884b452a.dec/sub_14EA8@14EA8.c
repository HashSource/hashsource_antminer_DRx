int __fastcall sub_14EA8(int a1, int a2)
{
  __int64 *v4; // r3
  __int64 *v5; // r12
  int v6; // r6
  __int64 v7; // r0
  __int64 **v8; // r7
  __int64 v9; // t1
  __int64 v10; // t1
  __int64 v11; // kr48_8
  unsigned int *v12; // r7
  int v13; // r1
  int v14; // r4
  int v15; // r3
  int v16; // r0
  unsigned int v17; // lr
  int v18; // r8
  int v19; // r1
  unsigned __int64 v20; // kr68_8
  _DWORD *v21; // r12
  unsigned __int64 v22; // kr50_8
  unsigned int v23; // r8
  unsigned __int64 v24; // kr58_8
  unsigned int v25; // r1
  int v26; // r5
  int v27; // r8
  __int64 v28; // r0
  unsigned __int64 v29; // kr60_8
  unsigned int v30; // r2
  unsigned int v31; // r0
  int v32; // r7
  int v33; // r4
  unsigned int v34; // r3
  int v35; // r4
  unsigned int v36; // r10
  unsigned __int64 v37; // kr70_8
  unsigned int v38; // r2
  int v39; // r12
  unsigned int v40; // r3
  bool v41; // cf
  unsigned int v42; // r3
  int v43; // r2
  unsigned int v44; // r4
  int v45; // r3
  unsigned int v46; // r11
  int v47; // r5
  unsigned int v48; // r10
  unsigned int v49; // lr
  unsigned int v50; // r8
  int *v51; // r6
  int v52; // r4
  int v53; // r3
  int v54; // r2
  int v55; // r8
  unsigned int v56; // r2
  int v57; // r4
  unsigned int v58; // r5
  __int64 v59; // r6
  unsigned int v60; // r2
  __int64 v61; // krA0_8
  unsigned int v62; // r4
  unsigned int v63; // r10
  unsigned int v64; // r9
  int v65; // r5
  unsigned int v66; // r3
  unsigned int v67; // r12
  unsigned __int64 v68; // kr78_8
  unsigned int v69; // r10
  unsigned int v70; // r8
  int v71; // r3
  int v72; // r2
  unsigned int v73; // r4
  int v74; // r12
  unsigned int v75; // lr
  __int64 v76; // r2
  unsigned __int64 v77; // krC8_8
  int v78; // r5
  int v79; // r8
  _DWORD *v80; // r4
  unsigned int v81; // r5
  unsigned __int64 v82; // krD8_8
  unsigned int v83; // r8
  unsigned int v84; // r11
  int v85; // r8
  int v86; // krE0_4
  unsigned int v87; // r4
  int v88; // r5
  unsigned __int64 v89; // krE8_8
  unsigned int v90; // r10
  unsigned int v91; // r5
  unsigned __int64 v92; // r0
  int v93; // r10
  unsigned int v94; // r9
  unsigned int v95; // r4
  unsigned int v96; // r5
  int v97; // lr
  unsigned __int64 v98; // kr108_8
  unsigned int v99; // lr
  unsigned int v100; // lr
  unsigned __int64 v101; // kr120_8
  unsigned int v102; // r11
  unsigned int v103; // r8
  unsigned int v104; // r9
  unsigned int v105; // r10
  int v106; // r4
  bool v107; // zf
  unsigned __int64 *v108; // r3
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // r0
  __int64 *v111; // r2
  __int64 *v112; // r7
  unsigned __int64 v113; // t1
  int v114; // r4
  unsigned __int64 v116; // [sp+0h] [bp-25Ch]
  unsigned __int8 *v117; // [sp+8h] [bp-254h]
  unsigned int v118; // [sp+Ch] [bp-250h]
  unsigned int v119; // [sp+Ch] [bp-250h]
  unsigned int v120; // [sp+Ch] [bp-250h]
  unsigned int v121; // [sp+Ch] [bp-250h]
  int v122; // [sp+10h] [bp-24Ch]
  unsigned __int64 v123; // [sp+14h] [bp-248h]
  unsigned __int64 v124; // [sp+14h] [bp-248h]
  unsigned int v125; // [sp+1Ch] [bp-240h]
  int v126; // [sp+1Ch] [bp-240h]
  int v127; // [sp+20h] [bp-23Ch]
  int v128; // [sp+20h] [bp-23Ch]
  unsigned int v129; // [sp+20h] [bp-23Ch]
  int v130; // [sp+20h] [bp-23Ch]
  unsigned __int64 v131; // [sp+24h] [bp-238h]
  unsigned int v132; // [sp+24h] [bp-238h]
  unsigned int v133; // [sp+28h] [bp-234h]
  int v134; // [sp+2Ch] [bp-230h]
  unsigned int v135; // [sp+2Ch] [bp-230h]
  int v136; // [sp+2Ch] [bp-230h]
  unsigned int v137; // [sp+30h] [bp-22Ch]
  unsigned int v138; // [sp+30h] [bp-22Ch]
  int v139; // [sp+30h] [bp-22Ch]
  unsigned __int64 v140; // [sp+34h] [bp-228h]
  unsigned int v141; // [sp+34h] [bp-228h]
  __int64 v142; // [sp+3Ch] [bp-220h]
  unsigned __int64 v143; // [sp+3Ch] [bp-220h]
  __int64 v144; // [sp+44h] [bp-218h]
  unsigned int v145; // [sp+44h] [bp-218h]
  int v146; // [sp+48h] [bp-214h]
  unsigned int v147; // [sp+4Ch] [bp-210h]
  unsigned int v148; // [sp+4Ch] [bp-210h]
  __int64 v149; // [sp+50h] [bp-20Ch]
  int v150; // [sp+50h] [bp-20Ch]
  unsigned int v151; // [sp+50h] [bp-20Ch]
  unsigned __int64 v152; // [sp+54h] [bp-208h]
  unsigned int v153; // [sp+58h] [bp-204h]
  unsigned __int64 v154; // [sp+5Ch] [bp-200h]
  int v155; // [sp+64h] [bp-1F8h]
  int v156; // [sp+64h] [bp-1F8h]
  unsigned __int64 v157; // [sp+68h] [bp-1F4h]
  unsigned __int64 v158; // [sp+68h] [bp-1F4h]
  unsigned int v159; // [sp+70h] [bp-1ECh]
  unsigned int v160; // [sp+70h] [bp-1ECh]
  unsigned int v161; // [sp+74h] [bp-1E8h]
  int v162; // [sp+78h] [bp-1E4h]
  int v163; // [sp+7Ch] [bp-1E0h]
  int v164; // [sp+80h] [bp-1DCh]
  __int64 v165; // [sp+84h] [bp-1D8h]
  unsigned int v166; // [sp+8Ch] [bp-1D0h]
  __int64 *v167; // [sp+90h] [bp-1CCh] BYREF
  __int64 *v168; // [sp+94h] [bp-1C8h]
  unsigned __int64 v169; // [sp+98h] [bp-1C4h]
  __int64 v170; // [sp+A0h] [bp-1BCh] BYREF
  unsigned __int64 v171; // [sp+A8h] [bp-1B4h]
  unsigned __int64 v172; // [sp+B0h] [bp-1ACh]
  int v173; // [sp+B8h] [bp-1A4h]
  int v174; // [sp+BCh] [bp-1A0h]
  int v175; // [sp+C0h] [bp-19Ch]
  unsigned int v176; // [sp+C4h] [bp-198h]
  int v177; // [sp+C8h] [bp-194h]
  int v178; // [sp+CCh] [bp-190h]
  int v179; // [sp+D0h] [bp-18Ch]
  unsigned int v180; // [sp+D4h] [bp-188h]
  unsigned __int64 v181; // [sp+D8h] [bp-184h]
  unsigned __int64 v182; // [sp+E0h] [bp-17Ch]
  unsigned __int64 v183; // [sp+E8h] [bp-174h]
  unsigned __int64 v184; // [sp+F0h] [bp-16Ch]
  unsigned int v185; // [sp+F8h] [bp-164h]
  unsigned int v186; // [sp+FCh] [bp-160h]
  __int64 v187; // [sp+100h] [bp-15Ch]
  __int64 v188; // [sp+108h] [bp-154h]
  unsigned int v189; // [sp+110h] [bp-14Ch] BYREF
  unsigned int v190; // [sp+114h] [bp-148h]
  _QWORD v191[15]; // [sp+118h] [bp-144h] BYREF
  char v192; // [sp+190h] [bp-CCh] BYREF
  _BYTE dest[192]; // [sp+198h] [bp-C4h] BYREF
  char v194; // [sp+258h] [bp-4h] BYREF

  memcpy(dest, &unk_4A320, sizeof(dest));
  v4 = (__int64 *)(a1 + 128);
  v5 = (__int64 *)&unk_4A3E8;
  v168 = (__int64 *)(a1 + 128);
  v6 = a1;
  v7 = 0x6A09E667F3BCC908LL;
  v8 = &v167;
  while ( 1 )
  {
    v10 = *v4++;
    *((_QWORD *)v8 + 1) = v10;
    v8 += 2;
    *((_QWORD *)v8 + 8) = v7;
    if ( (__int64 *)(a1 + 192) == v4 )
      break;
    v9 = *v5++;
    v7 = v9;
  }
  v167 = v4;
  v11 = *(_QWORD *)(a1 + 200);
  v147 = *(_DWORD *)(a1 + 192) ^ v185;
  v118 = *(_DWORD *)(a1 + 196) ^ v186;
  v185 = v147;
  v186 = v118;
  LODWORD(v144) = v11 ^ v187;
  v187 ^= v11;
  HIDWORD(v144) = HIDWORD(v187);
  v142 = v188;
  if ( a2 )
  {
    v142 = ~v188;
    v188 = ~v188;
  }
  v12 = &v189;
  do
  {
    v13 = *(unsigned __int8 *)(v6 + 2);
    v6 += 8;
    v14 = *(unsigned __int8 *)(v6 - 3);
    v15 = *(unsigned __int8 *)(v6 - 4);
    v16 = *(unsigned __int8 *)(v6 - 1);
    v12[2] = (v13 << 16)
           ^ (*(unsigned __int8 *)(v6 - 7) << 8)
           ^ *(unsigned __int8 *)(v6 - 8)
           ^ (*(unsigned __int8 *)(v6 - 5) << 24);
    v12 += 2;
    v12[1] = v15 ^ (v14 << 8) ^ (*(unsigned __int8 *)(v6 - 2) << 16) ^ (v16 << 24);
  }
  while ( &v192 != (char *)v12 );
  v116 = v169;
  v117 = dest;
  v17 = v176;
  v123 = v181;
  v18 = v173;
  v19 = v174;
  v149 = v170;
  v122 = v175;
  v20 = v182;
  v153 = HIDWORD(v20);
  v125 = v20;
  v154 = v171;
  v155 = v177;
  v127 = v178;
  v131 = v183;
  v157 = v172;
  v134 = v179;
  v159 = v180;
  v161 = v189;
  v137 = v190;
  v140 = v184;
  do
  {
    v21 = &v191[v117[2]];
    v22 = __PAIR64__(v19, v18) + v191[*v117] + v116;
    v23 = ((v118 ^ HIDWORD(v22)) + v123) ^ v18;
    v24 = __PAIR64__(v147 ^ (unsigned int)v22, v118 ^ HIDWORD(v22)) + v123;
    v25 = ((__PAIR64__(v147 ^ (unsigned int)v22, v118 ^ HIDWORD(v22)) + v123) >> 32) ^ v19;
    v26 = HIBYTE(v23) | (v25 << 8);
    v27 = HIBYTE(v25) | (v23 << 8);
    HIDWORD(v28) = v21[1];
    v29 = v22 + v191[v117[1]] + __PAIR64__(v27, v26);
    v30 = v118 ^ HIDWORD(v22) ^ v29;
    v31 = v147 ^ v22 ^ HIDWORD(v29);
    v148 = v22 + LODWORD(v191[v117[1]]) + v26;
    v32 = HIWORD(v30) | (v31 << 16);
    v33 = HIWORD(v31) | (v30 << 16);
    v124 = v24 + __PAIR64__(v33, v32);
    LODWORD(v28) = v122;
    v164 = v33;
    v34 = (v28 + __PAIR64__(v17, *v21) + v149) >> 32;
    v119 = v122 + *v21 + v149;
    v163 = v32;
    v35 = v144 ^ v119;
    LODWORD(v28) = HIDWORD(v144) ^ v34;
    v36 = ((HIDWORD(v144) ^ v34) + v125) ^ v122;
    v37 = __PAIR64__((unsigned int)v144 ^ v119, HIDWORD(v144) ^ v34) + __PAIR64__(v153, v125);
    v38 = ((__PAIR64__((unsigned int)v144 ^ v119, HIDWORD(v144) ^ v34) + __PAIR64__(v153, v125)) >> 32) ^ v17;
    v39 = HIBYTE(v36) | (v38 << 8);
    v145 = v26 ^ v124;
    HIDWORD(v28) = (__PAIR64__(v34, v119) + v191[v117[3]]) >> 32;
    v40 = v119 + LODWORD(v191[v117[3]]);
    v41 = __CFADD__(v40, v39);
    v42 = v40 + v39;
    v150 = HIBYTE(v38) | (v36 << 8);
    LODWORD(v28) = v28 ^ v42;
    v43 = HIDWORD(v28) + v41 + v150;
    v44 = v35 ^ v43;
    v152 = __PAIR64__(v43, v42);
    v146 = v27 ^ HIDWORD(v124);
    HIDWORD(v165) = HIWORD(v44) | ((_DWORD)v28 << 16);
    LODWORD(v165) = WORD1(v28) | (v44 << 16);
    v45 = v155 + LODWORD(v191[v117[4]]) + v154;
    HIDWORD(v28) = (__PAIR64__(v127, v155) + v191[v117[4]] + v154) >> 32;
    LODWORD(v28) = HIDWORD(v142) ^ HIDWORD(v28);
    v46 = ((HIDWORD(v142) ^ HIDWORD(v28)) + v131) ^ v155;
    v47 = v142 ^ v45;
    v49 = (__PAIR64__((unsigned int)v142 ^ v45, HIDWORD(v142) ^ HIDWORD(v28)) + v131) >> 32;
    v48 = (HIDWORD(v142) ^ HIDWORD(v28)) + v131;
    v50 = v49 ^ v127;
    v51 = (int *)&v191[v117[6]];
    HIDWORD(v28) = (__PAIR64__(v127, v155) + v191[v117[4]] + v154 + v191[v117[5]]) >> 32;
    v52 = v45 + LODWORD(v191[v117[5]]);
    v53 = *v51;
    v54 = HIBYTE(v46) | ((v49 ^ v127) << 8);
    v41 = __CFADD__(v52, v54);
    v128 = v54;
    v55 = HIBYTE(v50) | (v46 << 8);
    v56 = v52 + v54;
    LODWORD(v28) = v28 ^ v56;
    v57 = v51[1];
    v143 = __PAIR64__(v55 + (unsigned int)v41 + HIDWORD(v28), v56);
    v58 = v47 ^ (v55 + v41 + HIDWORD(v28));
    v120 = v39 ^ (v37 + v165);
    LODWORD(v59) = WORD1(v28) | (v58 << 16);
    v60 = v150 ^ ((v37 + v165) >> 32);
    HIDWORD(v59) = HIWORD(v58) | ((_DWORD)v28 << 16);
    v61 = __PAIR64__(v49, v48) + v59;
    v166 = HIDWORD(v59);
    v156 = v59;
    v151 = v134 + v53 + v157;
    v62 = (__PAIR64__(v57 + __CFADD__(v134, v53) + v159, v134 + v53) + v157) >> 32;
    v132 = (__PAIR64__(v49, v48) + v59) >> 32;
    LODWORD(v28) = v137 ^ v62;
    v138 = v28 + v140;
    v63 = (v28 + v140) ^ v134;
    v64 = (__PAIR64__(v161 ^ v151, v28) + v140) >> 32;
    v133 = v128 ^ v61;
    v65 = HIBYTE(v63) | ((v64 ^ v159) << 8);
    HIDWORD(v28) = ((v64 ^ v159) >> 24) | (v63 << 8);
    v68 = __PAIR64__(v62, v151) + v191[v117[7]] + __PAIR64__(HIDWORD(v28), v65);
    v67 = HIDWORD(v68);
    v66 = v68;
    LODWORD(v28) = v28 ^ v66;
    v158 = __PAIR64__(v67, v66);
    LODWORD(v59) = v161 ^ v151 ^ v67;
    v69 = WORD1(v59);
    v70 = v55 ^ v132;
    LODWORD(v59) = WORD1(v28) | ((_DWORD)v59 << 16);
    LODWORD(v28) = v69 | ((_DWORD)v28 << 16);
    v71 = 2 * v60;
    v72 = (2 * v120) | (v60 >> 31);
    v73 = v120;
    v129 = v138 + v59;
    v121 = (__PAIR64__(v64, v138) + __PAIR64__(v28, v59)) >> 32;
    v74 = v71 | (v73 >> 31);
    v135 = v65 ^ (v138 + v59);
    v75 = (__PAIR64__(HIDWORD(v29), v148) + v191[v117[8]] + __PAIR64__(v74, v72)) >> 32;
    v139 = v148 + LODWORD(v191[v117[8]]) + v72;
    LODWORD(v28) = v28 ^ v75;
    LODWORD(v59) = v59 ^ v139;
    LODWORD(v76) = v72 ^ (v61 + v28);
    v77 = __PAIR64__(v132, v61) + __PAIR64__(v59, v28);
    HIDWORD(v76) = v74 ^ ((__PAIR64__(v132, v61) + __PAIR64__(v59, v28)) >> 32);
    v141 = v121 ^ HIDWORD(v28);
    v160 = v76 >> 24;
    v162 = HIBYTE(HIDWORD(v76)) | ((_DWORD)v76 << 8);
    v116 = __PAIR64__(v75, v139) + v191[v117[9]] + __PAIR64__(v162, v160);
    LODWORD(v28) = v28 ^ v116;
    LODWORD(v59) = v59 ^ HIDWORD(v116);
    v78 = (2 * v133) | (v70 >> 31);
    v161 = WORD1(v28) | ((_DWORD)v59 << 16);
    v79 = (2 * v70) | (v133 >> 31);
    v137 = WORD1(v59) | ((_DWORD)v28 << 16);
    v131 = v77 + __PAIR64__(v137, v161);
    HIDWORD(v59) = &v191[v117[12]];
    HIDWORD(v28) = (v152 + v191[v117[10]] + __PAIR64__(v79, v78)) >> 32;
    HIDWORD(v76) = v152 + LODWORD(v191[v117[10]]) + v78;
    LODWORD(v76) = v164 ^ HIDWORD(v28);
    v80 = &v191[v117[11]];
    v81 = v78 ^ (v129 + (v164 ^ HIDWORD(v28)));
    v82 = __PAIR64__(v121, v129) + __PAIR64__((unsigned int)v163 ^ HIDWORD(v76), (unsigned int)v164 ^ HIDWORD(v28));
    LODWORD(v28) = *v80;
    v83 = v79
        ^ ((__PAIR64__(v121, v129) + __PAIR64__((unsigned int)v163 ^ HIDWORD(v76), (unsigned int)v164 ^ HIDWORD(v28))) >> 32);
    v84 = HIBYTE(v83);
    v85 = HIBYTE(v81) | (v83 << 8);
    v86 = HIDWORD(v76) + *v80;
    HIDWORD(v28) = (__PAIR64__(v80[1], HIDWORD(v76)) + v28) >> 32;
    v130 = v84 | (v81 << 8);
    LODWORD(v76) = v76 ^ (v86 + v85);
    LODWORD(v149) = v86 + v85;
    LODWORD(v28) = *(_DWORD *)HIDWORD(v59);
    v87 = *(_DWORD *)(HIDWORD(v59) + 4);
    HIDWORD(v149) = v130 + __CFADD__(v86, v85) + HIDWORD(v28);
    LODWORD(v59) = v163 ^ HIDWORD(v76) ^ HIDWORD(v149);
    v147 = WORD1(v76) | ((_DWORD)v59 << 16);
    HIDWORD(v59) = (2 * v135) | (v141 >> 31);
    v118 = WORD1(v59) | ((_DWORD)v76 << 16);
    v88 = (2 * v141) | (v135 >> 31);
    v140 = v82 + __PAIR64__(v118, v147);
    v89 = v143 + __PAIR64__(v87, v28) + __PAIR64__(v88, HIDWORD(v59));
    v90 = HIDWORD(v59) ^ (v124 + (HIDWORD(v165) ^ HIDWORD(v89)));
    v91 = v88 ^ ((v124 + __PAIR64__((unsigned int)v165 ^ (unsigned int)v89, HIDWORD(v165) ^ HIDWORD(v89))) >> 32);
    HIDWORD(v59) = HIBYTE(v90) | (v91 << 8);
    v92 = v89 + v191[v117[13]];
    v93 = HIBYTE(v91) | (v90 << 8);
    v136 = HIDWORD(v59);
    v94 = (v92 + __PAIR64__(v93, HIDWORD(v59))) >> 32;
    LODWORD(v76) = HIDWORD(v165) ^ HIDWORD(v89) ^ (v92 + HIDWORD(v59));
    v95 = v165 ^ v89 ^ v94;
    HIDWORD(v92) = v146;
    v96 = v145;
    LODWORD(v144) = WORD1(v76) | (v95 << 16);
    v154 = __PAIR64__(v94, (int)v92 + HIDWORD(v59));
    HIDWORD(v144) = HIWORD(v95) | ((_DWORD)v76 << 16);
    v123 = v124 + __PAIR64__((unsigned int)v165 ^ (unsigned int)v89, HIDWORD(v165) ^ HIDWORD(v89)) + v144;
    v97 = (2 * v96) | (HIDWORD(v92) >> 31);
    HIDWORD(v92) = __SPAIR64__(HIDWORD(v92), v96) >> 31;
    v98 = v158 + v191[v117[14]] + __PAIR64__(HIDWORD(v92), v97);
    LODWORD(v76) = &v191[v117[15]];
    HIDWORD(v76) = *(_DWORD *)v76;
    v99 = v97 ^ (v37 + v165 + (v166 ^ HIDWORD(v98)));
    HIDWORD(v92) ^= (v37 + v165 + __PAIR64__(v156 ^ (unsigned int)v98, v166 ^ HIDWORD(v98))) >> 32;
    v126 = *(_DWORD *)(v76 + 4);
    LODWORD(v76) = HIBYTE(HIDWORD(v92));
    HIDWORD(v92) = HIBYTE(v99) | (HIDWORD(v92) << 8);
    v100 = v76 | (v99 << 8);
    LODWORD(v92) = v166 ^ HIDWORD(v98) ^ (v98 + HIDWORD(v76) + HIDWORD(v92));
    HIDWORD(v59) = v156
                 ^ v98
                 ^ ((__PAIR64__(
                       HIDWORD(v98) + (unsigned int)__CFADD__((_DWORD)v98, HIDWORD(v76)) + v126,
                       (int)v98 + HIDWORD(v76))
                   + __PAIR64__(v100, HIDWORD(v92))) >> 32);
    LODWORD(v142) = WORD1(v92) | (HIDWORD(v59) << 16);
    v157 = __PAIR64__(HIDWORD(v98) + (unsigned int)__CFADD__((_DWORD)v98, HIDWORD(v76)) + v126, (int)v98 + HIDWORD(v76))
         + __PAIR64__(v100, HIDWORD(v92));
    HIDWORD(v142) = HIWORD(HIDWORD(v59)) | ((_DWORD)v92 << 16);
    v101 = v37 + v165 + __PAIR64__(v156 ^ (unsigned int)v98, v166 ^ HIDWORD(v98)) + v142;
    v125 = v37 + v165 + (v166 ^ HIDWORD(v98)) + v142;
    v102 = v130 ^ ((v82 + __PAIR64__(v118, v147)) >> 32);
    v103 = v85 ^ (v82 + v147);
    v153 = HIDWORD(v101);
    v104 = v100 ^ HIDWORD(v101);
    v105 = v93 ^ HIDWORD(v123);
    v17 = (2 * (v162 ^ HIDWORD(v131))) | ((v160 ^ (unsigned int)v131) >> 31);
    HIDWORD(v92) ^= v101;
    v127 = (2 * v102) | (v103 >> 31);
    v106 = (2 * v103) | (v102 >> 31);
    v18 = (2 * HIDWORD(v92)) | (v104 >> 31);
    v122 = (2 * (v160 ^ v131)) | (((unsigned int)v162 ^ HIDWORD(v131)) >> 31);
    v155 = v106;
    v19 = (2 * v104) | (HIDWORD(v92) >> 31);
    v159 = (2 * v105) | ((v136 ^ (unsigned int)v123) >> 31);
    v107 = &v194 == (char *)(v117 + 16);
    v134 = (2 * (v136 ^ v123)) | (v105 >> 31);
    v117 += 16;
  }
  while ( !v107 );
  v108 = (unsigned __int64 *)&v170;
  v173 = v18;
  v174 = v19;
  v185 = v147;
  v109 = v116;
  v110 = v123;
  v186 = v118;
  v169 = v116;
  v181 = v123;
  v170 = v149;
  v175 = v122;
  v176 = v17;
  v187 = v144;
  v182 = v101;
  v171 = v154;
  v177 = v106;
  v178 = v127;
  v188 = v142;
  v183 = v77 + __PAIR64__(v137, v161);
  v172 = v157;
  v179 = v134;
  v180 = v159;
  v189 = v161;
  v190 = v137;
  v184 = v82 + __PAIR64__(v118, v147);
  v112 = v167;
  v111 = v168;
  while ( 1 )
  {
    v114 = *((_DWORD *)v111 + 1);
    LODWORD(v110) = v110 ^ v109 ^ *(_DWORD *)v111;
    *(_DWORD *)v111++ = v110;
    *((_DWORD *)v111 - 1) = HIDWORD(v110) ^ HIDWORD(v109) ^ v114;
    if ( v112 == v111 )
      break;
    v113 = *v108++;
    v109 = v113;
    v110 = v108[7];
  }
  return v110;
}
