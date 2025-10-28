void __noreturn dag_gen_rvn_thread_func()
{
  int v0; // r3
  _DWORD *v1; // r2
  int v2; // r1
  unsigned int v3; // r4
  __int64 v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r2
  int *v9; // r3
  int v10; // r1
  _DWORD *v11; // r5
  char *v12; // r6
  _DWORD *v13; // r7
  unsigned int v14; // r0
  int v15; // t1
  int v16; // r1
  unsigned int v17; // r0
  int v18; // t1
  int v19; // r1
  int v20; // r4
  int v21; // r9
  char v22; // r1
  char v23; // r1
  int v24; // r12
  unsigned int v25; // r3
  char v26; // r3
  _DWORD *v27; // r2
  char v28; // r3
  int v29; // r6
  int v30; // r5
  unsigned int v31; // r0
  unsigned int v32; // r1
  char v33; // r3
  char v34; // r3
  int v35; // r0
  unsigned int v36; // r5
  unsigned int v37; // r3
  unsigned int v38; // r5
  unsigned int v39; // r0
  unsigned int v40; // lr
  char v41; // r1
  int v42; // r0
  char v43; // r1
  char v44; // r2
  int v45; // r3
  int v46; // r6
  int v47; // r9
  int v48; // r8
  char v49; // r7
  unsigned int v50; // r0
  char v51; // lr
  int v52; // r12
  _DWORD *v53; // r12
  unsigned int v54; // r3
  bool v55; // zf
  int v56; // r3
  int v57; // r2
  int v58; // r1
  char *v59; // r6
  int *v60; // r5
  int v61; // r4
  int v62; // r0
  int v63; // t1
  int v64; // r7
  int v65; // r8
  int v66; // r3
  unsigned int v67; // r1
  char v68; // [sp+10h] [bp-D0h]
  unsigned int v69; // [sp+10h] [bp-D0h]
  int v70; // [sp+10h] [bp-D0h]
  int v71; // [sp+10h] [bp-D0h]
  unsigned int v72; // [sp+18h] [bp-C8h]
  unsigned int v73; // [sp+18h] [bp-C8h]
  int v74; // [sp+18h] [bp-C8h]
  int v75; // [sp+1Ch] [bp-C4h]
  unsigned int v76; // [sp+1Ch] [bp-C4h]
  int v77; // [sp+20h] [bp-C0h]
  void (__fastcall *v78)(int, _DWORD, int, int); // [sp+20h] [bp-C0h]
  int v79; // [sp+24h] [bp-BCh]
  int v80; // [sp+24h] [bp-BCh]
  int v81; // [sp+28h] [bp-B8h]
  int v82; // [sp+28h] [bp-B8h]
  int v83; // [sp+30h] [bp-B0h]
  int v84; // [sp+34h] [bp-ACh]
  int v85; // [sp+38h] [bp-A8h]
  int v86; // [sp+3Ch] [bp-A4h]
  int v87; // [sp+40h] [bp-A0h]
  int v88; // [sp+44h] [bp-9Ch]
  int v89; // [sp+48h] [bp-98h]
  int v90; // [sp+4Ch] [bp-94h]
  int v91; // [sp+50h] [bp-90h]
  int v92; // [sp+54h] [bp-8Ch]
  int v93; // [sp+58h] [bp-88h]
  int v94; // [sp+5Ch] [bp-84h]
  int v95; // [sp+60h] [bp-80h]
  int v96; // [sp+64h] [bp-7Ch]
  int v97; // [sp+68h] [bp-78h]
  int v98; // [sp+6Ch] [bp-74h]
  int v99; // [sp+70h] [bp-70h]
  int v100; // [sp+74h] [bp-6Ch]
  int v101; // [sp+78h] [bp-68h]
  int v102; // [sp+7Ch] [bp-64h]
  char *all_created_runtime; // [sp+80h] [bp-60h]
  int v104; // [sp+84h] [bp-5Ch]
  int v105; // [sp+88h] [bp-58h]
  int v106; // [sp+8Ch] [bp-54h]
  unsigned __int64 v107; // [sp+90h] [bp-50h]
  _DWORD *v108; // [sp+9Ch] [bp-44h]
  unsigned int v109; // [sp+ACh] [bp-34h] BYREF
  unsigned int v110; // [sp+B0h] [bp-30h] BYREF
  unsigned int v111; // [sp+B4h] [bp-2Ch]
  int v112; // [sp+B8h] [bp-28h]
  int v113; // [sp+BCh] [bp-24h]
  _DWORD s[8]; // [sp+C0h] [bp-20h] BYREF
  int v115; // [sp+E0h] [bp+0h] BYREF
  _DWORD v116[30]; // [sp+E4h] [bp+4h] BYREF
  int v117; // [sp+15Ch] [bp+7Ch] BYREF
  _DWORD v118[32]; // [sp+160h] [bp+80h] BYREF
  char v119; // [sp+1E0h] [bp+100h] BYREF

  LOWORD(v0) = 27264;
  LOWORD(v1) = 20532;
  LOWORD(v2) = 10040;
  HIWORD(v0) = (unsigned int)&unk_196A88 >> 16;
  HIWORD(v1) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v2) = (unsigned int)&unk_162AF8 >> 16;
  v96 = v0;
  v108 = v1;
  v106 = v2;
  while ( 1 )
  {
    do
    {
      do
      {
        v3 = 0;
        memset(s, 0, sizeof(s));
        get_cur_seed_rvn(s);
        v109 = 0;
        all_created_runtime = (char *)get_all_created_runtime(&v109);
        v4 = *(_QWORD *)(v96 + 0x38);
      }
      while ( !v4 );
    }
    while ( v4 == *(_QWORD *)(v96 + 0x40) );
    V_LOCK();
    logfmt_raw(
      (char *)v118,
      0x1000u,
      0,
      "cur_block_num enter: %llu",
      *(_DWORD *)(v96 + 0x38),
      *(_DWORD *)(v96 + 0x38 + 4));
    V_UNLOCK();
    LOWORD(v5) = 26452;
    LOWORD(v6) = -6400;
    HIWORD(v6) = (unsigned int)&unk_15EAC0 >> 16;
    HIWORD(v5) = (unsigned int)"fanspeed" >> 16;
    zlog(*v108, v5, 164, v6, 23, 353, 60, v118);
    v107 = *(_QWORD *)(v96 + 0x38);
    v7 = sub_145AC4(v107, 3u);
    v8 = &s[7];
    v9 = &v117;
    v110 = 16777619 * (v7 ^ 0x811C9DC5);
    v111 = 16777619 * (v110 ^ v10);
    v112 = 16777619 * (v7 ^ v111);
    v113 = 16777619 * (v10 ^ v112);
    do
    {
      v8[1] = v3;
      ++v8;
      v9[1] = v3;
      ++v9;
      ++v3;
    }
    while ( v3 != 32 );
    v11 = v118;
    v12 = &v119;
    v13 = v116;
    do
    {
      v14 = sub_59B10(&v110);
      v15 = *--v11;
      sub_1451C4(v14, v3);
      *v11 = v116[v16 - 1];
      v116[v16 - 1] = v15;
      v17 = sub_59B10(&v110);
      v18 = *((_DWORD *)v12 - 1);
      v12 -= 4;
      sub_1451C4(v17, v3--);
      *(_DWORD *)v12 = v118[v19];
      v118[v19] = v18;
    }
    while ( v116 != v11 );
    v20 = 0;
    v105 = 0;
    v21 = 0;
    v75 = 0;
    v104 = 0;
    v81 = 0;
    v87 = 0;
    v100 = 0;
    v86 = 0;
    v92 = 0;
    v98 = 0;
    v84 = 0;
    v94 = 0;
    v99 = 0;
    v85 = 0;
    v93 = 0;
    v97 = 0;
    v83 = 0;
    v95 = 0;
    v88 = 0;
    v101 = 0;
    v77 = 0;
    v89 = 0;
    v102 = 0;
    v90 = 0;
    v91 = 0;
    v79 = 0;
    do
    {
      while ( 1 )
      {
        v27 = &v118[v21 & 0x1F];
        v28 = v21 + 1;
        if ( v20 > 10 )
        {
          LOBYTE(v13) = 4 * v20;
          ++v21;
        }
        v29 = *(v27 - 32);
        if ( v20 <= 10 )
        {
          v68 = v28;
          v21 += 2;
          v30 = v118[v79 & 0x1F];
          v31 = sub_59B10(&v110);
          ++v79;
          LOBYTE(v13) = 4 * v20;
          v77 |= (v31 & 3) << (2 * v20);
          v32 = HIWORD(v31)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v31)) >> 32)
                              + ((unsigned int)(HIWORD(v31) - ((138547333 * (unsigned __int64)HIWORD(v31)) >> 32)) >> 1)) >> 4)
              + 1;
          v33 = 5 * v20;
          if ( v20 <= 5 )
          {
            v42 = v102 | (v29 << v33);
            v29 = v116[(v68 & 0x1F) - 1];
            v102 = v42;
            v91 |= v30 << v33;
            v101 |= v32 << v33;
          }
          else
          {
            v34 = v33 - 30;
            v35 = v89 | (v29 << v34);
            v29 = v116[(v68 & 0x1F) - 1];
            v89 = v35;
            v90 |= v30 << v34;
            v88 |= v32 << v34;
          }
        }
        v36 = sub_59B10(&v110) % 0x3E0;
        v37 = v36 >> 5;
        v38 = v36 & 0x1F;
        if ( v38 <= v37 )
          ++v37;
        v72 = v37;
        v69 = sub_59B10(&v110);
        v39 = sub_59B10(&v110);
        v40 = HIWORD(v39)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v39)) >> 32)
                            + ((unsigned int)(HIWORD(v39) - ((138547333 * (unsigned __int64)HIWORD(v39)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v20 <= 5 )
        {
          v24 = v39 & 3;
          v93 |= v38 << ((_BYTE)v13 + v20);
          v94 |= v72 << ((_BYTE)v13 + v20);
          v92 |= v29 << ((_BYTE)v13 + v20);
          v95 |= v40 << ((_BYTE)v13 + v20);
          v25 = v69 % 0xB;
LABEL_24:
          v87 |= v25 << (char)v13;
          goto LABEL_14;
        }
        v22 = (_BYTE)v13 + v20;
        if ( v20 > 11 )
        {
          v41 = v22 - 60;
          v99 |= v38 << v41;
          v98 |= v72 << v41;
          v100 |= v29 << v41;
          v97 |= v40 << v41;
        }
        else
        {
          v23 = v22 - 30;
          v85 |= v38 << v23;
          v84 |= v72 << v23;
          v86 |= v29 << v23;
          v83 |= v40 << v23;
        }
        v24 = v39 & 3;
        v25 = v69 % 0xB;
        if ( v20 <= 7 )
          goto LABEL_24;
        if ( v20 > 15 )
          break;
        v81 |= v25 << (4 * (v20 - 8));
LABEL_14:
        v26 = 2 * v20++;
        v75 |= v24 << v26;
        if ( v20 == 18 )
          goto LABEL_28;
      }
      v43 = 4 * (v20 - 16);
      v44 = 2 * (v20++ - 16);
      v104 |= v25 << v43;
      v105 |= v24 << v44;
    }
    while ( v20 != 18 );
LABEL_28:
    v45 = v21;
    v70 = 0;
    v46 = 0;
    v80 = 0;
    v47 = 0;
    v73 = 0;
    v48 = v45;
    while ( 1 )
    {
      v49 = 5 * v46;
      v50 = sub_59B10(&v110);
      v51 = 2 * v46++;
      v47 |= (v50 & 3) << v51;
      v52 = v48++ & 0x1F;
      v53 = &v118[v52];
      v70 |= v80 << v49;
      v54 = v73
          | ((HIWORD(v50)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v50)) >> 32)
                            + ((unsigned int)(HIWORD(v50) - ((138547333 * (unsigned __int64)HIWORD(v50)) >> 32)) >> 1)) >> 4)
            + 1) << v49);
      v73 = v54;
      if ( v46 == 4 )
        break;
      v80 = *(v53 - 32);
    }
    v55 = v109 == 0;
    v115 = v91;
    v116[1] = v102;
    v116[0] = v90;
    v116[2] = v89;
    v116[3] = v77;
    v116[4] = v101;
    v116[5] = v88;
    v116[6] = v95;
    v116[7] = v83;
    v116[8] = v97;
    v116[9] = v93;
    v116[10] = v85;
    v116[11] = v99;
    v116[12] = v94;
    v116[13] = v84;
    v116[14] = v98;
    v116[24] = v47;
    v116[15] = v92;
    v116[25] = v54;
    v116[16] = v86;
    v116[17] = v100;
    v116[18] = v87;
    v116[19] = v81;
    v116[20] = v104;
    v116[21] = v75;
    v116[22] = v105;
    v116[23] = v70;
    *(_QWORD *)(v96 + 0x40) = v107;
    if ( !v55 )
    {
      v76 = 0;
      LOWORD(v56) = 26620;
      LOWORD(v57) = -6400;
      LOWORD(v58) = 26452;
      v59 = all_created_runtime - 4;
      HIWORD(v56) = (unsigned int)"thread" >> 16;
      HIWORD(v57) = (unsigned int)&unk_15EAC0 >> 16;
      HIWORD(v58) = (unsigned int)"fanspeed" >> 16;
      v82 = v56;
      v71 = v57;
      v74 = v58;
      do
      {
        V_LOCK();
        logfmt_raw((char *)v118, 0x1000u, 0, v82);
        V_UNLOCK();
        v60 = &v115;
        v61 = 0;
        zlog(*v108, v74, 164, v71, 23, 362, 40, v118);
        v62 = sub_145AC4(*(_QWORD *)(v96 + 0x38), 0x1D4Cu);
        v63 = *((_DWORD *)v59 + 1);
        v59 += 4;
        v64 = *(__int64 *)(v106 + 8 * v62) >> 8;
        v65 = *(_DWORD *)(v106 + 8 * v62 + 4) >> 8;
        v78 = *(void (__fastcall **)(int, _DWORD, int, int))(v63 + 12);
        printf("dag_load: %lx\n", v63);
        v78(v63, v78, v64, v65);
        while ( 1 )
        {
          ++v61;
          (*(void (**)(void))(*(_DWORD *)v59 + 8))();
          if ( v61 == 27 )
            break;
          ++v60;
        }
        V_LOCK();
        LOWORD(v66) = 26660;
        HIWORD(v66) = (unsigned int)"enkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
        ++v76;
        logfmt_raw((char *)v118, 0x1000u, 0, v66);
        V_UNLOCK();
        zlog(*v108, v74, 164, v71, 23, 368, 40, v118);
        v67 = v109;
        *(_BYTE *)(*(_DWORD *)v59 + 266) = 1;
      }
      while ( v67 > v76 );
    }
  }
}
