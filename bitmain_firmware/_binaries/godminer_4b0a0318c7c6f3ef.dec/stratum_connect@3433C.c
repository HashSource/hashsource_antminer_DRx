bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  _BYTE *v6; // r0
  int v7; // r0
  int *v8; // r0
  char *v9; // r0
  int v10; // r0
  int *v11; // r0
  char *v12; // r0
  struct hostent *v13; // r0
  char *v14; // r3
  int v15; // r0
  int v16; // r12
  int v17; // r2
  unsigned __int16 v18; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[7]; // [sp+40h] [bp-1124h] BYREF
  int v21; // [sp+5Ch] [bp-1108h]
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  char v23[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 48);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 32);
  if ( strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    || !(server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v18)) )
  {
    server_port_from_url = 0;
    V_LOCK();
    V_STR(optval, "pool", *(const char **)(a1 + 32));
    logfmt_raw(
      v23,
      0x1000u,
      0,
      v21,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v21,
      1347060);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      117,
      100,
      v23);
    goto LABEL_4;
  }
  V_LOCK();
  logfmt_raw(v23, 0x1000u, 0, 1347076, *(_DWORD *)(a1 + 32), cp, v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_connect",
    15,
    120,
    20,
    v23);
  v6 = *(_BYTE **)(a1 + 44);
  if ( !v6 )
  {
    v6 = calloc(0x4000u, 1u);
    *(_DWORD *)(a1 + 44) = v6;
    *(_DWORD *)(a1 + 40) = 0x4000;
  }
  *v6 = 0;
  if ( *(_DWORD *)(a1 + 36) == -1 )
  {
    v10 = socket(2, 1, 6);
    *(_DWORD *)(a1 + 36) = v10;
    if ( v10 == -1 )
    {
      V_LOCK();
      server_port_from_url = 0;
      logfmt_raw(v23, 0x1000u, 0, 1347108);
      V_UNLOCK();
      v15 = g_zc;
      v16 = 100;
      v17 = 135;
      goto LABEL_24;
    }
    optval[0] = 1;
    if ( setsockopt(v10, 1, 2, optval, 4u) )
    {
      V_LOCK();
      v11 = _errno_location();
      v12 = strerror(*v11);
      logfmt_raw(v23, 0x1000u, 0, 1347136, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/stratum_handler.c",
        145,
        "stratum_connect",
        15,
        145,
        100,
        v23);
    }
  }
  if ( inet_addr(cp) == -1 )
  {
    if ( _res_init() < 0 )
    {
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, 1347188, *(_DWORD *)a1);
      V_UNLOCK();
      v15 = g_zc;
      v16 = 100;
      v17 = 160;
    }
    else
    {
      v13 = gethostbyname(cp);
      if ( v13 )
      {
        v14 = *v13->h_addr_list;
        if ( v14 )
          *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v14;
        goto LABEL_10;
      }
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, 1347216);
      V_UNLOCK();
      v15 = g_zc;
      v16 = 20;
      v17 = 169;
    }
LABEL_24:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      v17,
      v16,
      v23);
    goto LABEL_4;
  }
  *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
LABEL_10:
  addr.sa_family = 2;
  v7 = *(_DWORD *)(a1 + 36);
  *(_WORD *)addr.sa_data = __rev16(v18);
  if ( connect(v7, &addr, 0x10u) >= 0 )
  {
    keep_sockalive(*(_DWORD *)(a1 + 36));
  }
  else
  {
    if ( dword_19649C <= 3 )
    {
      V_LOCK();
      v8 = _errno_location();
      v9 = strerror(*v8);
      logfmt_raw(v23, 0x1000u, 0, 1347240, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/stratum_handler.c",
        145,
        "stratum_connect",
        15,
        197,
        100,
        v23);
    }
    server_port_from_url = 0;
    close(*(_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 36) = -1;
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
