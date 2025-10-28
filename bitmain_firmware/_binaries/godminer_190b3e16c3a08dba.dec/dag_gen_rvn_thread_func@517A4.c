void __noreturn dag_gen_rvn_thread_func()
{
  unsigned int v0; // r4
  int v1; // r0
  _DWORD *v2; // r2
  int *v3; // r3
  int v4; // r1
  _DWORD *v5; // r5
  char *v6; // r6
  _DWORD *v7; // r7
  unsigned int v8; // r0
  int v9; // t1
  int v10; // r1
  unsigned int v11; // r0
  int v12; // t1
  int v13; // r1
  int v14; // r4
  int v15; // r9
  char v16; // r1
  char v17; // r1
  int v18; // r12
  unsigned int v19; // r3
  char v20; // r3
  _DWORD *v21; // r2
  char v22; // r3
  int v23; // r6
  int v24; // r5
  unsigned int v25; // r0
  unsigned int v26; // r1
  char v27; // r3
  char v28; // r3
  int v29; // r0
  unsigned int v30; // r5
  unsigned int v31; // r3
  unsigned int v32; // r5
  unsigned int v33; // r0
  unsigned int v34; // lr
  char v35; // r1
  int v36; // r0
  char v37; // r1
  char v38; // r2
  int v39; // r3
  int v40; // r6
  int v41; // r9
  int v42; // r8
  char v43; // r7
  unsigned int v44; // r0
  char v45; // lr
  int v46; // r12
  _DWORD *v47; // r12
  unsigned int v48; // r3
  char *v49; // r6
  int *v50; // r5
  int v51; // r4
  int v52; // r0
  int v53; // t1
  int v54; // r7
  int v55; // r8
  unsigned int v56; // r1
  char v57; // [sp+10h] [bp-D0h]
  unsigned int v58; // [sp+10h] [bp-D0h]
  int v59; // [sp+10h] [bp-D0h]
  unsigned int v60; // [sp+18h] [bp-C8h]
  unsigned int v61; // [sp+18h] [bp-C8h]
  int v62; // [sp+1Ch] [bp-C4h]
  unsigned int v63; // [sp+1Ch] [bp-C4h]
  int v64; // [sp+20h] [bp-C0h]
  void (__fastcall *v65)(int, _DWORD, int, int); // [sp+20h] [bp-C0h]
  int v66; // [sp+24h] [bp-BCh]
  int v67; // [sp+24h] [bp-BCh]
  int v68; // [sp+28h] [bp-B8h]
  int v69; // [sp+30h] [bp-B0h]
  int v70; // [sp+34h] [bp-ACh]
  int v71; // [sp+38h] [bp-A8h]
  int v72; // [sp+3Ch] [bp-A4h]
  int v73; // [sp+40h] [bp-A0h]
  int v74; // [sp+44h] [bp-9Ch]
  int v75; // [sp+48h] [bp-98h]
  int v76; // [sp+4Ch] [bp-94h]
  int v77; // [sp+50h] [bp-90h]
  int v78; // [sp+54h] [bp-8Ch]
  int v79; // [sp+58h] [bp-88h]
  int v80; // [sp+5Ch] [bp-84h]
  int v81; // [sp+60h] [bp-80h]
  int v82; // [sp+68h] [bp-78h]
  int v83; // [sp+6Ch] [bp-74h]
  int v84; // [sp+70h] [bp-70h]
  int v85; // [sp+74h] [bp-6Ch]
  int v86; // [sp+78h] [bp-68h]
  int v87; // [sp+7Ch] [bp-64h]
  char *all_created_runtime; // [sp+80h] [bp-60h]
  int v89; // [sp+84h] [bp-5Ch]
  int v90; // [sp+88h] [bp-58h]
  __int64 v91; // [sp+90h] [bp-50h]
  unsigned int v92; // [sp+ACh] [bp-34h] BYREF
  unsigned int v93; // [sp+B0h] [bp-30h] BYREF
  unsigned int v94; // [sp+B4h] [bp-2Ch]
  int v95; // [sp+B8h] [bp-28h]
  int v96; // [sp+BCh] [bp-24h]
  _DWORD s[8]; // [sp+C0h] [bp-20h] BYREF
  int v98; // [sp+E0h] [bp+0h] BYREF
  _DWORD v99[30]; // [sp+E4h] [bp+4h] BYREF
  int v100; // [sp+15Ch] [bp+7Ch] BYREF
  _DWORD v101[32]; // [sp+160h] [bp+80h] BYREF
  char v102; // [sp+1E0h] [bp+100h] BYREF

  while ( 1 )
  {
    do
    {
      do
      {
        v0 = 0;
        memset(s, 0, sizeof(s));
        get_cur_seed_rvn(s);
        v92 = 0;
        all_created_runtime = (char *)get_all_created_runtime(&v92);
      }
      while ( !qword_17B040 );
    }
    while ( qword_17B040 == *(_QWORD *)&dword_17B048 );
    V_LOCK();
    logfmt_raw((char *)v101, 0x1000u, 0, "cur_block_num enter: %llu", qword_17B040);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
      164,
      "dag_gen_rvn_thread_func",
      23,
      353,
      60,
      v101);
    v91 = qword_17B040;
    v1 = sub_12E424(qword_17B040, 3u);
    v2 = &s[7];
    v3 = &v100;
    v93 = 16777619 * (v1 ^ 0x811C9DC5);
    v94 = 16777619 * (v93 ^ v4);
    v95 = 16777619 * (v1 ^ v94);
    v96 = 16777619 * (v4 ^ v95);
    do
    {
      v2[1] = v0;
      ++v2;
      v3[1] = v0;
      ++v3;
      ++v0;
    }
    while ( v0 != 32 );
    v5 = v101;
    v6 = &v102;
    v7 = v99;
    do
    {
      v8 = sub_514E0(&v93);
      v9 = *--v5;
      sub_12DB24(v8, v0);
      *v5 = v99[v10 - 1];
      v99[v10 - 1] = v9;
      v11 = sub_514E0(&v93);
      v12 = *((_DWORD *)v6 - 1);
      v6 -= 4;
      sub_12DB24(v11, v0--);
      *(_DWORD *)v6 = v101[v13];
      v101[v13] = v12;
    }
    while ( v99 != v5 );
    v14 = 0;
    v90 = 0;
    v15 = 0;
    v62 = 0;
    v89 = 0;
    v68 = 0;
    v73 = 0;
    v85 = 0;
    v72 = 0;
    v78 = 0;
    v83 = 0;
    v70 = 0;
    v80 = 0;
    v84 = 0;
    v71 = 0;
    v79 = 0;
    v82 = 0;
    v69 = 0;
    v81 = 0;
    v74 = 0;
    v86 = 0;
    v64 = 0;
    v75 = 0;
    v87 = 0;
    v76 = 0;
    v77 = 0;
    v66 = 0;
    do
    {
      while ( 1 )
      {
        v21 = &v101[v15 & 0x1F];
        v22 = v15 + 1;
        if ( v14 > 10 )
        {
          LOBYTE(v7) = 4 * v14;
          ++v15;
        }
        v23 = *(v21 - 32);
        if ( v14 <= 10 )
        {
          v57 = v22;
          v15 += 2;
          v24 = v101[v66 & 0x1F];
          v25 = sub_514E0(&v93);
          ++v66;
          LOBYTE(v7) = 4 * v14;
          v64 |= (v25 & 3) << (2 * v14);
          v26 = HIWORD(v25)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v25)) >> 32)
                              + ((unsigned int)(HIWORD(v25) - ((138547333 * (unsigned __int64)HIWORD(v25)) >> 32)) >> 1)) >> 4)
              + 1;
          v27 = 5 * v14;
          if ( v14 <= 5 )
          {
            v36 = v87 | (v23 << v27);
            v23 = v99[(v57 & 0x1F) - 1];
            v87 = v36;
            v77 |= v24 << v27;
            v86 |= v26 << v27;
          }
          else
          {
            v28 = v27 - 30;
            v29 = v75 | (v23 << v28);
            v23 = v99[(v57 & 0x1F) - 1];
            v75 = v29;
            v76 |= v24 << v28;
            v74 |= v26 << v28;
          }
        }
        v30 = sub_514E0(&v93) % 0x3E0;
        v31 = v30 >> 5;
        v32 = v30 & 0x1F;
        if ( v32 <= v31 )
          ++v31;
        v60 = v31;
        v58 = sub_514E0(&v93);
        v33 = sub_514E0(&v93);
        v34 = HIWORD(v33)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)
                            + ((unsigned int)(HIWORD(v33) - ((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v14 <= 5 )
        {
          v18 = v33 & 3;
          v79 |= v32 << ((_BYTE)v7 + v14);
          v80 |= v60 << ((_BYTE)v7 + v14);
          v78 |= v23 << ((_BYTE)v7 + v14);
          v81 |= v34 << ((_BYTE)v7 + v14);
          v19 = v58 % 0xB;
LABEL_23:
          v73 |= v19 << (char)v7;
          goto LABEL_13;
        }
        v16 = (_BYTE)v7 + v14;
        if ( v14 > 11 )
        {
          v35 = v16 - 60;
          v84 |= v32 << v35;
          v83 |= v60 << v35;
          v85 |= v23 << v35;
          v82 |= v34 << v35;
        }
        else
        {
          v17 = v16 - 30;
          v71 |= v32 << v17;
          v70 |= v60 << v17;
          v72 |= v23 << v17;
          v69 |= v34 << v17;
        }
        v18 = v33 & 3;
        v19 = v58 % 0xB;
        if ( v14 <= 7 )
          goto LABEL_23;
        if ( v14 > 15 )
          break;
        v68 |= v19 << (4 * (v14 - 8));
LABEL_13:
        v20 = 2 * v14++;
        v62 |= v18 << v20;
        if ( v14 == 18 )
          goto LABEL_27;
      }
      v37 = 4 * (v14 - 16);
      v38 = 2 * (v14++ - 16);
      v89 |= v19 << v37;
      v90 |= v18 << v38;
    }
    while ( v14 != 18 );
LABEL_27:
    v39 = v15;
    v59 = 0;
    v40 = 0;
    v67 = 0;
    v41 = 0;
    v61 = 0;
    v42 = v39;
    while ( 1 )
    {
      v43 = 5 * v40;
      v44 = sub_514E0(&v93);
      v45 = 2 * v40++;
      v41 |= (v44 & 3) << v45;
      v46 = v42++ & 0x1F;
      v47 = &v101[v46];
      v59 |= v67 << v43;
      v48 = v61
          | ((HIWORD(v44)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v44)) >> 32)
                            + ((unsigned int)(HIWORD(v44) - ((138547333 * (unsigned __int64)HIWORD(v44)) >> 32)) >> 1)) >> 4)
            + 1) << v43);
      v61 = v48;
      if ( v40 == 4 )
        break;
      v67 = *(v47 - 32);
    }
    v98 = v77;
    v99[1] = v87;
    v99[0] = v76;
    v99[2] = v75;
    v99[3] = v64;
    v99[4] = v86;
    v99[5] = v74;
    v99[6] = v81;
    v99[7] = v69;
    v99[8] = v82;
    v99[9] = v79;
    v99[10] = v71;
    v99[11] = v84;
    v99[12] = v80;
    v99[13] = v70;
    v99[14] = v83;
    v99[24] = v41;
    v99[15] = v78;
    v99[25] = v48;
    v99[16] = v72;
    v99[17] = v85;
    v99[18] = v73;
    v99[19] = v68;
    v99[20] = v89;
    v99[21] = v62;
    v99[22] = v90;
    v99[23] = v59;
    *(_QWORD *)&dword_17B048 = v91;
    if ( v92 )
    {
      v63 = 0;
      v49 = all_created_runtime - 4;
      do
      {
        V_LOCK();
        logfmt_raw((char *)v101, 0x1000u, 0, "kiss99 change begin...");
        V_UNLOCK();
        v50 = &v98;
        v51 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          164,
          "dag_gen_rvn_thread_func",
          23,
          362,
          40,
          v101);
        v52 = sub_12E424(qword_17B040, 0x1D4Cu);
        v53 = *((_DWORD *)v49 + 1);
        v49 += 4;
        v54 = (__int64)qword_14A2D8[v52] >> 8;
        v55 = HIDWORD(qword_14A2D8[v52]) >> 8;
        v65 = *(void (__fastcall **)(int, _DWORD, int, int))(v53 + 12);
        printf("dag_load: %llx\n", qword_14A2D8[v52] >> 8);
        v65(v53, v65, v54, v55);
        while ( 1 )
        {
          ++v51;
          (*(void (**)(void))(*(_DWORD *)v49 + 8))();
          if ( v51 == 27 )
            break;
          ++v50;
        }
        V_LOCK();
        ++v63;
        logfmt_raw((char *)v101, 0x1000u, 0, "kiss99 change end...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          164,
          "dag_gen_rvn_thread_func",
          23,
          368,
          40,
          v101);
        v56 = v92;
        *(_BYTE *)(*(_DWORD *)v49 + 231) = 1;
      }
      while ( v56 > v63 );
    }
  }
}
