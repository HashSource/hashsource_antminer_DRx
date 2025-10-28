int __fastcall sub_EAD1C(int *a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r8
  int v5; // r3
  int v6; // r12
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r9
  int v11; // r4
  int v12; // lr
  int v13; // r12
  int v14; // r5
  int v15; // r7
  int v16; // r0
  int v17; // r2
  int v18; // r6
  int v19; // r4
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r2
  int v24; // r9
  int v25; // r8
  int v26; // r12
  int v27; // r8
  int v28; // r3
  int v29; // r5
  int v30; // r10
  int v31; // r3
  int v32; // r2
  int v33; // r3
  int v34; // r3
  int v35; // r5
  int v36; // r2
  int v37; // r3
  int v38; // r11
  int v39; // r4
  int v40; // r0
  int v41; // r12
  int v42; // r7
  int v43; // r9
  int v44; // r8
  int v45; // r3
  int v46; // r11
  int v47; // r2
  int v48; // r1
  int v49; // r10
  int v50; // r6
  int v51; // lr
  int v52; // r12
  int v53; // r1
  int v54; // r0
  int v55; // r6
  bool v56; // zf
  __int64 v58; // r2
  int v59; // [sp+4h] [bp-70h]
  int v60; // [sp+8h] [bp-6Ch]
  int v61; // [sp+Ch] [bp-68h]
  int v62; // [sp+Ch] [bp-68h]
  int v63; // [sp+10h] [bp-64h]
  int v64; // [sp+14h] [bp-60h]
  int v65; // [sp+18h] [bp-5Ch]
  int v66; // [sp+18h] [bp-5Ch]
  int v67; // [sp+1Ch] [bp-58h]
  int v68; // [sp+20h] [bp-54h]
  int v69; // [sp+24h] [bp-50h]
  int v70; // [sp+28h] [bp-4Ch]
  int v71; // [sp+2Ch] [bp-48h]
  int v72; // [sp+30h] [bp-44h]
  int v73; // [sp+34h] [bp-40h]
  int v74; // [sp+38h] [bp-3Ch]
  int v75; // [sp+3Ch] [bp-38h]
  int v76; // [sp+40h] [bp-34h]
  int v77; // [sp+44h] [bp-30h]
  int v78; // [sp+48h] [bp-2Ch]
  int v79; // [sp+4Ch] [bp-28h]
  int v80; // [sp+50h] [bp-24h]
  int v81; // [sp+54h] [bp-20h]
  int v82; // [sp+58h] [bp-1Ch]
  int v83; // [sp+5Ch] [bp-18h]
  int v84; // [sp+60h] [bp-14h]
  int v85; // [sp+64h] [bp-10h]
  int v86; // [sp+68h] [bp-Ch]
  int *v87; // [sp+6Ch] [bp-8h]

  v69 = 4;
  v3 = a1[1];
  v4 = a1[2];
  v5 = *a1 ^ *a2;
  v6 = a1[3];
  *a1 = v5;
  v7 = a1[4];
  v71 = v5;
  v8 = v3 ^ a2[1];
  v61 = v5;
  a1[1] = v8;
  v9 = a1[5];
  v10 = a1[6];
  v11 = v4 ^ a2[2];
  v12 = a1[8];
  a1[2] = v11;
  v73 = v11;
  v65 = v11;
  v13 = v6 ^ a2[3];
  v14 = a1[9];
  a1[3] = v13;
  v15 = v13;
  v72 = v8;
  v59 = v8;
  v16 = v7 ^ a2[4];
  v17 = a1[7];
  a1[4] = v16;
  v18 = v16;
  v74 = v13;
  v75 = v16;
  v76 = v9 ^ a2[5];
  a1[5] = v76;
  v63 = v76;
  v19 = a1[15];
  v20 = v10 ^ a2[6];
  v21 = a1[13];
  a1[6] = v20;
  v77 = v20;
  v67 = v20;
  v22 = v17 ^ a2[7];
  v23 = a1[10];
  a1[7] = v22;
  v24 = v22;
  v25 = a2[8];
  v78 = v22;
  v26 = a1[14];
  a1[8] = v12 ^ v25;
  v27 = v12 ^ v25;
  v79 = v27;
  v28 = v14 ^ a2[9];
  v29 = a1[12];
  a1[9] = v28;
  v30 = v28;
  v80 = v28;
  v31 = v23 ^ a2[10];
  v32 = a1[11];
  a1[10] = v31;
  v81 = v31;
  v64 = v31;
  v33 = v32 ^ a2[11];
  a1[11] = v33;
  v82 = v33;
  v60 = v33;
  v34 = v29 ^ a2[12];
  a1[12] = v34;
  v35 = v34;
  v83 = v34;
  v36 = v21 ^ a2[13];
  v84 = v36;
  a1[13] = v36;
  v87 = a1;
  v37 = v26 ^ a2[14];
  a1[14] = v37;
  v38 = v65;
  v85 = v37;
  v39 = v19 ^ a2[15];
  v86 = v39;
  do
  {
    v40 = v18 ^ __ROR4__(v61 + v35, 25);
    v41 = v37 ^ __ROR4__(v67 + v64, 25);
    v42 = v15 ^ __ROR4__(v60 + v39, 25);
    v43 = v24 ^ __ROR4__(v42 + v39, 23);
    v68 = v30 ^ __ROR4__(v59 + v63, 25);
    v44 = v27 ^ __ROR4__(v40 + v61, 23);
    v70 = v40;
    v45 = v38 ^ __ROR4__(v41 + v64, 23);
    v46 = v35 ^ __ROR4__(v40 + v44, 19);
    v47 = v36 ^ __ROR4__(v68 + v63, 23);
    v48 = v61;
    v49 = v60 ^ __ROR4__(v42 + v43, 19);
    v62 = v41;
    v50 = v67 ^ __ROR4__(v41 + v45, 19);
    v66 = v39 ^ __ROR4__(v43 + v49, 14);
    v51 = v59 ^ __ROR4__(v68 + v47, 19);
    v52 = v48 ^ __ROR4__(v44 + v46, 14);
    v53 = v64 ^ __ROR4__(v45 + v50, 14);
    v35 = v46 ^ __ROR4__(v62 + v66, 25);
    v54 = v63 ^ __ROR4__(v47 + v51, 14);
    v59 = v51 ^ __ROR4__(v42 + v52, 25);
    v60 = v49 ^ __ROR4__(v68 + v53, 25);
    v55 = v50 ^ __ROR4__(v70 + v54, 25);
    v38 = v45 ^ __ROR4__(v52 + v59, 23);
    v24 = v43 ^ __ROR4__(v54 + v55, 23);
    v67 = v55;
    v36 = v47 ^ __ROR4__(v66 + v35, 23);
    v27 = v44 ^ __ROR4__(v53 + v60, 23);
    v18 = v70 ^ __ROR4__(v55 + v24, 19);
    v15 = v42 ^ __ROR4__(v59 + v38, 19);
    v37 = v62 ^ __ROR4__(v35 + v36, 19);
    v30 = v68 ^ __ROR4__(v60 + v27, 19);
    v56 = v69-- == 1;
    v61 = v52 ^ __ROR4__(v38 + v15, 14);
    v63 = v54 ^ __ROR4__(v24 + v18, 14);
    v64 = v53 ^ __ROR4__(v27 + v30, 14);
    v39 = v66 ^ __ROR4__(v36 + v37, 14);
  }
  while ( !v56 );
  *v87 = v71 + v61;
  v87[1] = v72 + v59;
  v87[2] = v73 + v38;
  v87[3] = v74 + v15;
  v87[4] = v75 + v18;
  v87[5] = v76 + v63;
  v87[6] = v77 + v67;
  v87[7] = v78 + v24;
  v87[10] = v81 + v64;
  LODWORD(v58) = v84 + v36;
  HIDWORD(v58) = v85 + v37;
  v87[8] = v79 + v27;
  v87[9] = v80 + v30;
  v87[11] = v82 + v60;
  v87[12] = v83 + v35;
  *(_QWORD *)(v87 + 13) = v58;
  v87[15] = v86 + v39;
  return v77 + v67;
}
