int sub_374AC()
{
  struct addrinfo *v0; // r4
  int v1; // r0
  int v2; // r7
  int v3; // r3
  int *v4; // r0
  char *v5; // r0
  time_t v6; // r10
  int *v7; // r0
  char *v8; // r5
  int *v9; // r0
  char *v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  size_t v14; // r0
  size_t v15; // r10
  size_t v16; // r4
  int v17; // r4
  ssize_t v18; // r9
  int *v19; // r0
  char *v20; // r0
  _BOOL4 v21; // r0
  _BOOL4 v22; // r11
  const char *v23; // r2
  int v24; // r0
  struct addrinfo *v25; // r9
  int v26; // r0
  size_t v27; // r0
  ssize_t v28; // r9
  int *v29; // r0
  char *v30; // r0
  int ai_family; // r3
  char *v33; // [sp+10h] [bp-10F4h]
  int fd; // [sp+14h] [bp-10F0h]
  int optval; // [sp+18h] [bp-10ECh] BYREF
  int v36; // [sp+1Ch] [bp-10E8h]
  int v37; // [sp+20h] [bp-10E4h]
  int v38; // [sp+24h] [bp-10E0h]
  int v39; // [sp+28h] [bp-10DCh]
  char s[2048]; // [sp+2Ch] [bp-10D8h] BYREF
  int v41; // [sp+82Ch] [bp-8D8h] BYREF
  char v42[1024]; // [sp+830h] [bp-8D4h] BYREF
  char buf[976]; // [sp+C30h] [bp-4D4h] BYREF
  char v44[12]; // [sp+1030h] [bp-D4h] BYREF
  struct addrinfo *v45; // [sp+103Ch] [bp-C8h] BYREF
  struct addrinfo req; // [sp+1040h] [bp-C4h] BYREF
  char v47[12]; // [sp+1060h] [bp-A4h] BYREF
  char v48[11]; // [sp+106Ch] [bp-98h] BYREF
  char v49; // [sp+1077h] [bp-8Dh] BYREF
  const char *v50; // [sp+1078h] [bp-8Ch] BYREF
  socklen_t addr_len; // [sp+107Ch] [bp-88h] BYREF
  struct sockaddr addr; // [sp+1080h] [bp-84h] BYREF

  strcpy(v44, "cgminer-");
  sprintf(v48, "%d", dword_72CE0);
  memset(&req, 0, sizeof(req));
  if ( getaddrinfo(off_72CEC[0], v48, &req, &v45) )
  {
    strcpy(s, "Invalid API Multicast Address");
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v0 = v45;
  if ( !v45 )
    goto LABEL_9;
  while ( 1 )
  {
    v1 = socket(v45->ai_family, 2, 0);
    if ( v1 > 0 )
      break;
    v0 = v0->ai_next;
    if ( !v0 )
    {
      v2 = v1;
      v3 = v1;
      goto LABEL_8;
    }
  }
  v2 = v1;
  v3 = v1;
LABEL_8:
  if ( v3 == -1 )
  {
LABEL_9:
    freeaddrinfo(v45);
    strcpy(s, "API mcast could not open socket");
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v41 = 1;
  if ( setsockopt(v2, 1, 2, &v41, 4u) < 0 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      snprintf(
        s,
        0x800u,
        "API mcast setsockopt SO_REUSEADDR failed (%s)%s",
        v5,
        " - API multicast listener will not be available");
      sub_3F1C0(3, s, 0);
    }
    return close(v2);
  }
  v6 = time(0);
  while ( 1 )
  {
    if ( bind(v2, v0->ai_addr, v0->ai_addrlen) >= 0 )
    {
      ai_family = v0->ai_family;
      if ( ai_family == 2 )
      {
        optval = 0;
        v36 = 0;
        optval = *(_DWORD *)&v0->ai_addr->sa_data[2];
        if ( setsockopt(v2, 0, 35, &optval, 8u) < 0 )
        {
          if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 2 )
            return close(v2);
LABEL_26:
          v9 = _errno_location();
          v10 = strerror(*v9);
          snprintf(s, 0x800u, "API mcast join failed (%s)%s", v10, " - API multicast listener will not be available");
          sub_3F1C0(3, s, 0);
          return close(v2);
        }
      }
      else if ( ai_family == 10 )
      {
        v11 = *(_DWORD *)&v0->ai_addr->sa_data[10];
        v12 = *(_DWORD *)&v0->ai_addr[1].sa_family;
        v13 = *(_DWORD *)&v0->ai_addr[1].sa_data[2];
        optval = *(_DWORD *)&v0->ai_addr->sa_data[6];
        v36 = v11;
        v37 = v12;
        v38 = v13;
        v39 = 0;
        if ( setsockopt(v2, 41, 20, &optval, 0x14u) < 0 )
        {
          if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 2 )
            return close(v2);
          goto LABEL_26;
        }
      }
      freeaddrinfo(v45);
      v14 = strlen(off_72CE8[0]);
      v15 = v14 + 9;
      v16 = v14 + 10;
      v33 = (char *)malloc(v14 + 10);
      if ( !v33 )
      {
        strcpy(s, "Failed to malloc mcast expect_code");
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      snprintf(v33, v16, "%s%s-", v44, off_72CE8[0]);
      v17 = 0;
      fd = -1;
      while ( 1 )
      {
        while ( 1 )
        {
          sub_2FF20();
          ++v17;
          addr_len = 128;
          v18 = recvfrom(v2, buf, 0x3FFu, 0, &addr, &addr_len);
          if ( v18 >= 0 )
            break;
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            v19 = _errno_location();
            v20 = strerror(*v19);
            snprintf(s, 0x800u, "API mcast failed count=%d (%s) (%d)", v17, v20, v2);
            sub_3F1C0(7, s, 0);
          }
        }
        v21 = sub_36DA8(&addr, &v50, &v49);
        v22 = v21;
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          if ( v21 )
            v23 = "Accepted";
          else
            v23 = "Ignored";
          snprintf(s, 0x800u, "API mcast from %s - %s", v50, v23);
          sub_3F1C0(7, s, 0);
        }
        if ( v22 )
        {
          buf[v18] = 0;
          if ( v18 > 0 && v42[v18 + 1023] == 10 )
            buf[--v18] = 0;
          getnameinfo(&addr, addr_len, 0, 0, v47, 0xAu, 1u);
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(s, 0x800u, "API mcast request rep=%d (%s) from [%s]:%s", v18, buf, v50, v47);
            sub_3F1C0(7, s, 0);
          }
          if ( v15 < v18 && !memcmp(buf, v33, v15) )
          {
            v24 = strtol(&buf[v15], 0, 10);
            if ( (unsigned int)(v24 - 1) <= 0xFFFE )
            {
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(s, 0x800u, "API mcast request OK port %s=%d", &buf[v15], v24);
                sub_3F1C0(7, s, 0);
              }
              if ( getaddrinfo(v50, &buf[v15], &req, &v45) )
              {
                if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
                {
                  snprintf(s, 0x800u, "Invalid client address %s", v50);
                  sub_3F1C0(3, s, 0);
                }
              }
              else
              {
                v25 = v45;
                if ( v45 )
                {
                  v26 = socket(v45->ai_family, 2, 0);
                  fd = v26;
                  if ( v2 <= 0 )
                  {
                    while ( 1 )
                    {
                      v25 = v25->ai_next;
                      if ( !v25 )
                        break;
                      v26 = socket(v45->ai_family, 2, 0);
                    }
                    fd = v26;
                  }
                }
                if ( fd == -1 )
                {
                  freeaddrinfo(v45);
                  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
                  {
                    snprintf(s, 0x800u, "API mcast could not open socket to client %s", v50);
                    sub_3F1C0(3, s, 0);
                  }
                }
                else
                {
                  snprintf(v42, 0x400u, "cgm-FTW-%d-%s", dword_72CF4, off_72CE4);
                  v27 = strlen(v42);
                  v28 = sendto(fd, v42, v27 + 1, 0, v25->ai_addr, v25->ai_addrlen);
                  freeaddrinfo(v45);
                  if ( v28 >= 0 )
                  {
                    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
                    {
                      snprintf(s, 0x800u, "API mcast send reply (%s) succeeded (%d) (%d)", v42, v28, fd);
                      sub_3F1C0(7, s, 0);
                    }
                  }
                  else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
                  {
                    v29 = _errno_location();
                    v30 = strerror(*v29);
                    snprintf(s, 0x800u, "API mcast send reply failed (%s) (%d)", v30, fd);
                    sub_3F1C0(7, s, 0);
                  }
                  close(fd);
                }
              }
            }
            else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(s, 0x800u, "API mcast request ignored - invalid port (%s)", &buf[v15]);
              sub_3F1C0(7, s, 0);
            }
          }
          else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            strcpy(s, "API mcast request was no good");
            sub_3F1C0(7, s, 0);
          }
        }
      }
    }
    v7 = _errno_location();
    v8 = strerror(*v7);
    if ( time(0) - v6 > 61 )
      break;
    sub_2FF20();
  }
  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(
      s,
      0x800u,
      "API mcast bind to port %d failed (%s)%s",
      dword_72CE0,
      v8,
      " - API multicast listener will not be available");
    sub_3F1C0(3, s, 0);
  }
  return close(v2);
}
