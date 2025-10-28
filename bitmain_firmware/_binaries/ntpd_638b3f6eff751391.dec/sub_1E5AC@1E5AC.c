int __fastcall sub_1E5AC(const void *a1)
{
  int v2; // r0
  fd_set *p_ai_next; // r3
  fd_set *v4; // r3
  _WORD *v5; // r3
  _WORD *v6; // r10
  size_t v7; // r4
  unsigned int v8; // r2
  int v9; // r3
  bool v10; // zf
  unsigned int v11; // r3
  int v12; // r1
  int v13; // r0
  unsigned int v14; // r3
  int v15; // r0
  _WORD *v16; // lr
  int v17; // r12
  int v18; // r0
  int v19; // r9
  ssize_t v20; // r0
  _WORD *v21; // r2
  int v22; // r2
  unsigned int v23; // r2
  int result; // r0
  int v25; // r0
  int v26; // r0
  unsigned int v27; // r3
  unsigned int v28; // r1
  const char *v29; // r0
  struct addrinfo *pai; // [sp+Ch] [bp-190h] BYREF
  struct timeval timeout; // [sp+10h] [bp-18Ch] BYREF
  unsigned int v32; // [sp+18h] [bp-184h] BYREF
  unsigned int v33; // [sp+1Ch] [bp-180h]
  struct addrinfo req; // [sp+20h] [bp-17Ch] BYREF
  fd_set readfds; // [sp+40h] [bp-15Ch] BYREF
  _WORD v36[110]; // [sp+C0h] [bp-DCh] BYREF

  sub_1E584();
  v2 = dword_7A194;
  if ( dword_7A194 != -1 )
    goto LABEL_2;
  req.ai_flags = 0;
  memset(&req.ai_protocol, 0, 20);
  req.ai_family = 2;
  req.ai_socktype = 2;
  v25 = getaddrinfo("127.0.0.1", "ntp", &req, &pai);
  if ( v25 )
  {
    if ( v25 == -11 )
    {
      sub_4FE78(3, "getaddrinfo(%s) failed: %m", "127.0.0.1");
    }
    else
    {
      v29 = gai_strerror(v25);
      sub_4FE78(3, "getaddrinfo(%s) failed: %s", "127.0.0.1", v29);
    }
LABEL_70:
    exit(1);
  }
  v26 = socket(pai->ai_family, pai->ai_socktype, 0);
  dword_7A194 = v26;
  if ( v26 == -1 )
  {
    sub_4FE78(3, "socket() failed: %m");
    goto LABEL_70;
  }
  if ( v26 >= 1024 )
  {
    sub_4FE78(3, "socket fd %d too large, FD_SETSIZE %d", v26, 1024);
    exit(1);
  }
  if ( fcntl(v26, 4, 2048) == -1 )
  {
    sub_4FE78(3, "fcntl(O_NONBLOCK) failed: %m");
    exit(1);
  }
  if ( connect(dword_7A194, pai->ai_addr, pai->ai_addrlen) == -1 )
  {
    sub_4FE78(3, "openntp: connect() failed: %m");
    exit(1);
  }
  freeaddrinfo(pai);
  v2 = dword_7A194;
LABEL_2:
  p_ai_next = (fd_set *)&req.ai_next;
  timeout.tv_sec = 0;
  timeout.tv_usec = 0;
  do
  {
    p_ai_next->__fds_bits[1] = 0;
    p_ai_next = (fd_set *)((char *)p_ai_next + 4);
  }
  while ( p_ai_next != (fd_set *)&readfds.__fds_bits[31] );
  readfds.__fds_bits[v2 / 32] |= 1 << (v2 % 32);
  while ( select(v2 + 1, &readfds, 0, 0, &timeout) > 0 )
  {
    recv(dword_7A194, v36, 0xD8u, 0);
    v4 = (fd_set *)&req.ai_next;
    do
    {
      v4->__fds_bits[1] = 0;
      v4 = (fd_set *)((char *)v4 + 4);
    }
    while ( v4 != (fd_set *)&readfds.__fds_bits[31] );
    v2 = dword_7A194;
    readfds.__fds_bits[dword_7A194 / 32] |= 1 << (dword_7A194 % 32);
  }
  memset(v36, 0, 0xD8u);
  v36[0] = -32745;
  v36[1] = 2563;
  v36[2] = 256;
  v36[3] = -22528;
  memcpy(&v36[4], a1, 0xA8u);
  if ( dword_CB46C && (unsigned int)dword_CAB80 > 0x10 )
  {
    v23 = (char *)&v36[94] + dword_CAB80 - (char *)v36;
    if ( v23 > 0xD8 )
    {
      sub_4FE78(3, "intres total_len %lu limit is %lu (%lu octet digest)\n", v23, 216, dword_CAB80);
      exit(1);
    }
    v5 = &v36[92];
    v6 = &v36[88];
    v7 = 184;
  }
  else
  {
    v5 = &v36[96];
    v6 = &v36[92];
    v7 = 192;
  }
  *(_DWORD *)v5 = bswap32(dword_CAB88);
  sub_4CBA8(&v32);
  v8 = v32;
  v9 = HIWORD(v33) + 2048;
  v10 = (v9 & 0x10000) == 0;
  v11 = (unsigned __int16)v33 | (v9 << 16);
  v12 = dword_CB46C;
  if ( !v10 )
    v8 = ++v32;
  v33 = v11;
  *(_DWORD *)v6 = bswap32(v8);
  *((_DWORD *)v6 + 1) = bswap32(v11);
  if ( v12 )
  {
    v13 = sub_4E458(dword_CAB88, v36, v7);
    if ( v13 != dword_CAB80 + 4 )
    {
      sub_4FE78(3, "intres maclen %d expected %lu\n", v13, dword_CAB80 + 4);
      exit(1);
    }
    v7 += v13;
  }
  if ( send(dword_7A194, v36, v7, 0) >= 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
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
                    v21 = &v36[2 * v14++ + 108];
                    *((_DWORD *)v21 - 86) = 0;
                  }
                  while ( v14 <= 0x1F );
                  v15 = dword_7A194 + 1;
                  v16 = &v36[2 * (dword_7A194 / 32) + 108];
                  v17 = *((_DWORD *)v16 - 86);
                  timeout.tv_usec = 0;
                  *((_DWORD *)v16 - 86) = v17 | (1 << (dword_7A194 % 32));
                  timeout.tv_sec = 2;
                  v18 = select(v15, &readfds, 0, 0, &timeout);
                  v19 = v18;
                  if ( v18 < 0 )
                  {
                    if ( *_errno_location() == 4 )
                      return 0;
                    sub_4FE78(3, "select() fails: %m");
                    return 0;
                  }
                  if ( !v18 )
                  {
                    result = dword_7CF4C;
                    if ( dword_7CF4C )
                    {
                      sub_4FE78(6, "ntp_intres select() returned 0.");
                      return v19;
                    }
                    return result;
                  }
                  v20 = recv(dword_7A194, v36, 0xD8u, 0);
                  if ( v20 > 0 )
                    break;
                  if ( v20 )
                  {
                    sub_4FE78(3, "recv() fails: %m", v20);
                    return 0;
                  }
                  v14 = 0;
                }
                if ( (unsigned int)v20 > 7 )
                  break;
                sub_4FE78(3, "received runt response (%d octets)", v20);
                v14 = 0;
              }
              if ( (v36[0] & 0x80) != 0 )
                break;
              if ( dword_7CF4C <= 1 )
                goto LABEL_35;
              sub_4FE78(6, "received non-response packet", v20);
              v14 = 0;
            }
            if ( (v36[0] & 0x40) == 0 )
              break;
            if ( dword_7CF4C > 1 )
              sub_4FE78(6, "received fragmented packet", v20);
LABEL_35:
            v14 = 0;
          }
          v22 = (LOBYTE(v36[0]) >> 3) & 7;
          if ( (unsigned int)(v22 - 2) <= 2 && (v36[0] & 7) == 7 )
            break;
          if ( dword_7CF4C <= 1 )
            goto LABEL_47;
          sub_4FE78(6, "version (%d/%d) or mode (%d/%d) incorrect", v22, 4, v36[0] & 7, 7);
          v14 = 0;
        }
        if ( (v36[0] & 0x7F00) == 0 )
          break;
        if ( dword_7CF4C <= 1 )
          goto LABEL_47;
        sub_4FE78(6, "nonzero sequence number (%d)", HIBYTE(v36[0]) & 0x7F);
        v14 = 0;
      }
      if ( v36[1] != 2563 )
        break;
      v27 = (unsigned __int16)((v36[2] << 8) | HIBYTE(v36[2]));
      if ( (v27 & 0xFFF) == 0 )
      {
        v28 = (unsigned __int16)((v36[3] << 8) | HIBYTE(v36[3]));
        if ( !(v28 >> 12) && (v28 & 0xFFF) == 0 )
        {
          switch ( v27 >> 12 )
          {
            case 0u:
            case 4u:
              result = 1;
              break;
            case 1u:
              sub_4FE78(3, "ntp_intres.request: implementation mismatch");
              result = 0;
              break;
            case 2u:
              sub_4FE78(3, "ntp_intres.request: request unknown");
              result = 0;
              break;
            case 3u:
              sub_4FE78(3, "ntp_intres.request: format error");
              result = 0;
              break;
            case 7u:
              sub_4FE78(3, "ntp_intres.request: permission denied");
              result = 0;
              break;
            default:
              sub_4FE78(3, "ntp_intres.request: unknown error code %d", v27 >> 12);
              result = 0;
              break;
          }
          return result;
        }
      }
      if ( dword_7CF4C <= 1 )
      {
LABEL_47:
        v14 = 0;
      }
      else
      {
        sub_4FE78(
          6,
          "nitems (%d) mbz (%d) or itemsize (%d) nonzero",
          v27 & 0xFFF,
          (unsigned __int16)((v36[3] << 8) | HIBYTE(v36[3])) >> 12,
          ((unsigned __int16)(v36[3] << 8) | HIBYTE(v36[3])) & 0xFFF);
        v14 = 0;
      }
    }
    if ( dword_7CF4C > 1 )
      sub_4FE78(6, "implementation (%d) or request (%d) incorrect", LOBYTE(v36[1]), HIBYTE(v36[1]));
    goto LABEL_47;
  }
  sub_4FE78(3, "send to NTP server failed: %m");
  return 0;
}
