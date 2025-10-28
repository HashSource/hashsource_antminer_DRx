int sub_30FBC()
{
  struct addrinfo *v0; // r4
  struct addrinfo *i; // r3
  int v2; // r0
  int v3; // r9
  time_t v4; // r7
  int ai_family; // r3
  const char *v6; // r7
  size_t v7; // r0
  size_t v8; // r4
  int v9; // r5
  ssize_t v10; // r4
  _BOOL4 v11; // r12
  const char *v12; // r2
  int *v13; // r0
  char *v14; // r8
  struct addrinfo *v15; // r0
  int *v16; // r0
  char *v17; // r0
  int *v19; // r0
  char *v20; // r0
  const char *v21; // r4
  int v22; // r0
  struct addrinfo *v23; // r4
  int v24; // r0
  int v25; // r12
  size_t v26; // r0
  ssize_t v27; // r4
  int *v28; // r0
  char *v29; // r0
  int *v30; // r0
  char *v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _BOOL4 v35; // [sp+14h] [bp-10F0h]
  int v36; // [sp+14h] [bp-10F0h]
  size_t n; // [sp+18h] [bp-10ECh]
  char *v38; // [sp+1Ch] [bp-10E8h]
  int fd; // [sp+20h] [bp-10E4h]
  char v40; // [sp+2Bh] [bp-10D9h] BYREF
  socklen_t addr_len; // [sp+2Ch] [bp-10D8h] BYREF
  const char *v42; // [sp+30h] [bp-10D4h] BYREF
  struct addrinfo *pai; // [sp+34h] [bp-10D0h] BYREF
  int optval; // [sp+38h] [bp-10CCh] BYREF
  char v45[12]; // [sp+3Ch] [bp-10C8h] BYREF
  char s[12]; // [sp+48h] [bp-10BCh] BYREF
  char serv[12]; // [sp+54h] [bp-10B0h] BYREF
  struct addrinfo req; // [sp+60h] [bp-10A4h] BYREF
  struct sockaddr v49[8]; // [sp+80h] [bp-1084h] BYREF
  char v50[1024]; // [sp+100h] [bp-1004h] BYREF
  int v51; // [sp+500h] [bp-C04h] BYREF
  int v52; // [sp+504h] [bp-C00h]
  int v53; // [sp+508h] [bp-BFCh]
  int v54; // [sp+50Ch] [bp-BF8h]
  int v55; // [sp+510h] [bp-BF4h]
  char v56[2052]; // [sp+900h] [bp-804h] BYREF

  strcpy(v45, "cgminer-");
  sprintf(s, "%d", dword_6015C);
  memset(&req, 0, sizeof(req));
  if ( getaddrinfo(off_60168[0], s, &req, &pai) )
  {
    strcpy(v56, "Invalid API Multicast Address");
    sub_38438(3, v56, 1);
    sub_16724(1);
  }
  v0 = pai;
  if ( !pai )
  {
    v15 = 0;
LABEL_43:
    freeaddrinfo(v15);
    strcpy(v56, "API mcast could not open socket");
    sub_38438(3, v56, 1);
    sub_16724(1);
  }
  for ( i = pai; ; i = pai )
  {
    v2 = socket(i->ai_family, 2, 0);
    if ( v2 > 0 )
    {
      v3 = v2;
      goto LABEL_8;
    }
    v0 = v0->ai_next;
    if ( !v0 )
      break;
  }
  v3 = v2;
  if ( v2 == -1 )
  {
    v15 = pai;
    goto LABEL_43;
  }
LABEL_8:
  optval = 1;
  if ( setsockopt(v3, 1, 2, &optval, 4u) < 0 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
      return close(v3);
    v16 = _errno_location();
    v17 = strerror(*v16);
    snprintf(
      v56,
      0x800u,
      "API mcast setsockopt SO_REUSEADDR failed (%s)%s",
      v17,
      " - API multicast listener will not be available");
LABEL_48:
    sub_38438(3, v56, 0);
    return close(v3);
  }
  v4 = time(0);
  while ( 1 )
  {
    if ( bind(v3, v0->ai_addr, v0->ai_addrlen) >= 0 )
    {
      ai_family = v0->ai_family;
      if ( ai_family == 2 )
      {
        v51 = 0;
        v52 = 0;
        v51 = *(_DWORD *)&v0->ai_addr->sa_data[2];
        if ( setsockopt(v3, 0, 35, &v51, 8u) < 0 )
        {
LABEL_97:
          if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
            return close(v3);
          v30 = _errno_location();
          v31 = strerror(*v30);
          snprintf(v56, 0x800u, "API mcast join failed (%s)%s", v31, " - API multicast listener will not be available");
          goto LABEL_48;
        }
      }
      else if ( ai_family == 10 )
      {
        v32 = *(_DWORD *)&v0->ai_addr->sa_data[10];
        v33 = *(_DWORD *)&v0->ai_addr[1].sa_family;
        v34 = *(_DWORD *)&v0->ai_addr[1].sa_data[2];
        v51 = *(_DWORD *)&v0->ai_addr->sa_data[6];
        v52 = v32;
        v53 = v33;
        v54 = v34;
        v55 = 0;
        if ( setsockopt(v3, 41, 20, &v51, 0x14u) < 0 )
          goto LABEL_97;
      }
      freeaddrinfo(pai);
      v6 = off_60164[0];
      v7 = strlen(off_60164[0]);
      v8 = v7 + 10;
      n = v7 + 9;
      v38 = (char *)malloc(v7 + 10);
      if ( !v38 )
      {
        strcpy(v56, "Failed to malloc mcast expect_code");
        sub_38438(3, v56, 1);
        sub_16724(1);
      }
      v9 = 0;
      snprintf(v38, v8, "%s%s-", v45, v6);
      fd = -1;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              do
              {
                while ( 1 )
                {
                  ++v9;
                  sub_2B21C();
                  addr_len = 128;
                  v10 = recvfrom(v3, v50, 0x3FFu, 0, v49, &addr_len);
                  if ( v10 >= 0 )
                    break;
                  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                  {
                    v19 = _errno_location();
                    v20 = strerror(*v19);
                    snprintf(v56, 0x800u, "API mcast failed count=%d (%s) (%d)", v9, v20, v3);
                    sub_38438(7, v56, 0);
                  }
                }
                v11 = sub_30928(v49, &v42, &v40);
                if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                {
                  v12 = "Ignored";
                  v35 = v11;
                  if ( v11 )
                    v12 = "Accepted";
                  snprintf(v56, 0x800u, "API mcast from %s - %s", v42, v12);
                  sub_38438(7, v56, 0);
                  v11 = v35;
                }
              }
              while ( !v11 );
              v50[v10] = 0;
              if ( v10 && v49[7].sa_data[v10 + 13] == 10 )
                v50[--v10] = 0;
              getnameinfo(v49, addr_len, 0, 0, serv, 0xAu, 1u);
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(v56, 0x800u, "API mcast request rep=%d (%s) from [%s]:%s", v10, v50, v42, serv);
                sub_38438(7, v56, 0);
              }
              if ( n < v10 && !memcmp(v50, v38, n) )
                break;
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                strcpy(v56, "API mcast request was no good");
                sub_38438(7, v56, 0);
              }
            }
            v21 = &v50[n];
            v22 = strtol(&v50[n], 0, 10);
            if ( (unsigned int)(v22 - 1) <= 0xFFFE )
              break;
            if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf(v56, 0x800u, "API mcast request ignored - invalid port (%s)", v21);
              sub_38438(7, v56, 0);
            }
          }
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(v56, 0x800u, "API mcast request OK port %s=%d", v21, v22);
            sub_38438(7, v56, 0);
          }
          if ( !getaddrinfo(v42, v21, &req, &pai) )
            break;
          if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
          {
            snprintf(v56, 0x800u, "Invalid client address %s", v42);
            goto LABEL_71;
          }
        }
        v23 = pai;
        if ( pai && (v24 = socket(pai->ai_family, 2, 0), v25 = -4300, fd = v24, v3 <= 0) )
        {
          while ( 1 )
          {
            v23 = v23->ai_next;
            if ( !v23 )
              break;
            v36 = v25;
            v24 = socket(*(_DWORD *)(*(_DWORD *)&v56[v25 + 2048] + 4), 2, 0);
            v25 = v36;
          }
          fd = v24;
          if ( v24 == -1 )
            goto LABEL_85;
LABEL_75:
          snprintf((char *)&v51, 0x400u, "cgm-FTW-%d-%s", dword_60170, (const char *)off_60160);
          v26 = strlen((const char *)&v51);
          v27 = sendto(fd, &v51, v26 + 1, 0, v23->ai_addr, v23->ai_addrlen);
          freeaddrinfo(pai);
          if ( v27 < 0 )
          {
            if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              v28 = _errno_location();
              v29 = strerror(*v28);
              snprintf(v56, 0x800u, "API mcast send reply failed (%s) (%d)", v29, fd);
              sub_38438(7, v56, 0);
            }
          }
          else if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(v56, 0x800u, "API mcast send reply (%s) succeeded (%d) (%d)", (const char *)&v51, v27, fd);
            sub_38438(7, v56, 0);
          }
          close(fd);
        }
        else
        {
          if ( fd != -1 )
            goto LABEL_75;
LABEL_85:
          freeaddrinfo(pai);
          if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
          {
            snprintf(v56, 0x800u, "API mcast could not open socket to client %s", v42);
LABEL_71:
            sub_38438(3, v56, 0);
          }
        }
      }
    }
    v13 = _errno_location();
    v14 = strerror(*v13);
    if ( time(0) - v4 > 61 )
      break;
    sub_2B21C();
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
  {
    snprintf(
      v56,
      0x800u,
      "API mcast bind to port %d failed (%s)%s",
      dword_6015C,
      v14,
      " - API multicast listener will not be available");
    sub_38438(3, v56, 0);
  }
  return close(v3);
}
