int __fastcall sub_53F20(int result, char *a2, size_t a3)
{
  int v3; // r4
  size_t v4; // r5
  __int64 v5; // d23
  __int64 v6; // d21
  unsigned __int64 v7; // d18
  __int64 v8; // d16
  unsigned __int64 v9; // d5
  unsigned __int64 v10; // d7
  __int64 v11; // d17
  __int64 v12; // r2
  __int64 v13; // d24
  __int64 v14; // d24
  __int64 v15; // d24
  __int64 v16; // d24
  __int64 v17; // d24
  unsigned __int64 v18; // r2
  unsigned __int64 v19; // r2
  unsigned __int64 v20; // r2
  unsigned __int64 v21; // r2
  unsigned __int64 v22; // r2
  unsigned __int64 v23; // r2
  unsigned __int64 v24; // r2
  unsigned __int64 v25; // r2
  unsigned __int64 v26; // r2
  __int64 v27; // d20
  _DWORD *v28; // r1
  __int64 v29; // d2
  __int64 v30; // d3
  unsigned __int64 v31; // d17
  unsigned __int64 v32; // d19
  unsigned __int64 v33; // d20
  unsigned __int64 v34; // d22
  __int64 v35; // d12
  __int64 v36; // d0
  __int64 v37; // d1
  __int64 v38; // d4
  int v39; // r12
  unsigned __int64 v40; // d22
  unsigned __int64 v41; // d23
  __int64 v42; // d22
  unsigned __int64 v43; // d23
  __int64 v44; // r6
  int v45; // r12
  unsigned __int64 v46; // d20
  unsigned __int64 v47; // d21
  __int64 v48; // d20
  unsigned __int64 v49; // d21
  int v50; // r12
  unsigned __int64 v51; // d19
  unsigned __int64 v52; // d18
  __int64 v53; // d19
  unsigned __int64 v54; // d18
  __int64 v55; // r4
  int v56; // r12
  unsigned __int64 v57; // d17
  unsigned __int64 v58; // d16
  __int64 v59; // d17
  __int64 v60; // d14
  __int64 v61; // d16
  __int64 v62; // r8
  int v63; // r12
  unsigned __int64 v64; // d22
  __int64 v65; // d13
  __int64 v66; // d18
  int v67; // r12
  __int64 v68; // d20
  __int64 v69; // d15
  __int64 v70; // d16
  __int64 v71; // d6
  int v72; // r12
  __int64 v73; // d19
  __int64 v74; // d11
  __int64 v75; // d23
  __int64 v76; // d10
  int v77; // r12
  __int64 v78; // d17
  __int64 v79; // d9
  __int64 v80; // d21
  __int64 v81; // d8
  int v82; // r11
  int v83; // r11
  int v84; // r11
  int v85; // r11
  int v86; // r11
  __int64 v87; // [sp+0h] [bp-21Ch]
  int v88; // [sp+8h] [bp-214h]
  int v89; // [sp+8h] [bp-214h]
  int v90; // [sp+8h] [bp-214h]
  __int64 v91; // [sp+18h] [bp-204h]
  __int64 v92; // [sp+20h] [bp-1FCh]
  unsigned __int64 v93; // [sp+28h] [bp-1F4h]
  __int64 v94; // [sp+30h] [bp-1ECh]
  __int64 v95; // [sp+38h] [bp-1E4h]
  unsigned __int64 v96; // [sp+40h] [bp-1DCh]
  __int64 v97; // [sp+48h] [bp-1D4h]
  __int64 v98; // [sp+50h] [bp-1CCh]
  __int64 v99; // [sp+58h] [bp-1C4h]
  unsigned __int64 v100; // [sp+60h] [bp-1BCh]
  __int64 v101; // [sp+68h] [bp-1B4h]
  __int64 v102; // [sp+70h] [bp-1ACh]
  int v103; // [sp+7Ch] [bp-1A0h]
  size_t n; // [sp+80h] [bp-19Ch]
  char *src; // [sp+84h] [bp-198h]
  unsigned __int64 v106; // [sp+88h] [bp-194h]
  __int64 v107; // [sp+90h] [bp-18Ch]
  __int64 v108; // [sp+98h] [bp-184h]
  __int64 v109; // [sp+A0h] [bp-17Ch]
  __int64 v110; // [sp+A8h] [bp-174h]
  __int64 v111; // [sp+B0h] [bp-16Ch]
  __int64 v112; // [sp+B8h] [bp-164h]
  __int64 v113; // [sp+C0h] [bp-15Ch]
  __int64 v114; // [sp+C8h] [bp-154h]
  __int64 v115; // [sp+D0h] [bp-14Ch]
  __int64 v116; // [sp+D8h] [bp-144h]
  __int64 v117; // [sp+E0h] [bp-13Ch]
  __int64 v118; // [sp+E8h] [bp-134h]
  __int64 v119; // [sp+F0h] [bp-12Ch]
  __int64 v120; // [sp+F8h] [bp-124h]
  __int64 v121; // [sp+100h] [bp-11Ch]
  __int64 v122; // [sp+108h] [bp-114h]
  unsigned __int64 v123; // [sp+110h] [bp-10Ch]
  __int64 v124; // [sp+118h] [bp-104h]
  __int64 v125; // [sp+120h] [bp-FCh]
  __int64 v126; // [sp+128h] [bp-F4h]
  __int64 v127; // [sp+130h] [bp-ECh]
  __int64 v128; // [sp+138h] [bp-E4h]
  unsigned __int64 v129; // [sp+140h] [bp-DCh]
  unsigned __int64 v130; // [sp+148h] [bp-D4h]
  unsigned __int64 v131; // [sp+150h] [bp-CCh]
  unsigned __int64 v132; // [sp+158h] [bp-C4h]
  unsigned __int64 v133; // [sp+160h] [bp-BCh]
  unsigned __int64 v134; // [sp+168h] [bp-B4h]
  unsigned __int64 v135; // [sp+170h] [bp-ACh]
  int v136; // [sp+178h] [bp-A4h]
  _QWORD v137[16]; // [sp+198h] [bp-84h]

  v103 = result;
  src = a2;
  n = a3;
  v3 = *(_DWORD *)(result + 128);
  if ( 128 - v3 <= a3 )
  {
    v131 = *(_QWORD *)(result + 136);
    v132 = *(_QWORD *)(result + 144);
    v130 = *(_QWORD *)(result + 152);
    v129 = *(_QWORD *)(result + 160);
    v128 = *(_QWORD *)(result + 168);
    v127 = *(_QWORD *)(result + 176);
    v126 = *(_QWORD *)(result + 184);
    v125 = *(_QWORD *)(result + 192);
    v133 = *(_QWORD *)(result + 200);
    v123 = *(_QWORD *)(result + 208);
    v134 = *(_QWORD *)(result + 216);
    v135 = *(_QWORD *)(result + 224);
    v106 = *(_QWORD *)(result + 232);
    v124 = *(_QWORD *)(result + 240);
    if ( a3 )
    {
      do
      {
        v4 = 128 - v3;
        if ( 128 - v3 >= n )
          v4 = n;
        result = (int)memcpy((void *)(v103 + v3), src, v4);
        v3 += v4;
        src += v4;
        n -= v4;
        if ( v3 == 128 )
        {
          v106 += 1024LL;
          if ( v106 <= 0x3FF )
            ++v124;
          v5 = v133 ^ 0x243F6A8885A308D3LL;
          v6 = v123 ^ 0x13198A2E03707344LL;
          v7 = v134 ^ 0xA4093822299F31D0LL;
          v8 = v135 ^ 0x82EFA98EC4E6C89LL;
          v9 = v106 ^ 0xBE5466CF34E90C6CLL;
          v10 = v124 ^ 0xC0AC29B7C97C50DDLL;
          HIDWORD(v107) = *(_DWORD *)v103;
          LODWORD(v107) = *(_DWORD *)(v103 + 4);
          v11 = vshld_n_s64(v107 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v12) = (((unsigned int)v107 & 0xFFFF0000) >> 16) | ((*(_DWORD *)v103 & 0xFFFF0000) << 16) | v11;
          HIDWORD(v12) = ((*(_DWORD *)v103 & 0xFFFF0000) >> 16) | HIDWORD(v11);
          v137[0] = vshld_n_s64(v12 & 0xFF00FF00FF00FFLL, 8u) | ((v12 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v108) = *(_DWORD *)(v103 + 8);
          LODWORD(v108) = *(_DWORD *)(v103 + 12);
          v13 = vshld_n_s64(v108 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v13) = (((unsigned int)v108 & 0xFFFF0000) >> 16) | ((HIDWORD(v108) & 0xFFFF0000) << 16) | v13;
          HIDWORD(v13) |= (HIDWORD(v108) & 0xFFFF0000) >> 16;
          v137[1] = vshld_n_s64(v13 & 0xFF00FF00FF00FFLL, 8u) | ((v13 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v109) = *(_DWORD *)(v103 + 16);
          LODWORD(v109) = *(_DWORD *)(v103 + 20);
          v14 = vshld_n_s64(v109 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v14) = (((unsigned int)v109 & 0xFFFF0000) >> 16) | ((HIDWORD(v109) & 0xFFFF0000) << 16) | v14;
          HIDWORD(v14) |= (HIDWORD(v109) & 0xFFFF0000) >> 16;
          v137[2] = vshld_n_s64(v14 & 0xFF00FF00FF00FFLL, 8u) | ((v14 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v110) = *(_DWORD *)(v103 + 24);
          LODWORD(v110) = *(_DWORD *)(v103 + 28);
          v15 = vshld_n_s64(v110 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v15) = (((unsigned int)v110 & 0xFFFF0000) >> 16) | ((HIDWORD(v110) & 0xFFFF0000) << 16) | v15;
          HIDWORD(v15) |= (HIDWORD(v110) & 0xFFFF0000) >> 16;
          v137[3] = vshld_n_s64(v15 & 0xFF00FF00FF00FFLL, 8u) | ((v15 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v111) = *(_DWORD *)(v103 + 32);
          LODWORD(v111) = *(_DWORD *)(v103 + 36);
          v16 = vshld_n_s64(v111 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v16) = (((unsigned int)v111 & 0xFFFF0000) >> 16) | ((HIDWORD(v111) & 0xFFFF0000) << 16) | v16;
          HIDWORD(v16) |= (HIDWORD(v111) & 0xFFFF0000) >> 16;
          v137[4] = vshld_n_s64(v16 & 0xFF00FF00FF00FFLL, 8u) | ((v16 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v112) = *(_DWORD *)(v103 + 40);
          LODWORD(v112) = *(_DWORD *)(v103 + 44);
          v17 = vshld_n_s64(v112 & 0xFFFF0000FFFFLL, 0x10u);
          LODWORD(v12) = (((unsigned int)v112 & 0xFFFF0000) >> 16) | ((HIDWORD(v112) & 0xFFFF0000) << 16) | v17;
          HIDWORD(v12) = ((HIDWORD(v112) & 0xFFFF0000) >> 16) | HIDWORD(v17);
          v137[5] = vshld_n_s64(v12 & 0xFF00FF00FF00FFLL, 8u) | ((v12 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v113) = *(_DWORD *)(v103 + 48);
          LODWORD(v113) = *(_DWORD *)(v103 + 52);
          v18 = ((v113 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v113 & 0xFFFF0000FFFFLL, 0x10u);
          v137[6] = vshld_n_s64(v18 & 0xFF00FF00FF00FFLL, 8u) | ((v18 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v114) = *(_DWORD *)(v103 + 56);
          LODWORD(v114) = *(_DWORD *)(v103 + 60);
          v19 = ((v114 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v114 & 0xFFFF0000FFFFLL, 0x10u);
          v137[7] = vshld_n_s64(v19 & 0xFF00FF00FF00FFLL, 8u) | ((v19 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v115) = *(_DWORD *)(v103 + 64);
          LODWORD(v115) = *(_DWORD *)(v103 + 68);
          v20 = ((v115 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v115 & 0xFFFF0000FFFFLL, 0x10u);
          v137[8] = vshld_n_s64(v20 & 0xFF00FF00FF00FFLL, 8u) | ((v20 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v116) = *(_DWORD *)(v103 + 72);
          LODWORD(v116) = *(_DWORD *)(v103 + 76);
          v21 = ((v116 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v116 & 0xFFFF0000FFFFLL, 0x10u);
          v137[9] = vshld_n_s64(v21 & 0xFF00FF00FF00FFLL, 8u) | ((v21 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v117) = *(_DWORD *)(v103 + 80);
          LODWORD(v117) = *(_DWORD *)(v103 + 84);
          v22 = ((v117 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v117 & 0xFFFF0000FFFFLL, 0x10u);
          v137[10] = vshld_n_s64(v22 & 0xFF00FF00FF00FFLL, 8u) | ((v22 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v118) = *(_DWORD *)(v103 + 88);
          LODWORD(v118) = *(_DWORD *)(v103 + 92);
          v23 = ((v118 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v118 & 0xFFFF0000FFFFLL, 0x10u);
          v137[11] = vshld_n_s64(v23 & 0xFF00FF00FF00FFLL, 8u) | ((v23 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v119) = *(_DWORD *)(v103 + 96);
          LODWORD(v119) = *(_DWORD *)(v103 + 100);
          v24 = ((v119 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v119 & 0xFFFF0000FFFFLL, 0x10u);
          v137[12] = vshld_n_s64(v24 & 0xFF00FF00FF00FFLL, 8u) | ((v24 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v120) = *(_DWORD *)(v103 + 104);
          LODWORD(v120) = *(_DWORD *)(v103 + 108);
          v25 = ((v120 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v120 & 0xFFFF0000FFFFLL, 0x10u);
          v137[13] = vshld_n_s64(v25 & 0xFF00FF00FF00FFLL, 8u) | ((v25 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v121) = *(_DWORD *)(v103 + 112);
          LODWORD(v121) = *(_DWORD *)(v103 + 116);
          v26 = ((v121 & 0xFFFF0000FFFF0000LL) >> 16) | vshld_n_s64(v121 & 0xFFFF0000FFFFLL, 0x10u);
          v137[14] = vshld_n_s64(v26 & 0xFF00FF00FF00FFLL, 8u) | ((v26 & 0xFF00FF00FF00FF00LL) >> 8);
          HIDWORD(v122) = *(_DWORD *)(v103 + 120);
          LODWORD(v122) = *(_DWORD *)(v103 + 124);
          v27 = vshld_n_s64(v122 & 0xFFFF0000FFFFLL, 0x10u);
          v137[15] = vshld_n_s64((((v122 & 0xFFFF0000FFFF0000LL) >> 16) | v27) & 0xFF00FF00FF00FFLL, 8u)
                   | (((((v122 & 0xFFFF0000FFFF0000LL) >> 16) | v27) & 0xFF00FF00FF00FF00LL) >> 8);
          v28 = &unk_700D0;
          v29 = v125;
          v30 = v128;
          v31 = v129;
          v32 = v130;
          v33 = v132;
          v34 = v131;
          v35 = v124 ^ 0x3F84D5B5B5470917LL;
          v36 = v127;
          v37 = v106 ^ 0x452821E638D01377LL;
          v38 = v126;
          do
          {
            v39 = v28[1];
            v40 = (v137[*v28] ^ qword_704D0[v39]) + v30 + v34;
            LODWORD(v91) = (v40 ^ v37) >> 32;
            HIDWORD(v91) = v40 ^ v37;
            v41 = v5 + v91;
            HIDWORD(v92) = ((unsigned int)((v30 ^ v41) >> 32) >> 25) | (((unsigned int)v30 ^ (unsigned int)v41) << 7);
            LODWORD(v92) = (__int64)(v30 ^ v41) >> 25;
            v42 = (v137[v39] ^ qword_704D0[*v28]) + v40 + v92;
            v93 = __PAIR64__(
                    ((unsigned int)(HIDWORD(v42) ^ HIDWORD(v91)) >> 16)
                  | (((unsigned int)v42 ^ (unsigned int)v91) << 16),
                    (v42 ^ v91) >> 16);
            v43 = __PAIR64__(
                    ((unsigned int)(HIDWORD(v42) ^ HIDWORD(v91)) >> 16)
                  | (((unsigned int)v42 ^ (unsigned int)v91) << 16),
                    (v42 ^ v91) >> 16)
                + v41;
            HIDWORD(v44) = ((unsigned int)(HIDWORD(v43) ^ HIDWORD(v92)) >> 11)
                         | (((unsigned int)v43 ^ (unsigned int)v92) << 21);
            LODWORD(v44) = (__int64)(v43 ^ v92) >> 11;
            v45 = v28[3];
            v46 = (v137[v28[2]] ^ qword_704D0[v45]) + v36 + v33;
            LODWORD(v94) = (v46 ^ v9) >> 32;
            HIDWORD(v94) = v46 ^ v9;
            v47 = v6 + v94;
            HIDWORD(v95) = ((unsigned int)((v36 ^ v47) >> 32) >> 25) | (((unsigned int)v36 ^ (unsigned int)v47) << 7);
            LODWORD(v95) = (__int64)(v36 ^ v47) >> 25;
            v48 = (v137[v45] ^ qword_704D0[v28[2]]) + v46 + v95;
            v96 = __PAIR64__(
                    ((unsigned int)(HIDWORD(v48) ^ HIDWORD(v94)) >> 16)
                  | (((unsigned int)v48 ^ (unsigned int)v94) << 16),
                    (v48 ^ v94) >> 16);
            v49 = __PAIR64__(
                    ((unsigned int)(HIDWORD(v48) ^ HIDWORD(v94)) >> 16)
                  | (((unsigned int)v48 ^ (unsigned int)v94) << 16),
                    (v48 ^ v94) >> 16)
                + v47;
            HIDWORD(v97) = ((unsigned int)(HIDWORD(v49) ^ HIDWORD(v95)) >> 11)
                         | (((unsigned int)v49 ^ (unsigned int)v95) << 21);
            LODWORD(v97) = (__int64)(v49 ^ v95) >> 11;
            v50 = v28[5];
            v51 = (v137[v28[4]] ^ qword_704D0[v50]) + v38 + v32;
            LODWORD(v98) = (v51 ^ v10) >> 32;
            HIDWORD(v98) = v51 ^ v10;
            v52 = v7 + v98;
            HIDWORD(v99) = ((unsigned int)((v38 ^ v52) >> 32) >> 25) | (((unsigned int)v38 ^ (unsigned int)v52) << 7);
            LODWORD(v99) = (__int64)(v38 ^ v52) >> 25;
            v53 = (v137[v50] ^ qword_704D0[v28[4]]) + v51 + v99;
            v100 = __PAIR64__(
                     ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v98)) >> 16)
                   | (((unsigned int)v53 ^ (unsigned int)v98) << 16),
                     (v53 ^ v98) >> 16);
            v54 = __PAIR64__(
                    ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v98)) >> 16)
                  | (((unsigned int)v53 ^ (unsigned int)v98) << 16),
                    (v53 ^ v98) >> 16)
                + v52;
            HIDWORD(v55) = ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v99)) >> 11)
                         | (((unsigned int)v54 ^ (unsigned int)v99) << 21);
            LODWORD(v55) = (__int64)(v54 ^ v99) >> 11;
            v56 = v28[7];
            v57 = (v137[v28[6]] ^ qword_704D0[v56]) + v29 + v31;
            LODWORD(v101) = (v57 ^ v35) >> 32;
            HIDWORD(v101) = v57 ^ v35;
            v58 = v8 + v101;
            HIDWORD(v102) = ((unsigned int)((v29 ^ v58) >> 32) >> 25) | (((unsigned int)v29 ^ (unsigned int)v58) << 7);
            LODWORD(v102) = (__int64)(v29 ^ v58) >> 25;
            v59 = (v137[v56] ^ qword_704D0[v28[6]]) + v57 + v102;
            HIDWORD(v60) = ((unsigned int)(HIDWORD(v59) ^ HIDWORD(v101)) >> 16)
                         | (((unsigned int)v59 ^ (unsigned int)v101) << 16);
            LODWORD(v60) = (v59 ^ v101) >> 16;
            v61 = v60 + v58;
            HIDWORD(v62) = ((unsigned int)(HIDWORD(v61) ^ HIDWORD(v102)) >> 11)
                         | (((unsigned int)v61 ^ (unsigned int)v102) << 21);
            LODWORD(v62) = (v61 ^ v102) >> 11;
            v136 = v28[9];
            v63 = v28[8];
            v64 = (v137[v63] ^ qword_704D0[v136]) + v42 + v97;
            LODWORD(v65) = (v60 ^ v64) >> 32;
            HIDWORD(v65) = v60 ^ v64;
            v66 = v65 + v54;
            HIDWORD(v87) = ((unsigned int)(HIDWORD(v66) ^ HIDWORD(v97)) >> 25)
                         | (((unsigned int)v66 ^ (unsigned int)v97) << 7);
            LODWORD(v87) = (v66 ^ v97) >> 25;
            v34 = (v137[v136] ^ qword_704D0[v63]) + v64 + v87;
            HIDWORD(v35) = ((unsigned int)((v65 ^ v34) >> 32) >> 16) | (((unsigned int)v65 ^ (unsigned int)v34) << 16);
            LODWORD(v35) = (__int64)(v65 ^ v34) >> 16;
            v7 = v35 + v66;
            HIDWORD(v36) = ((unsigned int)(HIDWORD(v7) ^ HIDWORD(v87)) >> 11)
                         | (((unsigned int)v7 ^ (unsigned int)v87) << 21);
            LODWORD(v36) = (__int64)(v7 ^ v87) >> 11;
            v67 = v28[11];
            v88 = v28[10];
            v68 = (v137[v88] ^ qword_704D0[v67]) + v48 + v55;
            LODWORD(v69) = (v68 ^ v93) >> 32;
            HIDWORD(v69) = v68 ^ v93;
            v70 = v69 + v61;
            HIDWORD(v71) = ((unsigned int)(HIDWORD(v70) ^ HIDWORD(v55)) >> 25)
                         | (((unsigned int)v70 ^ (unsigned int)v55) << 7);
            LODWORD(v71) = (v70 ^ v55) >> 25;
            v33 = (v137[v67] ^ qword_704D0[v88]) + v68 + v71;
            HIDWORD(v37) = ((unsigned int)((v69 ^ v33) >> 32) >> 16) | (((unsigned int)v69 ^ (unsigned int)v33) << 16);
            LODWORD(v37) = (__int64)(v69 ^ v33) >> 16;
            v8 = v37 + v70;
            HIDWORD(v38) = ((unsigned int)((v71 ^ (unsigned __int64)v8) >> 32) >> 11)
                         | (((unsigned int)v71 ^ (unsigned int)v8) << 21);
            LODWORD(v38) = (v71 ^ v8) >> 11;
            v72 = v28[13];
            v89 = v28[12];
            v73 = (v137[v89] ^ qword_704D0[v72]) + v53 + v62;
            LODWORD(v74) = (v73 ^ v96) >> 32;
            HIDWORD(v74) = v73 ^ v96;
            v75 = v74 + v43;
            HIDWORD(v76) = ((unsigned int)(HIDWORD(v75) ^ HIDWORD(v62)) >> 25)
                         | (((unsigned int)v75 ^ (unsigned int)v62) << 7);
            LODWORD(v76) = (v75 ^ v62) >> 25;
            v32 = (v137[v72] ^ qword_704D0[v89]) + v73 + v76;
            HIDWORD(v9) = ((unsigned int)((v74 ^ v32) >> 32) >> 16) | (((unsigned int)v74 ^ (unsigned int)v32) << 16);
            LODWORD(v9) = (__int64)(v74 ^ v32) >> 16;
            v5 = v9 + v75;
            HIDWORD(v29) = ((unsigned int)((v76 ^ (unsigned __int64)v5) >> 32) >> 11)
                         | (((unsigned int)v76 ^ (unsigned int)v5) << 21);
            LODWORD(v29) = (v76 ^ v5) >> 11;
            v77 = v28[15];
            v90 = v28[14];
            v78 = (v137[v90] ^ qword_704D0[v77]) + v59 + v44;
            LODWORD(v79) = (v78 ^ v100) >> 32;
            HIDWORD(v79) = v78 ^ v100;
            v80 = v79 + v49;
            HIDWORD(v81) = ((unsigned int)(HIDWORD(v80) ^ HIDWORD(v44)) >> 25)
                         | (((unsigned int)v80 ^ (unsigned int)v44) << 7);
            LODWORD(v81) = (v80 ^ v44) >> 25;
            v31 = (v137[v77] ^ qword_704D0[v90]) + v78 + v81;
            HIDWORD(v10) = ((unsigned int)((v79 ^ v31) >> 32) >> 16) | (((unsigned int)v79 ^ (unsigned int)v31) << 16);
            LODWORD(v10) = (__int64)(v79 ^ v31) >> 16;
            v6 = v10 + v80;
            HIDWORD(v30) = ((unsigned int)((v81 ^ (unsigned __int64)v6) >> 32) >> 11)
                         | (((unsigned int)v81 ^ (unsigned int)v6) << 21);
            LODWORD(v30) = (v81 ^ v6) >> 11;
            v28 += 16;
          }
          while ( v28 != (_DWORD *)qword_704D0 );
          v82 = ((v131 ^ v133) >> 32) ^ HIDWORD(v5) ^ HIDWORD(v34);
          LODWORD(v131) = v131 ^ v133 ^ v5 ^ v34;
          HIDWORD(v131) = v82;
          v83 = ((v132 ^ v123) >> 32) ^ HIDWORD(v6) ^ HIDWORD(v33);
          LODWORD(v132) = v132 ^ v123 ^ v6 ^ v33;
          HIDWORD(v132) = v83;
          v84 = ((v130 ^ v134) >> 32) ^ HIDWORD(v32) ^ HIDWORD(v7);
          LODWORD(v130) = v130 ^ v134 ^ v32 ^ v7;
          HIDWORD(v130) = v84;
          v85 = ((v129 ^ v135) >> 32) ^ HIDWORD(v31) ^ HIDWORD(v8);
          LODWORD(v129) = v129 ^ v135 ^ v31 ^ v8;
          HIDWORD(v129) = v85;
          v86 = ((v128 ^ v133) >> 32) ^ HIDWORD(v30) ^ HIDWORD(v37);
          LODWORD(v128) = v128 ^ v133 ^ v30 ^ v37;
          HIDWORD(v128) = v86;
          v127 ^= v123 ^ v9 ^ v36;
          result = (__int64)(v79 ^ v31) >> 16;
          v126 ^= v134 ^ v10 ^ v38;
          v125 ^= v135 ^ v29 ^ v35;
          v3 = 0;
        }
      }
      while ( n );
    }
    *(_QWORD *)(v103 + 136) = v131;
    *(_QWORD *)(v103 + 144) = v132;
    *(_QWORD *)(v103 + 152) = v130;
    *(_QWORD *)(v103 + 160) = v129;
    *(_QWORD *)(v103 + 168) = v128;
    *(_QWORD *)(v103 + 176) = v127;
    *(_QWORD *)(v103 + 184) = v126;
    *(_QWORD *)(v103 + 192) = v125;
    *(_QWORD *)(v103 + 200) = v133;
    *(_QWORD *)(v103 + 208) = v123;
    *(_QWORD *)(v103 + 216) = v134;
    *(_QWORD *)(v103 + 224) = v135;
    *(_QWORD *)(v103 + 232) = v106;
    *(_QWORD *)(v103 + 240) = v124;
    *(_DWORD *)(v103 + 128) = v3;
  }
  else
  {
    result = (int)memcpy((void *)(result + v3), a2, a3);
    *(_DWORD *)(v103 + 128) = n + v3;
  }
  return result;
}
