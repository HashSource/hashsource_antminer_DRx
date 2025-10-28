int __fastcall ethash_keccakf800(int *a1)
{
  int v2; // r11
  int v3; // lr
  int v4; // r6
  int v5; // r10
  int v6; // r4
  int v7; // r12
  int v8; // r2
  int result; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r5
  int v13; // r3
  int v14; // r9
  int v15; // r1
  int v16; // r8
  int v17; // r7
  int v18; // r11
  int v19; // r8
  int v20; // r9
  int v21; // r5
  int v22; // r1
  int v23; // lr
  int v24; // r6
  int v25; // r10
  int v26; // r1
  int v27; // lr
  int v28; // r4
  int v29; // r2
  int v30; // r12
  int v31; // r0
  int v32; // r11
  int v33; // r8
  int v34; // t2
  int v35; // r3
  int v36; // r10
  int v37; // r7
  int v38; // r1
  int v39; // r7
  int v40; // r4
  int v41; // r10
  int v42; // r5
  int v43; // lr
  int v44; // r1
  int v45; // r3
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r0
  int v50; // r9
  int v51; // r8
  int v52; // r12
  int v53; // r4
  int v54; // r2
  int v55; // r7
  int v56; // r6
  int v57; // r3
  int v58; // r5
  int v59; // r9
  int v60; // r2
  int v61; // r11
  int v62; // r3
  int v63; // r4
  int v64; // r12
  int v65; // t2
  int v66; // r8
  int v67; // r1
  int v68; // r2
  int v69; // r10
  int v70; // r9
  int v71; // r0
  int v72; // r5
  int v73; // r7
  int v74; // lr
  int v75; // r12
  int v76; // r1
  int v77; // r9
  int v78; // r3
  int v79; // r11
  int v80; // [sp+4h] [bp-80h]
  int v81; // [sp+4h] [bp-80h]
  int v82; // [sp+4h] [bp-80h]
  int v83; // [sp+4h] [bp-80h]
  int v84; // [sp+8h] [bp-7Ch]
  int v85; // [sp+Ch] [bp-78h]
  int v86; // [sp+Ch] [bp-78h]
  int v87; // [sp+10h] [bp-74h]
  int v88; // [sp+10h] [bp-74h]
  int v89; // [sp+10h] [bp-74h]
  int v90; // [sp+14h] [bp-70h]
  int v91; // [sp+14h] [bp-70h]
  int v92; // [sp+14h] [bp-70h]
  int v93; // [sp+14h] [bp-70h]
  int v94; // [sp+18h] [bp-6Ch]
  int v95; // [sp+18h] [bp-6Ch]
  int v96; // [sp+18h] [bp-6Ch]
  int v97; // [sp+18h] [bp-6Ch]
  int v98; // [sp+1Ch] [bp-68h]
  int v99; // [sp+20h] [bp-64h]
  int v100; // [sp+20h] [bp-64h]
  int v101; // [sp+20h] [bp-64h]
  int v102; // [sp+24h] [bp-60h]
  int v103; // [sp+24h] [bp-60h]
  int v104; // [sp+24h] [bp-60h]
  int v105; // [sp+28h] [bp-5Ch]
  int v106; // [sp+28h] [bp-5Ch]
  int v107; // [sp+28h] [bp-5Ch]
  int v108; // [sp+2Ch] [bp-58h]
  int v109; // [sp+2Ch] [bp-58h]
  int v110; // [sp+30h] [bp-54h]
  int v111; // [sp+30h] [bp-54h]
  int v112; // [sp+30h] [bp-54h]
  int v113; // [sp+34h] [bp-50h]
  int v114; // [sp+34h] [bp-50h]
  int v115; // [sp+34h] [bp-50h]
  int v116; // [sp+38h] [bp-4Ch]
  int v117; // [sp+38h] [bp-4Ch]
  int v118; // [sp+3Ch] [bp-48h]
  int v119; // [sp+3Ch] [bp-48h]
  int v120; // [sp+3Ch] [bp-48h]
  int v121; // [sp+40h] [bp-44h]
  int v122; // [sp+40h] [bp-44h]
  int v123; // [sp+44h] [bp-40h]
  int v124; // [sp+44h] [bp-40h]
  int v125; // [sp+44h] [bp-40h]
  int v126; // [sp+48h] [bp-3Ch]
  int v127; // [sp+48h] [bp-3Ch]
  int v128; // [sp+48h] [bp-3Ch]
  int v129; // [sp+4Ch] [bp-38h]
  int v130; // [sp+4Ch] [bp-38h]
  int v131; // [sp+50h] [bp-34h]
  int v132; // [sp+50h] [bp-34h]
  int v133; // [sp+50h] [bp-34h]
  int v134; // [sp+54h] [bp-30h]
  int v135; // [sp+54h] [bp-30h]
  int v136; // [sp+58h] [bp-2Ch]
  int v137; // [sp+58h] [bp-2Ch]
  int v138; // [sp+5Ch] [bp-28h]
  int v139; // [sp+5Ch] [bp-28h]
  int v140; // [sp+60h] [bp-24h]
  int v141; // [sp+60h] [bp-24h]
  int v142; // [sp+64h] [bp-20h]
  int v143; // [sp+64h] [bp-20h]
  _DWORD *v144; // [sp+68h] [bp-1Ch]
  int v145; // [sp+6Ch] [bp-18h]
  int v146; // [sp+70h] [bp-14h]
  int v147; // [sp+74h] [bp-10h]
  int v148; // [sp+78h] [bp-Ch]

  v2 = a1[10];
  v144 = &unk_1585CC;
  v3 = a1[12];
  v116 = *a1;
  v145 = 32898;
  v118 = a1[1];
  v105 = 1;
  v121 = a1[2];
  v123 = a1[3];
  v126 = a1[4];
  v129 = a1[5];
  v80 = a1[6];
  v131 = a1[7];
  v134 = a1[8];
  v136 = a1[9];
  v138 = a1[11];
  v90 = a1[13];
  v140 = a1[14];
  v4 = a1[16];
  v142 = a1[15];
  v5 = a1[18];
  v6 = a1[19];
  v7 = a1[24];
  v94 = a1[17];
  v98 = a1[20];
  v8 = a1[21];
  result = a1[22];
  v99 = v8;
  v102 = a1[23];
  v10 = v2;
  while ( 1 )
  {
    v12 = v121 ^ v131 ^ v3 ^ v94 ^ result;
    v13 = v116 ^ v129 ^ v10 ^ v142 ^ v98;
    v14 = v118 ^ v80 ^ v138 ^ v4 ^ v99;
    v15 = v126 ^ v136 ^ v140 ^ v6 ^ v7;
    v16 = v123 ^ v134 ^ v90 ^ v5 ^ v102;
    v17 = v13 ^ __ROR4__(v12, 31);
    v18 = v14 ^ __ROR4__(v16, 31);
    v19 = v16 ^ __ROR4__(v13, 31);
    v20 = v15 ^ __ROR4__(v14, 31);
    v21 = v12 ^ __ROR4__(v15, 31);
    v22 = v18 ^ v3;
    v23 = v17 ^ v4;
    v24 = __ROR4__(v22, 21);
    v113 = __ROR4__(v23, 19);
    v81 = __ROR4__(v17 ^ v80, 20);
    v25 = __ROR4__(v5 ^ v21, 11);
    v87 = __ROR4__(v18 ^ result, 3);
    v26 = __ROR4__(v10 ^ v20, 29);
    v85 = __ROR4__(v7 ^ v19, 18);
    v110 = __ROR4__(v19 ^ v136, 12);
    v27 = __ROR4__(v21 ^ v123, 4);
    v146 = __ROR4__(v17 ^ v118, 31);
    v124 = __ROR4__(v18 ^ v131, 26);
    v119 = __ROR4__(v21 ^ v90, 7);
    v91 = __ROR4__(v19 ^ v6, 24);
    v28 = v20 ^ v116;
    v147 = __ROR4__(v20 ^ v98, 14);
    v95 = __ROR4__(v18 ^ v94, 17);
    v29 = __ROR4__(v19 ^ v126, 5);
    v132 = __ROR4__(v17 ^ v138, 22);
    v148 = __ROR4__(v17 ^ v99, 30);
    v127 = __ROR4__(v20 ^ v129, 28);
    v30 = __ROR4__(v21 ^ v102, 8);
    v31 = __ROR4__(v18 ^ v121, 2);
    v32 = v105 ^ v24 & ~v81 ^ v20 ^ v116;
    v100 = v31;
    v103 = __ROR4__(v21 ^ v134, 9);
    v33 = __ROR4__(v19 ^ v140, 25);
    v34 = __ROR4__(v20 ^ v142, 23);
    v106 = v85 & ~v25 ^ v24;
    v137 = v32;
    v108 = (v20 ^ v116) & ~v85 ^ v25;
    v35 = v25 & ~v24 ^ v81;
    v36 = v113;
    v84 = v35;
    v139 = v26 & ~v110 ^ v27;
    v37 = v87 & ~v113 ^ v26;
    v38 = v113 & ~v26;
    v114 = v37;
    v39 = v110 & ~v27;
    v117 = v27 & ~v87 ^ v36;
    v111 = v38 ^ v110;
    v141 = v119 & ~v124 ^ v146;
    v40 = v81 & ~v28;
    v41 = v91 & ~v119;
    v82 = v147 & ~v91 ^ v119;
    v120 = v39 ^ v87;
    v42 = v124 & ~v146 ^ v147;
    v88 = v41 ^ v124;
    v122 = v146 & ~v147 ^ v91;
    v125 = v132 & ~v127 ^ v29;
    v130 = v30 & ~v95 ^ v132;
    v43 = v29 & ~v30;
    v44 = v95 & ~v132;
    v92 = v40 ^ v85;
    v45 = v95;
    v96 = v42;
    v46 = v44 ^ v127;
    v47 = v127 & ~v29;
    v128 = v43 ^ v45;
    v48 = v34 & ~v33;
    v133 = v33 & ~v103 ^ v31;
    v49 = v47 ^ v30;
    v50 = v33 & ~v103 ^ v100;
    v135 = v100 & ~v148 ^ v34;
    v51 = v33 ^ v148 & ~v34;
    v52 = v32 ^ v139 ^ v141 ^ v125 ^ v50;
    v53 = v106 ^ v114 ^ v82 ^ v130 ^ v51;
    v54 = v120 ^ v42;
    v55 = v108 ^ v117 ^ v122 ^ v128 ^ v135;
    v56 = v48 ^ v103;
    v57 = v84 ^ v111 ^ v88 ^ v46 ^ v48 ^ v103;
    v58 = v103 & ~v100 ^ v148;
    v59 = v57 ^ __ROR4__(v55, 31);
    v60 = v54 ^ v92 ^ v49 ^ v58;
    v61 = v52 ^ __ROR4__(v53, 31);
    v62 = v60 ^ __ROR4__(v57, 31);
    v63 = v53 ^ __ROR4__(v60, 31);
    v64 = v55 ^ __ROR4__(v52, 31);
    v65 = __ROR4__(v82 ^ v59, 21);
    v83 = __ROR4__(v111 ^ v61, 20);
    v86 = __ROR4__(v46 ^ v61, 19);
    v143 = __ROR4__(v84 ^ v61, 31);
    v66 = __ROR4__(v51 ^ v59, 3);
    v101 = __ROR4__(v88 ^ v61, 22);
    v67 = __ROR4__(v114 ^ v59, 26);
    v104 = __ROR4__(v130 ^ v59, 17);
    v68 = __ROR4__(v58 ^ v64, 18);
    v107 = __ROR4__(v59 ^ v106, 2);
    v69 = __ROR4__(v120 ^ v64, 12);
    v70 = v92 ^ v64;
    v89 = v67;
    v93 = __ROR4__(v49 ^ v64, 24);
    v112 = __ROR4__(v64 ^ v96, 25);
    v71 = __ROR4__(v141 ^ v62, 29);
    v97 = __ROR4__(v70, 5);
    v72 = __ROR4__(v139 ^ v62, 28);
    v73 = __ROR4__(v133 ^ v62, 14);
    v74 = __ROR4__(v128 ^ v63, 11);
    v115 = __ROR4__(v125 ^ v62, 23);
    v75 = __ROR4__(v108 ^ v63, 4);
    v76 = __ROR4__(v122 ^ v63, 7);
    v77 = __ROR4__(v135 ^ v63, 8);
    v78 = v62 ^ v137;
    v109 = __ROR4__(v63 ^ v117, 9);
    v116 = v145 ^ v65 & ~v83 ^ v78;
    v121 = v68 & ~v74 ^ v65;
    v118 = v74 & ~v65 ^ v83;
    v126 = v83 & ~v78 ^ v68;
    v123 = v78 & ~v68 ^ v74;
    v129 = v71 & ~v69 ^ v75;
    v80 = v86 & ~v71 ^ v69;
    v10 = v76 & ~v89 ^ v143;
    v136 = v69 & ~v75 ^ v66;
    v131 = v66 & ~v86 ^ v71;
    v3 = v73 & ~v93 ^ v76;
    v140 = v89 & ~v143 ^ v73;
    v6 = v72 & ~v97 ^ v77;
    v134 = v75 & ~v66 ^ v86;
    v138 = v93 & ~v76 ^ v89;
    v79 = __ROR4__(v56 ^ v61, 30);
    v90 = v143 & ~v73 ^ v93;
    v7 = v109 & ~v107 ^ v79;
    v142 = v101 & ~v72 ^ v97;
    v4 = v72 ^ v104 & ~v101;
    v5 = v104 ^ v97 & ~v77;
    v94 = v77 & ~v104 ^ v101;
    v98 = v112 & ~v109 ^ v107;
    v99 = v115 & ~v112 ^ v109;
    result = v79 & ~v115 ^ v112;
    v102 = v107 & ~v79 ^ v115;
    if ( &unk_15861C == (_UNKNOWN *)v144 )
      break;
    v105 = v144[2];
    v11 = v144[3];
    v144 += 2;
    v145 = v11;
  }
  a1[10] = v10;
  *a1 = v116;
  a1[12] = v3;
  a1[16] = v4;
  a1[1] = v118;
  a1[2] = v121;
  a1[3] = v123;
  a1[4] = v126;
  a1[5] = v129;
  a1[6] = v80;
  a1[7] = v131;
  a1[8] = v134;
  a1[9] = v136;
  a1[11] = v138;
  a1[13] = v90;
  a1[14] = v140;
  a1[15] = v142;
  a1[18] = v5;
  a1[19] = v6;
  a1[17] = v94;
  a1[22] = result;
  a1[24] = v7;
  a1[20] = v98;
  a1[21] = v99;
  a1[23] = v102;
  return result;
}
