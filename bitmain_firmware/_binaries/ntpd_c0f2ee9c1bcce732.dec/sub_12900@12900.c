ssize_t __fastcall sub_12900(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r0
  _DWORD *v7; // r10
  ssize_t v8; // r8
  int *v9; // r3
  const char *v11; // r10
  int v12; // r7
  const char *v13; // r0
  ssize_t v14; // r0
  size_t msg_controllen; // r3
  unsigned int v16; // s22
  int v17; // r5
  _DWORD *msg_control; // r4
  int v19; // r1
  bool v20; // cc
  int v21; // r2
  const char *v22; // r0
  double v23; // d11
  int v24; // r0
  const char *v25; // r0
  socklen_t addr_len; // [sp+14h] [bp+Ch] BYREF
  _DWORD v29[2]; // [sp+18h] [bp+10h] BYREF
  struct msghdr message; // [sp+20h] [bp+18h] BYREF
  struct sockaddr addr; // [sp+3Ch] [bp+34h] BYREF
  _BYTE buf[1536]; // [sp+58h] [bp+50h] BYREF

  v6 = sub_50A8C();
  v7 = (_DWORD *)v6;
  if ( !v6 )
    goto LABEL_4;
  if ( *(_DWORD *)(a2 + 176) )
  {
    sub_509C4(v6);
LABEL_4:
    addr_len = 28;
    v8 = recvfrom(a1, buf, 0x3E8u, 0, &addr, &addr_len);
    if ( dword_7CF4C > 3 )
    {
      if ( *(_DWORD *)(a2 + 176) )
        v11 = "ignore";
      else
        v11 = "drop";
      v12 = sub_508D8();
      v13 = (const char *)sub_50CD0(&addr);
      printf("%s on (%lu) fd=%d from %s\n", v11, v12, a1, v13);
    }
    if ( *(_DWORD *)(a2 + 176) )
      v9 = &dword_CA650;
    else
      v9 = &dword_CA620;
    ++*v9;
    return v8;
  }
  message.msg_flags = 0;
  v29[0] = v6 + 92;
  addr_len = 28;
  message.msg_namelen = 28;
  message.msg_iov = (struct iovec *)v29;
  v29[1] = 1000;
  message.msg_name = (void *)(v6 + 8);
  message.msg_iovlen = 1;
  message.msg_control = buf;
  message.msg_controllen = 1536;
  v14 = recvmsg(a1, &message, 0);
  v8 = v14;
  v7[22] = v14;
  if ( !v14 )
    goto LABEL_29;
  if ( v14 == -1 )
  {
    if ( *_errno_location() != 11 )
    {
LABEL_27:
      v22 = (const char *)sub_50CD0(v7 + 2);
      sub_4FE78(3, "recvfrom(%s) fd=%d: %m", v22, a1);
      if ( dword_7CF4C > 4 )
        printf("read_network_packet: fd=%d dropped (bad recvfrom)\n", a1);
    }
LABEL_29:
    sub_509C4(v7);
    return v8;
  }
  if ( v14 < 0 )
    goto LABEL_27;
  if ( dword_7CF4C > 2 )
  {
    v25 = (const char *)sub_50CD0(v7 + 2);
    printf("read_network_packet: fd=%d length %d from %s\n", a1, v8, v25);
  }
  msg_controllen = message.msg_controllen;
  v16 = a4;
  v7[16] = a2;
  v7[17] = a1;
  v17 = a3;
  if ( msg_controllen > 0xB )
  {
    msg_control = message.msg_control;
    if ( message.msg_control )
    {
      v19 = *((_DWORD *)message.msg_control + 2);
      if ( v19 == 29 )
        goto LABEL_33;
LABEL_22:
      if ( dword_7CF4C > 3 )
        printf("fetch_timestamp: skipping control message 0x%x\n", v19);
      while ( 1 )
      {
        v20 = *msg_control > 0xBu;
        msg_control = (_DWORD *)((char *)msg_control + ((*msg_control + 3) & 0xFFFFFFFC));
        if ( !v20
          || (char *)message.msg_control + message.msg_controllen < (char *)(msg_control + 3)
          || (char *)message.msg_control + message.msg_controllen < (char *)msg_control
                                                                  + ((*msg_control + 3) & 0xFFFFFFFC) )
        {
          break;
        }
        v19 = msg_control[2];
        if ( v19 != 29 )
          goto LABEL_22;
LABEL_33:
        if ( dword_7CF4C > 3 )
          printf("fetch_timestamp: system network time stamp: %ld.%06ld\n", msg_control[3], msg_control[4]);
        v23 = (double)(int)msg_control[4];
        v17 = msg_control[3] - 2085978496;
        v24 = sub_504EC();
        v16 = (unsigned int)((v23 + ((double)v24 + (double)v24) * 2.32830644e-10) / 1000000.0 * 4294967300.0);
      }
    }
  }
  v7[21] = sub_25508;
  v7[19] = v17;
  v7[20] = v16;
  sub_50A30(v7);
  v21 = dword_CA640;
  ++*(_DWORD *)(a2 + 160);
  dword_CA640 = v21 + 1;
  return v8;
}
