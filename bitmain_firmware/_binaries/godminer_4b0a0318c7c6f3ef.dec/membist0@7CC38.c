int __fastcall membist0(int a1)
{
  int v1; // lr
  int *v2; // r11
  int v4; // r2
  int v5; // r3
  int v6; // r1
  char *v7; // r1
  int v8; // r4
  int v9; // r1
  int *v10; // r3
  int v11; // r11
  int *v12; // r8
  int v13; // r6
  char *v14; // r1
  int v15; // r4
  int v16; // r1
  char *v17; // r3
  unsigned int *v18; // r4
  int v19; // r5
  int v20; // r1
  int v21; // r6
  char *v22; // r1
  int v23; // r1
  char *v24; // r3
  unsigned int *v25; // r4
  int v26; // r5
  int v27; // r1
  int v28; // r6
  char *v29; // r1
  int v30; // r4
  int v31; // r1
  char *v32; // r3
  int v33; // r10
  int v34; // r5
  _DWORD *v35; // r4
  char *v36; // r3
  int *v37; // r3
  int v38; // r3
  char *v39; // r2
  int v40; // r1
  __useconds_t v41; // r5
  int v42; // r6
  unsigned int v43; // r10
  unsigned int v44; // r7
  unsigned int v45; // r8
  int v46; // r0
  int (**v47)(); // r0
  int v49; // r1
  char *v50; // r3
  int v51; // r1
  char *v52; // r3
  int v53; // [sp+24h] [bp-17C0h]
  int v54; // [sp+34h] [bp-17B0h]
  void *ptr; // [sp+50h] [bp-1794h]
  __int64 ptra; // [sp+50h] [bp-1794h]
  char *v57; // [sp+58h] [bp-178Ch]
  char *v58; // [sp+58h] [bp-178Ch]
  __int64 v59; // [sp+58h] [bp-178Ch]
  int i; // [sp+60h] [bp-1784h]
  __int64 v61; // [sp+60h] [bp-1784h]
  int v62; // [sp+68h] [bp-177Ch]
  char *v63; // [sp+6Ch] [bp-1778h]
  char *v64; // [sp+6Ch] [bp-1778h]
  int v65; // [sp+70h] [bp-1774h]
  int v66; // [sp+70h] [bp-1774h]
  char *v67; // [sp+74h] [bp-1770h]
  int v68; // [sp+78h] [bp-176Ch]
  __useconds_t useconds; // [sp+7Ch] [bp-1768h]
  int *v70; // [sp+80h] [bp-1764h]
  int v71; // [sp+84h] [bp-1760h]
  _DWORD v72[5]; // [sp+8Ch] [bp-1758h] BYREF
  _DWORD v73[7]; // [sp+A0h] [bp-1744h] BYREF
  int v74; // [sp+BCh] [bp-1728h]
  _DWORD v75[7]; // [sp+C0h] [bp-1724h] BYREF
  int v76; // [sp+DCh] [bp-1708h]
  _DWORD v77[7]; // [sp+E0h] [bp-1704h] BYREF
  int v78; // [sp+FCh] [bp-16E8h]
  _DWORD v79[7]; // [sp+100h] [bp-16E4h] BYREF
  int v80; // [sp+11Ch] [bp-16C8h]
  _DWORD v81[7]; // [sp+120h] [bp-16C4h] BYREF
  int v82; // [sp+13Ch] [bp-16A8h]
  _DWORD v83[7]; // [sp+140h] [bp-16A4h] BYREF
  int v84; // [sp+15Ch] [bp-1688h]
  _DWORD v85[7]; // [sp+160h] [bp-1684h] BYREF
  int v86; // [sp+17Ch] [bp-1668h]
  _DWORD v87[7]; // [sp+180h] [bp-1664h] BYREF
  int v88; // [sp+19Ch] [bp-1648h]
  _DWORD v89[7]; // [sp+1A0h] [bp-1644h] BYREF
  int v90; // [sp+1BCh] [bp-1628h]
  _DWORD v91[7]; // [sp+1C0h] [bp-1624h] BYREF
  int v92; // [sp+1DCh] [bp-1608h]
  _BYTE s[512]; // [sp+1E0h] [bp-1604h] BYREF
  _BYTE v94[512]; // [sp+3E0h] [bp-1404h] BYREF
  char v95[512]; // [sp+5E0h] [bp-1204h] BYREF
  char v96[4100]; // [sp+7E0h] [bp-1004h] BYREF

  LOWORD(v1) = -13720;
  HIWORD(v1) = (unsigned int)": %d" >> 16;
  v2 = &g_zc;
  v71 = v1;
  v72[0] = -2023406815;
  v72[1] = 1266163410;
  v72[2] = 2015285835;
  v72[3] = 517098360;
  LOWORD(v4) = -13604;
  HIWORD(v4) = (unsigned int)" dag size error!" >> 16;
  v65 = v4;
  v72[4] = -766805986;
  V_LOCK();
  LOWORD(v5) = -14172;
  HIWORD(v5) = (unsigned int)": %d" >> 16;
  logfmt_raw(v96, 0x1000u, 0, v5, "membist0");
  V_UNLOCK();
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(g_zc, v6, 171, "membist0", 8, 579, 40, v96);
  v70 = v72;
  memset(s, 0, sizeof(s));
  memset(v94, 0, sizeof(v94));
  memset(v95, 0, sizeof(v95));
  ptr = calloc(0x600u, 1u);
  for ( i = 0; i != 5; ++i )
  {
    V_LOCK();
    LOWORD(v7) = 27372;
    HIWORD(v7) = (unsigned int)":" >> 16;
    V_INT((int)v73, v7, *(int *)(a1 + 256));
    v8 = *v70++;
    v62 = 0;
    logfmt_raw(v96, 0x1000u, 0, v74, v73[0], v73[1], v73[2], v73[3], v73[4], v73[5], v73[6], v74, v71, v8);
    V_UNLOCK();
    LOWORD(v9) = -14448;
    HIWORD(v9) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v2, v9, 171, "membist0", 8, 589, 60, v96);
    sub_78DDC(a1, 164, v8);
    v10 = v2;
    v11 = a1;
    v12 = v10;
    do
    {
      sub_78F08(v11, v62, 12, 1);
      sub_78F08(v11, v62, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v13 = sub_791A4(v11, (unsigned __int16)v62, 161, ptr);
      if ( v13 == 8 )
        goto LABEL_5;
      V_LOCK();
      LOWORD(v14) = 27372;
      HIWORD(v14) = (unsigned int)":" >> 16;
      V_INT((int)v75, v14, *(int *)(v11 + 256));
      LOWORD(v15) = -13692;
      HIWORD(v15) = (unsigned int)"tus failed, resp_num: %d, retry_time: %d" >> 16;
      logfmt_raw(v96, 0x1000u, 0, v76, v75[0], v75[1], v75[2], v75[3], v75[4], v75[5], v75[6], v76, v15, v13);
      V_UNLOCK();
      LOWORD(v16) = -14448;
      HIWORD(v16) = (unsigned int)" lost cnt: %08x" >> 16;
      zlog(*v12, v16, 171, "membist0", 8, 600, 100, v96);
      if ( v13 > 0 )
      {
LABEL_5:
        LOWORD(v17) = 27372;
        v18 = (unsigned int *)ptr;
        HIWORD(v17) = (unsigned int)":" >> 16;
        v19 = 0;
        v57 = v17;
        do
        {
          while ( (*v18 & 0x80) == 0 )
          {
            V_LOCK();
            ++v19;
            v18 += 3;
            V_INT((int)v79, v57, *(int *)(v11 + 256));
            logfmt_raw(
              v96,
              0x1000u,
              0,
              v80,
              v79[0],
              v79[1],
              v79[2],
              v79[3],
              v79[4],
              v79[5],
              v79[6],
              v80,
              v65,
              *((unsigned __int8 *)v18 - 8),
              *((unsigned __int8 *)v18 - 4));
            V_UNLOCK();
            LOWORD(v20) = -14448;
            HIWORD(v20) = (unsigned int)" lost cnt: %08x" >> 16;
            zlog(*v12, v20, 171, "membist0", 8, 616, 100, v96);
            if ( v13 <= v19 )
              goto LABEL_11;
          }
          if ( (*v18 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v77, v57, *(int *)(v11 + 256));
            logfmt_raw(
              v96,
              0x1000u,
              0,
              v78,
              v77[0],
              v77[1],
              v77[2],
              v77[3],
              v77[4],
              v77[5],
              v77[6],
              v78,
              "chip %02x core %02x membist0 err cnt: %08x",
              *((unsigned __int8 *)v18 + 4),
              *((unsigned __int8 *)v18 + 8),
              bswap32(*v18));
            V_UNLOCK();
            LOWORD(v49) = -14448;
            HIWORD(v49) = (unsigned int)" lost cnt: %08x" >> 16;
            zlog(*v12, v49, 171, "membist0", 8, 610, 100, v96);
            v50 = &v96[64 * *((unsigned __int8 *)v18 + 4) + 4 * i];
            *((_DWORD *)v50 - 384) += bswap32(*v18) & 0x7FFFFF;
          }
          ++v19;
          v18 += 3;
        }
        while ( v13 > v19 );
      }
LABEL_11:
      memset(ptr, 0, 0x600u);
      v21 = sub_791A4(v11, (unsigned __int16)v62, 162, ptr);
      if ( v21 == 8 )
        goto LABEL_13;
      V_LOCK();
      LOWORD(v22) = 27372;
      HIWORD(v22) = (unsigned int)":" >> 16;
      V_INT((int)v81, v22, *(int *)(v11 + 256));
      logfmt_raw(
        v96,
        0x1000u,
        0,
        v82,
        v81[0],
        v81[1],
        v81[2],
        v81[3],
        v81[4],
        v81[5],
        v81[6],
        v82,
        "get membist0 lost cnt failed, resp_num: %d\n",
        v21);
      V_UNLOCK();
      LOWORD(v23) = -14448;
      HIWORD(v23) = (unsigned int)" lost cnt: %08x" >> 16;
      zlog(*v12, v23, 171, "membist0", 8, 624, 100, v96);
      if ( v21 > 0 )
      {
LABEL_13:
        LOWORD(v24) = 27372;
        v25 = (unsigned int *)ptr;
        HIWORD(v24) = (unsigned int)":" >> 16;
        v26 = 0;
        v58 = v24;
        do
        {
          while ( (*v25 & 0x80) == 0 )
          {
            V_LOCK();
            ++v26;
            v25 += 3;
            V_INT((int)v85, v58, *(int *)(v11 + 256));
            logfmt_raw(
              v96,
              0x1000u,
              0,
              v86,
              v85[0],
              v85[1],
              v85[2],
              v85[3],
              v85[4],
              v85[5],
              v85[6],
              v86,
              "chip %02x core %02x membist cnt not done!",
              *((unsigned __int8 *)v25 - 8),
              *((unsigned __int8 *)v25 - 4));
            V_UNLOCK();
            LOWORD(v27) = -14448;
            HIWORD(v27) = (unsigned int)" lost cnt: %08x" >> 16;
            zlog(*v12, v27, 171, "membist0", 8, 639, 100, v96);
            if ( v21 <= v26 )
              goto LABEL_19;
          }
          if ( (*v25 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v83, v58, *(int *)(v11 + 256));
            logfmt_raw(
              v96,
              0x1000u,
              0,
              v84,
              v83[0],
              v83[1],
              v83[2],
              v83[3],
              v83[4],
              v83[5],
              v83[6],
              v84,
              "chip %02x core %02x membist0 lost cnt: %08x",
              *((unsigned __int8 *)v25 + 4),
              *((unsigned __int8 *)v25 + 8),
              bswap32(*v25));
            V_UNLOCK();
            LOWORD(v51) = -14448;
            HIWORD(v51) = (unsigned int)" lost cnt: %08x" >> 16;
            zlog(*v12, v51, 171, "membist0", 8, 633, 100, v96);
            v52 = &v96[64 * *((unsigned __int8 *)v25 + 4) + 4 * i];
            *((_DWORD *)v52 - 256) += bswap32(*v25) & 0x7FFFFF;
          }
          ++v26;
          v25 += 3;
        }
        while ( v21 > v26 );
      }
LABEL_19:
      memset(ptr, 0, 0x600u);
      v28 = sub_791A4(v11, (unsigned __int16)v62, 163, ptr);
      if ( v28 == 8 )
        goto LABEL_21;
      V_LOCK();
      LOWORD(v29) = 27372;
      HIWORD(v29) = (unsigned int)":" >> 16;
      V_INT((int)v87, v29, *(int *)(v11 + 256));
      LOWORD(v30) = -13428;
      HIWORD(v30) = (unsigned int)"hed\n" >> 16;
      logfmt_raw(v96, 0x1000u, 0, v88, v87[0], v87[1], v87[2], v87[3], v87[4], v87[5], v87[6], v88, v30, v28);
      V_UNLOCK();
      LOWORD(v31) = -14448;
      HIWORD(v31) = (unsigned int)" lost cnt: %08x" >> 16;
      zlog(*v12, v31, 171, "membist0", 8, 647, 100, v96);
      if ( v28 > 0 )
      {
LABEL_21:
        LOWORD(v32) = 27372;
        LOWORD(v33) = -13380;
        HIWORD(v32) = (unsigned int)":" >> 16;
        v63 = v32;
        v34 = 0;
        v35 = ptr;
        do
        {
          while ( 1 )
          {
            ++v34;
            if ( (*v35 & 0xFFFF00) != 0 && (*v35 & 0xC0) != 0 )
              break;
            v35 += 3;
            if ( v28 <= v34 )
              goto LABEL_26;
          }
          V_LOCK();
          v35 += 3;
          V_INT((int)v89, v63, *(int *)(v11 + 256));
          HIWORD(v33) = (unsigned int)"ing_get_core_status_ETH" >> 16;
          logfmt_raw(
            v96,
            0x1000u,
            0,
            v90,
            v89[0],
            v89[1],
            v89[2],
            v89[3],
            v89[4],
            v89[5],
            v89[6],
            v90,
            v33,
            *((unsigned __int8 *)v35 - 8),
            *((unsigned __int8 *)v35 - 4),
            bswap32(*(v35 - 3)));
          V_UNLOCK();
          zlog(
            *v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist0",
            8,
            655,
            100,
            v96);
          v36 = &v96[64 * *((unsigned __int8 *)v35 - 8) + 4 * i];
          *((_DWORD *)v36 - 128) += bswap32(*(v35 - 3)) & 0x7FFF;
        }
        while ( v28 > v34 );
      }
LABEL_26:
      ++v62;
    }
    while ( v62 != 16 );
    v37 = v12;
    a1 = v11;
    v2 = v37;
  }
  LOWORD(v38) = -13336;
  LOWORD(v39) = 27372;
  HIWORD(v38) = (unsigned int)"le_chip_core_status_ETH" >> 16;
  LOWORD(v40) = -14448;
  v66 = v38;
  HIWORD(v39) = (unsigned int)":" >> 16;
  HIWORD(v40) = (unsigned int)" lost cnt: %08x" >> 16;
  v67 = v39;
  v68 = v40;
  useconds = 0;
  free(ptr);
  v64 = (char *)a1;
  do
  {
    v41 = useconds;
    v42 = 0;
    ptra = 0;
    v59 = 0;
    v61 = 0;
    do
    {
      v43 = *(_DWORD *)&s[v41];
      v44 = *(_DWORD *)&v94[v41];
      v45 = *(_DWORD *)&v95[v41];
      v41 += 64;
      V_LOCK();
      ptra += v43;
      v59 += v44;
      v61 += v45;
      V_INT((int)v91, v67, *((int *)v64 + 64));
      v53 = v42++;
      logfmt_raw(
        v96,
        0x1000u,
        0,
        v92,
        v91[0],
        v91[1],
        v91[2],
        v91[3],
        v91[4],
        v91[5],
        v91[6],
        v92,
        v66,
        v53,
        v43,
        v44,
        v45,
        v54,
        ptra,
        v59,
        v61);
      V_UNLOCK();
      v46 = zlog(*v2, v68, 171, "membist0", 8, 674, 100, v96);
    }
    while ( v42 != 8 );
    useconds += 4;
  }
  while ( useconds != 20 );
  v47 = dev_ctrl(v46);
  ((void (__fastcall *)(_DWORD))v47[25])(*((_DWORD *)v64 + 62));
  return 0;
}
