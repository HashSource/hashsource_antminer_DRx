int __fastcall membist0(int a1)
{
  int *v1; // r11
  int v3; // r4
  int *v4; // r3
  int v5; // r11
  int *v6; // r8
  int v7; // r6
  unsigned int *v8; // r4
  int j; // r5
  int v10; // r6
  unsigned int *v11; // r4
  int k; // r5
  int v13; // r6
  int v14; // r5
  _DWORD *v15; // r4
  char *v16; // r3
  int *v17; // r3
  __useconds_t v18; // r5
  int v19; // r6
  unsigned int v20; // r10
  unsigned int v21; // r7
  unsigned int v22; // r8
  int v23; // r0
  int (**v24)(); // r0
  char *v26; // r3
  char *v27; // r3
  int v28; // [sp+24h] [bp-17C0h]
  int v29; // [sp+34h] [bp-17B0h]
  void *ptr; // [sp+50h] [bp-1794h]
  __int64 ptra; // [sp+50h] [bp-1794h]
  __int64 v32; // [sp+58h] [bp-178Ch]
  int i; // [sp+60h] [bp-1784h]
  __int64 v34; // [sp+60h] [bp-1784h]
  int v35; // [sp+68h] [bp-177Ch]
  char *v36; // [sp+6Ch] [bp-1778h]
  __useconds_t useconds; // [sp+7Ch] [bp-1768h]
  int *v38; // [sp+80h] [bp-1764h]
  _DWORD v39[5]; // [sp+8Ch] [bp-1758h] BYREF
  _DWORD v40[7]; // [sp+A0h] [bp-1744h] BYREF
  int v41; // [sp+BCh] [bp-1728h]
  _DWORD v42[7]; // [sp+C0h] [bp-1724h] BYREF
  int v43; // [sp+DCh] [bp-1708h]
  _DWORD v44[7]; // [sp+E0h] [bp-1704h] BYREF
  int v45; // [sp+FCh] [bp-16E8h]
  _DWORD v46[7]; // [sp+100h] [bp-16E4h] BYREF
  int v47; // [sp+11Ch] [bp-16C8h]
  _DWORD v48[7]; // [sp+120h] [bp-16C4h] BYREF
  int v49; // [sp+13Ch] [bp-16A8h]
  _DWORD v50[7]; // [sp+140h] [bp-16A4h] BYREF
  int v51; // [sp+15Ch] [bp-1688h]
  _DWORD v52[7]; // [sp+160h] [bp-1684h] BYREF
  int v53; // [sp+17Ch] [bp-1668h]
  _DWORD v54[7]; // [sp+180h] [bp-1664h] BYREF
  int v55; // [sp+19Ch] [bp-1648h]
  _DWORD v56[7]; // [sp+1A0h] [bp-1644h] BYREF
  int v57; // [sp+1BCh] [bp-1628h]
  _DWORD v58[7]; // [sp+1C0h] [bp-1624h] BYREF
  int v59; // [sp+1DCh] [bp-1608h]
  _BYTE s[512]; // [sp+1E0h] [bp-1604h] BYREF
  _BYTE v61[512]; // [sp+3E0h] [bp-1404h] BYREF
  char v62[512]; // [sp+5E0h] [bp-1204h] BYREF
  char v63[4100]; // [sp+7E0h] [bp-1004h] BYREF

  v1 = &g_zc;
  v39[0] = -2023406815;
  v39[1] = 1266163410;
  v39[2] = 2015285835;
  v39[3] = 517098360;
  v39[4] = -766805986;
  V_LOCK();
  logfmt_raw(v63, 0x1000u, 0, "%s...", "membist0");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "membist0",
    8,
    631,
    40,
    v63);
  v38 = v39;
  memset(s, 0, sizeof(s));
  memset(v61, 0, sizeof(v61));
  memset(v62, 0, sizeof(v62));
  ptr = calloc(0x600u, 1u);
  for ( i = 0; i != 5; ++i )
  {
    V_LOCK();
    V_INT((int)v40, "chain", *(int *)(a1 + 260));
    v3 = *v38++;
    v35 = 0;
    logfmt_raw(
      v63,
      0x1000u,
      0,
      v41,
      v40[0],
      v40[1],
      v40[2],
      v40[3],
      v40[4],
      v40[5],
      v40[6],
      v41,
      "membist0 final pattern %08x",
      v3);
    V_UNLOCK();
    zlog(
      *v1,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "membist0",
      8,
      641,
      60,
      v63);
    sub_79D84(a1, 164, v3);
    v4 = v1;
    v5 = a1;
    v6 = v4;
    do
    {
      sub_79EB0(v5, v35, 12, 1);
      sub_79EB0(v5, v35, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v7 = sub_7A14C(v5, (unsigned __int16)v35, 161, ptr);
      if ( v7 == 8
        || (V_LOCK(),
            V_INT((int)v42, "chain", *(int *)(v5 + 260)),
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v43,
              v42[0],
              v42[1],
              v42[2],
              v42[3],
              v42[4],
              v42[5],
              v42[6],
              v43,
              "get membist0 err cnt failed, resp_num: %d\n",
              v7),
            V_UNLOCK(),
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              652,
              100,
              v63),
            v7 > 0) )
      {
        v8 = (unsigned int *)ptr;
        for ( j = 0; j < v7; ++j )
        {
          while ( (*v8 & 0x80) == 0 )
          {
            V_LOCK();
            ++j;
            v8 += 3;
            V_INT((int)v46, "chain", *(int *)(v5 + 260));
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v47,
              v46[0],
              v46[1],
              v46[2],
              v46[3],
              v46[4],
              v46[5],
              v46[6],
              v47,
              "chip %02x core %02x membist err not done!",
              *((unsigned __int8 *)v8 - 8),
              *((unsigned __int8 *)v8 - 4));
            V_UNLOCK();
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              668,
              100,
              v63);
            if ( v7 <= j )
              goto LABEL_11;
          }
          if ( (*v8 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v44, "chain", *(int *)(v5 + 260));
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v45,
              v44[0],
              v44[1],
              v44[2],
              v44[3],
              v44[4],
              v44[5],
              v44[6],
              v45,
              "chip %02x core %02x membist0 err cnt: %08x",
              *((unsigned __int8 *)v8 + 4),
              *((unsigned __int8 *)v8 + 8),
              bswap32(*v8));
            V_UNLOCK();
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              662,
              100,
              v63);
            v26 = &v63[64 * *((unsigned __int8 *)v8 + 4) + 4 * i];
            *((_DWORD *)v26 - 384) += bswap32(*v8) & 0x7FFFFF;
          }
          v8 += 3;
        }
      }
LABEL_11:
      memset(ptr, 0, 0x600u);
      v10 = sub_7A14C(v5, (unsigned __int16)v35, 162, ptr);
      if ( v10 == 8
        || (V_LOCK(),
            V_INT((int)v48, "chain", *(int *)(v5 + 260)),
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v49,
              v48[0],
              v48[1],
              v48[2],
              v48[3],
              v48[4],
              v48[5],
              v48[6],
              v49,
              "get membist0 lost cnt failed, resp_num: %d\n",
              v10),
            V_UNLOCK(),
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              676,
              100,
              v63),
            v10 > 0) )
      {
        v11 = (unsigned int *)ptr;
        for ( k = 0; k < v10; ++k )
        {
          while ( (*v11 & 0x80) == 0 )
          {
            V_LOCK();
            ++k;
            v11 += 3;
            V_INT((int)v52, "chain", *(int *)(v5 + 260));
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v53,
              v52[0],
              v52[1],
              v52[2],
              v52[3],
              v52[4],
              v52[5],
              v52[6],
              v53,
              "chip %02x core %02x membist cnt not done!",
              *((unsigned __int8 *)v11 - 8),
              *((unsigned __int8 *)v11 - 4));
            V_UNLOCK();
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              691,
              100,
              v63);
            if ( v10 <= k )
              goto LABEL_19;
          }
          if ( (*v11 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v50, "chain", *(int *)(v5 + 260));
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v51,
              v50[0],
              v50[1],
              v50[2],
              v50[3],
              v50[4],
              v50[5],
              v50[6],
              v51,
              "chip %02x core %02x membist0 lost cnt: %08x",
              *((unsigned __int8 *)v11 + 4),
              *((unsigned __int8 *)v11 + 8),
              bswap32(*v11));
            V_UNLOCK();
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              685,
              100,
              v63);
            v27 = &v63[64 * *((unsigned __int8 *)v11 + 4) + 4 * i];
            *((_DWORD *)v27 - 256) += bswap32(*v11) & 0x7FFFFF;
          }
          v11 += 3;
        }
      }
LABEL_19:
      memset(ptr, 0, 0x600u);
      v13 = sub_7A14C(v5, (unsigned __int16)v35, 163, ptr);
      if ( v13 == 8
        || (V_LOCK(),
            V_INT((int)v54, "chain", *(int *)(v5 + 260)),
            logfmt_raw(
              v63,
              0x1000u,
              0,
              v55,
              v54[0],
              v54[1],
              v54[2],
              v54[3],
              v54[4],
              v54[5],
              v54[6],
              v55,
              "get membist0 etherr cnt failed, resp_num: %d\n",
              v13),
            V_UNLOCK(),
            zlog(
              *v6,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              699,
              100,
              v63),
            v13 > 0) )
      {
        v14 = 0;
        v15 = ptr;
        do
        {
          while ( 1 )
          {
            ++v14;
            if ( (*v15 & 0xFFFF00) != 0 && (*v15 & 0xC0) != 0 )
              break;
            v15 += 3;
            if ( v13 <= v14 )
              goto LABEL_26;
          }
          V_LOCK();
          v15 += 3;
          V_INT((int)v56, "chain", *(int *)(v5 + 260));
          logfmt_raw(
            v63,
            0x1000u,
            0,
            v57,
            v56[0],
            v56[1],
            v56[2],
            v56[3],
            v56[4],
            v56[5],
            v56[6],
            v57,
            "chip %02x core %02x ethbist err cnt: %08x",
            *((unsigned __int8 *)v15 - 8),
            *((unsigned __int8 *)v15 - 4),
            bswap32(*(v15 - 3)));
          V_UNLOCK();
          zlog(
            *v6,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist0",
            8,
            707,
            100,
            v63);
          v16 = &v63[64 * *((unsigned __int8 *)v15 - 8) + 4 * i];
          *((_DWORD *)v16 - 128) += bswap32(*(v15 - 3)) & 0x7FFF;
        }
        while ( v13 > v14 );
      }
LABEL_26:
      ++v35;
    }
    while ( v35 != 16 );
    v17 = v6;
    a1 = v5;
    v1 = v17;
  }
  useconds = 0;
  free(ptr);
  v36 = (char *)a1;
  do
  {
    v18 = useconds;
    v19 = 0;
    ptra = 0;
    v32 = 0;
    v34 = 0;
    do
    {
      v20 = *(_DWORD *)&s[v18];
      v21 = *(_DWORD *)&v61[v18];
      v22 = *(_DWORD *)&v62[v18];
      v18 += 64;
      V_LOCK();
      ptra += v20;
      v32 += v21;
      v34 += v22;
      V_INT((int)v58, "chain", *((int *)v36 + 65));
      v28 = v19++;
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v59,
        v58[0],
        v58[1],
        v58[2],
        v58[3],
        v58[4],
        v58[5],
        v58[6],
        v59,
        "chip %02x membist0: lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx",
        v28,
        v20,
        v21,
        v22,
        v29,
        ptra,
        v32,
        v34);
      V_UNLOCK();
      v23 = zlog(
              *v1,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              171,
              "membist0",
              8,
              726,
              100,
              v63);
    }
    while ( v19 != 8 );
    useconds += 4;
  }
  while ( useconds != 20 );
  v24 = dev_ctrl(v23);
  ((void (__fastcall *)(_DWORD))v24[25])(*((_DWORD *)v36 + 63));
  return 0;
}
