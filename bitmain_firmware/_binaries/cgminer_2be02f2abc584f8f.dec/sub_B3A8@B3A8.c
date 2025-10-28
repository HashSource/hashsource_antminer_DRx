_BYTE *__fastcall sub_B3A8(int a1, int a2)
{
  int v2; // r7
  _BYTE *result; // r0
  _QWORD *v4; // r6
  double *v5; // r12
  double *v6; // r1
  _BYTE *v7; // r2
  int v8; // r3
  __int64 v9; // t1
  __int64 v10; // t1
  __int64 v11; // d17
  __int64 v12; // d16
  __int64 v13; // d20
  __int64 v14; // d19
  __int64 v15; // d18
  __int64 v16; // r6
  double v17; // d23
  double v18; // d6
  double v19; // d22
  double v20; // d21
  double v21; // d7
  double v22; // d20
  double v23; // d19
  double v24; // d18
  double v25; // d17
  double v26; // d5
  double v27; // d16
  char *v28; // r1
  double v29; // d0
  double v30; // d2
  unsigned __int64 v31; // d3
  double v32; // d14
  double v33; // d11
  unsigned __int64 v34; // d23
  __int64 v35; // d1
  unsigned __int64 v36; // d22
  unsigned __int64 v37; // d23
  unsigned __int64 v38; // d22
  __int64 v39; // r4
  unsigned __int64 v40; // d21
  unsigned __int64 v41; // d20
  __int64 v42; // d21
  unsigned __int64 v43; // d20
  __int64 v44; // d19
  unsigned __int64 v45; // d18
  __int64 v46; // d19
  unsigned __int64 v47; // d18
  __int64 v48; // r8
  unsigned __int64 v49; // d17
  __int64 v50; // d15
  unsigned __int64 v51; // d16
  unsigned __int64 v52; // d17
  __int64 v53; // d16
  __int64 v54; // r6
  __int64 v55; // d23
  __int64 v56; // d18
  __int64 v57; // d21
  unsigned __int64 v58; // d13
  __int64 v59; // d16
  unsigned __int64 v60; // d12
  __int64 v61; // d19
  unsigned __int64 v62; // d4
  unsigned __int64 v63; // d22
  unsigned __int64 v64; // d8
  __int64 v65; // d17
  unsigned __int64 v66; // d9
  unsigned __int64 v67; // d20
  unsigned __int64 v68; // d10
  _QWORD *v69; // r4
  int v70; // r1
  __int64 v71; // r6
  __int64 v72; // t1
  __int64 v73; // t1
  unsigned __int8 *v74; // r3
  _BYTE *v75; // r2
  __int64 v76; // [sp+0h] [bp-23Ch]
  unsigned __int64 v77; // [sp+8h] [bp-234h]
  __int64 v78; // [sp+10h] [bp-22Ch]
  __int64 v79; // [sp+18h] [bp-224h]
  unsigned __int64 v80; // [sp+20h] [bp-21Ch]
  __int64 v81; // [sp+28h] [bp-214h]
  __int64 v82; // [sp+30h] [bp-20Ch]
  __int64 v83; // [sp+38h] [bp-204h]
  unsigned __int64 v84; // [sp+40h] [bp-1FCh]
  __int64 v85; // [sp+48h] [bp-1F4h]
  __int64 v86; // [sp+50h] [bp-1ECh]
  __int64 v87; // [sp+58h] [bp-1E4h]
  __int64 v88; // [sp+60h] [bp-1DCh]
  _BYTE v91[128]; // [sp+70h] [bp-1CCh] BYREF
  _BYTE v92[8]; // [sp+F0h] [bp-14Ch] BYREF
  double v93; // [sp+F8h] [bp-144h]
  double v94; // [sp+100h] [bp-13Ch]
  double v95; // [sp+108h] [bp-134h]
  double v96; // [sp+110h] [bp-12Ch]
  double v97; // [sp+118h] [bp-124h]
  double v98; // [sp+120h] [bp-11Ch]
  double v99; // [sp+128h] [bp-114h]
  double v100; // [sp+130h] [bp-10Ch] BYREF
  double v101; // [sp+138h] [bp-104h]
  double v102; // [sp+140h] [bp-FCh]
  double v103; // [sp+148h] [bp-F4h]
  double v104; // [sp+150h] [bp-ECh]
  double v105; // [sp+158h] [bp-E4h]
  double v106; // [sp+160h] [bp-DCh]
  __int64 v107; // [sp+168h] [bp-D4h]
  double v108; // [sp+170h] [bp-CCh]
  _BYTE dest[192]; // [sp+178h] [bp-C4h] BYREF
  char v110; // [sp+238h] [bp-4h] BYREF

  memcpy(dest, &unk_5AE58, sizeof(dest));
  v2 = a1 + 120;
  result = v92;
  v4 = &unk_5AF10;
  v5 = &v100;
  v6 = &v100;
  v7 = v92;
  v8 = 8;
  do
  {
    v9 = *(_QWORD *)(v2 + 8);
    v2 += 8;
    *((_QWORD *)v7 + 1) = v9;
    v7 += 8;
    v10 = v4[1];
    ++v4;
    *((_QWORD *)v6++ + 1) = v10;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)&v105 ^= *(_QWORD *)(a1 + 192);
  *(_QWORD *)&v106 ^= *(_QWORD *)(a1 + 200);
  if ( a2 )
    v107 = ~v107;
  v74 = (unsigned __int8 *)a1;
  v75 = v91;
  do
  {
    v11 = vshld_n_s64(v74[1], 8u);
    v12 = vshld_n_s64(v74[2], 0x10u);
    v13 = vshld_n_s64(v74[3], 0x18u);
    v14 = vshld_n_s64(v74[4], 0x20u);
    v15 = vshld_n_s64(v74[5], 0x28u);
    LODWORD(v16) = *v74 ^ v12 ^ v11 ^ v13 ^ v14 ^ v15;
    HIDWORD(v16) = ((v12 ^ (unsigned __int64)v11) >> 32) ^ HIDWORD(v13) ^ HIDWORD(v14) ^ HIDWORD(v15);
    *((_QWORD *)v75 + 1) = v16 ^ vshld_n_s64(v74[6], 0x30u) ^ vshld_n_s64(v74[7], 0x38u);
    v75 += 8;
    v74 += 8;
  }
  while ( v75 != v92 );
  v17 = v93;
  v18 = v105;
  v19 = v101;
  v20 = v94;
  v21 = v106;
  v22 = v102;
  v23 = v95;
  v24 = v103;
  v25 = v96;
  v26 = v100;
  v27 = v104;
  v28 = dest;
  v29 = v98;
  v30 = v108;
  v31 = v107;
  v32 = v97;
  v33 = v99;
  do
  {
    v34 = *(_QWORD *)&v91[8 * (unsigned __int8)*v28 + 8] + *(_QWORD *)&v32 + *(_QWORD *)&v17;
    LODWORD(v35) = (v34 ^ *(_QWORD *)&v18) >> 32;
    HIDWORD(v35) = v34 ^ LODWORD(v18);
    v36 = *(_QWORD *)&v19 + v35;
    HIDWORD(v76) = ((unsigned int)((*(_QWORD *)&v32 ^ v36) >> 32) >> 24) | ((LODWORD(v32) ^ (unsigned int)v36) << 8);
    LODWORD(v76) = (__int64)(*(_QWORD *)&v32 ^ v36) >> 24;
    v37 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[1] + 8] + v34 + v76;
    v77 = __PAIR64__(
            ((unsigned int)((v35 ^ v37) >> 32) >> 16) | (((unsigned int)v35 ^ (unsigned int)v37) << 16),
            (__int64)(v35 ^ v37) >> 16);
    v38 = __PAIR64__(
            ((unsigned int)((v35 ^ v37) >> 32) >> 16) | (((unsigned int)v35 ^ (unsigned int)v37) << 16),
            (__int64)(v35 ^ v37) >> 16)
        + v36;
    HIDWORD(v39) = (__int64)(v38 ^ v76) >> 31;
    LODWORD(v39) = (2 * (v38 ^ v76)) | ((unsigned int)(HIDWORD(v38) ^ HIDWORD(v76)) >> 31);
    v40 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[2] + 8] + *(_QWORD *)&v29 + *(_QWORD *)&v20;
    LODWORD(v78) = (v40 ^ *(_QWORD *)&v21) >> 32;
    HIDWORD(v78) = v40 ^ LODWORD(v21);
    v41 = *(_QWORD *)&v22 + v78;
    HIDWORD(v79) = ((unsigned int)((*(_QWORD *)&v29 ^ v41) >> 32) >> 24) | ((LODWORD(v29) ^ (unsigned int)v41) << 8);
    LODWORD(v79) = (__int64)(*(_QWORD *)&v29 ^ v41) >> 24;
    v42 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[3] + 8] + v40 + v79;
    v80 = __PAIR64__(
            ((unsigned int)(HIDWORD(v42) ^ HIDWORD(v78)) >> 16) | (((unsigned int)v42 ^ (unsigned int)v78) << 16),
            (v42 ^ v78) >> 16);
    v43 = __PAIR64__(
            ((unsigned int)(HIDWORD(v42) ^ HIDWORD(v78)) >> 16) | (((unsigned int)v42 ^ (unsigned int)v78) << 16),
            (v42 ^ v78) >> 16)
        + v41;
    HIDWORD(v81) = (__int64)(v43 ^ v79) >> 31;
    LODWORD(v81) = (2 * (v43 ^ v79)) | ((unsigned int)(HIDWORD(v43) ^ HIDWORD(v79)) >> 31);
    v44 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[4] + 8] + *(_QWORD *)&v33 + *(_QWORD *)&v23;
    LODWORD(v82) = (v44 ^ v31) >> 32;
    HIDWORD(v82) = v44 ^ v31;
    v45 = *(_QWORD *)&v24 + v82;
    HIDWORD(v83) = ((unsigned int)((*(_QWORD *)&v33 ^ v45) >> 32) >> 24) | ((LODWORD(v33) ^ (unsigned int)v45) << 8);
    LODWORD(v83) = (__int64)(*(_QWORD *)&v33 ^ v45) >> 24;
    v46 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[5] + 8] + v44 + v83;
    v84 = __PAIR64__(
            ((unsigned int)(HIDWORD(v46) ^ HIDWORD(v82)) >> 16) | (((unsigned int)v46 ^ (unsigned int)v82) << 16),
            (v46 ^ v82) >> 16);
    v47 = __PAIR64__(
            ((unsigned int)(HIDWORD(v46) ^ HIDWORD(v82)) >> 16) | (((unsigned int)v46 ^ (unsigned int)v82) << 16),
            (v46 ^ v82) >> 16)
        + v45;
    HIDWORD(v48) = (__int64)(v47 ^ v83) >> 31;
    LODWORD(v48) = (2 * (v47 ^ v83)) | ((unsigned int)(HIDWORD(v47) ^ HIDWORD(v83)) >> 31);
    v49 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[6] + 8] + *(_QWORD *)&v26 + *(_QWORD *)&v25;
    LODWORD(v50) = (v49 ^ *(_QWORD *)&v30) >> 32;
    HIDWORD(v50) = v49 ^ LODWORD(v30);
    v51 = *(_QWORD *)&v27 + v50;
    HIDWORD(v85) = ((unsigned int)((*(_QWORD *)&v26 ^ v51) >> 32) >> 24) | ((LODWORD(v26) ^ (unsigned int)v51) << 8);
    LODWORD(v85) = (__int64)(*(_QWORD *)&v26 ^ v51) >> 24;
    v52 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[7] + 8] + v49 + v85;
    HIDWORD(v86) = ((unsigned int)((v50 ^ v52) >> 32) >> 16) | (((unsigned int)v50 ^ (unsigned int)v52) << 16);
    LODWORD(v86) = (__int64)(v50 ^ v52) >> 16;
    v53 = v86 + v51;
    HIDWORD(v54) = (v53 ^ v85) >> 31;
    LODWORD(v54) = (2 * (v53 ^ v85)) | ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v85)) >> 31);
    v55 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[8] + 8] + v37 + v81;
    LODWORD(v87) = HIDWORD(v55) ^ HIDWORD(v86);
    HIDWORD(v87) = v55 ^ v86;
    v56 = v87 + v47;
    HIDWORD(v88) = ((unsigned int)(HIDWORD(v56) ^ HIDWORD(v81)) >> 24) | (((unsigned int)v56 ^ (unsigned int)v81) << 8);
    LODWORD(v88) = (v56 ^ v81) >> 24;
    *(_QWORD *)&v17 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[9] + 8] + v55 + v88;
    HIDWORD(v30) = ((unsigned int)(HIDWORD(v17) ^ HIDWORD(v87)) >> 16) | ((LODWORD(v17) ^ (unsigned int)v87) << 16);
    LODWORD(v30) = (*(_QWORD *)&v17 ^ v87) >> 16;
    *(_QWORD *)&v24 = *(_QWORD *)&v30 + v56;
    HIDWORD(v29) = (*(_QWORD *)&v24 ^ v88) >> 31;
    LODWORD(v29) = (2 * (LODWORD(v24) ^ v88)) | ((unsigned int)(HIDWORD(v24) ^ HIDWORD(v88)) >> 31);
    v57 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[10] + 8] + v42 + v48;
    LODWORD(v58) = (v57 ^ v77) >> 32;
    HIDWORD(v58) = v57 ^ v77;
    v59 = v58 + v53;
    HIDWORD(v60) = ((unsigned int)(HIDWORD(v59) ^ HIDWORD(v48)) >> 24) | (((unsigned int)v59 ^ (unsigned int)v48) << 8);
    LODWORD(v60) = (v59 ^ v48) >> 24;
    *(_QWORD *)&v20 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[11] + 8] + v57 + v60;
    HIDWORD(v18) = ((unsigned int)((v58 ^ *(_QWORD *)&v20) >> 32) >> 16) | (((unsigned int)v58 ^ LODWORD(v20)) << 16);
    LODWORD(v18) = (__int64)(v58 ^ *(_QWORD *)&v20) >> 16;
    *(_QWORD *)&v27 = *(_QWORD *)&v18 + v59;
    HIDWORD(v33) = (__int64)(v60 ^ *(_QWORD *)&v27) >> 31;
    LODWORD(v33) = (2 * (v60 ^ LODWORD(v27))) | ((unsigned int)((v60 ^ *(_QWORD *)&v27) >> 32) >> 31);
    v61 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[12] + 8] + v46 + v54;
    LODWORD(v62) = (v61 ^ v80) >> 32;
    HIDWORD(v62) = v61 ^ v80;
    v63 = v62 + v38;
    HIDWORD(v64) = ((unsigned int)(HIDWORD(v63) ^ HIDWORD(v54)) >> 24) | (((unsigned int)v63 ^ (unsigned int)v54) << 8);
    LODWORD(v64) = (__int64)(v63 ^ v54) >> 24;
    *(_QWORD *)&v23 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[13] + 8] + v61 + v64;
    HIDWORD(v21) = ((unsigned int)((v62 ^ *(_QWORD *)&v23) >> 32) >> 16) | (((unsigned int)v62 ^ LODWORD(v23)) << 16);
    LODWORD(v21) = (__int64)(v62 ^ *(_QWORD *)&v23) >> 16;
    *(_QWORD *)&v19 = *(_QWORD *)&v21 + v63;
    HIDWORD(v26) = (__int64)(v64 ^ *(_QWORD *)&v19) >> 31;
    LODWORD(v26) = (2 * (v64 ^ LODWORD(v19))) | ((unsigned int)((v64 ^ *(_QWORD *)&v19) >> 32) >> 31);
    v65 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[14] + 8] + v52 + v39;
    LODWORD(v66) = (v65 ^ v84) >> 32;
    HIDWORD(v66) = v65 ^ v84;
    v67 = v66 + v43;
    HIDWORD(v68) = ((unsigned int)(HIDWORD(v67) ^ HIDWORD(v39)) >> 24) | (((unsigned int)v67 ^ (unsigned int)v39) << 8);
    LODWORD(v68) = (__int64)(v67 ^ v39) >> 24;
    *(_QWORD *)&v25 = *(_QWORD *)&v91[8 * (unsigned __int8)v28[15] + 8] + v65 + v68;
    HIDWORD(v31) = ((unsigned int)((v66 ^ *(_QWORD *)&v25) >> 32) >> 16) | (((unsigned int)v66 ^ LODWORD(v25)) << 16);
    LODWORD(v31) = (__int64)(v66 ^ *(_QWORD *)&v25) >> 16;
    *(_QWORD *)&v22 = v31 + v67;
    HIDWORD(v32) = (__int64)(v68 ^ *(_QWORD *)&v22) >> 31;
    LODWORD(v32) = (2 * (v68 ^ LODWORD(v22))) | ((unsigned int)((v68 ^ *(_QWORD *)&v22) >> 32) >> 31);
    v28 += 16;
  }
  while ( v28 != &v110 );
  v93 = v17;
  v97 = v32;
  v105 = v18;
  v101 = v19;
  v94 = v20;
  v98 = v29;
  v106 = v21;
  v102 = v22;
  v95 = v23;
  v99 = v33;
  v107 = v31;
  v103 = v24;
  v96 = v25;
  v100 = v26;
  v108 = v30;
  v104 = v27;
  v69 = (_QWORD *)(a1 + 128);
  v70 = 8;
  do
  {
    v72 = *((_QWORD *)v5++ + 1);
    v71 = v72;
    v73 = *((_QWORD *)result + 1);
    result += 8;
    *v69++ ^= v71 ^ v73;
    --v70;
  }
  while ( v70 );
  return result;
}
