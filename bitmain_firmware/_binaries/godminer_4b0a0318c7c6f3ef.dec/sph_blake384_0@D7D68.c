void *__fastcall sph_blake384_0(int a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  void *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r12
  unsigned int v8; // r11
  unsigned int v9; // r5
  unsigned int v10; // lr
  _DWORD *v11; // r11
  int v12; // r7
  int v13; // r1
  int v14; // r4
  int v15; // lr
  int v16; // r3
  _BYTE *v17; // r1
  char *v18; // r10
  _BYTE *v19; // r2
  int v20; // r12
  int v21; // r3
  _BYTE *v22; // r5
  int v23; // r0
  int v24; // r7
  __int64 *v25; // r9
  _BYTE *v26; // r1
  int v27; // r12
  int v28; // r3
  int v29; // r7
  __int64 v30; // r2
  __int64 v31; // r4
  unsigned int v32; // lr
  int v33; // r9
  unsigned __int64 v34; // kr78_8
  unsigned int v35; // kr80_4
  unsigned int v36; // lr
  unsigned int v37; // r9
  unsigned __int64 v38; // kr90_8
  unsigned int v39; // r9
  unsigned __int64 v40; // kr98_8
  unsigned int v41; // r0
  int v42; // r0
  unsigned int v43; // kr14_4
  unsigned int v44; // r2
  unsigned int v45; // lr
  __int64 v46; // krA0_8
  unsigned int v47; // r2
  int v48; // r6
  int v49; // lr
  unsigned int v50; // r12
  unsigned int v51; // r0
  unsigned __int64 v52; // krA8_8
  unsigned int v53; // r6
  unsigned int v54; // r10
  unsigned int v55; // r3
  unsigned int v56; // r0
  int v57; // r10
  int v58; // r8
  int v59; // r6
  unsigned __int64 v60; // krB0_8
  unsigned int v61; // r12
  unsigned int v62; // r9
  unsigned int v63; // r10
  unsigned int v64; // r3
  __int64 v65; // r6
  unsigned int v66; // kr2C_4
  unsigned int v67; // r1
  unsigned int v68; // r9
  int v69; // r12
  unsigned int v70; // r9
  int v71; // r10
  unsigned __int64 v72; // krC0_8
  unsigned int v73; // r1
  unsigned int v74; // r9
  unsigned int v75; // r0
  unsigned __int64 v76; // krC8_8
  unsigned int v77; // kr40_4
  unsigned int v78; // r9
  __int64 v79; // r0
  unsigned int v80; // lr
  unsigned __int64 v81; // krE8_8
  unsigned int v82; // r10
  unsigned int v83; // lr
  unsigned int v84; // r9
  unsigned int v85; // r2
  unsigned int v86; // r8
  unsigned int v87; // lr
  unsigned __int64 v88; // krF0_8
  unsigned __int64 v89; // krF8_8
  unsigned __int64 v90; // kr100_8
  unsigned int v91; // r12
  unsigned int v92; // lr
  unsigned __int64 v93; // kr118_8
  unsigned int v94; // lr
  unsigned __int64 v95; // kr120_8
  __int64 v96; // r2
  int v97; // r8
  unsigned __int64 v98; // kr128_8
  unsigned __int64 v99; // kr130_8
  unsigned int v100; // lr
  void *result; // r0
  unsigned __int64 v103; // [sp+4h] [bp-2A0h]
  unsigned int v104; // [sp+4h] [bp-2A0h]
  unsigned int v105; // [sp+8h] [bp-29Ch]
  __int64 v106; // [sp+Ch] [bp-298h]
  __int64 v107; // [sp+14h] [bp-290h]
  unsigned __int64 v108; // [sp+14h] [bp-290h]
  unsigned __int64 v109; // [sp+1Ch] [bp-288h]
  unsigned int v110; // [sp+24h] [bp-280h]
  unsigned int v111; // [sp+24h] [bp-280h]
  unsigned int v112; // [sp+24h] [bp-280h]
  unsigned int v113; // [sp+28h] [bp-27Ch]
  unsigned int v114; // [sp+2Ch] [bp-278h]
  unsigned int v115; // [sp+2Ch] [bp-278h]
  unsigned __int64 v116; // [sp+30h] [bp-274h]
  __int64 v117; // [sp+30h] [bp-274h]
  __int64 v118; // [sp+38h] [bp-26Ch]
  unsigned int v119; // [sp+38h] [bp-26Ch]
  unsigned __int64 v120; // [sp+40h] [bp-264h]
  unsigned int v121; // [sp+40h] [bp-264h]
  __int64 v122; // [sp+48h] [bp-25Ch]
  __int64 v123; // [sp+48h] [bp-25Ch]
  int v124; // [sp+50h] [bp-254h]
  unsigned int v125; // [sp+50h] [bp-254h]
  __int64 v126; // [sp+54h] [bp-250h]
  unsigned __int64 v127; // [sp+5Ch] [bp-248h]
  __int64 v128; // [sp+5Ch] [bp-248h]
  __int64 v129; // [sp+64h] [bp-240h]
  int v130; // [sp+64h] [bp-240h]
  unsigned __int64 v131; // [sp+6Ch] [bp-238h]
  unsigned int v132; // [sp+6Ch] [bp-238h]
  unsigned int v133; // [sp+70h] [bp-234h]
  __int64 v134; // [sp+74h] [bp-230h]
  int v135; // [sp+74h] [bp-230h]
  int v136; // [sp+78h] [bp-22Ch]
  __int64 v137; // [sp+7Ch] [bp-228h]
  int v138; // [sp+7Ch] [bp-228h]
  unsigned int v139; // [sp+7Ch] [bp-228h]
  int v140; // [sp+80h] [bp-224h]
  unsigned int v141; // [sp+84h] [bp-220h]
  char *v142; // [sp+84h] [bp-220h]
  unsigned int v143; // [sp+88h] [bp-21Ch]
  unsigned int v144; // [sp+8Ch] [bp-218h]
  unsigned int v145; // [sp+90h] [bp-214h]
  unsigned __int64 v146; // [sp+94h] [bp-210h]
  unsigned __int64 v147; // [sp+9Ch] [bp-208h]
  unsigned __int64 v148; // [sp+A4h] [bp-200h]
  unsigned int v149; // [sp+ACh] [bp-1F8h]
  unsigned int v150; // [sp+B0h] [bp-1F4h]
  unsigned __int64 v151; // [sp+B4h] [bp-1F0h]
  int v152; // [sp+BCh] [bp-1E8h]
  unsigned int v153; // [sp+C0h] [bp-1E4h]
  unsigned int v154; // [sp+C4h] [bp-1E0h]
  int v155; // [sp+C8h] [bp-1DCh]
  int v156; // [sp+CCh] [bp-1D8h]
  int v157; // [sp+D0h] [bp-1D4h]
  unsigned int v158; // [sp+D4h] [bp-1D0h]
  __int64 v159; // [sp+D8h] [bp-1CCh]
  unsigned int v160; // [sp+E0h] [bp-1C4h]
  int v161; // [sp+E4h] [bp-1C0h]
  int v162; // [sp+E8h] [bp-1BCh]
  unsigned __int64 v163; // [sp+ECh] [bp-1B8h]
  __int64 v164; // [sp+F4h] [bp-1B0h]
  __int64 v165; // [sp+FCh] [bp-1A8h]
  unsigned int v166; // [sp+104h] [bp-1A0h]
  int v167; // [sp+108h] [bp-19Ch]
  int v168; // [sp+10Ch] [bp-198h]
  unsigned __int64 v169; // [sp+110h] [bp-194h]
  unsigned __int64 v170; // [sp+118h] [bp-18Ch]
  unsigned __int64 v171; // [sp+120h] [bp-184h]
  unsigned __int64 v172; // [sp+128h] [bp-17Ch]
  unsigned __int64 v173; // [sp+130h] [bp-174h]
  unsigned __int64 v174; // [sp+138h] [bp-16Ch]
  __int64 v175; // [sp+140h] [bp-164h]
  unsigned __int64 v176; // [sp+140h] [bp-164h]
  __int64 v177; // [sp+148h] [bp-15Ch]
  __int64 v178; // [sp+150h] [bp-154h]
  unsigned __int64 v179; // [sp+150h] [bp-154h]
  __int64 v180; // [sp+158h] [bp-14Ch]
  __int64 v181; // [sp+160h] [bp-144h]
  unsigned __int64 v182; // [sp+160h] [bp-144h]
  unsigned __int64 v183; // [sp+168h] [bp-13Ch]
  unsigned int v184; // [sp+170h] [bp-134h]
  unsigned int v185; // [sp+170h] [bp-134h]
  __int64 v186; // [sp+174h] [bp-130h]
  __int64 v187; // [sp+17Ch] [bp-128h]
  size_t n; // [sp+188h] [bp-11Ch]
  char *src; // [sp+18Ch] [bp-118h]
  unsigned __int64 v191; // [sp+190h] [bp-114h]
  unsigned __int64 v192; // [sp+198h] [bp-10Ch]
  unsigned __int64 v193; // [sp+1A0h] [bp-104h]
  __int64 v194; // [sp+1A8h] [bp-FCh]
  __int64 v195; // [sp+1B0h] [bp-F4h]
  unsigned int v196; // [sp+1B8h] [bp-ECh]
  int v197; // [sp+1BCh] [bp-E8h]
  unsigned int v198; // [sp+1C0h] [bp-E4h]
  unsigned int v199; // [sp+1C4h] [bp-E0h]
  __int64 v200; // [sp+1C8h] [bp-DCh]
  unsigned __int64 v201; // [sp+1D0h] [bp-D4h]
  __int64 v202; // [sp+1D8h] [bp-CCh]
  __int64 v203; // [sp+1E0h] [bp-C4h]
  __int64 v204; // [sp+1E8h] [bp-BCh]
  __int64 v205; // [sp+1F0h] [bp-B4h]
  __int64 v206; // [sp+1F8h] [bp-ACh]
  unsigned int v207; // [sp+200h] [bp-A4h]
  unsigned int v208; // [sp+204h] [bp-A0h]
  unsigned __int64 v209; // [sp+208h] [bp-9Ch]
  unsigned int v210; // [sp+220h] [bp-84h]
  _DWORD v211[7]; // [sp+224h] [bp-80h]
  unsigned __int64 v212; // [sp+240h] [bp-64h]
  unsigned __int64 v213; // [sp+248h] [bp-5Ch]
  unsigned __int64 v214; // [sp+250h] [bp-54h]
  unsigned int v215; // [sp+258h] [bp-4Ch]
  unsigned int v216; // [sp+25Ch] [bp-48h]
  unsigned __int64 v217; // [sp+260h] [bp-44h]
  unsigned __int64 v218; // [sp+268h] [bp-3Ch]
  unsigned __int64 v219; // [sp+270h] [bp-34h]
  unsigned __int64 v220; // [sp+278h] [bp-2Ch]
  unsigned __int64 v221; // [sp+280h] [bp-24h]
  unsigned __int64 v222; // [sp+288h] [bp-1Ch]
  unsigned int v223; // [sp+290h] [bp-14h]
  unsigned int v224; // [sp+294h] [bp-10h]
  unsigned __int64 v225; // [sp+298h] [bp-Ch]
  _BYTE v226[4]; // [sp+2A0h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v3 + n;
  }
  else
  {
    v193 = *(_QWORD *)(a1 + 136);
    v192 = *(_QWORD *)(a1 + 144);
    v202 = *(_QWORD *)(a1 + 152);
    v201 = *(_QWORD *)(a1 + 160);
    v200 = *(_QWORD *)(a1 + 168);
    v198 = *(_DWORD *)(a1 + 176);
    v199 = *(_DWORD *)(a1 + 180);
    v196 = *(_DWORD *)(a1 + 184);
    v197 = *(_DWORD *)(a1 + 188);
    v195 = *(_QWORD *)(a1 + 192);
    v203 = *(_QWORD *)(a1 + 200);
    v204 = *(_QWORD *)(a1 + 208);
    v205 = *(_QWORD *)(a1 + 216);
    v194 = *(_QWORD *)(a1 + 224);
    v191 = *(_QWORD *)(a1 + 232);
    v206 = *(_QWORD *)(a1 + 240);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v5 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v5, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v191 += 1024LL;
          if ( v191 <= 0x3FF )
            ++v206;
          v143 = bswap32(*(_DWORD *)(a1 + 8));
          v141 = bswap32(*(_DWORD *)(a1 + 12));
          v144 = bswap32(*(_DWORD *)(a1 + 20));
          v145 = bswap32(*(_DWORD *)(a1 + 24));
          v146 = _byteswap_uint64(*(_QWORD *)(a1 + 32));
          v154 = bswap32(*(_DWORD *)a1);
          v153 = bswap32(*(_DWORD *)(a1 + 4));
          v158 = bswap32(*(_DWORD *)(a1 + 16));
          v160 = bswap32(*(_DWORD *)(a1 + 28));
          v147 = __PAIR64__(bswap32(*(_DWORD *)(a1 + 40)), bswap32(*(_DWORD *)(a1 + 44)));
          v148 = _byteswap_uint64(*(_QWORD *)(a1 + 48));
          v6 = *(_DWORD *)(a1 + 60);
          v149 = bswap32(*(_DWORD *)(a1 + 56));
          v211[0] = v154;
          v211[5] = v160;
          v213 = v147;
          v211[1] = v141;
          v152 = 320440878;
          v211[2] = v143;
          v211[3] = v144;
          v214 = v148;
          v216 = v149;
          v7 = *(_DWORD *)(a1 + 64);
          v215 = bswap32(v6);
          v8 = *(_DWORD *)(a1 + 72);
          v9 = *(_DWORD *)(a1 + 68);
          v166 = v215;
          v210 = v153;
          v211[4] = v158;
          v211[6] = v145;
          v212 = v146;
          v155 = 57701188;
          v175 = *(_QWORD *)(a1 + 84);
          v178 = *(_QWORD *)(a1 + 92);
          v181 = *(_QWORD *)(a1 + 100);
          v184 = *(_DWORD *)(a1 + 108);
          v207 = *(_DWORD *)(a1 + 112);
          v208 = *(_DWORD *)(a1 + 116);
          v209 = *(_QWORD *)(a1 + 120);
          v134 = v204 ^ 0x13198A2E03707344LL;
          v161 = 698298832;
          v159 = 0x82EFA98EC4E6C89LL;
          v164 = 0x452821E638D01377LL;
          v163 = 0xBE5466CF34E90C6CLL;
          v103 = v205 ^ 0xA4093822299F31D0LL;
          v162 = -1542899678;
          v106 = v194 ^ 0x82EFA98EC4E6C89LL;
          v168 = -1062458953;
          v187 = 0x801F2E2858EFC16LL;
          v186 = 0x636920D871574E69LL;
          v127 = v191 ^ 0xBE5466CF34E90C6CLL;
          v183 = 0xBA7C9045F12C7F99LL;
          v122 = v191 ^ 0x452821E638D01377LL;
          v180 = 0x24A19947B3916CF7LL;
          v107 = v203 ^ 0x243F6A8885A308D3LL;
          v177 = 0x2FFD72DBD01ADFB7LL;
          v174 = 0xB8E1AFED6A267E96LL;
          v109 = v206 ^ 0xC0AC29B7C97C50DDLL;
          v172 = 0x9216D5D98979FB1BLL;
          v118 = v206 ^ 0x3F84D5B5B5470917LL;
          v129 = v195;
          v170 = 0xD1310BA698DFB5ACLL;
          v113 = v196;
          v156 = -2052912941;
          v124 = v197;
          v157 = 608135816;
          v110 = v198;
          v165 = 0x3F84D5B5B5470917LL;
          v114 = v199;
          v137 = v200;
          v167 = -914599715;
          v169 = _byteswap_uint64(__PAIR64__(v9, v7));
          v131 = v201;
          v171 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(a1 + 76), v8));
          v126 = v202;
          v120 = v192;
          v116 = v193;
          v10 = bswap32(v175);
          v176 = _byteswap_uint64(__PAIR64__(v178, HIDWORD(v175)));
          v173 = __PAIR64__(bswap32(*(_DWORD *)(a1 + 80)), v10);
          v179 = _byteswap_uint64(__PAIR64__(v181, HIDWORD(v178)));
          v217 = v169;
          v182 = _byteswap_uint64(__PAIR64__(v184, HIDWORD(v181)));
          v185 = bswap32(v207);
          v218 = v171;
          v150 = bswap32(v208);
          v219 = v173;
          v220 = v176;
          v221 = v179;
          v151 = _byteswap_uint64(v209);
          v222 = v182;
          v224 = v185;
          v223 = v150;
          v225 = v151;
          v11 = &unk_178DE8;
          while ( 1 )
          {
            v11 += 16;
            LODWORD(v31) = v141 ^ v156;
            v32 = v122 ^ ((v153 ^ v155) + v137 + v116);
            HIDWORD(v31) = (__PAIR64__(v154 ^ v152, v153 ^ v155) + v137 + v116) >> 32;
            v33 = HIDWORD(v122) ^ HIDWORD(v31);
            v34 = __PAIR64__(v32, HIDWORD(v122) ^ HIDWORD(v31)) + v107;
            v35 = (v141 ^ v156) + (v153 ^ v155) + v137 + v116;
            HIDWORD(v31) = (v31 + __PAIR64__(v143 ^ v157, (v153 ^ v155) + v137 + v116)) >> 32;
            LODWORD(v31) = (__int64)(v34 ^ v137) >> 25;
            v36 = v32
                ^ ((__PAIR64__(
                      ((unsigned int)(HIDWORD(v34) ^ HIDWORD(v137)) >> 25)
                    | (((unsigned int)v34 ^ (unsigned int)v137) << 7),
                      v35)
                  + v31) >> 32);
            v37 = v33 ^ (v35 + v31);
            HIDWORD(v123) = ((unsigned int)(HIDWORD(v34) ^ HIDWORD(v137)) >> 25)
                          | (((unsigned int)v34 ^ (unsigned int)v137) << 7);
            v117 = __PAIR64__(HIDWORD(v123), v35) + v31;
            LODWORD(v123) = v31;
            v138 = HIWORD(v37) | (v36 << 16);
            v108 = v34 + __PAIR64__(HIWORD(v36) | (v37 << 16), v138);
            v140 = HIWORD(v36) | (v37 << 16);
            v38 = __PAIR64__(v158 ^ HIDWORD(v159), v144 ^ (unsigned int)v159) + __PAIR64__(v114, v110) + v120;
            v39 = ((HIDWORD(v127) ^ HIDWORD(v38)) + v134) ^ v110;
            v40 = __PAIR64__((unsigned int)v127 ^ (unsigned int)v38, HIDWORD(v127) ^ HIDWORD(v38)) + v134;
            LODWORD(v31) = ((__PAIR64__((unsigned int)v127 ^ (unsigned int)v38, HIDWORD(v127) ^ HIDWORD(v38)) + v134) >> 32)
                         ^ v114;
            v41 = (unsigned int)v31 >> 25;
            LODWORD(v31) = (v39 >> 25) | ((_DWORD)v31 << 7);
            v42 = v41 | (v39 << 7);
            v43 = (v160 ^ v161) + v38;
            v44 = HIDWORD(v127) ^ HIDWORD(v38) ^ (v43 + v31);
            v111 = v43 + v31;
            v45 = v127
                ^ v38
                ^ ((__PAIR64__(HIDWORD(v38) + __CFADD__(v160 ^ v161, (_DWORD)v38) + (v145 ^ v162), v43)
                  + __PAIR64__(v42, v31)) >> 32);
            v121 = (__PAIR64__(HIDWORD(v38) + __CFADD__(v160 ^ v161, (_DWORD)v38) + (v145 ^ v162), v43)
                  + __PAIR64__(v42, v31)) >> 32;
            LODWORD(v128) = HIWORD(v44) | (v45 << 16);
            HIDWORD(v128) = HIWORD(v45) | (v44 << 16);
            v115 = (v40 + v128) >> 32;
            LODWORD(v31) = v31 ^ (v40 + v128);
            v46 = (v146 ^ v163) + __PAIR64__(v124, v113) + v126;
            v47 = (HIDWORD(v109) ^ HIDWORD(v46)) + v103;
            v48 = v109 ^ v46;
            LODWORD(v109) = v40 + v128;
            v49 = HIDWORD(v103) + __CFADD__(HIDWORD(v109) ^ HIDWORD(v46), (_DWORD)v103) + v48;
            v50 = ((v47 ^ v113) >> 25) | ((v49 ^ v124) << 7);
            HIDWORD(v31) = ((v49 ^ (unsigned int)v124) >> 25) | ((v47 ^ v113) << 7);
            v51 = v42 ^ v115;
            v52 = (v147 ^ v164) + v46 + __PAIR64__(HIDWORD(v31), v50);
            v53 = v48 ^ HIDWORD(v52);
            v105 = ((unsigned int)v31 >> 11) | (v51 << 21);
            v54 = HIDWORD(v109) ^ HIDWORD(v46) ^ v52;
            v55 = v51 >> 11;
            v56 = HIWORD(v54);
            HIDWORD(v109) = (v147 ^ v164) + v46 + v50;
            v57 = HIWORD(v53) | (v54 << 16);
            v58 = v55 | ((_DWORD)v31 << 21);
            v59 = v56 | (v53 << 16);
            v136 = v57;
            v60 = __PAIR64__(v49, v47) + __PAIR64__(v57, v59);
            v61 = v50 ^ (v47 + v59);
            HIDWORD(v31) ^= (__PAIR64__(v49, v47) + __PAIR64__(v57, v59)) >> 32;
            v135 = v59;
            v62 = HIDWORD(v118) ^ (((v148 ^ v165) + v129 + v131) >> 32);
            v63 = HIDWORD(v106);
            HIDWORD(v106) = v118 ^ ((v148 ^ v165) + v129 + v131);
            v64 = v62 + v106;
            v119 = (__PAIR64__(v63, v62) + v106) >> 32;
            LODWORD(v65) = (__int64)((__PAIR64__(v63, v62) + v106) ^ v129) >> 25;
            HIDWORD(v65) = (__PAIR64__(v149 ^ v168, v166 ^ v167) + (v148 ^ v165) + v129 + v131) >> 32;
            v66 = (v166 ^ v167) + (v148 ^ v165) + v129 + v131;
            v67 = ((v119 ^ HIDWORD(v129)) >> 25) | (((v62 + (_DWORD)v106) ^ (unsigned int)v129) << 7);
            v68 = v62 ^ (v66 + v65);
            v130 = v66 + v65;
            LODWORD(v31) = (v61 >> 11) | (HIDWORD(v31) << 21);
            v132 = (__PAIR64__(v67, v66) + v65) >> 32;
            v69 = (HIDWORD(v31) >> 11) | (v61 << 21);
            LODWORD(v106) = v31;
            HIDWORD(v31) = HIWORD(v68);
            v70 = ((HIDWORD(v106) ^ v132) >> 16) | (v68 << 16);
            v71 = HIDWORD(v31) | ((HIDWORD(v106) ^ v132) << 16);
            LODWORD(v65) = v65 ^ (v64 + v71);
            HIDWORD(v106) = v69;
            v72 = __PAIR64__(v119, v64) + __PAIR64__(v70, v71);
            v73 = v67 ^ ((__PAIR64__(v119, v64) + __PAIR64__(v70, v71)) >> 32);
            v104 = v71 ^ ((v169 ^ v170) + v117 + v105);
            v74 = v70 ^ (((v169 ^ v170) + v117 + __PAIR64__(v58, v105)) >> 32);
            v75 = v105 ^ (v60 + v74);
            v76 = v60 + __PAIR64__(v104, v74);
            v133 = (v75 >> 25) | ((v58 ^ ((v60 + __PAIR64__(v104, v74)) >> 32)) << 7);
            HIDWORD(v31) = ((v171 ^ v172) + (v169 ^ v170) + v117 + __PAIR64__(v58, v105)) >> 32;
            v77 = (v171 ^ v172) + (v169 ^ v170) + v117 + v105;
            v78 = v74 ^ (v77 + v133);
            v116 = (v171 ^ v172)
                 + (v169 ^ v170)
                 + v117
                 + __PAIR64__(v58, v105)
                 + __PAIR64__((((unsigned int)v58 ^ HIDWORD(v76)) >> 25) | (v75 << 7), v133);
            LODWORD(v31) = ((unsigned int)v65 >> 11) | (v73 << 21);
            v125 = (((unsigned int)v58 ^ HIDWORD(v76)) >> 25) | (v75 << 7);
            LODWORD(v65) = (v73 >> 11) | ((_DWORD)v65 << 21);
            LODWORD(v118) = HIWORD(v78)
                          | ((v104 ^ ((__PAIR64__(HIDWORD(v31), v77) + __PAIR64__(v125, v133)) >> 32)) << 16);
            HIDWORD(v118) = ((v104 ^ ((__PAIR64__(HIDWORD(v31), v77) + __PAIR64__(v125, v133)) >> 32)) >> 16)
                          | (v78 << 16);
            v103 = v76 + v118;
            LODWORD(v79) = v106;
            HIDWORD(v79) = ((v173 ^ v174) + __PAIR64__(v121, v111)) >> 32;
            v80 = v138 ^ ((v173 ^ v174) + v111 + v106);
            v81 = v72 + __PAIR64__(v80, v140 ^ (unsigned int)((__PAIR64__(v69, (v173 ^ v174) + v111) + v79) >> 32));
            v82 = (((unsigned int)v69 ^ HIDWORD(v81)) >> 25) | (((unsigned int)v106 ^ (unsigned int)v81) << 7);
            v139 = (__int64)(v106
                           ^ (v72
                            + __PAIR64__(
                                v80,
                                v140 ^ (unsigned int)((__PAIR64__(v69, (v173 ^ v174) + v111) + v79) >> 32)))) >> 25;
            v120 = (v176 ^ v177) + __PAIR64__(v69, (v173 ^ v174) + v111) + v79 + __PAIR64__(v82, v139);
            v83 = v80 ^ HIDWORD(v120);
            v84 = v140 ^ ((__PAIR64__(v69, (v173 ^ v174) + v111) + v79) >> 32) ^ v120;
            v85 = (__int64)(v123 ^ v108) >> 11;
            v86 = ((unsigned int)(HIDWORD(v123) ^ HIDWORD(v108)) >> 11)
                | (((unsigned int)v123 ^ (unsigned int)v108) << 21);
            LODWORD(v122) = HIWORD(v84) | (v83 << 16);
            HIDWORD(v122) = HIWORD(v83) | (v84 << 16);
            v106 = v81 + v122;
            v87 = v128 ^ ((v179 ^ v180) + HIDWORD(v109) + v31);
            v88 = (v179 ^ v180) + __PAIR64__(HIDWORD(v52), HIDWORD(v109)) + __PAIR64__(v65, v31);
            HIDWORD(v79) = v31 ^ (v108 + (HIDWORD(v128) ^ HIDWORD(v88)));
            v89 = v108 + __PAIR64__(v87, HIDWORD(v128) ^ HIDWORD(v88));
            v90 = (v182 ^ v183) + v88;
            LODWORD(v65) = v65 ^ ((v108 + __PAIR64__(v87, HIDWORD(v128) ^ HIDWORD(v90))) >> 32);
            LODWORD(v79) = (HIDWORD(v79) >> 25) | ((_DWORD)v65 << 7);
            HIDWORD(v79) = ((unsigned int)v65 >> 25) | (HIDWORD(v79) << 7);
            v91 = HIDWORD(v128) ^ HIDWORD(v88) ^ (v90 + v79);
            v92 = v87 ^ ((v90 + v79) >> 32);
            LODWORD(v127) = HIWORD(v91) | (v92 << 16);
            HIDWORD(v127) = HIWORD(v92) | (v91 << 16);
            v126 = v90 + v79;
            v112 = v133 ^ (v76 + v118);
            v107 = v89 + v127;
            v93 = __PAIR64__(
                    v132 + __CFADD__(v150 ^ v186, v130) + (v185 ^ HIDWORD(v186)),
                    (v150 ^ (unsigned int)v186) + v130)
                + __PAIR64__(v86, v85);
            v94 = v136
                ^ ((__PAIR64__(
                      v132 + __CFADD__(v150 ^ v186, v130) + (v185 ^ HIDWORD(v186)),
                      (v150 ^ (unsigned int)v186) + v130)
                  + __PAIR64__(v86, v85)) >> 32);
            HIDWORD(v31) = v82 ^ ((v81 + v122) >> 32);
            LODWORD(v65) = v135 ^ ((v150 ^ v186) + v130 + v85);
            v95 = __PAIR64__(v115, v109) + __PAIR64__(v65, v94);
            LODWORD(v96) = v85 ^ (v109 + v94);
            HIDWORD(v96) = v86 ^ ((__PAIR64__(v115, v109) + __PAIR64__(v65, v94)) >> 32);
            v97 = HIDWORD(v96) >> 25;
            HIDWORD(v96) = v96 >> 25;
            LODWORD(v96) = v97 | ((_DWORD)v96 << 7);
            v98 = (v151 ^ v187) + v93;
            HIDWORD(v79) ^= (v89 + v127) >> 32;
            v99 = v98 + __PAIR64__(v96, HIDWORD(v96));
            v100 = v94 ^ (v98 + HIDWORD(v96));
            LODWORD(v65) = v65 ^ ((v98 + __PAIR64__(v96, HIDWORD(v96))) >> 32);
            v131 = v98 + __PAIR64__(v96, HIDWORD(v96));
            v114 = ((v125 ^ ((v76 + v118) >> 32)) >> 11) | (v112 << 21);
            v110 = (v112 >> 11) | ((v125 ^ ((v76 + v118) >> 32)) << 21);
            v124 = (HIDWORD(v31) >> 11) | ((v139 ^ ((_DWORD)v81 + (_DWORD)v122)) << 21);
            v113 = ((v139 ^ ((_DWORD)v81 + (_DWORD)v122)) >> 11) | (HIDWORD(v31) << 21);
            LODWORD(v109) = HIWORD(v100) | ((_DWORD)v65 << 16);
            HIDWORD(v109) = WORD1(v65) | (v100 << 16);
            LODWORD(v129) = (((unsigned int)v79 ^ ((_DWORD)v89 + (_DWORD)v127)) >> 11) | (HIDWORD(v79) << 21);
            HIDWORD(v129) = (HIDWORD(v79) >> 11) | (((unsigned int)v79 ^ ((_DWORD)v89 + (_DWORD)v127)) << 21);
            HIDWORD(v96) ^= v95 + (_DWORD)v109;
            LODWORD(v96) = v96 ^ ((v95 + v109) >> 32);
            v134 = v95 + v109;
            HIDWORD(v137) = v96 >> 11;
            LODWORD(v137) = (HIDWORD(v96) >> 11) | ((_DWORD)v96 << 21);
            if ( &unk_1791E8 == (_UNKNOWN *)v11 )
              break;
            v12 = *(v11 - 10);
            v13 = 8 * *(v11 - 15);
            v14 = 2 * *(v11 - 16);
            v142 = (char *)&unk_1791A8 + v13;
            v15 = 2 * *(v11 - 14);
            v16 = *(v11 - 13);
            v156 = *(_DWORD *)((char *)&unk_1791A8 + v14 * 4);
            v17 = &v226[v13];
            v18 = (char *)&unk_1791A8 + 8 * v16;
            v19 = &v226[8 * v16];
            v20 = 2 * *(v11 - 12);
            v157 = *(_DWORD *)((char *)&unk_1791A8 + v14 * 4 + 4);
            v21 = 2 * *(v11 - 11);
            v22 = &v226[8 * v12];
            v153 = v211[v14 - 1];
            v154 = v211[v14];
            v155 = *((_DWORD *)&unk_1791A8 + 2 * *(v11 - 15));
            v152 = *((_DWORD *)v142 + 1);
            v141 = *((_DWORD *)v17 - 32);
            v143 = *((_DWORD *)v17 - 31);
            v161 = *(_DWORD *)((char *)&unk_1791A8 + v15 * 4);
            v162 = *(_DWORD *)((char *)&unk_1791A8 + v15 * 4 + 4);
            v144 = v211[v15 - 1];
            v158 = v211[v15];
            LODWORD(v159) = *((_DWORD *)&unk_1791A8 + 2 * *(v11 - 13));
            HIDWORD(v159) = *((_DWORD *)v18 + 1);
            v160 = *((_DWORD *)v19 - 32);
            v145 = *((_DWORD *)v19 - 31);
            v164 = *(_QWORD *)((char *)&unk_1791A8 + v20 * 4);
            v146 = *(_QWORD *)&v211[v20 - 1];
            v163 = *(_QWORD *)((char *)&unk_1791A8 + v21 * 4);
            v147 = *(_QWORD *)&v211[v21 - 1];
            v23 = *((_DWORD *)&unk_1791A8 + 2 * v12 + 1);
            v24 = *(v11 - 9);
            v148 = *((_QWORD *)v22 - 16);
            v168 = v23;
            v25 = (__int64 *)((char *)&unk_1791A8 + 8 * v24);
            v26 = &v226[8 * v24];
            v27 = 2 * *(v11 - 4);
            v28 = 2 * *(v11 - 5);
            v167 = *((_DWORD *)&unk_1791A8 + 2 * *(v11 - 10));
            v165 = *v25;
            v29 = 2 * *(v11 - 3);
            v166 = *((_DWORD *)v26 - 32);
            v149 = *((_DWORD *)v26 - 31);
            v172 = *((_QWORD *)&unk_1791A8 + *(v11 - 8));
            v169 = *(_QWORD *)&v211[2 * *(v11 - 8) - 1];
            v177 = *((_QWORD *)&unk_1791A8 + *(v11 - 6));
            v170 = *((_QWORD *)&unk_1791A8 + *(v11 - 7));
            v173 = *(_QWORD *)&v211[2 * *(v11 - 6) - 1];
            v171 = *(_QWORD *)&v211[2 * *(v11 - 7) - 1];
            v174 = *(_QWORD *)((char *)&unk_1791A8 + v28 * 4);
            v176 = *(_QWORD *)&v211[v28 - 1];
            v179 = *(_QWORD *)&v211[v27 - 1];
            v183 = *(_QWORD *)((char *)&unk_1791A8 + v27 * 4);
            v182 = *(_QWORD *)&v211[v29 - 1];
            v180 = *(_QWORD *)((char *)&unk_1791A8 + v29 * 4);
            v30 = *((_QWORD *)v11 - 1);
            v187 = *((_QWORD *)&unk_1791A8 + v30);
            v186 = *((_QWORD *)&unk_1791A8 + HIDWORD(v30));
            v150 = v211[2 * (_DWORD)v30 - 1];
            v151 = *(_QWORD *)&v211[2 * HIDWORD(v30) - 1];
            v185 = v211[2 * (_DWORD)v30];
          }
          v193 ^= v116 ^ v203 ^ v107;
          v192 ^= v120 ^ v204 ^ v134;
          v202 ^= v126 ^ v205 ^ v103;
          v201 ^= v106 ^ v194 ^ v99;
          v200 ^= v122 ^ v203 ^ v137;
          v3 = 0;
          v198 ^= v127 ^ v204 ^ v110;
          v199 ^= HIDWORD(v127) ^ HIDWORD(v204) ^ v114;
          v196 ^= v113 ^ v205 ^ v109;
          v197 ^= v124 ^ HIDWORD(v205) ^ HIDWORD(v109);
          v195 ^= v118 ^ v129 ^ v194;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 128 - v3;
      }
    }
    *(_QWORD *)(a1 + 136) = v193;
    *(_QWORD *)(a1 + 144) = v192;
    *(_QWORD *)(a1 + 152) = v202;
    *(_QWORD *)(a1 + 160) = v201;
    *(_QWORD *)(a1 + 168) = v200;
    *(_DWORD *)(a1 + 176) = v198;
    *(_DWORD *)(a1 + 180) = v199;
    *(_DWORD *)(a1 + 184) = v196;
    *(_DWORD *)(a1 + 188) = v197;
    *(_QWORD *)(a1 + 192) = v195;
    *(_DWORD *)(a1 + 128) = v3;
    *(_QWORD *)(a1 + 200) = v203;
    *(_QWORD *)(a1 + 208) = v204;
    *(_QWORD *)(a1 + 216) = v205;
    *(_QWORD *)(a1 + 224) = v194;
    *(_QWORD *)(a1 + 232) = v191;
    *(_QWORD *)(a1 + 240) = v206;
    return (void *)v191;
  }
  return result;
}
