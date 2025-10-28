int __fastcall sub_30F60(_DWORD *a1)
{
  const char *v2; // r0
  int *v3; // r0
  int v4; // r0
  int *v5; // r0
  const char *v6; // r0
  int v7; // r0
  struct addrinfo *v8; // r4
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int *v12; // r7
  int v13; // r8
  unsigned int v14; // r3
  __fd_mask *v15; // r6
  int v16; // r10
  int v17; // r0
  const char *v18; // r7
  signed int v19; // r0
  size_t v20; // r4
  __int16 v21; // r0
  char *v22; // r3
  char v23; // r0
  int v24; // r6
  int i; // r4
  void *v26; // r0
  int v27; // r0
  int v28; // r2
  const char *v29; // r4
  const char *v30; // r5
  int v31; // r2
  int v32; // r2
  const char *v33; // r4
  int v34; // r2
  int v35; // r2
  size_t v36; // r0
  int v37; // r4
  char *v38; // r0
  char *v39; // r4
  _DWORD *v40; // r6
  _DWORD *v41; // r0
  char *v42; // r4
  _DWORD *v43; // r0
  _DWORD *v44; // r7
  int v45; // r11
  int v46; // r4
  _DWORD *v47; // r0
  _DWORD *v48; // r5
  const char *v49; // r0
  const char *v50; // r0
  int v51; // r0
  const char *v52; // r0
  char *v53; // r5
  int v54; // r0
  int v55; // r0
  int v56; // r6
  int *v57; // r0
  int *v58; // r0
  void *v59; // r0
  int v60; // r2
  size_t v61; // r0
  int *v62; // r0
  int *v63; // r0
  int *v64; // r0
  int v65; // r3
  int v66; // r3
  int v67; // r4
  int v68; // r3
  int v69; // r3
  int v70; // r0
  int v72; // [sp+20h] [bp-2B5Ch]
  char *name; // [sp+24h] [bp-2B58h]
  char *service; // [sp+28h] [bp-2B54h]
  int v75; // [sp+2Ch] [bp-2B50h]
  int v76; // [sp+30h] [bp-2B4Ch]
  struct addrinfo *v77; // [sp+40h] [bp-2B3Ch] BYREF
  int v78; // [sp+44h] [bp-2B38h] BYREF
  socklen_t optlen; // [sp+48h] [bp-2B34h] BYREF
  int optval; // [sp+4Ch] [bp-2B30h] BYREF
  struct timeval timeout; // [sp+50h] [bp-2B2Ch] BYREF
  struct addrinfo req; // [sp+58h] [bp-2B24h] BYREF
  fd_set writefds; // [sp+78h] [bp-2B04h] BYREF
  char s[2048]; // [sp+27Ch] [bp-2900h] BYREF
  _DWORD v85[13]; // [sp+A7Ch] [bp-2100h] BYREF
  char v86[152]; // [sp+AD8h] [bp-20A4h] BYREF
  char v87[8136]; // [sp+B78h] [bp-2004h] BYREF

  v2 = (const char *)a1[144];
  if ( v2 && strstr(v2, "nicehash") )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      strcpy(s, "nicehash POOL in URL");
      sub_3F1C0(5, s, 0);
    }
    a1[473] = 1;
  }
  else
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(s, "NOT nicehash POOL in URL");
      sub_3F1C0(7, s, 0);
    }
    a1[473] = 0;
  }
  v72 = 0;
  v75 = 0;
  v76 = 0;
  while ( 2 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)a1 + 30) )
    {
      v3 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v3,
        "util.c",
        "setup_stratum_socket",
        3215);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    *((_BYTE *)a1 + 641) = 0;
    v4 = a1[147];
    if ( v4 )
      close(v4);
    a1[147] = 0;
    if ( pthread_mutex_unlock((pthread_mutex_t *)a1 + 30) )
    {
      v5 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v5,
        "util.c",
        "setup_stratum_socket",
        3220);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    off_72D00(0);
    req.ai_flags = 0;
    req.ai_family = 0;
    memset(&req.ai_protocol, 0, 20);
    req.ai_socktype = 1;
    if ( a1[48]
      || (v6 = (const char *)dword_75980) != 0
      && (a1[48] = dword_75980, sub_30138(v6, a1 + 151, (char **)a1 + 152), a1[47] = 3, a1[48]) )
    {
      name = (char *)a1[151];
      service = (char *)a1[152];
      v7 = getaddrinfo(name, service, &req, &v77);
    }
    else
    {
      name = (char *)a1[150];
      service = (char *)a1[146];
      v7 = getaddrinfo(name, service, &req, &v77);
    }
    if ( v7 )
    {
      if ( *((_BYTE *)a1 + 99) )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
          sub_3F1C0(7, s, 0);
        }
      }
      else
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          snprintf(s, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
          sub_3F1C0(4, s, 0);
        }
        *((_BYTE *)a1 + 99) = 1;
      }
      goto LABEL_291;
    }
    v8 = v77;
    if ( !v77 )
      goto LABEL_82;
    while ( 1 )
    {
      v9 = socket(v8->ai_family, v8->ai_socktype, v8->ai_protocol);
      v10 = v9;
      if ( v9 == -1 )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(s, "Failed socket");
          sub_3F1C0(7, s, 0);
        }
        goto LABEL_79;
      }
      v11 = fcntl(v9, 3, 0);
      fcntl(v10, 4, v11 | 0x800);
      if ( connect(v10, v8->ai_addr, v8->ai_addrlen) != -1 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          strcpy(s, "Succeeded immediate connect");
          sub_3F1C0(4, s, 0);
        }
        goto LABEL_78;
      }
      timeout.tv_sec = 1;
      timeout.tv_usec = 0;
      v12 = _errno_location();
      if ( *v12 == 115 )
        break;
      close(v10);
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Failed sock connect");
        sub_3F1C0(7, s, 0);
      }
LABEL_79:
      v8 = v8->ai_next;
      if ( !v8 )
        goto LABEL_82;
    }
    v13 = 1 << (v10 % 32);
    v14 = 0;
    v15 = &writefds.__fds_bits[v10 / 32];
    while ( 1 )
    {
      while ( v14 <= 0x1F )
        writefds.__fds_bits[v14++] = 0;
      *v15 |= v13;
      v16 = select(v10 + 1, 0, &writefds, 0, &timeout);
      if ( v16 > 0 && (v13 & *v15) != 0 )
      {
        optlen = 4;
        if ( !getsockopt(v10, 1, 4, &optval, &optlen) && !optval )
          break;
      }
      if ( v16 >= 0 || *v12 != 4 )
      {
        close(v10);
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(s, "Select timeout/failed connect");
          sub_3F1C0(7, s, 0);
        }
        goto LABEL_79;
      }
      v14 = 0;
    }
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(s, "Succeeded delayed connect");
      sub_3F1C0(7, s, 0);
    }
LABEL_78:
    sub_2C0B4(v10);
    if ( !v8 )
    {
LABEL_82:
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_3F1C0(7, s, 0);
      }
      freeaddrinfo(v77);
      goto LABEL_291;
    }
    freeaddrinfo(v77);
    if ( a1[48] )
    {
      switch ( a1[47] )
      {
        case 0:
          if ( !sub_2C108((const char **)a1, v10, 0) )
            goto LABEL_291;
          break;
        case 1:
          if ( !sub_2C108((const char **)a1, v10, 1) )
            goto LABEL_291;
          break;
        case 2:
          if ( !sub_2C608((const char **)a1, v10, 0) )
            goto LABEL_291;
          break;
        case 3:
        case 5:
          LOWORD(writefds.__fds_bits[0]) = 261;
          BYTE2(writefds.__fds_bits[0]) = 0;
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(
              s,
              0x800u,
              "Attempting to negotiate with %s:%s SOCKS5 proxy",
              (const char *)a1[151],
              (const char *)a1[152]);
            sub_3F1C0(7, s, 0);
          }
          send(v10, &writefds, 3u, 0);
          if ( sub_2C0DC(v10) != 5 || (v17 = sub_2C0DC(v10), v17 != BYTE2(writefds.__fds_bits[0])) )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
            {
LABEL_124:
              snprintf(s, 0x800u, "Bad response from %s:%s SOCKS5 server", (const char *)a1[151], (const char *)a1[152]);
              sub_3F1C0(4, s, 0);
            }
LABEL_291:
            v37 = 0;
            goto LABEL_251;
          }
          writefds.__fds_bits[0] = 50331909;
          v18 = (const char *)a1[150];
          v19 = strlen(v18);
          if ( v19 >= 255 )
            v20 = 255;
          else
            v20 = v19;
          LOBYTE(writefds.__fds_bits[1]) = v20;
          memcpy((char *)&writefds.__fds_bits[1] + 1, v18, v20);
          v21 = strtol((const char *)a1[146], 0, 10);
          v22 = (char *)&writefds + v20;
          v22[5] = HIBYTE(v21);
          v22[6] = v21;
          send(v10, &writefds, v20 + 7, 0);
          if ( sub_2C0DC(v10) != 5 || sub_2C0DC(v10) )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
              goto LABEL_124;
            goto LABEL_291;
          }
          sub_2C0DC(v10);
          v23 = sub_2C0DC(v10);
          if ( v23 == 1 )
          {
            sub_2C0DC(v10);
            sub_2C0DC(v10);
            sub_2C0DC(v10);
            sub_2C0DC(v10);
          }
          else
          {
            if ( v23 != 3 )
            {
              if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
                goto LABEL_124;
              goto LABEL_291;
            }
            v24 = sub_2C0DC(v10);
            if ( v24 > 0 )
            {
              for ( i = 0; i != v24; ++i )
                sub_2C0DC(v10);
            }
          }
          sub_2C0DC(v10);
          sub_2C0DC(v10);
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(
              s,
              0x800u,
              "Success negotiating with %s:%s SOCKS5 proxy",
              (const char *)a1[151],
              (const char *)a1[152]);
            sub_3F1C0(7, s, 0);
          }
          break;
        case 4:
          if ( !sub_2C608((const char **)a1, v10, 1) )
            goto LABEL_291;
          break;
        default:
          if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
          {
            snprintf(s, 0x800u, "Unsupported proxy type for %s:%s", (const char *)a1[151], (const char *)a1[152]);
            sub_3F1C0(4, s, 0);
          }
          goto LABEL_291;
      }
    }
    if ( !a1[148] )
    {
      v26 = calloc(0x2000u, 1u);
      a1[148] = v26;
      if ( !v26 )
      {
        snprintf(s, 0x800u, "Failed to calloc pool sockbuf in %s %s():%d", "util.c", "setup_stratum_socket", 3359);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      a1[149] = 0x2000;
    }
    a1[147] = v10;
    v78 = 1;
    optlen = 45;
    optval = 30;
    v27 = fcntl(v10, 3, 0);
    fcntl(v10, 4, v27 | 0x800);
    setsockopt(v10, 1, 9, &v78, 4u);
    if ( !byte_79EF0 )
      fcntl(v10, 2, 1);
    setsockopt(v10, 6, 1, &v78, 4u);
    setsockopt(v10, 6, 6, &v78, 4u);
    setsockopt(v10, 6, 4, &optlen, 4u);
    setsockopt(v10, 6, 5, &optval, 4u);
    if ( v76 )
    {
      sub_2CC50((int)a1);
      v28 = dword_79148++;
      sprintf(v87, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v28);
    }
    else
    {
      v29 = (const char *)a1[159];
      if ( v29 )
      {
        v30 = (const char *)a1[144];
        if ( !strncmp(v30, "hc.antpool", 0xAu) || !strncmp(v30, "47.52.92.112", 0xCu) )
        {
          v31 = dword_79148++;
          sprintf(
            v87,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr3/4.9.0\", \"%s\"]}",
            v31,
            v29);
        }
        else
        {
          v32 = dword_79148++;
          sprintf(
            v87,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\", \"%s\"]}",
            v32,
            v29);
        }
      }
      else
      {
        v33 = (const char *)a1[144];
        if ( !strncmp(v33, "hc.antpool", 0xAu) || !strncmp(v33, "47.52.92.112", 0xCu) )
        {
          v34 = dword_79148++;
          sprintf(v87, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr3/4.9.0\"]}", v34);
        }
        else
        {
          v35 = dword_79148++;
          sprintf(v87, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\"]}", v35);
        }
      }
    }
    v36 = strlen(v87);
    if ( sub_2C9FC((int)a1, v87, v36) )
    {
      if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          strcpy(s, "Failed to send s in initiate_stratum");
          sub_3F1C0(7, s, 0);
          v37 = 1;
        }
        else
        {
          v37 = 1;
        }
      }
      else
      {
        v37 = 1;
      }
      goto LABEL_251;
    }
    if ( !sub_2BF40((int)a1, 60) )
    {
      if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          strcpy(s, "Timed out waiting for response in initiate_stratum");
          sub_3F1C0(7, s, 0);
          v37 = 1;
        }
        else
        {
          v37 = 1;
        }
      }
      else
      {
        v37 = 1;
      }
      goto LABEL_251;
    }
    v38 = sub_3063C((int)a1);
    v39 = v38;
    if ( !v38 )
    {
      v37 = 1;
      goto LABEL_251;
    }
    v72 = sub_5662C(v38, 0, v85);
    free(v39);
    if ( !v72 )
    {
      if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          snprintf(s, 0x800u, "JSON decode failed(%d): %s", v85[0], v86);
          sub_3F1C0(7, s, 0);
          v37 = 1;
          v76 = 1;
        }
        else
        {
          v37 = 1;
          v76 = 1;
        }
      }
      else
      {
        v37 = 1;
        v76 = 1;
      }
      goto LABEL_251;
    }
    v40 = (_DWORD *)sub_57304(v72, "result");
    v41 = (_DWORD *)sub_57304(v72, "error");
    if ( !v40 || *v40 == 7 )
    {
      if ( v41 )
      {
LABEL_185:
        v42 = (char *)sub_54AFC(v41, 3);
      }
      else
      {
        v42 = (char *)malloc(0x11u);
        if ( v42 )
          strcpy(v42, "(unknown reason)");
      }
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "JSON-RPC decode failed: %s", v42);
        sub_3F1C0(7, s, 0);
      }
LABEL_193:
      free(v42);
      v37 = 1;
      v76 = 1;
      goto LABEL_251;
    }
    if ( v41 && *v41 != 7 )
      goto LABEL_185;
    v43 = (_DWORD *)sub_57588(v40, 0);
    v44 = v43;
    if ( !v43 )
      goto LABEL_214;
    if ( *v43 != 1 )
      goto LABEL_214;
    v45 = sub_5755C(v43);
    if ( v45 <= 0 )
      goto LABEL_214;
    v46 = 0;
    while ( 1 )
    {
      v47 = (_DWORD *)sub_57588(v44, v46);
      v48 = v47;
      if ( !v47 )
        goto LABEL_214;
      if ( *v47 == 1 )
      {
        v49 = (const char *)sub_2C8B4(v47, 0);
        if ( v49 && !strncasecmp(v49, "mining.notify", 0xDu) )
        {
          v42 = sub_2C940(v48, 1u);
          goto LABEL_213;
        }
        goto LABEL_211;
      }
      if ( *v47 != 2 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          strcpy(s, "not find anything\n");
          sub_3F1C0(3, s, 0);
        }
        goto LABEL_214;
      }
      v50 = (const char *)sub_57754(v47);
      if ( !strncasecmp(v50, "mining.notify", 0xDu) )
        break;
LABEL_211:
      if ( v45 == ++v46 )
        goto LABEL_214;
    }
    v51 = sub_57588(v44, v46 + 1);
    v52 = (const char *)sub_57754(v51);
    if ( !v52 )
      goto LABEL_214;
    v42 = _strdup(v52);
LABEL_213:
    if ( !v42 )
    {
LABEL_214:
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Failed to get sessionid in initiate_stratum");
        sub_3F1C0(7, s, 0);
      }
      goto LABEL_293;
    }
    v53 = sub_2C940(v40, 1u);
    if ( !sub_2BD70(v53, "util.c", "initiate_stratum", 3546) )
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Failed to get valid nonce1 in initiate_stratum");
        sub_3F1C0(7, s, 0);
      }
      goto LABEL_193;
    }
    if ( !a1[473] )
    {
      v56 = 12;
      goto LABEL_236;
    }
    v54 = sub_57588(v40, 2);
    v55 = sub_5786C(v54);
    if ( (unsigned int)(v55 - 2) <= 0xE )
    {
      v56 = v55;
LABEL_236:
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
      {
        v57 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v57, "util.c", "initiate_stratum", 3567);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
      {
        v58 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v58,
          "util.c",
          "initiate_stratum",
          3567);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      a1[159] = v42;
      a1[153] = v53;
      a1[395] = strlen(v53) >> 1;
      free((void *)a1[154]);
      v59 = calloc(a1[395], 1u);
      a1[154] = v59;
      if ( !v59 )
      {
        snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "initiate_stratum", 3574);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      sub_2CE9C((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[395]);
      a1[158] = v56;
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s, pool->n2size %d", "initiate_stratum", v56);
        sub_3F1C0(5, s, 0);
      }
      sub_2C960((pthread_rwlock_t *)(a1 + 61), "util.c", "initiate_stratum", 3578);
      v70 = sub_2C048((pthread_mutex_t *)(a1 + 55), "util.c", "initiate_stratum", 3578);
      off_72D00(v70);
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[159]);
        sub_3F1C0(7, s, 0);
      }
LABEL_293:
      if ( !a1[144] )
        a1[144] = a1[150];
      *((_BYTE *)a1 + 641) = 1;
      *((_QWORD *)a1 + 233) = 0x3FF0000000000000LL;
      if ( byte_793D0 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(
          s,
          0x800u,
          "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
          *a1,
          (const char *)a1[153],
          a1[158]);
        sub_3F1C0(7, s, 0);
      }
      if ( *((_BYTE *)a1 + 580) )
      {
        v60 = dword_79148++;
        sprintf(v87, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v60);
        v61 = strlen(v87);
        sub_30BA0((pthread_mutex_t *)a1, v87, v61);
      }
      v67 = 1;
LABEL_286:
      v68 = *(_DWORD *)(v72 + 4);
      if ( v68 != -1 )
      {
        v69 = v68 - 1;
        *(_DWORD *)(v72 + 4) = v69;
        if ( !v69 )
          sub_57A64(v72);
      }
      return v67;
    }
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(s, "Failed to get valid n2size in initiate_stratum");
      sub_3F1C0(7, s, 0);
    }
    free(v42);
    free(v53);
    v37 = 1;
    v76 = 1;
LABEL_251:
    if ( (v76 & (v75 ^ 1)) != 0 )
    {
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
      {
        v62 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v62, "util.c", "initiate_stratum", 3609);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
      {
        v63 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v63,
          "util.c",
          "initiate_stratum",
          3609);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      free((void *)a1[159]);
      free((void *)a1[153]);
      a1[153] = 0;
      a1[159] = 0;
      sub_2C960((pthread_rwlock_t *)(a1 + 61), "util.c", "initiate_stratum", 3613);
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
      {
        v64 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v64,
          "util.c",
          "initiate_stratum",
          3613);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Failed to resume stratum, trying afresh");
        sub_3F1C0(7, s, 0);
      }
      if ( v72 )
      {
        v65 = *(_DWORD *)(v72 + 4);
        if ( v65 != -1 )
        {
          v66 = v65 - 1;
          *(_DWORD *)(v72 + 4) = v66;
          if ( !v66 )
            sub_57A64(v72);
        }
      }
      v75 = 1;
      continue;
    }
    break;
  }
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(s, "Initiate stratum failed");
    sub_3F1C0(7, s, 0);
  }
  if ( v37 )
    sub_304C4((pthread_mutex_t *)a1);
  if ( v72 )
  {
    v67 = 0;
    goto LABEL_286;
  }
  return 0;
}
