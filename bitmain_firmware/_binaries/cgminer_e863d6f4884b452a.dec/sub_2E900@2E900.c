int sub_2E900()
{
  struct addrinfo *v0; // r4
  struct addrinfo *i; // r3
  int v2; // r0
  int *v3; // r0
  char *v4; // r0
  time_t v6; // r6
  int *v7; // r0
  char *v8; // r5
  int ai_family; // r3
  struct sockaddr *ai_addr; // r3
  int v11; // t1
  int v12; // r1
  int v13; // r2
  int v14; // r3
  const char *v15; // r11
  size_t v16; // r0
  size_t v17; // r4
  int v18; // r7
  ssize_t v19; // r4
  _BOOL4 v20; // r11
  const char *v21; // r1
  socklen_t v22; // r1
  const char *v23; // r4
  int v24; // r0
  int *v25; // r0
  char *v26; // r0
  struct addrinfo *v27; // r3
  struct addrinfo *v28; // r4
  int v29; // r0
  size_t v30; // r0
  ssize_t v31; // r4
  int *v32; // r0
  char *v33; // r0
  int *v34; // r0
  char *v35; // r0
  int fd; // [sp+10h] [bp-1114h]
  size_t n; // [sp+1Ch] [bp-1108h]
  char *v38; // [sp+24h] [bp-1100h]
  int v39; // [sp+28h] [bp-10FCh]
  struct addrinfo *v40; // [sp+2Ch] [bp-10F8h]
  char v41; // [sp+4Bh] [bp-10D9h] BYREF
  socklen_t addr_len; // [sp+4Ch] [bp-10D8h] BYREF
  char *name; // [sp+50h] [bp-10D4h] BYREF
  struct addrinfo *pai; // [sp+54h] [bp-10D0h] BYREF
  int optval; // [sp+58h] [bp-10CCh] BYREF
  char v46[12]; // [sp+5Ch] [bp-10C8h] BYREF
  char s[12]; // [sp+68h] [bp-10BCh] BYREF
  char serv[12]; // [sp+74h] [bp-10B0h] BYREF
  struct addrinfo req; // [sp+80h] [bp-10A4h] BYREF
  struct sockaddr v50[8]; // [sp+A0h] [bp-1084h] BYREF
  char v51[1024]; // [sp+120h] [bp-1004h] BYREF
  int v52; // [sp+520h] [bp-C04h] BYREF
  int v53; // [sp+524h] [bp-C00h]
  int v54; // [sp+528h] [bp-BFCh]
  int v55; // [sp+52Ch] [bp-BF8h]
  int v56; // [sp+530h] [bp-BF4h]
  char v57[2052]; // [sp+920h] [bp-804h] BYREF

  strcpy(v46, "cgminer-");
  sprintf(s, "%d", dword_6CB40);
  memset(&req, 0, sizeof(req));
  if ( getaddrinfo(off_6CB4C[0], s, &req, &pai) )
  {
    strcpy(v57, "Invalid API Multicast Address");
    sub_343C4(3, v57, 1);
    sub_26B0C(1);
  }
  v0 = pai;
  if ( !pai )
  {
LABEL_17:
    freeaddrinfo(pai);
    strcpy(v57, "API mcast could not open socket");
    sub_343C4(3, v57, 1);
    sub_26B0C(1);
  }
  for ( i = pai; ; i = pai )
  {
    v2 = socket(i->ai_family, 2, 0);
    if ( v2 > 0 )
    {
      fd = v2;
      goto LABEL_9;
    }
    v0 = v0->ai_next;
    if ( !v0 )
      break;
  }
  fd = v2;
  if ( v2 == -1 )
    goto LABEL_17;
LABEL_9:
  optval = 1;
  if ( setsockopt(fd, 1, 2, &optval, 4u) < 0 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return close(fd);
    v3 = _errno_location();
    v4 = strerror(*v3);
    snprintf(
      v57,
      0x800u,
      "API mcast setsockopt SO_REUSEADDR failed (%s)%s",
      v4,
      " - API multicast listener will not be available");
    goto LABEL_14;
  }
  v6 = time(0);
  while ( 1 )
  {
    if ( bind(fd, v0->ai_addr, v0->ai_addrlen) >= 0 )
    {
      ai_family = v0->ai_family;
      if ( ai_family == 2 )
      {
        v52 = 0;
        v53 = 0;
        v52 = *(_DWORD *)&v0->ai_addr->sa_data[2];
        if ( setsockopt(fd, 0, 35, &v52, 8u) >= 0 )
        {
LABEL_25:
          freeaddrinfo(pai);
          v15 = off_6CB48[0];
          v16 = strlen(off_6CB48[0]);
          v17 = v16 + 10;
          n = v16 + 9;
          v38 = (char *)malloc(v16 + 10);
          if ( !v38 )
          {
            strcpy(v57, "Failed to malloc mcast expect_code");
            sub_343C4(3, v57, 1);
            sub_26B0C(1);
          }
          v39 = -1;
          v18 = 0;
          snprintf(v38, v17, "%s%s-", v46, v15);
          while ( 1 )
          {
            do
            {
              while ( 1 )
              {
                sub_2A7F4();
                addr_len = 128;
                ++v18;
                v19 = recvfrom(fd, v51, 0x3FFu, 0, v50, &addr_len);
                if ( v19 >= 0 )
                  break;
                if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  v25 = _errno_location();
                  v26 = strerror(*v25);
                  snprintf(v57, 0x800u, "API mcast failed count=%d (%s) (%d)", v18, v26, fd);
                  sub_343C4(7, v57, 0);
                }
              }
              v20 = sub_2E7E4(v50, (const char **)&name, &v41);
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                v21 = "Ignored";
                if ( v20 )
                  v21 = "Accepted";
                snprintf(v57, 0x800u, "API mcast from %s - %s", name, v21);
                sub_343C4(7, v57, 0);
              }
            }
            while ( !v20 );
            v22 = addr_len;
            v51[v19] = 0;
            if ( v19 )
            {
              if ( v51[v19 - 1] == 10 )
                v51[--v19] = 0;
              getnameinfo(v50, v22, 0, 0, serv, 0xAu, 1u);
              if ( byte_6FA71 )
              {
LABEL_58:
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
                {
                  snprintf(v57, 0x800u, "API mcast request rep=%d (%s) from [%s]:%s", v19, v51, name, serv);
                  sub_343C4(7, v57, 0);
                }
                if ( n < v19 && !memcmp(v51, v38, n) )
                  goto LABEL_42;
                if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  strcpy(v57, "API mcast request was no good");
                  sub_343C4(7, v57, 0);
                }
              }
              else if ( n < v19 && !memcmp(v51, v38, n) )
              {
LABEL_42:
                v23 = &v51[n];
                v24 = strtol(&v51[n], 0, 10);
                if ( (unsigned int)(v24 - 1) <= 0xFFFE )
                {
                  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                  {
                    snprintf(v57, 0x800u, "API mcast request OK port %s=%d", v23, v24);
                    sub_343C4(7, v57, 0);
                  }
                  if ( getaddrinfo(name, v23, &req, &pai) )
                  {
                    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
                    {
                      snprintf(v57, 0x800u, "Invalid client address %s", name);
                      goto LABEL_79;
                    }
                  }
                  else
                  {
                    v27 = pai;
                    v40 = pai;
                    v28 = pai;
                    if ( pai )
                    {
                      while ( 1 )
                      {
                        v29 = socket(v27->ai_family, 2, 0);
                        if ( fd > 0 )
                          break;
                        v28 = v28->ai_next;
                        if ( !v28 )
                          break;
                        v27 = pai;
                      }
                      v39 = v29;
                      v40 = v28;
                    }
                    if ( v39 == -1 )
                    {
                      freeaddrinfo(pai);
                      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
                      {
                        snprintf(v57, 0x800u, "API mcast could not open socket to client %s", name);
LABEL_79:
                        sub_343C4(3, v57, 0);
                      }
                    }
                    else
                    {
                      snprintf((char *)&v52, 0x400u, "cgm-FTW-%d-%s", dword_6CB54, off_6CB44);
                      v30 = strlen((const char *)&v52);
                      v31 = sendto(v39, &v52, v30 + 1, 0, v40->ai_addr, v40->ai_addrlen);
                      freeaddrinfo(pai);
                      if ( v31 < 0 )
                      {
                        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                        {
                          v32 = _errno_location();
                          v33 = strerror(*v32);
                          snprintf(v57, 0x800u, "API mcast send reply failed (%s) (%d)", v33, v39);
                          sub_343C4(7, v57, 0);
                        }
                      }
                      else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                      {
                        snprintf(v57, 0x800u, "API mcast send reply (%s) succeeded (%d) (%d)", &v52, v31, v39);
                        sub_343C4(7, v57, 0);
                      }
                      close(v39);
                    }
                  }
                }
                else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  snprintf(v57, 0x800u, "API mcast request ignored - invalid port (%s)", v23);
                  sub_343C4(7, v57, 0);
                }
              }
            }
            else
            {
              getnameinfo(v50, v22, 0, 0, serv, 0xAu, 1u);
              if ( byte_6FA71 )
                goto LABEL_58;
            }
          }
        }
      }
      else
      {
        if ( ai_family != 10 )
          goto LABEL_25;
        ai_addr = v0->ai_addr;
        v11 = *(_DWORD *)&ai_addr->sa_data[6];
        ai_addr = (struct sockaddr *)((char *)ai_addr + 8);
        v12 = *(_DWORD *)&ai_addr->sa_data[2];
        v13 = *(_DWORD *)&ai_addr->sa_data[6];
        v14 = *(_DWORD *)&ai_addr->sa_data[10];
        v52 = v11;
        v53 = v12;
        v54 = v13;
        v55 = v14;
        v56 = 0;
        if ( setsockopt(fd, 41, 20, &v52, 0x14u) >= 0 )
          goto LABEL_25;
      }
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        return close(fd);
      v34 = _errno_location();
      v35 = strerror(*v34);
      snprintf(v57, 0x800u, "API mcast join failed (%s)%s", v35, " - API multicast listener will not be available");
LABEL_14:
      sub_343C4(3, v57, 0);
      return close(fd);
    }
    v7 = _errno_location();
    v8 = strerror(*v7);
    if ( time(0) - v6 > 61 )
      break;
    sub_2A7F4();
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(
      v57,
      0x800u,
      "API mcast bind to port %d failed (%s)%s",
      dword_6CB40,
      v8,
      " - API multicast listener will not be available");
    sub_343C4(3, v57, 0);
  }
  return close(fd);
}
