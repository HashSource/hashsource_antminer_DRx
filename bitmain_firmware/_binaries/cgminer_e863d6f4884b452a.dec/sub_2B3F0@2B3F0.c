int __fastcall sub_2B3F0(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  pthread_mutex_t *v5; // r10
  int v6; // r4
  struct addrinfo *v7; // r5
  int v8; // r0
  int *v9; // r10
  int v10; // r0
  int v11; // r6
  char *v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r2
  __int16 v16; // r3
  int v17; // r3
  int v18; // r8
  int v19; // r8
  int v20; // r9
  fd_set *v21; // r3
  int v22; // r0
  const char *v23; // r0
  int v24; // r3
  int v25; // r0
  const char *v26; // r4
  const char *v27; // r5
  int v28; // r2
  size_t v29; // r0
  int v31; // r2
  int v32; // r2
  int v33; // r2
  int *v34; // r0
  int *v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // r3
  const char *v39; // r5
  size_t v40; // r0
  size_t v41; // r4
  __int16 v42; // r0
  char *v43; // r1
  char *v44; // r0
  char *v45; // r4
  _DWORD *v46; // r6
  _DWORD *v47; // r0
  char *v48; // r4
  int v49; // r3
  int v50; // r3
  void *v51; // r0
  int *v52; // r0
  int *v53; // r0
  int *v54; // r0
  int *v55; // r0
  int v56; // r4
  int v57; // r5
  int v58; // r4
  _DWORD *v60; // r0
  _DWORD *v61; // r5
  _DWORD *v62; // r10
  int v63; // r6
  _DWORD *v64; // r0
  pthread_mutex_t *v65; // r10
  int v66; // r2
  size_t v67; // r0
  const char *v68; // r0
  char *v69; // r5
  size_t v70; // r3
  int v71; // r0
  int v72; // r0
  int v73; // r3
  int v74; // r4
  void *v75; // r0
  void *v76; // r0
  int v77; // r3
  char *v78; // r0
  int v79; // r4
  struct addrinfo *v80; // [sp+14h] [bp-2B68h]
  int v81; // [sp+14h] [bp-2B68h]
  int nfds; // [sp+1Ch] [bp-2B60h]
  int nfdsa; // [sp+1Ch] [bp-2B60h]
  const char *v84; // [sp+20h] [bp-2B5Ch]
  int v85; // [sp+20h] [bp-2B5Ch]
  const char *v86; // [sp+24h] [bp-2B58h]
  int v87; // [sp+24h] [bp-2B58h]
  int v88; // [sp+24h] [bp-2B58h]
  pthread_mutex_t *mutex; // [sp+28h] [bp-2B54h]
  int v90; // [sp+30h] [bp-2B4Ch]
  int v91; // [sp+34h] [bp-2B48h]
  _DWORD *v92; // [sp+38h] [bp-2B44h]
  struct addrinfo *pai; // [sp+44h] [bp-2B38h] BYREF
  socklen_t optlen; // [sp+48h] [bp-2B34h] BYREF
  int optval; // [sp+4Ch] [bp-2B30h] BYREF
  struct timeval timeout; // [sp+50h] [bp-2B2Ch] BYREF
  struct addrinfo s; // [sp+58h] [bp-2B24h] BYREF
  int v98[23]; // [sp+78h] [bp-2B04h] BYREF
  char v99[156]; // [sp+D4h] [bp-2AA8h] BYREF
  char v100; // [sp+170h] [bp-2A0Ch] BYREF
  fd_set writefds; // [sp+174h] [bp-2A08h] BYREF
  char v102[2048]; // [sp+378h] [bp-2804h] BYREF
  char v103[8196]; // [sp+B78h] [bp-2004h] BYREF

  v90 = 0;
  mutex = (pthread_mutex_t *)(a1 + 180);
  v91 = 0;
LABEL_2:
  if ( pthread_mutex_lock(mutex) )
  {
    v35 = _errno_location();
    snprintf(
      v102,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v35,
      "util.c",
      "setup_stratum_socket",
      3259);
    sub_343C4(3, v102, 1);
    sub_26B0C(1);
  }
  v2 = a1[147];
  *((_BYTE *)a1 + 641) = 0;
  if ( v2 )
    close(v2);
  a1[147] = 0;
  if ( pthread_mutex_unlock(mutex) )
  {
    v34 = _errno_location();
    snprintf(
      v102,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v34,
      "util.c",
      "setup_stratum_socket",
      3264);
    sub_343C4(3, v102, 1);
    sub_26B0C(1);
  }
  ((void (__fastcall *)())off_6CB70)();
  memset(&s, 0, sizeof(s));
  v3 = a1[48];
  s.ai_socktype = 1;
  if ( v3 )
    goto LABEL_7;
  v23 = (const char *)dword_6F7F8;
  if ( !dword_6F7F8 )
  {
    v86 = (const char *)a1[150];
    goto LABEL_72;
  }
  a1[48] = dword_6F7F8;
  sub_2A97C(v23, a1 + 151, (char **)a1 + 152);
  v24 = a1[48];
  a1[47] = 3;
  v86 = (const char *)a1[150];
  if ( !v24 )
  {
LABEL_72:
    v84 = (const char *)a1[146];
    v4 = getaddrinfo(v86, v84, &s, &pai);
    goto LABEL_8;
  }
LABEL_7:
  v86 = (const char *)a1[151];
  v84 = (const char *)a1[152];
  v4 = getaddrinfo(v86, v84, &s, &pai);
LABEL_8:
  if ( v4 )
  {
    v5 = (pthread_mutex_t *)a1;
    if ( !*((_BYTE *)a1 + 99) )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        snprintf(v102, 0x800u, "Failed to resolve (?wrong URL) %s:%s", v86, v84);
        sub_343C4(4, v102, 0);
      }
      *((_BYTE *)a1 + 99) = 1;
      goto LABEL_15;
    }
    if ( byte_6FA71 )
    {
      if ( byte_73320 || (v6 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 6 )
      {
        snprintf(v102, 0x800u, "Failed to getaddrinfo for %s:%s", v86, v84);
        sub_343C4(7, v102, 0);
        goto LABEL_15;
      }
      goto LABEL_16;
    }
    goto LABEL_95;
  }
  if ( !pai )
  {
    v5 = (pthread_mutex_t *)a1;
    goto LABEL_39;
  }
  v7 = pai;
  do
  {
    while ( 1 )
    {
      v10 = socket(v7->ai_family, v7->ai_socktype, v7->ai_protocol);
      v11 = v10;
      if ( v10 == -1 )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          v12 = v102;
          v13 = *(_DWORD *)"Failed socket";
          v14 = *(_DWORD *)"ed socket";
          v15 = *(_DWORD *)"ocket";
          v16 = *(_WORD *)"t";
          goto LABEL_37;
        }
        goto LABEL_30;
      }
      v8 = fcntl(v10, 3, 0, v10 + 1);
      fcntl(v11, 4, v8 | 0x800);
      if ( connect(v11, v7->ai_addr, v7->ai_addrlen) != -1 )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        {
          strcpy(v102, "Succeeded immediate connect");
          sub_343C4(4, v102, 0);
        }
LABEL_68:
        sub_27BCC(v11);
        freeaddrinfo(pai);
        if ( a1[48] )
        {
          switch ( a1[47] )
          {
            case 0:
              if ( sub_27848((const char **)a1, v11, 0) )
                break;
              v5 = (pthread_mutex_t *)a1;
              goto LABEL_15;
            case 1:
              if ( sub_27848((const char **)a1, v11, 1) )
                break;
              v5 = (pthread_mutex_t *)a1;
              goto LABEL_15;
            case 2:
              if ( !sub_27BE8((const char **)a1, v11, 0) )
                goto LABEL_127;
              break;
            case 3:
            case 5:
              LOWORD(writefds.__fds_bits[0]) = 261;
              BYTE2(writefds.__fds_bits[0]) = 0;
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf(
                  v102,
                  0x800u,
                  "Attempting to negotiate with %s:%s SOCKS5 proxy",
                  (const char *)a1[151],
                  (const char *)a1[152]);
                sub_343C4(7, v102, 0);
              }
              send(v11, &writefds, 3u, 0);
              if ( recv(v11, v102, 1u, 0) == -1
                || v102[0] != 5
                || recv(v11, v102, 1u, 0) == -1
                || BYTE2(writefds.__fds_bits[0]) != (unsigned __int8)v102[0] )
              {
                v5 = (pthread_mutex_t *)a1;
                if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
                {
LABEL_183:
                  v6 = 0;
                  if ( byte_6FA71 )
                  {
                    if ( byte_6FA70 )
                      goto LABEL_18;
                    goto LABEL_185;
                  }
                  goto LABEL_95;
                }
LABEL_152:
                snprintf(v102, 0x800u, "Bad response from %s:%s SOCKS5 server", a1[151], a1[152]);
                sub_343C4(4, v102, 0);
                goto LABEL_15;
              }
              v39 = (const char *)a1[150];
              writefds.__fds_bits[0] = 50331909;
              v40 = strlen(v39);
              if ( v40 >= 0xFF )
                v40 = 255;
              v41 = v40;
              LOBYTE(writefds.__fds_bits[1]) = v40;
              memcpy((char *)&writefds.__fds_bits[1] + 1, v39, v40);
              v42 = strtol((const char *)a1[146], 0, 10);
              v43 = (char *)&writefds + v41;
              v43[6] = v42;
              v43[5] = HIBYTE(v42);
              send(v11, &writefds, v41 + 7, 0);
              if ( recv(v11, v102, 1u, 0) == -1
                || v102[0] != 5
                || recv(v11, v102, 1u, 0) == -1
                || (v56 = (unsigned __int8)v102[0], v102[0])
                || (recv(v11, v102, 1u, 0), recv(v11, v102, 1u, v56) == -1) )
              {
LABEL_145:
                v5 = (pthread_mutex_t *)a1;
                if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
                  goto LABEL_15;
                goto LABEL_152;
              }
              if ( v102[0] == 1 )
              {
                v79 = 4;
                do
                {
                  recv(v11, v102, 1u, 0);
                  --v79;
                }
                while ( v79 );
              }
              else
              {
                if ( v102[0] != 3 )
                  goto LABEL_145;
                v57 = 0;
                if ( recv(v11, v102, 1u, 0) == -1 )
                  v58 = -1;
                else
                  v58 = (unsigned __int8)v102[0];
                while ( v57++ < v58 )
                  recv(v11, v102, 1u, 0);
              }
              recv(v11, v102, 1u, 0);
              recv(v11, v102, 1u, 0);
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf(
                  v102,
                  0x800u,
                  "Success negotiating with %s:%s SOCKS5 proxy",
                  (const char *)a1[151],
                  (const char *)a1[152]);
                sub_343C4(7, v102, 0);
              }
              break;
            case 4:
              if ( sub_27BE8((const char **)a1, v11, 1) )
                break;
LABEL_127:
              v5 = (pthread_mutex_t *)a1;
              goto LABEL_15;
            default:
              v5 = (pthread_mutex_t *)a1;
              if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
                goto LABEL_183;
              snprintf(v102, 0x800u, "Unsupported proxy type for %s:%s", (const char *)a1[151], (const char *)a1[152]);
              sub_343C4(4, v102, 0);
              goto LABEL_15;
          }
        }
        if ( !a1[148] )
        {
          v51 = calloc(0x2000u, 1u);
          a1[148] = v51;
          if ( !v51 )
          {
            snprintf(
              v102,
              0x800u,
              "Failed to calloc pool sockbuf in %s %s():%d",
              "util.c",
              "setup_stratum_socket",
              3403);
            sub_343C4(3, v102, 1);
            sub_26B0C(1);
          }
          a1[149] = 0x2000;
        }
        a1[147] = v11;
        *(_DWORD *)v102 = 30;
        writefds.__fds_bits[0] = 45;
        timeout.tv_sec = 1;
        v25 = fcntl(v11, 3, 0);
        fcntl(v11, 4, v25 | 0x800);
        setsockopt(v11, 1, 9, &timeout, 4u);
        if ( !byte_73321 )
          fcntl(v11, 2, 1);
        setsockopt(v11, 6, 1, &timeout, 4u);
        setsockopt(v11, 6, 6, &timeout, 4u);
        setsockopt(v11, 6, 4, &writefds, 4u);
        setsockopt(v11, 6, 5, v102, 4u);
        if ( v91 )
        {
          sub_2813C((int)a1);
          v31 = dword_732B0++;
          sprintf(v103, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v31);
        }
        else
        {
          v26 = (const char *)a1[159];
          v27 = (const char *)a1[144];
          if ( v26 )
          {
            if ( v27 && (!strncmp((const char *)a1[144], "hc.antpool", 0xAu) || !strncmp(v27, "47.52.92.112", 0xCu)) )
            {
              v32 = dword_732B0++;
              sprintf(
                v103,
                "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr5/4.9.0\", \"%s\"]}",
                v32,
                v26);
            }
            else
            {
              v28 = dword_732B0++;
              sprintf(
                v103,
                "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\", \"%s\"]}",
                v28,
                v26);
            }
          }
          else if ( v27 && (!strncmp((const char *)a1[144], "hc.antpool", 0xAu) || !strncmp(v27, "47.52.92.112", 0xCu)) )
          {
            v36 = dword_732B0++;
            sprintf(v103, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer_dr5/4.9.0\"]}", v36);
          }
          else
          {
            v33 = dword_732B0++;
            sprintf(v103, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"cgminer/4.9.0\"]}", v33);
          }
        }
        v29 = strlen(v103);
        if ( sub_276A4((int)a1, v103, v29) )
        {
          v5 = (pthread_mutex_t *)a1;
          v6 = (unsigned __int8)byte_6FA71;
          if ( !byte_6FA71 )
            goto LABEL_94;
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
            goto LABEL_16;
          strcpy(v102, "Failed to send s in initiate_stratum");
          sub_343C4(7, v102, 0);
          goto LABEL_101;
        }
        v81 = sub_27DB8(a1[147], 60);
        if ( !v81 )
        {
          v5 = (pthread_mutex_t *)a1;
          v6 = (unsigned __int8)byte_6FA71;
          if ( !byte_6FA71 )
            goto LABEL_94;
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
            goto LABEL_16;
          strcpy(v102, "Timed out waiting for response in initiate_stratum");
          sub_343C4(7, v102, 0);
          goto LABEL_101;
        }
        v44 = sub_2AFE4((int)a1);
        v45 = v44;
        if ( !v44 )
          goto LABEL_191;
        v90 = sub_475C8(v44, 0, v98);
        free(v45);
        if ( !v90 )
        {
          v91 ^= 1u;
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(v102, 0x800u, "JSON decode failed(%d): %s", v98[0], v99);
            sub_343C4(7, v102, 0);
          }
          goto LABEL_166;
        }
        v46 = (_DWORD *)sub_47F24(v90, "result");
        v47 = (_DWORD *)sub_47F24(v90, "error");
        if ( !v46 || *v46 == 7 )
        {
          if ( v47 )
          {
LABEL_159:
            v48 = (char *)sub_46454(v47, 3);
          }
          else
          {
            v78 = (char *)malloc(0x11u);
            v48 = v78;
            if ( v78 )
              strcpy(v78, "(unknown reason)");
          }
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(v102, 0x800u, "JSON-RPC decode failed: %s", v48);
            sub_343C4(7, v102, 0);
          }
          goto LABEL_165;
        }
        if ( v47 && *v47 != 7 )
          goto LABEL_159;
        v60 = (_DWORD *)sub_48048(v46, 0);
        v61 = v60;
        if ( !v60 || *v60 != 1 || (v87 = sub_48034(v60), v87 <= 0) )
        {
LABEL_270:
          v65 = (pthread_mutex_t *)a1;
LABEL_222:
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            strcpy(v102, "Failed to get sessionid in initiate_stratum");
            sub_343C4(7, v102, 0);
          }
          goto LABEL_227;
        }
        v62 = v46;
        v63 = 0;
        while ( 1 )
        {
          v64 = (_DWORD *)sub_48048(v61, v63);
          v92 = v64;
          if ( !v64 || (v85 = *v64, *v64 != 1) )
          {
LABEL_221:
            v65 = (pthread_mutex_t *)a1;
            goto LABEL_222;
          }
          v68 = (const char *)sub_27E20(v64, 0);
          if ( v68 )
          {
            if ( !strncasecmp(v68, "mining.notify", 0xDu) )
              break;
          }
          if ( v87 == ++v63 )
            goto LABEL_221;
        }
        v48 = sub_27E58(v92, 1u);
        if ( !v48 )
          goto LABEL_270;
        v69 = sub_27E58(v62, 1u);
        if ( sub_27EB0(v69, "initiate_stratum", 3555) )
        {
          v70 = strlen(v69) >> 1;
          if ( v70 > 0xC )
          {
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
            {
              snprintf(v102, 0x800u, "Failed to get valid nonce1 in initiate_stratum, n1_len=%d");
              goto LABEL_252;
            }
            goto LABEL_253;
          }
          nfds = v70;
          v71 = sub_48048(v62, 2);
          v72 = sub_481D0(v71);
          v73 = nfds;
          if ( (unsigned int)(v72 - 2) > 0xA )
          {
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
            {
              snprintf(v102, 0x800u, "Failed to get valid n2size in initiate_stratum, n2size=%d");
LABEL_252:
              sub_343C4(5, v102, 0);
            }
LABEL_253:
            v91 ^= 1u;
            free(v48);
            free(v69);
            goto LABEL_166;
          }
          v65 = (pthread_mutex_t *)a1;
          nfdsa = (int)v48;
          v74 = v72;
          v88 = v73;
          sub_2808C((int)(a1 + 55), "initiate_stratum", 3579);
          v75 = (void *)a1[154];
          a1[153] = v69;
          a1[159] = nfdsa;
          a1[395] = v88;
          free(v75);
          v76 = calloc(a1[395], 1u);
          a1[154] = v76;
          if ( !v76 )
          {
            snprintf(v102, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "initiate_stratum", 3586);
            sub_343C4(3, v102, v85);
            sub_26B0C(v85);
          }
          sub_28324((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[395]);
          v77 = (unsigned __int8)byte_73320;
          a1[158] = v74;
          *((_BYTE *)a1 + 1900) = 0;
          if ( v77 || byte_6FA70 || dword_6D35C > 4 )
          {
            snprintf(v102, 0x800u, "%s, pool->n2size %d", "initiate_stratum", v74);
            sub_343C4(5, v102, 0);
          }
          sub_28114((int)(a1 + 55), "initiate_stratum", 3591);
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(v102, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[159]);
            sub_343C4(7, v102, 0);
          }
LABEL_227:
          if ( !v65[24].__lock )
            v65[24].__lock = v65[25].__lock;
          v65[26].__size[17] = 1;
          if ( byte_72E38 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(
              v102,
              0x800u,
              "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
              v65->__lock,
              (const char *)v65[25].__kind,
              v65[26].__owner);
            sub_343C4(7, v102, 0);
          }
          if ( v65[24].__size[4] )
          {
            v66 = dword_732B0;
            v81 = (unsigned __int8)v65[24].__size[4];
            ++dword_732B0;
            sprintf(v103, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v66);
            v67 = strlen(v103);
            sub_2AD28(v65, v103, v67);
          }
          goto LABEL_134;
        }
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          strcpy(v102, "Failed to get valid nonce1 in initiate_stratum");
          sub_343C4(5, v102, 0);
        }
LABEL_165:
        v91 ^= 1u;
        free(v48);
LABEL_166:
        if ( !v91 )
        {
LABEL_191:
          v5 = (pthread_mutex_t *)a1;
LABEL_101:
          v6 = (unsigned __int8)byte_6FA71;
          if ( byte_6FA71 )
            goto LABEL_16;
          goto LABEL_94;
        }
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v55 = _errno_location();
          snprintf(
            v102,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            *v55,
            "util.c",
            "initiate_stratum",
            3621);
          sub_343C4(3, v102, 1);
          sub_26B0C(1);
        }
        if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v54 = _errno_location();
          snprintf(
            v102,
            0x800u,
            "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v54,
            "util.c",
            "initiate_stratum",
            3621);
          sub_343C4(3, v102, 1);
          sub_26B0C(1);
        }
        free((void *)a1[159]);
        free((void *)a1[153]);
        a1[153] = 0;
        a1[159] = 0;
        if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v53 = _errno_location();
          snprintf(
            v102,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v53,
            "util.c",
            "initiate_stratum",
            3625);
          sub_343C4(3, v102, 1);
          sub_26B0C(1);
        }
        if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
        {
          v52 = _errno_location();
          snprintf(
            v102,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v52,
            "util.c",
            "initiate_stratum",
            3625);
          sub_343C4(3, v102, 1);
          sub_26B0C(1);
        }
        ((void (__fastcall *)())off_6CB70)();
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          strcpy(v102, "Failed to resume stratum, trying afresh");
          sub_343C4(7, v102, 0);
        }
        if ( v90 )
        {
          v49 = *(_DWORD *)(v90 + 4);
          if ( v49 != -1 )
          {
            v50 = v49 - 1;
            *(_DWORD *)(v90 + 4) = v50;
            if ( !v50 )
              sub_482FC(v90);
          }
        }
        goto LABEL_2;
      }
      timeout.tv_usec = 0;
      timeout.tv_sec = 1;
      v9 = _errno_location();
      if ( *v9 != 115 )
      {
        close(v11);
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          strcpy(v102, "Failed sock connect");
          sub_343C4(7, v102, 0);
        }
        goto LABEL_30;
      }
      LOBYTE(v17) = v11 & 0x1F;
      v18 = (v11 + 31) & (v11 >> 31);
      if ( v11 >= 0 )
        v18 = v11;
      v19 = v18 >> 5;
      if ( v11 <= 0 )
        v17 = -(-v11 & 0x1F);
      v80 = v7;
      v20 = 1 << v17;
      while ( 1 )
      {
        v7 = v80;
        v21 = (fd_set *)&v100;
        do
        {
          v21->__fds_bits[1] = 0;
          v21 = (fd_set *)((char *)v21 + 4);
        }
        while ( &writefds.__fds_bits[31] != (__fd_mask *)v21 );
        writefds.__fds_bits[v19] |= v20;
        v22 = select(v11 + 1, 0, &writefds, 0, &timeout);
        if ( v22 > 0 )
          break;
        if ( !v22 || *v9 != 4 )
          goto LABEL_53;
      }
      if ( (v20 & writefds.__fds_bits[v19]) != 0 )
      {
        optlen = 4;
        if ( !getsockopt(v11, 1, 4, &optval, &optlen) && !optval )
        {
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            strcpy(v102, "Succeeded delayed connect");
            sub_343C4(7, v102, 0);
          }
          goto LABEL_68;
        }
      }
LABEL_53:
      close(v11);
      if ( byte_6FA71 )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
          break;
      }
LABEL_30:
      v7 = v7->ai_next;
      if ( !v7 )
        goto LABEL_38;
    }
    qmemcpy(v102, "Select timeout/f", 16);
    v12 = &v102[16];
    v13 = *(_DWORD *)"ailed connect";
    v14 = *(_DWORD *)"d connect";
    v15 = *(_DWORD *)"nnect";
    v16 = *(_WORD *)"t";
LABEL_37:
    *(_DWORD *)v12 = v13;
    *((_DWORD *)v12 + 1) = v14;
    *((_DWORD *)v12 + 2) = v15;
    *((_WORD *)v12 + 6) = v16;
    sub_343C4(7, v102, 0);
    v7 = v7->ai_next;
  }
  while ( v7 );
LABEL_38:
  v5 = (pthread_mutex_t *)a1;
LABEL_39:
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v102, 0x800u, "Failed to connect to stratum on %s:%s", v86, v84);
    sub_343C4(7, v102, 0);
  }
  freeaddrinfo(pai);
LABEL_15:
  v6 = 0;
  if ( byte_6FA71 )
  {
LABEL_16:
    if ( byte_73320 || byte_6FA70 )
    {
LABEL_18:
      strcpy(v102, "Initiate stratum failed");
      sub_343C4(7, v102, 0);
      goto LABEL_19;
    }
LABEL_185:
    if ( dword_6D35C > 6 )
      goto LABEL_18;
LABEL_19:
    if ( v6 )
LABEL_94:
      sub_2AC10(v5);
  }
LABEL_95:
  if ( !v90 )
    return 0;
  v81 = 0;
LABEL_134:
  v37 = *(_DWORD *)(v90 + 4);
  if ( v37 == -1 )
    return v81;
  v38 = v37 - 1;
  *(_DWORD *)(v90 + 4) = v38;
  if ( v38 )
    return v81;
  sub_482FC(v90);
  return v81;
}
