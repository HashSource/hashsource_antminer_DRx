bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  int v5; // r4
  _DWORD *v6; // r3
  int v7; // r1
  int v9; // r3
  _DWORD *v10; // r4
  int v11; // r1
  _BYTE *v12; // r0
  int v13; // r0
  int *v14; // r0
  char *v15; // r0
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r0
  char *v20; // r0
  int v21; // r3
  int v22; // r1
  struct hostent *v23; // r0
  char *v24; // r3
  int v25; // r3
  int v26; // r0
  int v27; // r12
  int v28; // r2
  int v29; // r1
  int v30; // r3
  int v31; // r3
  unsigned __int16 v32; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[7]; // [sp+40h] [bp-1124h] BYREF
  int v35; // [sp+5Ch] [bp-1108h]
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  char v37[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 48);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 32);
  if ( strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    || !(server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v32)) )
  {
    server_port_from_url = 0;
    V_LOCK();
    V_STR(optval, "pool", *(const char **)(a1 + 32));
    LOWORD(v5) = 5408;
    HIWORD(v5) = (unsigned int)"check_job_kas" >> 16;
    logfmt_raw(
      v37,
      0x1000u,
      0,
      v35,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v35,
      v5);
    V_UNLOCK();
    LOWORD(v6) = -12376;
    HIWORD(v6) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v7) = 5000;
    HIWORD(v7) = (unsigned int)"e nameroot failed!" >> 16;
    zlog(*v6, v7, 145, "stratum_connect", 15, 117, 100, v37);
    goto LABEL_4;
  }
  V_LOCK();
  LOWORD(v9) = 5424;
  HIWORD(v9) = (unsigned int)"stratum_handle_response_kas" >> 16;
  LOWORD(v10) = -12376;
  HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
  logfmt_raw(v37, 0x1000u, 0, v9, *(_DWORD *)(a1 + 32), cp, v32);
  V_UNLOCK();
  LOWORD(v11) = 5000;
  HIWORD(v11) = (unsigned int)"e nameroot failed!" >> 16;
  zlog(*v10, v11, 145, "stratum_connect", 15, 120, 20, v37);
  v12 = *(_BYTE **)(a1 + 44);
  if ( !v12 )
  {
    v12 = calloc(0x4000u, 1u);
    *(_DWORD *)(a1 + 44) = v12;
    *(_DWORD *)(a1 + 40) = 0x4000;
  }
  *v12 = 0;
  if ( *(_DWORD *)(a1 + 36) == -1 )
  {
    v18 = socket(2, 1, 6);
    *(_DWORD *)(a1 + 36) = v18;
    if ( v18 == -1 )
    {
      V_LOCK();
      LOWORD(v25) = 5456;
      HIWORD(v25) = (unsigned int)"tum_authorize_kas" >> 16;
      server_port_from_url = 0;
      logfmt_raw(v37, 0x1000u, 0, v25);
      V_UNLOCK();
      v26 = *v10;
      v27 = 100;
      v28 = 135;
      goto LABEL_24;
    }
    optval[0] = 1;
    if ( setsockopt(v18, 1, 2, optval, 4u) )
    {
      V_LOCK();
      v19 = *_errno_location();
      v20 = strerror(v19);
      LOWORD(v21) = 5484;
      HIWORD(v21) = (unsigned int)"subscribe_kas" >> 16;
      logfmt_raw(v37, 0x1000u, 0, v21, v20);
      V_UNLOCK();
      LOWORD(v22) = 5000;
      HIWORD(v22) = (unsigned int)"e nameroot failed!" >> 16;
      zlog(*v10, v22, 145, "stratum_connect", 15, 145, 100, v37);
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
      LOWORD(v30) = 5536;
      HIWORD(v30) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      logfmt_raw(v37, 0x1000u, 0, v30, *(_DWORD *)a1);
      V_UNLOCK();
      v26 = *v10;
      v27 = 100;
      v28 = 160;
    }
    else
    {
      v23 = gethostbyname(cp);
      if ( v23 )
      {
        v24 = *v23->h_addr_list;
        if ( v24 )
          *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v24;
        goto LABEL_10;
      }
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      LOWORD(v31) = 5564;
      HIWORD(v31) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      logfmt_raw(v37, 0x1000u, 0, v31);
      V_UNLOCK();
      v26 = *v10;
      v27 = 20;
      v28 = 169;
    }
LABEL_24:
    LOWORD(v29) = 5000;
    HIWORD(v29) = (unsigned int)"e nameroot failed!" >> 16;
    zlog(v26, v29, 145, "stratum_connect", 15, v28, v27, v37);
    goto LABEL_4;
  }
  *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
LABEL_10:
  addr.sa_family = 2;
  v13 = *(_DWORD *)(a1 + 36);
  *(_WORD *)addr.sa_data = __rev16(v32);
  if ( connect(v13, &addr, 0x10u) >= 0 )
  {
    keep_sockalive(*(_DWORD *)(a1 + 36));
  }
  else
  {
    if ( dword_17AACC <= 3 )
    {
      V_LOCK();
      v14 = _errno_location();
      v15 = strerror(*v14);
      LOWORD(v16) = 5588;
      HIWORD(v16) = (unsigned int)"ease/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      logfmt_raw(v37, 0x1000u, 0, v16, v15);
      V_UNLOCK();
      LOWORD(v17) = 5000;
      HIWORD(v17) = (unsigned int)"e nameroot failed!" >> 16;
      zlog(*v10, v17, 145, "stratum_connect", 15, 197, 100, v37);
    }
    server_port_from_url = 0;
    close(*(_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 36) = -1;
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
