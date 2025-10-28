int *__fastcall sub_EDE54(int *a1, int a2, int *a3)
{
  int *v3; // r7
  unsigned int v4; // r4
  int *v5; // r8
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int *v9; // r6
  int *v10; // r9
  int v11; // t1
  int *v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r12
  unsigned int v15; // r0
  unsigned int v16; // lr
  _DWORD *v17; // r1
  unsigned int v18; // t1
  int v19; // t1
  int v20; // r8
  int *v21; // r9
  int *v22; // r2
  int *v23; // r1
  unsigned int v24; // t1
  char *v25; // r7
  void *v26; // r0
  int v27; // r5
  int *v28; // r7
  int v29; // r12
  int v30; // r2
  _DWORD *v31; // r0
  int v32; // r3
  int *v33; // r3
  int v34; // lr
  int v35; // r1
  _DWORD *v36; // r12
  int v37; // r2
  int *v38; // r5
  char *v39; // r8
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  char *v47; // r9
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int *v52; // r4
  int v53; // t1
  int v54; // t1
  int *v57; // [sp+8h] [bp-3Ch]
  int v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  int v61; // [sp+30h] [bp-14h]
  int v62; // [sp+34h] [bp-10h]
  int v63; // [sp+38h] [bp-Ch]
  int v64; // [sp+3Ch] [bp-8h]
  int v65; // [sp+40h] [bp-4h]
  _DWORD v66[8]; // [sp+44h] [bp+0h] BYREF
  int v67; // [sp+64h] [bp+20h] BYREF
  int v68; // [sp+68h] [bp+24h] BYREF
  int v69; // [sp+6Ch] [bp+28h]
  int v70; // [sp+70h] [bp+2Ch]
  int v71; // [sp+74h] [bp+30h]
  int v72; // [sp+78h] [bp+34h]
  int v73; // [sp+7Ch] [bp+38h]
  int v74; // [sp+80h] [bp+3Ch]
  int v75; // [sp+84h] [bp+40h] BYREF
  int v76[7]; // [sp+88h] [bp+44h] BYREF
  int v77; // [sp+A4h] [bp+60h] BYREF
  int v78; // [sp+A8h] [bp+64h] BYREF
  int v79; // [sp+ACh] [bp+68h]
  int v80; // [sp+B0h] [bp+6Ch]
  int v81; // [sp+B4h] [bp+70h]
  int v82; // [sp+B8h] [bp+74h]
  int v83; // [sp+BCh] [bp+78h]
  int v84; // [sp+C0h] [bp+7Ch]
  int v85; // [sp+C4h] [bp+80h]
  _DWORD v86[8]; // [sp+C8h] [bp+84h] BYREF
  int v87; // [sp+E8h] [bp+A4h] BYREF
  int v88; // [sp+ECh] [bp+A8h]
  int v89; // [sp+F0h] [bp+ACh]
  int v90; // [sp+F4h] [bp+B0h]
  int v91; // [sp+F8h] [bp+B4h]
  int v92; // [sp+FCh] [bp+B8h]
  int v93; // [sp+100h] [bp+BCh]
  int v94; // [sp+104h] [bp+C0h] BYREF
  int v95[4]; // [sp+108h] [bp+C4h] BYREF
  int v96; // [sp+118h] [bp+D4h] BYREF
  char v97; // [sp+144h] [bp+100h] BYREF
  int v98; // [sp+148h] [bp+104h] BYREF
  int v99; // [sp+14Ch] [bp+108h]
  int v100; // [sp+150h] [bp+10Ch]
  int v101; // [sp+154h] [bp+110h]
  int v102; // [sp+158h] [bp+114h]
  int v103; // [sp+15Ch] [bp+118h]
  int v104; // [sp+160h] [bp+11Ch]
  int v105; // [sp+164h] [bp+120h]
  int v106[16]; // [sp+168h] [bp+124h] BYREF
  int v107[32]; // [sp+1A8h] [bp+164h] BYREF
  char v108; // [sp+228h] [bp+1E4h] BYREF

  v57 = a1 + 16;
  v3 = v66;
  v59 = 1779033703;
  v4 = (a2 + 63) & 0xFFFFFFC0;
  v60 = -1150833019;
  v61 = 1013904242;
  v62 = -1521486534;
  v63 = 1359893119;
  v64 = -1694144372;
  v65 = 528734635;
  v5 = &v77;
  v66[0] = 1541459225;
  sub_EC5DC(&v59, a1, 1);
  v6 = v57[1];
  v7 = v57[2];
  v8 = v57[3];
  v78 = *v57;
  v79 = v6;
  v80 = v7;
  v81 = v8;
  v9 = v66;
  v82 = 128;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  memset(v86, 0, 28);
  v86[7] = -2147352576;
  sub_EC5DC(&v59, &v78, 1);
  v88 = -1150833019;
  v87 = 1779033703;
  v66[1] = v59;
  v66[2] = v60;
  v66[3] = v61;
  v66[4] = v62;
  v10 = &v77;
  v94 = 1541459225;
  v89 = 1013904242;
  v90 = -1521486534;
  v91 = 1359893119;
  v92 = -1694144372;
  v93 = 528734635;
  v66[5] = v63;
  v66[6] = v64;
  v66[7] = v65;
  v67 = v66[0];
  do
  {
    v11 = v9[1];
    ++v9;
    v10[1] = v11 ^ 0x36363636;
    ++v10;
  }
  while ( v9 != &v67 );
  memset(v86, 54, sizeof(v86));
  sub_EC5DC(&v87, &v78, 0);
  sub_EC5DC(&v87, a1, 1);
  v12 = &v96;
  v13 = 0x80000000;
  v14 = a1[18];
  v15 = a1[19];
  v16 = bswap32(a1[17]);
  v95[0] = bswap32(a1[16]);
  v17 = &unk_17B138;
  v95[1] = v16;
  v95[2] = bswap32(v14);
  v95[3] = bswap32(v15);
  while ( 1 )
  {
    v12[1] = v13;
    if ( ++v12 == (int *)&v97 )
      break;
    v18 = v17[1];
    ++v17;
    v13 = bswap32(v18);
  }
  v98 = 1779033703;
  v99 = -1150833019;
  v100 = 1013904242;
  v102 = 1359893119;
  v101 = -1521486534;
  v104 = 528734635;
  v103 = -1694144372;
  v105 = 1541459225;
  do
  {
    v19 = v3[1];
    ++v3;
    v5[1] = v19 ^ 0x5C5C5C5C;
    ++v5;
  }
  while ( v3 != v9 );
  memset(v86, 92, sizeof(v86));
  v20 = 0;
  v21 = v107;
  sub_EC5DC(&v98, &v78, 0);
  v106[8] = 0x80000000;
  memset(&v106[9], 0, 24);
  v106[15] = 768;
  do
  {
    ++v20;
    v68 = v87;
    v69 = v88;
    v70 = v89;
    v71 = v90;
    v96 = v20;
    v72 = v91;
    v73 = v92;
    v74 = v93;
    v75 = v94;
    sub_EC5DC(&v68, v95, 0);
    v106[0] = v68;
    v106[1] = v69;
    v106[2] = v70;
    v106[3] = v71;
    v106[4] = v72;
    v106[5] = v73;
    v106[6] = v74;
    v106[7] = v75;
    v76[0] = v98;
    v76[1] = v99;
    v76[2] = v100;
    v76[3] = v101;
    v76[4] = v102;
    v76[5] = v103;
    v76[6] = v104;
    v77 = v105;
    sub_EC5DC(v76, v106, 0);
    v22 = &v75;
    v23 = v21;
    do
    {
      v24 = v22[1];
      ++v22;
      *v23++ = bswap32(v24);
    }
    while ( &v77 != v22 );
    v21 += 8;
  }
  while ( v20 != 4 );
  v25 = (char *)v4;
  do
  {
    memcpy(v25, v107, 0x80u);
    sub_EC1CC(v107, &v107[16]);
    sub_EC1CC(&v107[16], v107);
    v26 = v25 + 128;
    v25 += 256;
    memcpy(v26, v107, 0x80u);
    sub_EC1CC(v107, &v107[16]);
    sub_EC1CC(&v107[16], v107);
  }
  while ( (char *)(v4 + 0x20000) != v25 );
  v27 = 512;
  do
  {
    v28 = v107;
    v29 = ((v107[16] & 0x3FF) << 7) - (_DWORD)v107;
    do
    {
      v30 = v28[1];
      v31 = (int *)((char *)v28 + v4 + v29);
      v28 += 2;
      v32 = *(v28 - 2) ^ *v31;
      *(v28 - 1) = v30 ^ v31[1];
      *(v28 - 2) = v32;
    }
    while ( &v108 != (char *)v28 );
    sub_EC1CC(v107, &v107[16]);
    sub_EC1CC(&v107[16], v107);
    v33 = v107;
    v34 = ((v107[16] & 0x3FF) << 7) - (_DWORD)v107;
    do
    {
      v35 = v33[1];
      v36 = (int *)((char *)v33 + v4 + v34);
      v33 += 2;
      v37 = *(v33 - 2) ^ *v36;
      *(v33 - 1) = v35 ^ v36[1];
      *(v33 - 2) = v37;
    }
    while ( v28 != v33 );
    sub_EC1CC(v107, &v107[16]);
    sub_EC1CC(&v107[16], v107);
    --v27;
  }
  while ( v27 );
  v80 = 1013904242;
  v78 = 1779033703;
  v79 = -1150833019;
  v38 = &v86[7];
  v39 = &v97;
  v81 = -1521486534;
  v82 = 1359893119;
  v83 = -1694144372;
  v84 = 528734635;
  v85 = 1541459225;
  sub_EC5DC(&v78, a1, 1);
  v40 = v57[1];
  v41 = v57[2];
  v42 = v57[3];
  v98 = *v57;
  v99 = v40;
  v100 = v41;
  v101 = v42;
  v102 = 128;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  memset(v106, 0, 28);
  v106[7] = -2147352576;
  sub_EC5DC(&v78, &v98, 1);
  v43 = v78;
  v44 = v79;
  v45 = v80;
  v46 = v81;
  *a3 = 1779033703;
  a3[1] = -1150833019;
  v47 = &v97;
  a3[7] = 1541459225;
  v87 = v43;
  v88 = v44;
  v89 = v45;
  v90 = v46;
  a3[2] = 1013904242;
  v48 = v82;
  v49 = v83;
  v50 = v84;
  v51 = v85;
  a3[3] = -1521486534;
  a3[4] = 1359893119;
  a3[5] = -1694144372;
  a3[6] = 528734635;
  v91 = v48;
  v92 = v49;
  v93 = v50;
  v94 = v51;
  v52 = &v86[7];
  do
  {
    v53 = v52[1];
    ++v52;
    *((_DWORD *)v47 + 1) = v53 ^ 0x5C5C5C5C;
    v47 += 4;
  }
  while ( &v94 != v52 );
  memset(v106, 92, 32);
  sub_EC5DC(a3, &v98, 0);
  v78 = 1779033703;
  v79 = -1150833019;
  v80 = 1013904242;
  v81 = -1521486534;
  v82 = 1359893119;
  v83 = -1694144372;
  v84 = 528734635;
  v85 = 1541459225;
  do
  {
    v54 = v38[1];
    ++v38;
    *((_DWORD *)v39 + 1) = v54 ^ 0x36363636;
    v39 += 4;
  }
  while ( v38 != v52 );
  memset(v106, 54, 32);
  sub_EC5DC(&v78, &v98, 0);
  sub_EC5DC(&v78, v107, 1);
  sub_EC5DC(&v78, &v107[16], 1);
  sub_EC5DC(&v78, dword_17B184, 0);
  v98 = v78;
  v99 = v79;
  v100 = v80;
  v101 = v81;
  v102 = v82;
  v103 = v83;
  v104 = v84;
  v105 = v85;
  v106[0] = 0x80000000;
  memset(&v106[1], 0, 24);
  v106[7] = 768;
  return sub_EC5DC(a3, &v98, 0);
}
