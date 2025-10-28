int __fastcall sub_448B0(int a1, char *a2, size_t a3)
{
  int v3; // r4
  size_t v4; // r3
  __int64 v5; // r0
  const void *v6; // r1
  void *v7; // r0
  unsigned int v8; // r3
  _DWORD *v9; // r11
  int v10; // r7
  int v11; // r1
  int v12; // r2
  _BYTE *v13; // r8
  int v14; // r4
  int v15; // r3
  char *v16; // r10
  int v17; // r0
  _BYTE *v18; // r2
  int v19; // lr
  __int64 *v20; // r9
  _BYTE *v21; // r1
  int v22; // r3
  _BYTE *v23; // r12
  int v24; // r4
  char *v25; // r10
  _BYTE *v26; // r2
  int v27; // r3
  char *v28; // r8
  _BYTE *v29; // r3
  int v30; // lr
  __int64 v31; // r2
  __int64 v32; // r4
  int v33; // r1
  __int64 v34; // kr48_8
  unsigned __int64 v35; // kr50_8
  unsigned int v36; // r0
  unsigned int v37; // r7
  unsigned int v38; // r1
  unsigned int v39; // r7
  int v40; // r10
  int v41; // r1
  unsigned int v42; // r3
  unsigned int v43; // r0
  unsigned __int64 v44; // kr60_8
  unsigned int v45; // r12
  unsigned __int64 v46; // kr68_8
  int v47; // r6
  unsigned int v48; // r1
  int v49; // r2
  int v50; // r7
  unsigned __int64 v51; // kr10_8
  unsigned __int64 v52; // kr78_8
  unsigned int v53; // r7
  unsigned __int64 v54; // kr80_8
  int v55; // r3
  unsigned int v56; // r12
  unsigned __int64 v57; // kr88_8
  unsigned int v58; // r0
  int v59; // r7
  unsigned int v60; // lr
  unsigned int v61; // r9
  unsigned int v62; // r8
  unsigned __int64 v63; // kr98_8
  unsigned int v64; // r10
  int v65; // r0
  int v66; // r6
  unsigned int v67; // kr28_4
  unsigned int v68; // r12
  unsigned int v69; // r7
  unsigned int v70; // lr
  int v71; // lr
  int v72; // r9
  unsigned int v73; // r10
  unsigned int v74; // r6
  int v75; // lr
  int v76; // r7
  unsigned int v77; // r0
  int v78; // r1
  int v79; // r12
  bool v80; // cf
  unsigned int v81; // r8
  int v82; // r9
  int v83; // r12
  unsigned int v84; // r7
  unsigned int v85; // lr
  unsigned int v86; // lr
  unsigned int v87; // kr38_4
  __int64 v88; // r2
  unsigned int v89; // r10
  unsigned int v90; // r12
  unsigned int v91; // r1
  unsigned int v92; // lr
  unsigned int v93; // r7
  unsigned int v94; // r10
  int v95; // r1
  unsigned __int64 v96; // krD0_8
  unsigned int v97; // kr40_4
  unsigned int v98; // r9
  unsigned __int64 v99; // krD8_8
  unsigned int v100; // r0
  unsigned int v101; // r7
  unsigned __int64 v102; // krE0_8
  int v103; // r0
  int v104; // r7
  unsigned int v105; // r1
  unsigned int v106; // r12
  unsigned int v107; // r0
  unsigned int v108; // r7
  unsigned __int64 v109; // krE8_8
  unsigned int v110; // lr
  unsigned __int64 v111; // krF0_8
  unsigned int v112; // r10
  int v113; // r10
  unsigned int v114; // lr
  unsigned __int64 v115; // krF8_8
  unsigned int v116; // r6
  unsigned int v117; // r10
  unsigned int v118; // lr
  unsigned __int64 v120; // [sp+0h] [bp-2ACh]
  int v121; // [sp+0h] [bp-2ACh]
  int v122; // [sp+0h] [bp-2ACh]
  unsigned int v123; // [sp+4h] [bp-2A8h]
  unsigned int v124; // [sp+8h] [bp-2A4h]
  __int64 v125; // [sp+Ch] [bp-2A0h]
  int v126; // [sp+Ch] [bp-2A0h]
  unsigned int v127; // [sp+10h] [bp-29Ch]
  int v128; // [sp+10h] [bp-29Ch]
  __int64 v129; // [sp+14h] [bp-298h]
  int v130; // [sp+14h] [bp-298h]
  unsigned int v131; // [sp+18h] [bp-294h]
  int v132; // [sp+18h] [bp-294h]
  int v133; // [sp+18h] [bp-294h]
  int v134; // [sp+1Ch] [bp-290h]
  unsigned int v135; // [sp+1Ch] [bp-290h]
  unsigned int v136; // [sp+1Ch] [bp-290h]
  int v137; // [sp+20h] [bp-28Ch]
  unsigned __int64 v138; // [sp+20h] [bp-28Ch]
  int v139; // [sp+24h] [bp-288h]
  int v140; // [sp+28h] [bp-284h]
  unsigned int v141; // [sp+28h] [bp-284h]
  int v142; // [sp+2Ch] [bp-280h]
  __int64 v143; // [sp+2Ch] [bp-280h]
  int v144; // [sp+30h] [bp-27Ch]
  int v145; // [sp+34h] [bp-278h]
  unsigned int v146; // [sp+34h] [bp-278h]
  int v147; // [sp+38h] [bp-274h]
  unsigned int v148; // [sp+38h] [bp-274h]
  unsigned __int64 v149; // [sp+3Ch] [bp-270h]
  unsigned __int64 v150; // [sp+3Ch] [bp-270h]
  int v151; // [sp+44h] [bp-268h]
  int v152; // [sp+48h] [bp-264h]
  __int64 v153; // [sp+4Ch] [bp-260h]
  unsigned __int64 v154; // [sp+54h] [bp-258h]
  __int64 v155; // [sp+5Ch] [bp-250h]
  __int64 v156; // [sp+64h] [bp-248h]
  __int64 v157; // [sp+6Ch] [bp-240h]
  unsigned __int64 v158; // [sp+6Ch] [bp-240h]
  __int64 v159; // [sp+74h] [bp-238h]
  unsigned int v160; // [sp+7Ch] [bp-230h]
  unsigned int v161; // [sp+7Ch] [bp-230h]
  unsigned __int64 v162; // [sp+80h] [bp-22Ch]
  int v163; // [sp+84h] [bp-228h]
  __int64 v164; // [sp+88h] [bp-224h]
  unsigned __int64 v165; // [sp+88h] [bp-224h]
  unsigned __int64 v166; // [sp+90h] [bp-21Ch]
  unsigned int v167; // [sp+90h] [bp-21Ch]
  int v168; // [sp+94h] [bp-218h]
  int v169; // [sp+98h] [bp-214h]
  int v170; // [sp+98h] [bp-214h]
  __int64 v171; // [sp+9Ch] [bp-210h]
  int v172; // [sp+9Ch] [bp-210h]
  int v173; // [sp+A0h] [bp-20Ch]
  __int64 v174; // [sp+A4h] [bp-208h]
  unsigned __int64 v175; // [sp+A4h] [bp-208h]
  unsigned __int64 v176; // [sp+ACh] [bp-200h]
  unsigned __int64 v177; // [sp+B4h] [bp-1F8h]
  unsigned __int64 v178; // [sp+BCh] [bp-1F0h]
  unsigned int v179; // [sp+BCh] [bp-1F0h]
  __int64 v180; // [sp+C4h] [bp-1E8h]
  unsigned int v181; // [sp+CCh] [bp-1E0h]
  unsigned int v182; // [sp+D0h] [bp-1DCh]
  unsigned int v183; // [sp+D4h] [bp-1D8h]
  unsigned __int64 v184; // [sp+D8h] [bp-1D4h]
  unsigned int v185; // [sp+E0h] [bp-1CCh]
  unsigned int v186; // [sp+E4h] [bp-1C8h]
  unsigned __int64 v187; // [sp+E8h] [bp-1C4h]
  unsigned __int64 v188; // [sp+F0h] [bp-1BCh]
  unsigned __int64 v189; // [sp+F8h] [bp-1B4h]
  __int64 v190; // [sp+100h] [bp-1ACh]
  unsigned int v191; // [sp+108h] [bp-1A4h]
  unsigned __int64 v192; // [sp+10Ch] [bp-1A0h]
  __int64 v193; // [sp+114h] [bp-198h]
  unsigned __int64 v194; // [sp+11Ch] [bp-190h]
  unsigned __int64 v195; // [sp+124h] [bp-188h]
  unsigned int v196; // [sp+12Ch] [bp-180h]
  int v197; // [sp+130h] [bp-17Ch]
  int v198; // [sp+134h] [bp-178h]
  __int64 v199; // [sp+138h] [bp-174h]
  int v200; // [sp+140h] [bp-16Ch]
  unsigned __int64 v201; // [sp+144h] [bp-168h]
  __int64 v202; // [sp+14Ch] [bp-160h]
  __int64 v203; // [sp+154h] [bp-158h]
  unsigned __int64 v204; // [sp+15Ch] [bp-150h]
  unsigned int v205; // [sp+164h] [bp-148h]
  unsigned int v206; // [sp+168h] [bp-144h]
  unsigned int v207; // [sp+16Ch] [bp-140h]
  unsigned __int64 v208; // [sp+170h] [bp-13Ch]
  unsigned int v209; // [sp+178h] [bp-134h]
  unsigned int v210; // [sp+17Ch] [bp-130h]
  size_t n; // [sp+184h] [bp-128h]
  unsigned __int64 v213; // [sp+188h] [bp-124h]
  char *src; // [sp+190h] [bp-11Ch]
  unsigned __int64 v215; // [sp+194h] [bp-118h]
  __int64 v216; // [sp+19Ch] [bp-110h]
  int v217; // [sp+1A4h] [bp-108h]
  __int64 v218; // [sp+1A8h] [bp-104h]
  __int64 v219; // [sp+1B0h] [bp-FCh]
  __int64 v220; // [sp+1B8h] [bp-F4h]
  __int64 v221; // [sp+1C0h] [bp-ECh]
  unsigned int v222; // [sp+1C8h] [bp-E4h]
  unsigned int v223; // [sp+1CCh] [bp-E0h]
  __int64 v224; // [sp+1D0h] [bp-DCh]
  unsigned __int64 v225; // [sp+1D8h] [bp-D4h]
  unsigned __int64 v226; // [sp+1E0h] [bp-CCh]
  __int64 v227; // [sp+1E8h] [bp-C4h]
  int v228; // [sp+1F0h] [bp-BCh]
  __int64 v229; // [sp+1F4h] [bp-B8h]
  unsigned int v230; // [sp+204h] [bp-A8h]
  unsigned __int64 v231; // [sp+208h] [bp-A4h]
  unsigned __int64 v232; // [sp+210h] [bp-9Ch]
  unsigned int v233; // [sp+228h] [bp-84h]
  _DWORD v234[3]; // [sp+22Ch] [bp-80h]
  unsigned __int64 v235; // [sp+238h] [bp-74h]
  unsigned int v236; // [sp+240h] [bp-6Ch]
  unsigned int v237; // [sp+244h] [bp-68h]
  unsigned __int64 v238; // [sp+248h] [bp-64h]
  unsigned __int64 v239; // [sp+250h] [bp-5Ch]
  unsigned __int64 v240; // [sp+258h] [bp-54h]
  __int64 v241; // [sp+260h] [bp-4Ch]
  unsigned int v242; // [sp+268h] [bp-44h]
  unsigned int v243; // [sp+26Ch] [bp-40h]
  unsigned int v244; // [sp+270h] [bp-3Ch]
  unsigned int v245; // [sp+274h] [bp-38h]
  unsigned __int64 v246; // [sp+278h] [bp-34h]
  unsigned int v247; // [sp+280h] [bp-2Ch]
  unsigned int v248; // [sp+284h] [bp-28h]
  unsigned __int64 v249; // [sp+288h] [bp-24h]
  __int64 v250; // [sp+290h] [bp-1Ch]
  unsigned __int64 v251; // [sp+298h] [bp-14h]
  unsigned __int64 v252; // [sp+2A0h] [bp-Ch]
  _BYTE v253[4]; // [sp+2A8h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    LODWORD(v5) = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v3 + n;
  }
  else
  {
    v216 = *(_QWORD *)(a1 + 136);
    v215 = *(_QWORD *)(a1 + 144);
    v226 = *(_QWORD *)(a1 + 152);
    v225 = *(_QWORD *)(a1 + 160);
    v224 = *(_QWORD *)(a1 + 168);
    v222 = *(_DWORD *)(a1 + 176);
    v223 = *(_DWORD *)(a1 + 180);
    v221 = *(_QWORD *)(a1 + 184);
    v220 = *(_QWORD *)(a1 + 192);
    v227 = *(_QWORD *)(a1 + 200);
    v228 = *(_DWORD *)(a1 + 208);
    v217 = *(_DWORD *)(a1 + 212);
    v218 = *(_QWORD *)(a1 + 216);
    v219 = *(_QWORD *)(a1 + 224);
    v5 = *(_QWORD *)(a1 + 232);
    v213 = *(_QWORD *)(a1 + 232);
    v229 = *(_QWORD *)(a1 + 240);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v6 = src;
        v7 = (void *)(a1 + v3);
        n -= v4;
        v3 += v4;
        src += v4;
        LODWORD(v5) = memcpy(v7, v6, v4);
        if ( v3 == 128 )
        {
          v213 += 1024LL;
          if ( v213 < 0x400 )
            ++v229;
          v181 = bswap32(*(_DWORD *)(a1 + 4));
          v183 = bswap32(*(_DWORD *)(a1 + 8));
          v182 = bswap32(*(_DWORD *)(a1 + 12));
          v184 = _byteswap_uint64(*(_QWORD *)(a1 + 16));
          v186 = bswap32(*(_DWORD *)(a1 + 24));
          v185 = bswap32(*(_DWORD *)(a1 + 28));
          v187 = _byteswap_uint64(*(_QWORD *)(a1 + 32));
          v188 = _byteswap_uint64(*(_QWORD *)(a1 + 40));
          v8 = *(_DWORD *)(a1 + 60);
          v196 = bswap32(*(_DWORD *)a1);
          v189 = _byteswap_uint64(*(_QWORD *)(a1 + 48));
          HIDWORD(v190) = bswap32(*(_DWORD *)(a1 + 56));
          v234[0] = v196;
          LODWORD(v190) = bswap32(v8);
          v239 = v188;
          v234[1] = v182;
          v237 = v186;
          v240 = v189;
          v139 = 320440878;
          v236 = v185;
          v233 = v181;
          v238 = v187;
          v241 = v190;
          v234[2] = v183;
          v235 = v184;
          v9 = &unk_5A318;
          v230 = *(_DWORD *)(a1 + 108);
          v198 = -2052912941;
          v197 = 57701188;
          v200 = -1542899678;
          v199 = 0x82EFA98EC4E6C89LL;
          v231 = *(_QWORD *)(a1 + 112);
          v232 = *(_QWORD *)(a1 + 120);
          v171 = v227 ^ 0x243F6A8885A308D3LL;
          LODWORD(v178) = v228 ^ 0x3707344;
          HIDWORD(v178) = v217 ^ 0x13198A2E;
          v125 = v219 ^ 0x82EFA98EC4E6C89LL;
          v203 = 0x3F84D5B5B5470917LL;
          v204 = 0xC0AC29B7C97C50DDLL;
          v134 = v213 ^ 0x34E90C6C;
          v169 = HIDWORD(v213) ^ 0xBE5466CF;
          v201 = 0xBE5466CF34E90C6CLL;
          v159 = v229 ^ 0x3F84D5B5B5470917LL;
          v177 = v229 ^ 0xC0AC29B7C97C50DDLL;
          v156 = 0x801F2E2858EFC16LL;
          v155 = 0x636920D871574E69LL;
          v154 = 0xBA7C9045F12C7F99LL;
          v153 = 0x24A19947B3916CF7LL;
          v151 = -803545161;
          v152 = 805139163;
          v149 = 0xB8E1AFED6A267E96LL;
          v145 = -1988494565;
          v147 = -1843997223;
          v142 = -1730169428;
          v144 = -785314906;
          v137 = 698298832;
          v140 = 608135816;
          v120 = v218 ^ 0xA4093822299F31D0LL;
          v164 = v213 ^ 0x452821E638D01377LL;
          v174 = v220;
          v129 = v221;
          v160 = v222;
          v124 = v223;
          v180 = v224;
          v176 = v225;
          v166 = v226;
          v202 = 0x452821E638D01377LL;
          v191 = bswap32(*(_DWORD *)(a1 + 64));
          v162 = v215;
          v208 = _byteswap_uint64(*(_QWORD *)(a1 + 80));
          v157 = v216;
          v210 = bswap32(*(_DWORD *)(a1 + 88));
          v205 = bswap32(*(_DWORD *)(a1 + 68));
          v207 = bswap32(*(_DWORD *)(a1 + 72));
          v192 = _byteswap_uint64(*(_QWORD *)(a1 + 96));
          v206 = bswap32(*(_DWORD *)(a1 + 76));
          v209 = bswap32(*(_DWORD *)(a1 + 92));
          HIDWORD(v193) = bswap32(*(_DWORD *)(a1 + 104));
          v244 = v206;
          v245 = v207;
          v246 = v208;
          v247 = v209;
          v248 = v210;
          LODWORD(v193) = bswap32(v230);
          v194 = _byteswap_uint64(v231);
          v195 = _byteswap_uint64(v232);
          v242 = v205;
          v243 = v191;
          v249 = v192;
          v250 = v193;
          v251 = v194;
          v252 = v195;
          while ( 1 )
          {
            v9 += 16;
            HIDWORD(v32) = v164 ^ ((v181 ^ v197) + v180 + v157);
            LODWORD(v32) = (__PAIR64__(v196 ^ v139, v181 ^ v197) + v180 + v157) >> 32;
            v33 = HIDWORD(v164) ^ v32;
            v34 = (v32 ^ HIDWORD(v164)) + v171;
            v35 = __PAIR64__(v183 ^ v140, v182 ^ v198) + __PAIR64__(v196 ^ v139, v181 ^ v197) + v180 + v157;
            v36 = (v34 ^ v180) >> 25;
            v37 = ((unsigned int)(HIDWORD(v34) ^ HIDWORD(v180)) >> 25)
                | ((((HIDWORD(v164) ^ (unsigned int)v32) + (_DWORD)v171) ^ (unsigned int)v180) << 7);
            v165 = __PAIR64__(v37, v36);
            v38 = v33 ^ (v35 + v36);
            v158 = v35 + __PAIR64__(v37, v36);
            HIDWORD(v32) ^= (v35 + __PAIR64__(v37, v36)) >> 32;
            v39 = HIWORD(v38);
            v40 = v185 ^ v137;
            v41 = HIWORD(HIDWORD(v32)) | (v38 << 16);
            v172 = v39 | (HIDWORD(v32) << 16);
            v138 = v34 + __PAIR64__(v41, v172);
            v173 = v41;
            v42 = (v184 ^ v199) + v160 + v162;
            v43 = ((v184 ^ v199) + __PAIR64__(v124, v160) + v162) >> 32;
            HIDWORD(v32) = ((v169 ^ v43) + v178) ^ v160;
            v44 = __PAIR64__(v134 ^ v42, v169 ^ v43) + v178;
            v45 = ((__PAIR64__(v134 ^ v42, v169 ^ v43) + v178) >> 32) ^ v124;
            v46 = __PAIR64__(v186 ^ v200, v40) + (v184 ^ v199) + __PAIR64__(v124, v160) + v162;
            v47 = (HIDWORD(v32) >> 25) | (v45 << 7);
            HIDWORD(v32) = (v45 >> 25) | (HIDWORD(v32) << 7);
            v161 = (v46 + __PAIR64__(HIDWORD(v32), v47)) >> 32;
            v48 = v169 ^ v43 ^ (v46 + v47);
            LODWORD(v32) = v134 ^ v42 ^ (HIDWORD(v32) + __CFADD__((_DWORD)v46, v47) + HIDWORD(v46));
            v49 = HIWORD(v48) | ((_DWORD)v32 << 16);
            v135 = v46 + v47;
            v170 = v49;
            v179 = WORD1(v32) | (v48 << 16);
            v50 = v177;
            v51 = v44 + __PAIR64__(v179, v49);
            v141 = HIDWORD(v51);
            LODWORD(v177) = v51;
            v52 = (v187 ^ v201) + v129 + v166;
            v53 = v50 ^ v52;
            v54 = __PAIR64__(v53, HIDWORD(v177) ^ HIDWORD(v52)) + v120;
            LODWORD(v32) = (__int64)((__PAIR64__(v53, HIDWORD(v177) ^ HIDWORD(v52)) + v120) ^ v129) >> 25;
            v55 = (v188 ^ v202) + (v187 ^ v201) + v129 + v166;
            v56 = ((((__PAIR64__(v53, HIDWORD(v177) ^ HIDWORD(v52)) + v120) >> 32) ^ HIDWORD(v129)) >> 25)
                | ((((HIDWORD(v177) ^ HIDWORD(v52)) + (_DWORD)v120) ^ (unsigned int)v129) << 7);
            v57 = (v188 ^ v202) + v52 + __PAIR64__(v56, v32);
            HIDWORD(v32) ^= (v44 + __PAIR64__(v179, v49)) >> 32;
            v58 = HIDWORD(v177) ^ HIDWORD(v52) ^ (v55 + v32);
            v167 = v55 + v32;
            v131 = ((v47 ^ (unsigned int)(v44 + v49)) >> 11) | (HIDWORD(v32) << 21);
            v163 = v205 ^ v142;
            v168 = v191 ^ v144;
            LODWORD(v143) = HIWORD(v58) | ((v53 ^ HIDWORD(v57)) << 16);
            HIDWORD(v177) = v206 ^ v145;
            v121 = (HIDWORD(v32) >> 11) | ((v47 ^ ((_DWORD)v44 + v49)) << 21);
            HIDWORD(v143) = ((v53 ^ HIDWORD(v57)) >> 16) | (v58 << 16);
            HIDWORD(v32) = ((v189 ^ v203) + v174 + v176) >> 32;
            v59 = v159;
            LODWORD(v159) = v207 ^ v147;
            v60 = ((v189 ^ v203) + v174 + v176) ^ v59;
            v61 = ((HIDWORD(v159) ^ HIDWORD(v32)) + v125) ^ v174;
            v148 = (HIDWORD(v159) ^ HIDWORD(v32)) + v125;
            LODWORD(v32) = v32 ^ (v54 + v143);
            v62 = (__PAIR64__(v60, HIDWORD(v159) ^ HIDWORD(v32)) + v125) >> 32;
            v63 = (v190 ^ v204) + (v189 ^ v203) + v174 + v176;
            v64 = ((__PAIR64__(v60, HIDWORD(v159) ^ HIDWORD(v63)) + v125) >> 32) ^ HIDWORD(v174);
            v65 = (v61 >> 25) | (v64 << 7);
            v66 = (v64 >> 25) | (v61 << 7);
            v67 = (v190 ^ v204) + (v189 ^ v203) + v174 + v176;
            v68 = v56 ^ ((v54 + v143) >> 32);
            v69 = HIDWORD(v159) ^ HIDWORD(v32) ^ (v63 + v65);
            v175 = v63 + __PAIR64__(v66, v65);
            v146 = ((unsigned int)v32 >> 11) | (v68 << 21);
            v150 = v208 ^ v149;
            v70 = v60 ^ ((__PAIR64__(HIDWORD(v63), v67) + __PAIR64__(v66, v65)) >> 32);
            HIDWORD(v32) = HIWORD(v70);
            v71 = HIWORD(v69) | (v70 << 16);
            v72 = HIDWORD(v32) | (v69 << 16);
            HIDWORD(v32) = v131;
            v126 = (v68 >> 11) | ((_DWORD)v32 << 21);
            v127 = v148 + v71;
            v73 = (__PAIR64__(v62, v148) + __PAIR64__(v72, v71)) >> 32;
            v74 = v66 ^ v73;
            LODWORD(v32) = (__PAIR64__(v168, v163) + v158 + __PAIR64__(v121, v131)) >> 32;
            v132 = v163 + v158 + v131;
            v75 = v71 ^ v132;
            v76 = v72 ^ v32;
            HIDWORD(v32) ^= v54 + v143 + (v72 ^ v32);
            v77 = v65 ^ v127;
            v78 = v54 + v143 + (v72 ^ v32);
            v123 = (v54 + v143 + __PAIR64__(v75, v72 ^ (unsigned int)v32)) >> 32;
            v79 = (HIDWORD(v32) >> 25) | ((v121 ^ v123) << 7);
            v80 = __CFADD__(HIDWORD(v177), v132);
            v81 = ((v121 ^ v123) >> 25) | (HIDWORD(v32) << 7);
            v122 = HIDWORD(v177) + v132;
            v82 = (v77 >> 11) | (v74 << 21);
            v133 = v79;
            LODWORD(v157) = v122 + v79;
            v83 = v81 + __CFADD__(v122, v79) + v32 + v80 + (_DWORD)v159;
            v84 = v76 ^ v157;
            v85 = v75 ^ v83;
            HIDWORD(v157) = v83;
            LODWORD(v159) = HIWORD(v84) | (v85 << 16);
            HIDWORD(v159) = HIWORD(v85) | (v84 << 16);
            v130 = (v74 >> 11) | (v77 << 21);
            LODWORD(v120) = v78 + v159;
            HIDWORD(v120) = v78 + v159;
            v86 = (v150 + __PAIR64__(v161, v135)) >> 32;
            v87 = v150 + v135;
            v136 = v150 + v135 + v146;
            LODWORD(v88) = v127 + (v173 ^ ((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32));
            LODWORD(v32) = v126
                         ^ ((__PAIR64__(v73, v127)
                           + __PAIR64__(
                               v172 ^ v136,
                               v173 ^ (unsigned int)((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32))) >> 32);
            v128 = (__PAIR64__(v73, v127)
                  + __PAIR64__(
                      v172 ^ v136,
                      v173 ^ (unsigned int)((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32))) >> 32;
            v89 = (unsigned int)v32 >> 25;
            LODWORD(v32) = ((v146 ^ (unsigned int)v88) >> 25) | ((_DWORD)v32 << 7);
            v90 = v89 | ((v146 ^ (unsigned int)v88) << 7);
            HIDWORD(v32) = v172
                         ^ v136
                         ^ ((__PAIR64__(
                               ((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32)
                             + __CFADD__(v209 ^ v151, v136)
                             + (v210 ^ v152),
                               (v209 ^ v151) + v136)
                           + __PAIR64__(v90, v32)) >> 32);
            v91 = v173 ^ ((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32) ^ ((v209 ^ v151) + v136 + v32);
            v162 = __PAIR64__(
                     ((__PAIR64__(v86, v87) + __PAIR64__(v126, v146)) >> 32)
                   + __CFADD__(v209 ^ v151, v136)
                   + (v210 ^ v152),
                     (v209 ^ v151) + v136)
                 + __PAIR64__(v90, v32);
            v92 = (__int64)(v165 ^ v138) >> 11;
            v93 = HIWORD(v91);
            v94 = ((unsigned int)(HIDWORD(v165) ^ HIDWORD(v138)) >> 11)
                | (((unsigned int)v165 ^ (unsigned int)v138) << 21);
            v95 = HIWORD(HIDWORD(v32)) | (v91 << 16);
            HIDWORD(v88) = v128;
            LODWORD(v164) = v93 | (HIDWORD(v32) << 16);
            v125 = v88 + __PAIR64__(v95, v164);
            HIDWORD(v164) = v95;
            v96 = (v192 ^ v153) + __PAIR64__(HIDWORD(v57), v167) + __PAIR64__(v130, v82);
            v97 = v138;
            v98 = v82 ^ (v138 + (v179 ^ HIDWORD(v96)));
            LODWORD(v138) = v138 + (v179 ^ HIDWORD(v96));
            v99 = __PAIR64__(HIDWORD(v138), v97) + __PAIR64__(v170 ^ (unsigned int)v96, v179 ^ HIDWORD(v96));
            v100 = v130
                 ^ ((__PAIR64__(HIDWORD(v138), v97) + __PAIR64__(v170 ^ (unsigned int)v96, v179 ^ HIDWORD(v96))) >> 32);
            v101 = v100 >> 25;
            v102 = (v193 ^ v154) + v96;
            v103 = (v98 >> 25) | (v100 << 7);
            v104 = v101 | (v98 << 7);
            v166 = v102 + __PAIR64__(v104, v103);
            v105 = v179 ^ HIDWORD(v96) ^ (v102 + v103);
            v124 = ((v81 ^ HIDWORD(v120)) >> 11) | ((v133 ^ (unsigned int)v120) << 21);
            v106 = v90 ^ HIDWORD(v125);
            v134 = HIWORD(v105) | ((v170 ^ (unsigned int)v96 ^ ((v102 + __PAIR64__(v104, v103)) >> 32)) << 16);
            v169 = ((v170 ^ (unsigned int)v96 ^ ((v102 + __PAIR64__(v104, v103)) >> 32)) >> 16) | (v105 << 16);
            LODWORD(v32) = v32 ^ v125;
            v160 = ((v133 ^ (unsigned int)v120) >> 11) | ((v81 ^ HIDWORD(v120)) << 21);
            HIDWORD(v129) = (v106 >> 11) | ((_DWORD)v32 << 21);
            LODWORD(v171) = v138 + v134;
            v107 = v103 ^ (v138 + v134);
            LODWORD(v129) = ((unsigned int)v32 >> 11) | (v106 << 21);
            v108 = v104 ^ (v169 + __CFADD__((_DWORD)v138, v134) + HIDWORD(v99));
            HIDWORD(v171) = v169 + __CFADD__((_DWORD)v138, v134) + HIDWORD(v99);
            v109 = (v194 ^ v155) + v175 + __PAIR64__(v94, v92);
            v110 = v92 ^ (v177 + (HIDWORD(v143) ^ HIDWORD(v109)));
            v111 = __PAIR64__(v141, v177)
                 + __PAIR64__((unsigned int)v143 ^ (unsigned int)v109, HIDWORD(v143) ^ HIDWORD(v109));
            v112 = v94
                 ^ ((__PAIR64__(v141, v177)
                   + __PAIR64__((unsigned int)v143 ^ (unsigned int)v109, HIDWORD(v143) ^ HIDWORD(v109))) >> 32);
            HIDWORD(v174) = (v108 >> 11) | (v107 << 21);
            LODWORD(v88) = v112 >> 25;
            v113 = (v110 >> 25) | (v112 << 7);
            v114 = v88 | (v110 << 7);
            LODWORD(v174) = (v107 >> 11) | (v108 << 21);
            v115 = (v195 ^ v156) + v109 + __PAIR64__(v114, v113);
            HIDWORD(v32) = HIDWORD(v143) ^ HIDWORD(v109) ^ v115;
            v116 = v143 ^ v109 ^ HIDWORD(v115);
            v176 = v115;
            LODWORD(v177) = HIWORD(HIDWORD(v32)) | (v116 << 16);
            v117 = v113 ^ (v111 + v177);
            HIDWORD(v177) = HIWORD(v116) | (HIDWORD(v32) << 16);
            v178 = v111 + v177;
            v118 = v114 ^ ((v111 + v177) >> 32);
            LODWORD(v180) = (v117 >> 11) | (v118 << 21);
            HIDWORD(v180) = (v118 >> 11) | (v117 << 21);
            if ( &unk_5A718 == (_UNKNOWN *)v9 )
              break;
            v10 = *(v9 - 16);
            v11 = 8 * *(v9 - 15);
            v12 = 8 * *(v9 - 13);
            v13 = &v253[8 * v10];
            v14 = 2 * *(v9 - 12);
            v15 = 8 * *(v9 - 11);
            v16 = (char *)&unk_5A6D8 + v12;
            v17 = 2 * *(v9 - 10);
            v198 = *((_DWORD *)&unk_5A6D8 + 2 * v10);
            v18 = &v253[v12];
            v140 = *((_DWORD *)&unk_5A6D8 + 2 * v10 + 1);
            v181 = *((_DWORD *)v13 - 32);
            v196 = *((_DWORD *)v13 - 31);
            v197 = *(_DWORD *)((char *)&unk_5A6D8 + v11);
            v139 = *(_DWORD *)((char *)&unk_5A6D8 + v11 + 4);
            v182 = *(_DWORD *)&v253[v11 - 128];
            v183 = *(_DWORD *)&v253[v11 - 124];
            v137 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 14));
            v200 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 14) + 1);
            v184 = *(_QWORD *)&v234[2 * *(v9 - 14) - 1];
            LODWORD(v199) = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 13));
            HIDWORD(v199) = *((_DWORD *)v16 + 1);
            v185 = *((_DWORD *)v18 - 32);
            v186 = *((_DWORD *)v18 - 31);
            v202 = *(_QWORD *)((char *)&unk_5A6D8 + v14 * 4);
            v187 = *(_QWORD *)&v234[v14 - 1];
            v201 = *(_QWORD *)((char *)&unk_5A6D8 + v15);
            v188 = *(_QWORD *)&v253[v15 - 128];
            v19 = *(v9 - 9);
            LODWORD(v189) = v234[v17 - 1];
            v204 = *(_QWORD *)((char *)&unk_5A6D8 + v17 * 4);
            HIDWORD(v189) = v234[v17];
            v20 = (__int64 *)((char *)&unk_5A6D8 + 8 * v19);
            v21 = &v253[8 * v19];
            v22 = *(v9 - 7);
            v23 = &v253[8 * *(v9 - 8)];
            v24 = 2 * *(v9 - 4);
            v25 = (char *)&unk_5A6D8 + 8 * v22;
            v26 = &v253[8 * v22];
            v27 = 8 * *(v9 - 5);
            v28 = (char *)&unk_5A6D8 + v27;
            v29 = &v253[v27];
            v203 = *v20;
            v30 = 8 * *(v9 - 3);
            v190 = *((_QWORD *)v21 - 16);
            v145 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 8));
            v147 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 8) + 1);
            v205 = *((_DWORD *)v23 - 32);
            v191 = *((_DWORD *)v23 - 31);
            v142 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 7));
            v144 = *((_DWORD *)v25 + 1);
            v206 = *((_DWORD *)v26 - 32);
            v207 = *((_DWORD *)v26 - 31);
            v151 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 6));
            v152 = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 6) + 1);
            v208 = *(_QWORD *)&v234[2 * *(v9 - 6) - 1];
            LODWORD(v149) = *((_DWORD *)&unk_5A6D8 + 2 * *(v9 - 5));
            HIDWORD(v149) = *((_DWORD *)v28 + 1);
            v209 = *((_DWORD *)v29 - 32);
            v210 = *((_DWORD *)v29 - 31);
            LODWORD(v192) = v234[v24 - 1];
            v154 = *(_QWORD *)((char *)&unk_5A6D8 + v24 * 4);
            HIDWORD(v192) = v234[v24];
            v193 = *(_QWORD *)&v253[v30 - 128];
            v153 = *(_QWORD *)((char *)&unk_5A6D8 + v30);
            v31 = *((_QWORD *)v9 - 1);
            v156 = *((_QWORD *)&unk_5A6D8 + v31);
            v155 = *((_QWORD *)&unk_5A6D8 + HIDWORD(v31));
            v194 = *(_QWORD *)&v234[2 * v31 - 1];
            v195 = *(_QWORD *)&v253[8 * HIDWORD(v31) - 128];
          }
          LODWORD(v5) = HIDWORD(v226) ^ HIDWORD(v218) ^ HIDWORD(v120);
          v216 ^= v157 ^ v227 ^ v171;
          LODWORD(v215) = v162 ^ v215 ^ v228 ^ v178;
          HIDWORD(v215) ^= HIDWORD(v162) ^ v217 ^ HIDWORD(v178);
          LODWORD(v226) = v166 ^ v120 ^ v226 ^ v218;
          HIDWORD(v226) = HIDWORD(v166) ^ v5;
          v3 = 0;
          v225 ^= v125 ^ v219 ^ v115;
          v224 ^= v164 ^ v227 ^ v180;
          v222 ^= v134 ^ v228 ^ v160;
          v223 ^= v169 ^ v217 ^ v124;
          v221 ^= v129 ^ v218 ^ v177;
          v220 ^= v159 ^ v174 ^ v219;
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
    *(_QWORD *)(a1 + 136) = v216;
    *(_QWORD *)(a1 + 144) = v215;
    *(_QWORD *)(a1 + 152) = v226;
    *(_QWORD *)(a1 + 160) = v225;
    *(_QWORD *)(a1 + 168) = v224;
    *(_DWORD *)(a1 + 176) = v222;
    *(_DWORD *)(a1 + 180) = v223;
    *(_QWORD *)(a1 + 184) = v221;
    *(_QWORD *)(a1 + 192) = v220;
    *(_DWORD *)(a1 + 128) = v3;
    *(_QWORD *)(a1 + 200) = v227;
    *(_DWORD *)(a1 + 208) = v228;
    *(_DWORD *)(a1 + 212) = v217;
    *(_QWORD *)(a1 + 216) = v218;
    *(_QWORD *)(a1 + 224) = v219;
    *(_QWORD *)(a1 + 232) = v213;
    *(_QWORD *)(a1 + 240) = v229;
  }
  return v5;
}
