int __fastcall sub_2C29C(_DWORD *a1)
{
  int i; // r0
  int v3; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  struct addrinfo *v9; // r4
  char *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  __int16 v14; // r3
  int v15; // r0
  int v16; // r7
  int v17; // r0
  int *v18; // r10
  unsigned int v19; // lr
  int *v20; // r5
  int v21; // r0
  char *v22; // r3
  int v23; // r0
  const char *v24; // r3
  int v25; // r2
  size_t v26; // r0
  void *v27; // r0
  const char *v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // r4
  int v32; // r3
  int v33; // r3
  char *v35; // r0
  char *v36; // r6
  _DWORD *v37; // r6
  _DWORD *v38; // r0
  char *v39; // r4
  char *v40; // r0
  ssize_t v41; // r0
  const char *v42; // r8
  signed int v43; // r0
  size_t v44; // r5
  __int16 v45; // r0
  char *v46; // r12
  ssize_t v47; // r4
  char v48; // r0
  ssize_t v49; // r5
  _DWORD *v50; // r0
  char *v51; // r5
  _DWORD *v52; // r0
  _DWORD *v53; // r8
  char *v54; // r10
  const char *v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r8
  int *v59; // r0
  size_t v60; // r3
  void *v61; // r0
  size_t v62; // r9
  _BYTE *v63; // r0
  int *v64; // r0
  int v65; // r0
  int v66; // r2
  size_t v67; // r0
  int *v68; // r0
  int *v69; // r0
  int *v70; // r0
  int *v71; // r0
  void *ptr; // [sp+14h] [bp-2B60h]
  char *ptra; // [sp+14h] [bp-2B60h]
  int v74; // [sp+18h] [bp-2B5Ch]
  char *name; // [sp+1Ch] [bp-2B58h]
  char *namea; // [sp+1Ch] [bp-2B58h]
  char *service; // [sp+20h] [bp-2B54h]
  int v78; // [sp+24h] [bp-2B50h]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-2B48h]
  int v80; // [sp+30h] [bp-2B44h]
  struct addrinfo *pai; // [sp+38h] [bp-2B3Ch] BYREF
  int v82; // [sp+3Ch] [bp-2B38h] BYREF
  socklen_t optlen; // [sp+40h] [bp-2B34h] BYREF
  int optval; // [sp+44h] [bp-2B30h] BYREF
  struct timeval timeout; // [sp+48h] [bp-2B2Ch] BYREF
  struct addrinfo req; // [sp+50h] [bp-2B24h] BYREF
  _DWORD v87[23]; // [sp+70h] [bp-2B04h] BYREF
  char v88[160]; // [sp+CCh] [bp-2AA8h] BYREF
  fd_set writefds; // [sp+16Ch] [bp-2A08h] BYREF
  char s[2048]; // [sp+370h] [bp-2804h] BYREF
  char v91[8196]; // [sp+B70h] [bp-2004h] BYREF

  v74 = 0;
  v78 = 0;
  mutex = (pthread_mutex_t *)(a1 + 168);
  v80 = 0;
  for ( i = pthread_mutex_lock((pthread_mutex_t *)a1 + 28); ; i = pthread_mutex_lock(mutex) )
  {
    if ( i )
      sub_B7D8("setup_stratum_socket", 2711);
    v6 = a1[145];
    *((_BYTE *)a1 + 633) = 0;
    if ( v6 )
      close(v6);
    a1[145] = 0;
    if ( pthread_mutex_unlock(mutex) )
    {
      v70 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v70,
        "util.c",
        "setup_stratum_socket",
        2716);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    off_60178();
    v7 = a1[46] == 0;
    req.ai_family = 0;
    req.ai_flags = 0;
    memset(&req.ai_protocol, 0, 20);
    req.ai_socktype = 1;
    if ( !v7
      || (v28 = (const char *)dword_62E34) != 0
      && (a1[46] = dword_62E34, sub_2B43C(v28, a1 + 149, (char **)a1 + 150), v29 = a1[46], a1[45] = 3, v29) )
    {
      name = (char *)a1[149];
      service = (char *)a1[150];
      v8 = getaddrinfo(name, service, &req, &pai);
    }
    else
    {
      name = (char *)a1[148];
      service = (char *)a1[144];
      v8 = getaddrinfo(name, service, &req, &pai);
    }
    if ( v8 )
    {
      if ( *((_BYTE *)a1 + 99) )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(s, 0x800u, "Failed to getaddrinfo for %s:%s", name, service);
          sub_38438(7, s, 0);
        }
      }
      else
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, "Failed to resolve (?wrong URL) %s:%s", name, service);
          sub_38438(4, s, 0);
        }
        *((_BYTE *)a1 + 99) = 1;
      }
      goto LABEL_8;
    }
    v9 = pai;
    if ( !pai )
    {
LABEL_60:
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "Failed to connect to stratum on %s:%s", name, service);
        sub_38438(7, s, 0);
      }
      freeaddrinfo(pai);
      goto LABEL_8;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = socket(v9->ai_family, v9->ai_socktype, v9->ai_protocol);
        v16 = v15;
        if ( v15 != -1 )
          break;
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v10 = s;
          v11 = *(_DWORD *)"Failed socket";
          v12 = *(_DWORD *)"ed socket";
          v13 = *(_DWORD *)"ocket";
          v14 = *(_WORD *)"t";
          goto LABEL_38;
        }
LABEL_39:
        v9 = v9->ai_next;
        if ( !v9 )
          goto LABEL_60;
      }
      v17 = fcntl(v15, 3, 0);
      fcntl(v16, 4, v17 | 0x800);
      if ( connect(v16, v9->ai_addr, v9->ai_addrlen) != -1 )
        break;
      timeout.tv_sec = 1;
      timeout.tv_usec = 0;
      v18 = _errno_location();
      if ( *v18 == 115 )
      {
        v19 = 0;
        v20 = &writefds.__fds_bits[v16 / 32];
        while ( 1 )
        {
          if ( v19 > 0x1F )
          {
            *v20 |= 1 << (v16 % 32);
            v21 = select(v16 + 1, 0, &writefds, 0, &timeout);
            if ( v21 > 0 )
            {
              if ( ((*v20 >> (v16 % 32)) & 1) != 0 )
              {
                optlen = 4;
                if ( !getsockopt(v16, 1, 4, &optval, &optlen) && !optval )
                {
                  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                  {
                    strcpy(s, "Succeeded delayed connect");
                    sub_38438(7, s, 0);
                  }
                  goto LABEL_71;
                }
              }
LABEL_47:
              close(v16);
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                qmemcpy(s, "Select timeout/f", 16);
                v10 = &s[16];
                v11 = *(_DWORD *)"ailed connect";
                v12 = *(_DWORD *)"d connect";
                v13 = *(_DWORD *)"nnect";
                v14 = *(_WORD *)"t";
LABEL_38:
                *(_DWORD *)v10 = v11;
                *((_DWORD *)v10 + 1) = v12;
                *((_DWORD *)v10 + 2) = v13;
                *((_WORD *)v10 + 6) = v14;
                sub_38438(7, s, 0);
              }
              goto LABEL_39;
            }
            v19 = 0;
            if ( !v21 || *v18 != 4 )
              goto LABEL_47;
          }
          v22 = &v91[4 * v19++ + 0x2000];
          *((_DWORD *)v22 - 2689) = 0;
        }
      }
      close(v16);
      if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        goto LABEL_39;
      strcpy(s, "Failed sock connect");
      sub_38438(7, s, 0);
      v9 = v9->ai_next;
      if ( !v9 )
        goto LABEL_60;
    }
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      strcpy(s, "Succeeded immediate connect");
      sub_38438(4, s, 0);
    }
LABEL_71:
    sub_287AC(v16);
    freeaddrinfo(pai);
    if ( a1[46] )
    {
      switch ( a1[45] )
      {
        case 0:
          if ( !sub_287FC((const char **)a1, v16, 0) )
            break;
          if ( !a1[146] )
            goto LABEL_108;
          goto LABEL_84;
        case 1:
          if ( !sub_287FC((const char **)a1, v16, 1) )
            break;
          goto LABEL_83;
        case 2:
          if ( !sub_28BD0((const char **)a1, v16, 0) )
            break;
          goto LABEL_83;
        case 3:
        case 5:
          LOBYTE(writefds.__fds_bits[0]) = 5;
          *(_WORD *)((char *)writefds.__fds_bits + 1) = 1;
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(
              s,
              0x800u,
              "Attempting to negotiate with %s:%s SOCKS5 proxy",
              (const char *)a1[149],
              (const char *)a1[150]);
            sub_38438(7, s, 0);
          }
          send(v16, &writefds, 3u, 0);
          if ( sub_287D4(v16) != 5 )
            goto LABEL_100;
          v41 = sub_287D4(v16);
          if ( v41 != BYTE2(writefds.__fds_bits[0]) )
            goto LABEL_100;
          v42 = (const char *)a1[148];
          writefds.__fds_bits[0] = 50331909;
          v43 = strlen(v42);
          v44 = v43 >= 255 ? 255 : v43;
          LOBYTE(writefds.__fds_bits[1]) = v44;
          memcpy((char *)&writefds.__fds_bits[1] + 1, v42, v44);
          v45 = strtol((const char *)a1[144], 0, 10);
          v46 = (char *)&writefds.__fds_bits[1] + v44;
          v46[2] = v45;
          v46[1] = HIBYTE(v45);
          send(v16, &writefds, v44 + 7, 0);
          if ( sub_287D4(v16) != 5 )
            goto LABEL_100;
          v47 = sub_287D4(v16);
          if ( v47 )
            goto LABEL_100;
          sub_287D4(v16);
          v48 = sub_287D4(v16);
          if ( v48 == 1 )
          {
            sub_287D4(v16);
            sub_287D4(v16);
            sub_287D4(v16);
            sub_287D4(v16);
LABEL_178:
            sub_287D4(v16);
            sub_287D4(v16);
            if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf(
                s,
                0x800u,
                "Success negotiating with %s:%s SOCKS5 proxy",
                (const char *)a1[149],
                (const char *)a1[150]);
              sub_38438(7, s, 0);
            }
            goto LABEL_83;
          }
          if ( v48 == 3 )
          {
            v49 = sub_287D4(v16);
            if ( v49 > 0 )
            {
              do
              {
                ++v47;
                sub_287D4(v16);
              }
              while ( v47 != v49 );
            }
            goto LABEL_178;
          }
LABEL_100:
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, "Bad response from %s:%s SOCKS5 server", (const char *)a1[149], (const char *)a1[150]);
            sub_38438(4, s, 0);
          }
          break;
        case 4:
          if ( sub_28BD0((const char **)a1, v16, 1) )
            goto LABEL_83;
          break;
        default:
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, "Unsupported proxy type for %s:%s", (const char *)a1[149], (const char *)a1[150]);
            sub_38438(4, s, 0);
          }
          break;
      }
LABEL_8:
      v3 = 0;
      goto LABEL_9;
    }
LABEL_83:
    if ( !a1[146] )
    {
LABEL_108:
      v27 = calloc(0x2000u, 1u);
      a1[146] = v27;
      if ( !v27 )
      {
        snprintf(s, 0x800u, "Failed to calloc pool sockbuf in %s %s():%d", "util.c", "setup_stratum_socket", 2837);
        sub_38438(3, s, 1);
        sub_16724(1);
      }
      a1[147] = 0x2000;
    }
LABEL_84:
    a1[145] = v16;
    v82 = 1;
    optlen = 45;
    optval = 30;
    v23 = fcntl(v16, 3, 0);
    fcntl(v16, 4, v23 | 0x800);
    setsockopt(v16, 1, 9, &v82, 4u);
    if ( !byte_642C0 )
      fcntl(v16, 2, 1);
    setsockopt(v16, 6, 1, &v82, 4u);
    setsockopt(v16, 6, 6, &v82, 4u);
    setsockopt(v16, 6, 4, &optlen, 4u);
    setsockopt(v16, 6, 5, &optval, 4u);
    if ( v80 )
    {
      sub_29394((int)a1);
      v30 = dword_636A0++;
      sprintf(v91, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v30);
    }
    else
    {
      v24 = (const char *)a1[157];
      v25 = dword_636A0++;
      if ( v24 )
        sprintf(
          v91,
          "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\", \"%s\"]}",
          v25,
          v24);
      else
        sprintf(v91, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\"]}", v25);
    }
    v26 = strlen(v91);
    if ( sub_2918C((int)a1, v91, v26) )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        v3 = 1;
        strcpy(s, "Failed to send s in initiate_stratum");
        sub_38438(7, s, 0);
        goto LABEL_9;
      }
LABEL_121:
      v3 = 1;
      goto LABEL_9;
    }
    if ( sub_2870C((int)a1, 60) )
      break;
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      goto LABEL_121;
    v3 = 1;
    strcpy(s, "Timed out waiting for response in initiate_stratum");
    sub_38438(7, s, 0);
LABEL_9:
    if ( (v80 & (v78 ^ 1)) == 0 )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy(s, "Initiate stratum failed");
        sub_38438(7, s, 0);
      }
      if ( v3 )
      {
        sub_2B7C0((pthread_mutex_t *)a1);
        if ( v74 )
          goto LABEL_133;
      }
      else if ( v74 )
      {
LABEL_133:
        v31 = 0;
        goto LABEL_134;
      }
      return v74;
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
      sub_B7D8("initiate_stratum", 3015);
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
    {
      v71 = _errno_location();
      snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v71, "util.c", "initiate_stratum", 3015);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    free((void *)a1[157]);
    free((void *)a1[151]);
    a1[151] = 0;
    a1[157] = 0;
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
    {
      v69 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v69,
        "util.c",
        "initiate_stratum",
        3019);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
    {
      v68 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v68, "util.c", "initiate_stratum", 3019);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    off_60178();
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(s, "Failed to resume stratum, trying afresh");
      sub_38438(7, s, 0);
    }
    if ( v74 )
    {
      v4 = *(_DWORD *)(v74 + 4);
      if ( v4 != -1 )
      {
        v5 = v4 - 1;
        *(_DWORD *)(v74 + 4) = v5;
        if ( !v5 )
          sub_46C5C(v74);
      }
    }
    v78 = 1;
  }
  v35 = sub_2B920((int)a1);
  v36 = v35;
  if ( !v35 )
  {
    v3 = 1;
    goto LABEL_9;
  }
  v74 = sub_45AA8(v35, 0, v87);
  free(v36);
  if ( !v74 )
  {
    if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
      {
        v3 = 1;
        snprintf(s, 0x800u, "JSON decode failed(%d): %s", v87[0], v88);
        sub_38438(7, s, 0);
        v80 = 1;
      }
      else
      {
        v80 = 1;
        v3 = 1;
      }
    }
    else
    {
      v80 = 1;
      v3 = 1;
    }
    goto LABEL_9;
  }
  v37 = (_DWORD *)sub_46698(v74, "result");
  v38 = (_DWORD *)sub_46698(v74, "error");
  if ( !v37 || *v37 == 7 )
  {
    if ( v38 )
    {
LABEL_150:
      v39 = (char *)sub_440CC(v38, 3);
    }
    else
    {
      v39 = (char *)malloc(0x11u);
      if ( v39 )
        strcpy(v39, "(unknown reason)");
    }
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "JSON-RPC decode failed: %s", v39);
      sub_38438(7, s, 0);
    }
    v40 = v39;
    v3 = 1;
    free(v40);
    v80 = 1;
    goto LABEL_9;
  }
  if ( v38 && *v38 != 7 )
    goto LABEL_150;
  v50 = (_DWORD *)sub_46880(v37, 0);
  ptr = v50;
  if ( v50 )
  {
    if ( *v50 == 1 )
    {
      namea = (char *)sub_46864(v50);
      if ( (int)namea > 0 )
      {
        v51 = 0;
        do
        {
          v52 = (_DWORD *)sub_46880(ptr, v51);
          v53 = v52;
          if ( !v52 || *v52 != 1 )
            break;
          ++v51;
          v55 = (const char *)sub_28E64(v52, 0);
          if ( v55 && !strncasecmp(v55, "mining.notify", 0xDu) )
          {
            v54 = sub_28EC4(v53, 1u);
            if ( v54 )
              goto LABEL_194;
            break;
          }
        }
        while ( namea != v51 );
      }
    }
  }
  v54 = (char *)(unsigned __int8)byte_630C1;
  if ( byte_630C1 )
  {
    if ( byte_632F0 || (v54 = (char *)(unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
    {
      v54 = 0;
      strcpy(s, "Failed to get sessionid in initiate_stratum");
      sub_38438(7, s, 0);
    }
  }
LABEL_194:
  ptra = sub_28EC4(v37, 1u);
  if ( !sub_28EDC(ptra, "initiate_stratum", 2967) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(s, "Failed to get valid nonce1 in initiate_stratum");
      sub_38438(7, s, 0);
    }
    v3 = 1;
    free(v54);
    v80 = 1;
    goto LABEL_9;
  }
  v56 = sub_46880(v37, 2);
  v57 = sub_46AC0(v56);
  if ( (unsigned int)(v57 - 2) > 0xE )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(s, "Failed to get valid n2size in initiate_stratum");
      sub_38438(7, s, 0);
    }
    v3 = 1;
    free(v54);
    free(ptra);
    v80 = 1;
    goto LABEL_9;
  }
  v58 = v57;
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
    sub_B7D8("initiate_stratum", 2980);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
  {
    v59 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v59, "util.c", "initiate_stratum", 2980);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  a1[157] = v54;
  a1[151] = ptra;
  v60 = strlen(ptra) >> 1;
  v61 = (void *)a1[152];
  a1[383] = v60;
  free(v61);
  v62 = a1[383];
  v63 = calloc(v62, 1u);
  a1[152] = v63;
  if ( !v63 )
  {
    snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "initiate_stratum", 2987);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  sub_295B8(v63, (unsigned __int8 *)a1[151], v62);
  a1[156] = v58;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
  {
    v64 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v64, "util.c", "initiate_stratum", 2990);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  sub_29110((pthread_mutex_t *)(a1 + 53), "initiate_stratum", 2990);
  off_60178();
  if ( v54 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[157]);
    sub_38438(7, s, 0);
  }
  if ( !a1[142] )
    a1[142] = a1[148];
  v65 = (unsigned __int8)byte_63928;
  *((_BYTE *)a1 + 633) = 1;
  *((_QWORD *)a1 + 223) = 0x3FF0000000000000LL;
  if ( v65 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(
      s,
      0x800u,
      "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
      *a1,
      (const char *)a1[151],
      a1[156]);
    sub_38438(7, s, 0);
  }
  if ( *((_BYTE *)a1 + 572) )
  {
    v66 = dword_636A0++;
    sprintf(v91, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v66);
    v67 = strlen(v91);
    sub_2BEA8((pthread_mutex_t *)a1, v91, v67);
  }
  v31 = 1;
LABEL_134:
  v32 = *(_DWORD *)(v74 + 4);
  if ( v32 != -1 )
  {
    v33 = v32 - 1;
    *(_DWORD *)(v74 + 4) = v33;
    if ( !v33 )
      sub_46C5C(v74);
  }
  return v31;
}
