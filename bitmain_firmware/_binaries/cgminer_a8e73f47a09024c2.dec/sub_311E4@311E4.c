int __fastcall sub_311E4(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r0
  int *v4; // r0
  const char *v5; // r0
  int v6; // r0
  struct addrinfo *v7; // r4
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int *v11; // r7
  int v12; // r8
  unsigned int v13; // r3
  __fd_mask *v14; // r6
  int v15; // r10
  int v16; // r0
  const char *v17; // r7
  signed int v18; // r0
  size_t v19; // r4
  __int16 v20; // r0
  char *v21; // r3
  char v22; // r0
  int v23; // r6
  int i; // r4
  void *v25; // r0
  int v26; // r0
  int v27; // r2
  const char *v28; // r5
  const char *v29; // r4
  int v30; // r2
  int v31; // r2
  const char *v32; // r4
  int v33; // r2
  int v34; // r2
  size_t v35; // r0
  int v36; // r4
  char *v37; // r0
  char *v38; // r4
  _DWORD *v39; // r6
  _DWORD *v40; // r0
  char *v41; // r4
  _DWORD *v42; // r0
  _DWORD *v43; // r7
  int v44; // r8
  int v45; // r4
  _DWORD *v46; // r0
  _DWORD *v47; // r5
  const char *v48; // r0
  char *v49; // r7
  char *v50; // r5
  size_t v51; // r8
  int v52; // r0
  int v53; // r0
  int v54; // r4
  void *v55; // r0
  int v56; // r2
  size_t v57; // r0
  int *v58; // r0
  int *v59; // r0
  int v60; // r3
  int v61; // r3
  int v62; // r4
  int v63; // r3
  int v64; // r3
  int v66; // [sp+20h] [bp-2B5Ch]
  char *name; // [sp+24h] [bp-2B58h]
  char *service; // [sp+28h] [bp-2B54h]
  int v69; // [sp+2Ch] [bp-2B50h]
  int v70; // [sp+30h] [bp-2B4Ch]
  struct addrinfo *v71; // [sp+40h] [bp-2B3Ch] BYREF
  int v72; // [sp+44h] [bp-2B38h] BYREF
  socklen_t optlen; // [sp+48h] [bp-2B34h] BYREF
  int optval; // [sp+4Ch] [bp-2B30h] BYREF
  struct timeval timeout; // [sp+50h] [bp-2B2Ch] BYREF
  struct addrinfo req; // [sp+58h] [bp-2B24h] BYREF
  fd_set writefds; // [sp+78h] [bp-2B04h] BYREF
  char s[2048]; // [sp+27Ch] [bp-2900h] BYREF
  _DWORD v79[13]; // [sp+A7Ch] [bp-2100h] BYREF
  char v80[152]; // [sp+AD8h] [bp-20A4h] BYREF
  char v81[8136]; // [sp+B78h] [bp-2004h] BYREF

  v66 = 0;
  v69 = 0;
  v70 = 0;
  while ( 1 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)a1 + 30) )
    {
      v2 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v2,
        "util.c",
        "setup_stratum_socket",
        3259);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    *((_BYTE *)a1 + 641) = 0;
    v3 = a1[147];
    if ( v3 )
      close(v3);
    a1[147] = 0;
    if ( pthread_mutex_unlock((pthread_mutex_t *)a1 + 30) )
    {
      v4 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v4,
        "util.c",
        "setup_stratum_socket",
        3264);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    req.ai_flags = 0;
    req.ai_family = 0;
    memset(&req.ai_protocol, 0, 20);
    req.ai_socktype = 1;
    if ( a1[48]
      || (v5 = (const char *)dword_7C9D8) != 0
      && (a1[48] = dword_7C9D8, sub_30358(v5, a1 + 151, (char **)a1 + 152), a1[47] = 3, a1[48]) )
    {
      name = (char *)a1[151];
      service = (char *)a1[152];
      v6 = getaddrinfo(name, service, &req, &v71);
    }
    else
    {
      name = (char *)a1[150];
      service = (char *)a1[146];
      v6 = getaddrinfo(name, service, &req, &v71);
    }
    if ( v6 )
    {
      if ( *((_BYTE *)a1 + 99) )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
          sub_3F178(7, s, 0);
        }
      }
      else
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
        {
          snprintf(s, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
          sub_3F178(4, s, 0);
        }
        *((_BYTE *)a1 + 99) = 1;
      }
      goto LABEL_266;
    }
    v7 = v71;
    if ( !v71 )
      goto LABEL_69;
    while ( 1 )
    {
      v8 = socket(v7->ai_family, v7->ai_socktype, v7->ai_protocol);
      v9 = v8;
      if ( v8 == -1 )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          strcpy(s, "Failed socket");
          sub_3F178(7, s, 0);
        }
        goto LABEL_66;
      }
      v10 = fcntl(v8, 3, 0);
      fcntl(v9, 4, v10 | 0x800);
      if ( connect(v9, v7->ai_addr, v7->ai_addrlen) != -1 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
        {
          strcpy(s, "Succeeded immediate connect");
          sub_3F178(4, s, 0);
        }
        goto LABEL_65;
      }
      timeout.tv_sec = 1;
      timeout.tv_usec = 0;
      v11 = _errno_location();
      if ( *v11 == 115 )
        break;
      close(v9);
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        strcpy(s, "Failed sock connect");
        sub_3F178(7, s, 0);
      }
LABEL_66:
      v7 = v7->ai_next;
      if ( !v7 )
        goto LABEL_69;
    }
    v12 = 1 << (v9 % 32);
    v13 = 0;
    v14 = &writefds.__fds_bits[v9 / 32];
    while ( 1 )
    {
      while ( v13 <= 0x1F )
        writefds.__fds_bits[v13++] = 0;
      *v14 |= v12;
      v15 = select(v9 + 1, 0, &writefds, 0, &timeout);
      if ( v15 > 0 && (v12 & *v14) != 0 )
      {
        optlen = 4;
        if ( !getsockopt(v9, 1, 4, &optval, &optlen) && !optval )
          break;
      }
      if ( v15 >= 0 || *v11 != 4 )
      {
        close(v9);
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          strcpy(s, "Select timeout/failed connect");
          sub_3F178(7, s, 0);
        }
        goto LABEL_66;
      }
      v13 = 0;
    }
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(s, "Succeeded delayed connect");
      sub_3F178(7, s, 0);
    }
LABEL_65:
    sub_2C2CC(v9);
    if ( !v7 )
    {
LABEL_69:
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_3F178(7, s, 0);
      }
      freeaddrinfo(v71);
      goto LABEL_266;
    }
    freeaddrinfo(v71);
    if ( a1[48] )
    {
      switch ( a1[47] )
      {
        case 0:
          if ( !sub_2C320((const char **)a1, v9, 0) )
            break;
          goto LABEL_124;
        case 1:
          if ( !sub_2C320((const char **)a1, v9, 1) )
            break;
          goto LABEL_124;
        case 2:
          if ( !sub_2C820((const char **)a1, v9, 0) )
            break;
          goto LABEL_124;
        case 3:
        case 5:
          LOWORD(writefds.__fds_bits[0]) = 261;
          BYTE2(writefds.__fds_bits[0]) = 0;
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(
              s,
              0x800u,
              "Attempting to negotiate with %s:%s SOCKS5 proxy",
              (const char *)a1[151],
              (const char *)a1[152]);
            sub_3F178(7, s, 0);
          }
          send(v9, &writefds, 3u, 0);
          if ( sub_2C2F4(v9) == 5 && (v16 = sub_2C2F4(v9), v16 == BYTE2(writefds.__fds_bits[0])) )
          {
            writefds.__fds_bits[0] = 50331909;
            v17 = (const char *)a1[150];
            v18 = strlen(v17);
            if ( v18 >= 255 )
              v19 = 255;
            else
              v19 = v18;
            LOBYTE(writefds.__fds_bits[1]) = v19;
            memcpy((char *)&writefds.__fds_bits[1] + 1, v17, v19);
            v20 = strtol((const char *)a1[146], 0, 10);
            v21 = (char *)&writefds + v19;
            v21[5] = HIBYTE(v20);
            v21[6] = v20;
            send(v9, &writefds, v19 + 7, 0);
            if ( sub_2C2F4(v9) == 5 && !sub_2C2F4(v9) )
            {
              sub_2C2F4(v9);
              v22 = sub_2C2F4(v9);
              if ( v22 == 1 )
              {
                sub_2C2F4(v9);
                sub_2C2F4(v9);
                sub_2C2F4(v9);
                sub_2C2F4(v9);
              }
              else
              {
                if ( v22 != 3 )
                {
                  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                  {
LABEL_111:
                    snprintf(
                      s,
                      0x800u,
                      "Bad response from %s:%s SOCKS5 server",
                      (const char *)a1[151],
                      (const char *)a1[152]);
                    sub_3F178(4, s, 0);
                    break;
                  }
                  break;
                }
                v23 = sub_2C2F4(v9);
                if ( v23 > 0 )
                {
                  for ( i = 0; i != v23; ++i )
                    sub_2C2F4(v9);
                }
              }
              sub_2C2F4(v9);
              sub_2C2F4(v9);
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                snprintf(
                  s,
                  0x800u,
                  "Success negotiating with %s:%s SOCKS5 proxy",
                  (const char *)a1[151],
                  (const char *)a1[152]);
                sub_3F178(7, s, 0);
              }
              goto LABEL_124;
            }
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
              goto LABEL_111;
          }
          else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
          {
            goto LABEL_111;
          }
          break;
        case 4:
          if ( !sub_2C820((const char **)a1, v9, 1) )
            break;
          goto LABEL_124;
        default:
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
          {
            snprintf(s, 0x800u, "Unsupported proxy type for %s:%s", (const char *)a1[151], (const char *)a1[152]);
            sub_3F178(4, s, 0);
          }
          break;
      }
LABEL_266:
      v36 = 0;
      goto LABEL_228;
    }
LABEL_124:
    if ( !a1[148] )
    {
      v25 = calloc(0x2000u, 1u);
      a1[148] = v25;
      if ( !v25 )
      {
        snprintf(s, 0x800u, "Failed to calloc pool sockbuf in %s %s():%d", "util.c", "setup_stratum_socket", 3403);
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      a1[149] = 0x2000;
    }
    a1[147] = v9;
    v72 = 1;
    optlen = 45;
    optval = 30;
    v26 = fcntl(v9, 3, 0);
    fcntl(v9, 4, v26 | 0x800);
    setsockopt(v9, 1, 9, &v72, 4u);
    if ( !byte_80FD0 )
      fcntl(v9, 2, 1);
    setsockopt(v9, 6, 1, &v72, 4u);
    setsockopt(v9, 6, 6, &v72, 4u);
    setsockopt(v9, 6, 4, &optlen, 4u);
    setsockopt(v9, 6, 5, &optval, 4u);
    if ( v70 )
    {
      sub_2CED4((int)a1);
      v27 = dword_80228++;
      sprintf(v81, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v27);
    }
    else
    {
      v28 = (const char *)a1[159];
      if ( v28 )
      {
        v29 = (const char *)a1[144];
        if ( v29 && (!strncmp((const char *)a1[144], "hc.antpool", 0xAu) || !strncmp(v29, "47.52.92.112", 0xCu)) )
        {
          v30 = dword_80228++;
          sprintf(
            v81,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr5/4.9.0\", \"%s\"]}",
            v30,
            v28);
        }
        else
        {
          v31 = dword_80228++;
          sprintf(
            v81,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\", \"%s\"]}",
            v31,
            v28);
        }
      }
      else
      {
        v32 = (const char *)a1[144];
        if ( v32 && (!strncmp((const char *)a1[144], "hc.antpool", 0xAu) || !strncmp(v32, "47.52.92.112", 0xCu)) )
        {
          v33 = dword_80228++;
          sprintf(v81, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr5/4.9.0\"]}", v33);
        }
        else
        {
          v34 = dword_80228++;
          sprintf(v81, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\"]}", v34);
        }
      }
    }
    v35 = strlen(v81);
    if ( sub_2CC80((int)a1, v81, v35) )
    {
      if ( byte_7CC61 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
        {
          strcpy(s, "Failed to send s in initiate_stratum");
          sub_3F178(7, s, 0);
          v36 = 1;
        }
        else
        {
          v36 = 1;
        }
      }
      else
      {
        v36 = 1;
      }
      goto LABEL_228;
    }
    if ( !sub_2C158((int)a1, 60) )
    {
      if ( byte_7CC61 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
        {
          strcpy(s, "Timed out waiting for response in initiate_stratum");
          sub_3F178(7, s, 0);
          v36 = 1;
        }
        else
        {
          v36 = 1;
        }
      }
      else
      {
        v36 = 1;
      }
      goto LABEL_228;
    }
    v37 = sub_308C0((int)a1);
    v38 = v37;
    if ( !v37 )
    {
      v36 = 1;
      goto LABEL_228;
    }
    v66 = sub_5AF5C(v37, 0, v79);
    free(v38);
    if ( !v66 )
    {
      if ( byte_7CC61 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
        {
          snprintf(s, 0x800u, "JSON decode failed(%d): %s", v79[0], v80);
          sub_3F178(7, s, 0);
          v36 = 1;
          v70 = 1;
        }
        else
        {
          v36 = 1;
          v70 = 1;
        }
      }
      else
      {
        v36 = 1;
        v70 = 1;
      }
      goto LABEL_228;
    }
    v39 = (_DWORD *)sub_5BC34(v66, "result");
    v40 = (_DWORD *)sub_5BC34(v66, "error");
    if ( !v39 || *v39 == 7 )
    {
      if ( v40 )
      {
LABEL_174:
        v41 = (char *)sub_5942C(v40, 3);
      }
      else
      {
        v41 = (char *)malloc(0x11u);
        if ( v41 )
          strcpy(v41, "(unknown reason)");
      }
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "JSON-RPC decode failed: %s", v41);
        sub_3F178(7, s, 0);
      }
      free(v41);
      v36 = 1;
      v70 = 1;
      goto LABEL_228;
    }
    if ( v40 && *v40 != 7 )
      goto LABEL_174;
    v42 = (_DWORD *)sub_5BEB8(v39, 0);
    v43 = v42;
    if ( !v42 )
      goto LABEL_194;
    if ( *v42 != 1 )
      goto LABEL_194;
    v44 = sub_5BE8C(v42);
    if ( v44 <= 0 )
      goto LABEL_194;
    v45 = 0;
    while ( 1 )
    {
      v46 = (_DWORD *)sub_5BEB8(v43, v45);
      v47 = v46;
      if ( !v46 || *v46 != 1 )
        goto LABEL_194;
      v48 = (const char *)sub_2CACC(v46, 0);
      if ( v48 )
      {
        if ( !strncasecmp(v48, "mining.notify", 0xDu) )
          break;
      }
      if ( v44 == ++v45 )
        goto LABEL_194;
    }
    v49 = sub_2CB58(v47, 1u);
    if ( !v49 )
    {
LABEL_194:
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        strcpy(s, "Failed to get sessionid in initiate_stratum");
        sub_3F178(7, s, 0);
      }
      goto LABEL_268;
    }
    v50 = sub_2CB58(v39, 1u);
    if ( sub_2BF88(v50, "util.c", "initiate_stratum", 3555) )
    {
      v51 = strlen(v50) >> 1;
      if ( v51 <= 0xC )
      {
        v52 = sub_5BEB8(v39, 2);
        v53 = sub_5C19C(v52);
        if ( (unsigned int)(v53 - 2) <= 0xA )
        {
          v54 = v53;
          sub_2C1F4((pthread_mutex_t *)(a1 + 55), "util.c", "initiate_stratum", 3579);
          sub_2CB78((pthread_rwlock_t *)(a1 + 61), "util.c", "initiate_stratum", 3579);
          a1[159] = v49;
          a1[153] = v50;
          a1[395] = v51;
          free((void *)a1[154]);
          v55 = calloc(a1[395], 1u);
          a1[154] = v55;
          if ( !v55 )
          {
            snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "initiate_stratum", 3586);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          sub_2D164((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[395]);
          a1[158] = v54;
          *((_BYTE *)a1 + 1900) = 0;
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
          {
            snprintf(s, 0x800u, "%s, pool->n2size %d", "initiate_stratum", v54);
            sub_3F178(5, s, 0);
          }
          sub_2CF5C((int)(a1 + 55), "util.c", "initiate_stratum", 3591);
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(s, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[159]);
            sub_3F178(7, s, 0);
          }
LABEL_268:
          if ( !a1[144] )
            a1[144] = a1[150];
          *((_BYTE *)a1 + 641) = 1;
          if ( byte_804B0 && byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(
              s,
              0x800u,
              "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
              *a1,
              (const char *)a1[153],
              a1[158]);
            sub_3F178(7, s, 0);
          }
          if ( *((_BYTE *)a1 + 580) )
          {
            v56 = dword_80228++;
            sprintf(v81, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v56);
            v57 = strlen(v81);
            sub_30E24((pthread_mutex_t *)a1, v81, v57);
          }
          v62 = 1;
          goto LABEL_261;
        }
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "Failed to get valid n2size in initiate_stratum, n2size=%d", v53);
          sub_3F178(5, s, 0);
        }
      }
      else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        snprintf(s, 0x800u, "Failed to get valid nonce1 in initiate_stratum, n1_len=%d", v51);
        sub_3F178(5, s, 0);
      }
      free(v49);
      free(v50);
      v36 = 1;
      v70 = 1;
    }
    else
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        strcpy(s, "Failed to get valid nonce1 in initiate_stratum");
        sub_3F178(5, s, 0);
      }
      free(v49);
      v36 = 1;
      v70 = 1;
    }
LABEL_228:
    if ( (v70 & (v69 ^ 1)) == 0 )
      break;
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
    {
      v58 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v58, "util.c", "initiate_stratum", 3621);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    sub_2CB78((pthread_rwlock_t *)(a1 + 61), "util.c", "initiate_stratum", 3621);
    free((void *)a1[159]);
    free((void *)a1[153]);
    a1[153] = 0;
    a1[159] = 0;
    sub_2CBE4((pthread_rwlock_t *)(a1 + 61), "util.c", "initiate_stratum", 3625);
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
    {
      v59 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v59, "util.c", "initiate_stratum", 3625);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(s, "Failed to resume stratum, trying afresh");
      sub_3F178(7, s, 0);
    }
    if ( v66 )
    {
      v60 = *(_DWORD *)(v66 + 4);
      if ( v60 != -1 )
      {
        v61 = v60 - 1;
        *(_DWORD *)(v66 + 4) = v61;
        if ( !v61 )
          sub_5C394(v66);
      }
    }
    v69 = 1;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(s, "Initiate stratum failed");
    sub_3F178(7, s, 0);
  }
  if ( v36 )
    sub_30748((pthread_mutex_t *)a1);
  if ( !v66 )
    return 0;
  v62 = 0;
LABEL_261:
  v63 = *(_DWORD *)(v66 + 4);
  if ( v63 != -1 )
  {
    v64 = v63 - 1;
    *(_DWORD *)(v66 + 4) = v64;
    if ( !v64 )
      sub_5C394(v66);
  }
  return v62;
}
