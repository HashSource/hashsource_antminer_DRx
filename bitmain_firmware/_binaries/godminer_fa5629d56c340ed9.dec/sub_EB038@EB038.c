int __fastcall sub_EB038(int *a1, int a2, unsigned int a3)
{
  int v4; // r4
  int v5; // r12
  int result; // r0
  int v7; // lr
  int v8; // r3
  __int64 v9; // r4
  int v10; // r3
  int v11; // lr
  __int64 v12; // r4
  int v13; // lr
  int v14; // lr
  int v15; // r3
  __int64 v16; // r4
  int v17; // r3
  int v18; // lr
  int v19; // r3
  int v20; // r3
  int v21; // r4
  int v22; // r3
  int v23; // lr
  int v24; // r3
  int v25; // r4
  int v26; // r3
  int v27; // r3
  int v28; // r4
  int v29; // r3
  int v30; // lr
  int v31; // r3
  int v32; // r4
  int v33; // r3
  int v34; // r3
  int v35; // lr
  int v36; // r2
  int v37; // r2
  int v38; // r3
  __int64 v39; // r2
  int v40; // lr
  int v41; // lr
  __int64 *v42; // r4
  int *j; // r1
  int v44; // r0
  int v45; // t1
  int v46; // r12
  int v47; // r0
  int *v48; // r2
  int *v49; // r7
  int v50; // t1
  int v51; // r6
  int v52; // r5
  int v53; // lr
  int v54; // r4
  int v55; // lr
  int v56; // r6
  int v57; // r5
  int v58; // r4
  int v59; // lr
  unsigned int v60; // r3
  unsigned int v61; // r7
  int v62; // r12
  unsigned int v63; // r8
  unsigned int v64; // r1
  int v65; // r5
  unsigned int v66; // r0
  unsigned int v67; // r2
  int v68; // r4
  int v69; // lr
  int v70; // r12
  unsigned int v71; // r11
  __int64 v72; // r8
  int v73; // r1
  __int64 v74; // r6
  int v75; // r1
  unsigned int v76; // r4
  int v77; // r11
  int v78; // r2
  int v79; // r2
  int v80; // r5
  int v81; // r1
  int v82; // r2
  int v83; // r1
  int v84; // r0
  unsigned int v85; // r4
  __int64 v86; // r0
  int v87; // r0
  unsigned int v88; // r4
  int v89; // r11
  unsigned int v90; // r12
  unsigned int v91; // r11
  unsigned int v92; // r11
  unsigned int v93; // r5
  int v94; // r4
  unsigned int v95; // lr
  int v96; // r12
  unsigned int v97; // r2
  int *v98; // r3
  int v99; // r8
  int v100; // r12
  int v101; // lr
  int v102; // r1
  int v103; // r2
  int v104; // r6
  int v105; // r7
  int v106; // r5
  int v107; // lr
  int v108; // r7
  int v109; // r1
  int v110; // r0
  int v111; // r12
  int v112; // r2
  int v113; // r8
  int v114; // r1
  char *v115; // r3
  int v116; // r0
  int v117; // [sp+Ch] [bp-A8h]
  unsigned int v118; // [sp+10h] [bp-A4h]
  unsigned int v119; // [sp+10h] [bp-A4h]
  unsigned int v120; // [sp+14h] [bp-A0h]
  int v121; // [sp+18h] [bp-9Ch]
  unsigned int v122; // [sp+1Ch] [bp-98h]
  int v123; // [sp+1Ch] [bp-98h]
  int v124; // [sp+20h] [bp-94h]
  unsigned int v125; // [sp+20h] [bp-94h]
  int v126; // [sp+24h] [bp-90h]
  unsigned int v127; // [sp+28h] [bp-8Ch]
  unsigned int v128; // [sp+2Ch] [bp-88h]
  int v129; // [sp+30h] [bp-84h]
  int v130; // [sp+34h] [bp-80h]
  unsigned int v131; // [sp+38h] [bp-7Ch]
  int v132; // [sp+3Ch] [bp-78h]
  int v133; // [sp+40h] [bp-74h]
  unsigned int v134; // [sp+44h] [bp-70h]
  char *v135; // [sp+48h] [bp-6Ch]
  int v136; // [sp+4Ch] [bp-68h]
  int i; // [sp+50h] [bp-64h]
  __int64 v138; // [sp+60h] [bp-54h] BYREF
  __int64 v139; // [sp+68h] [bp-4Ch]
  __int64 v140; // [sp+70h] [bp-44h]
  __int64 v141; // [sp+78h] [bp-3Ch]
  __int64 v142; // [sp+80h] [bp-34h]
  int v143; // [sp+88h] [bp-2Ch]
  int v144; // [sp+8Ch] [bp-28h]
  _DWORD v145[9]; // [sp+90h] [bp-24h] BYREF

  v4 = a1[2];
  v5 = *a1 ^ *(_DWORD *)a2;
  result = *(_DWORD *)(a2 + 4) ^ a1[1];
  *a1 = v5;
  a1[1] = result;
  v7 = a1[4];
  v8 = a1[3] ^ *(_DWORD *)(a2 + 12);
  a1[2] = v4 ^ *(_DWORD *)(a2 + 8);
  a1[3] = v8;
  v9 = *(_QWORD *)(a2 + 16);
  a1[5] ^= HIDWORD(v9);
  a1[4] = v7 ^ v9;
  HIDWORD(v9) = *(_DWORD *)(a2 + 28);
  v10 = a1[7];
  v11 = a1[8];
  a1[6] ^= *(_DWORD *)(a2 + 24);
  a1[7] = v10 ^ HIDWORD(v9);
  v12 = *(_QWORD *)(a2 + 32);
  v13 = v11 ^ v12;
  a1[9] ^= HIDWORD(v12);
  LODWORD(v12) = a1[10];
  a1[8] = v13;
  v14 = a1[12];
  v15 = a1[11] ^ *(_DWORD *)(a2 + 44);
  a1[10] = v12 ^ *(_DWORD *)(a2 + 40);
  a1[11] = v15;
  v16 = *(_QWORD *)(a2 + 48);
  a1[13] ^= HIDWORD(v16);
  a1[12] = v14 ^ v16;
  HIDWORD(v16) = *(_DWORD *)(a2 + 60);
  v17 = a1[15];
  v18 = a1[16];
  a1[14] ^= *(_DWORD *)(a2 + 56);
  a1[15] = v17 ^ HIDWORD(v16);
  v19 = a1[17] ^ *(_DWORD *)(a2 + 68);
  a1[16] = v18 ^ *(_DWORD *)(a2 + 64);
  a1[17] = v19;
  if ( a3 > 0x48 )
  {
    v20 = a1[19] ^ *(_DWORD *)(a2 + 76);
    a1[18] ^= *(_DWORD *)(a2 + 72);
    a1[19] = v20;
    v21 = *(_DWORD *)(a2 + 84);
    v22 = a1[21];
    a1[20] ^= *(_DWORD *)(a2 + 80);
    v23 = a1[22];
    a1[21] = v22 ^ v21;
    v24 = a1[23] ^ *(_DWORD *)(a2 + 92);
    a1[22] = v23 ^ *(_DWORD *)(a2 + 88);
    a1[23] = v24;
    v25 = *(_DWORD *)(a2 + 100);
    v26 = a1[25];
    a1[24] ^= *(_DWORD *)(a2 + 96);
    a1[25] = v26 ^ v25;
    if ( a3 > 0x68 )
    {
      v27 = a1[27] ^ *(_DWORD *)(a2 + 108);
      a1[26] ^= *(_DWORD *)(a2 + 104);
      a1[27] = v27;
      v28 = *(_DWORD *)(a2 + 116);
      v29 = a1[29];
      a1[28] ^= *(_DWORD *)(a2 + 112);
      v30 = a1[30];
      a1[29] = v29 ^ v28;
      v31 = a1[31] ^ *(_DWORD *)(a2 + 124);
      a1[30] = v30 ^ *(_DWORD *)(a2 + 120);
      a1[31] = v31;
      v32 = *(_DWORD *)(a2 + 132);
      v33 = a1[33];
      a1[32] ^= *(_DWORD *)(a2 + 128);
      a1[33] = v33 ^ v32;
      if ( a3 > 0x88 )
      {
        v34 = a1[35] ^ *(_DWORD *)(a2 + 140);
        a1[34] ^= *(_DWORD *)(a2 + 136);
        a1[35] = v34;
        if ( a3 > 0x90 )
        {
          v35 = a1[38];
          v36 = a1[37] ^ *(_DWORD *)(a2 + 148);
          a1[36] ^= *(_DWORD *)(a2 + 144);
          a1[37] = v36;
          v37 = a1[40];
          v38 = a1[39] ^ *(_DWORD *)(a2 + 156);
          a1[38] = v35 ^ *(_DWORD *)(a2 + 152);
          a1[39] = v38;
          LODWORD(v39) = v37 ^ *(_DWORD *)(a2 + 160);
          v40 = a1[42];
          HIDWORD(v39) = a1[41] ^ *(_DWORD *)(a2 + 164);
          *((_QWORD *)a1 + 20) = v39;
          LODWORD(v39) = a1[44];
          HIDWORD(v39) = a1[43] ^ *(_DWORD *)(a2 + 172);
          a1[42] = v40 ^ *(_DWORD *)(a2 + 168);
          a1[43] = HIDWORD(v39);
          LODWORD(v39) = v39 ^ *(_DWORD *)(a2 + 176);
          v41 = a1[46];
          HIDWORD(v39) = a1[45] ^ *(_DWORD *)(a2 + 180);
          *((_QWORD *)a1 + 22) = v39;
          LODWORD(v39) = a1[48];
          HIDWORD(v39) = a1[47] ^ *(_DWORD *)(a2 + 188);
          a1[46] = v41 ^ *(_DWORD *)(a2 + 184);
          a1[47] = HIDWORD(v39);
          LODWORD(v39) = v39 ^ *(_DWORD *)(a2 + 192);
          HIDWORD(v39) = a1[49] ^ *(_DWORD *)(a2 + 196);
          *((_QWORD *)a1 + 24) = v39;
        }
      }
    }
  }
  v136 = 1;
  v135 = (char *)&unk_17B048;
  for ( i = 0; ; i = *((_DWORD *)v115 + 3) )
  {
    v42 = &v138;
    for ( j = a1; ; result = j[1] )
    {
      ++v42;
      v44 = result ^ j[11] ^ j[21] ^ j[31] ^ j[41];
      *((_DWORD *)v42 - 2) = v5 ^ j[10] ^ j[20] ^ j[30] ^ j[40];
      *((_DWORD *)v42 - 1) = v44;
      if ( a1 + 8 == j )
        break;
      v45 = j[2];
      j += 2;
      v5 = v45;
    }
    v46 = ((2 * v139) | (HIDWORD(v139) >> 31)) ^ v142;
    v145[2] = ((2 * v141) | (HIDWORD(v141) >> 31)) ^ v139;
    v145[3] = (v141 >> 31) ^ HIDWORD(v139);
    v47 = (v139 >> 31) ^ HIDWORD(v142);
    v48 = a1 - 2;
    v145[6] = ((2 * v138) | (HIDWORD(v138) >> 31)) ^ v141;
    v143 = v46;
    v145[0] = v138 ^ ((2 * v140) | (HIDWORD(v140) >> 31));
    v49 = v145;
    v144 = v47;
    v145[7] = HIDWORD(v141) ^ (v138 >> 31);
    v145[1] = HIDWORD(v138) ^ (v140 >> 31);
    v145[4] = ((2 * v142) | (HIDWORD(v142) >> 31)) ^ v140;
    v145[5] = (v142 >> 31) ^ HIDWORD(v140);
    while ( 1 )
    {
      v50 = v48[2];
      v48 += 2;
      v51 = v48[10];
      v52 = v48[11];
      v53 = v48[1] ^ v47;
      *v48 = v50 ^ v46;
      v48[1] = v53;
      v54 = v48[20];
      v55 = v48[21];
      v48[10] = v51 ^ v46;
      v56 = v48[30];
      v48[11] = v52 ^ v47;
      v48[20] = v54 ^ v46;
      v57 = v48[31];
      v58 = v48[40];
      v48[21] = v55 ^ v47;
      v59 = v48[41];
      v48[30] = v56 ^ v46;
      v48[31] = v57 ^ v47;
      v48[40] = v46 ^ v58;
      v48[41] = v47 ^ v59;
      if ( j == v48 )
        break;
      v46 = *v49;
      v49 += 2;
      v47 = *(v49 - 1);
    }
    v60 = (2 * a1[2]) | ((unsigned int)a1[3] >> 31);
    v61 = a1[27];
    v117 = *((__int64 *)a1 + 1) >> 31;
    v118 = ((unsigned int)a1[5] >> 2) | (a1[4] << 30);
    v62 = a1[26];
    v121 = *((__int64 *)a1 + 3) >> 4;
    v120 = (a1[6] << 28) | ((unsigned int)a1[7] >> 4);
    v63 = a1[28];
    v124 = *((__int64 *)a1 + 9) >> 12;
    v64 = a1[29];
    v122 = (a1[18] << 20) | ((unsigned int)a1[19] >> 12);
    v65 = *((__int64 *)a1 + 12) >> 21;
    v66 = ((unsigned int)a1[25] >> 21) | (a1[24] << 11);
    v67 = a1[40];
    v68 = *((__int64 *)a1 + 13) >> 7;
    a1[40] = *((__int64 *)a1 + 2) >> 2;
    v69 = (v62 << 25) | (v61 >> 7);
    v70 = (v63 >> 25) | (v64 << 7);
    v71 = a1[41];
    v72 = *((_QWORD *)a1 + 22);
    v73 = (v64 >> 25) | (a1[28] << 7);
    v74 = *((_QWORD *)a1 + 6);
    a1[41] = v118;
    a1[12] = v122;
    a1[45] = v73;
    a1[25] = v68;
    v75 = (v71 << 18) | (v67 >> 14);
    v76 = a1[39];
    v77 = (v67 << 18) | (v71 >> 14);
    a1[29] = v75;
    v78 = HIDWORD(v72) >> 3;
    a1[5] = v66;
    HIDWORD(v72) = v72 >> 3;
    LODWORD(v72) = v78 | ((_DWORD)v72 << 29);
    v79 = HIDWORD(v74) >> 20;
    a1[4] = v65;
    HIDWORD(v74) = v74 >> 20;
    v80 = a1[15];
    a1[3] = v79 | ((_DWORD)v74 << 12);
    v81 = a1[38];
    LODWORD(v74) = a1[14];
    a1[24] = v69;
    v82 = v81 << 8;
    v83 = a1[39];
    a1[13] = v124;
    a1[44] = v70;
    a1[28] = v77;
    a1[26] = v82 | HIBYTE(v76);
    v84 = v83 << 8;
    v85 = a1[38];
    HIDWORD(v86) = a1[9];
    a1[18] = HIDWORD(v72);
    a1[19] = v72;
    v87 = v84 | HIBYTE(v85);
    v88 = a1[11];
    a1[2] = HIDWORD(v74);
    a1[27] = v87;
    LODWORD(v86) = a1[8];
    v123 = v86 >> 5;
    v119 = ((_DWORD)v86 << 27) | ((unsigned int)a1[9] >> 5);
    v125 = ((unsigned int)a1[10] >> 28) | (16 * v88);
    v126 = (v88 >> 28) | (16 * a1[10]);
    v128 = (v80 << 6) | ((unsigned int)v74 >> 26);
    LODWORD(v72) = a1[17];
    v89 = a1[20];
    LODWORD(v86) = a1[23];
    v90 = a1[33];
    HIDWORD(v72) = a1[16];
    v129 = *((__int64 *)a1 + 8) >> 9;
    v127 = ((_DWORD)v74 << 6) | ((unsigned int)a1[15] >> 26);
    v130 = v72 >> 9;
    a1[15] = *((__int64 *)a1 + 10) >> 29;
    HIDWORD(v86) = a1[23] << 10;
    a1[14] = (8 * v89) | ((unsigned int)a1[21] >> 29);
    v91 = a1[22];
    v132 = HIDWORD(v86) | (v91 >> 22);
    v131 = (v91 << 10) | ((unsigned int)v86 >> 22);
    v133 = *((__int64 *)a1 + 15) >> 23;
    v92 = ((unsigned int)a1[32] >> 19) | (v90 << 13);
    v134 = ((unsigned int)a1[31] >> 23) | (a1[30] << 9);
    HIDWORD(v72) = (v90 >> 19) | (a1[32] << 13);
    LODWORD(v72) = *((__int64 *)a1 + 17) >> 17;
    HIDWORD(v74) = (a1[34] << 15) | ((unsigned int)a1[35] >> 17);
    LODWORD(v74) = *((__int64 *)a1 + 18) >> 11;
    v93 = (a1[36] << 21) | ((unsigned int)a1[37] >> 11);
    v94 = *((__int64 *)a1 + 21) >> 30;
    v95 = (4 * a1[42]) | ((unsigned int)a1[43] >> 30);
    v96 = *((__int64 *)a1 + 23) >> 8;
    HIDWORD(v86) = *((__int64 *)a1 + 24) >> 18;
    LODWORD(v86) = ((unsigned int)a1[47] >> 8) | (a1[46] << 24);
    v97 = (a1[48] << 14) | ((unsigned int)a1[49] >> 18);
    a1[21] = v117;
    a1[20] = v60;
    a1[11] = v121;
    a1[10] = v120;
    a1[31] = v123;
    a1[30] = v119;
    a1[32] = v125;
    a1[33] = v126;
    a1[23] = v128;
    a1[22] = v127;
    a1[42] = v129;
    a1[43] = v130;
    a1[49] = v94;
    a1[35] = v132;
    a1[16] = v92;
    a1[17] = HIDWORD(v72);
    a1[34] = v131;
    a1[37] = v72;
    a1[36] = HIDWORD(v74);
    a1[46] = v133;
    a1[7] = v74;
    a1[6] = v93;
    a1[47] = v134;
    v98 = a1;
    a1[48] = v95;
    a1[38] = v96;
    a1[39] = v86;
    a1[9] = HIDWORD(v86);
    a1[8] = v97;
    do
    {
      v99 = *v98;
      v98 += 10;
      v100 = *(v98 - 2);
      v101 = *(v98 - 4);
      v102 = *(v98 - 6);
      v103 = *(v98 - 8);
      v104 = *(v98 - 9);
      *(v98 - 4) = v99 & ~v100 ^ v101;
      v105 = v101 & ~v102;
      v106 = *(v98 - 1);
      v107 = v100 & ~v101 ^ v102;
      v108 = v105 ^ v103;
      v109 = v102 & ~v103;
      v110 = *(v98 - 3);
      v111 = v100 ^ v103 & ~v99;
      v112 = *(v98 - 5);
      v113 = v99 ^ v109;
      v114 = *(v98 - 7);
      *(v98 - 6) = v107;
      *(v98 - 2) = v111;
      *(v98 - 8) = v108;
      *(v98 - 10) = v113;
      *(v98 - 3) = v104 & ~v106 ^ v110;
      *(v98 - 5) = v106 & ~v110 ^ v112;
      *(v98 - 7) = v110 & ~v112 ^ v114;
      *(v98 - 1) = v114 & ~v104 ^ v106;
      *(v98 - 9) = v112 & ~v114 ^ v104;
    }
    while ( a1 + 50 != v98 );
    v115 = v135;
    v116 = a1[1];
    v5 = v136 ^ *a1;
    *a1 = v5;
    result = i ^ v116;
    a1[1] = result;
    if ( &unk_17B100 == (_UNKNOWN *)v135 )
      break;
    v135 += 8;
    v136 = *((_DWORD *)v115 + 2);
  }
  return result;
}
