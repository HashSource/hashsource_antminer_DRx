int __fastcall send_line(int a1, char *s)
{
  size_t v4; // r0
  signed int v5; // r7
  int v6; // r8
  int v7; // r3
  int v8; // r9
  int v9; // r8
  fd_set *p_tv_usec; // r3
  ssize_t v11; // r0
  int v13; // r3
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // [sp+10h] [bp-1014h]
  struct timeval timeout; // [sp+18h] [bp-100Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    LOWORD(v13) = -236;
    HIWORD(v13) = (unsigned int)"mand" >> 16;
    logfmt_raw((char *)&writefds, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v14) = -12376;
    HIWORD(v14) = (unsigned int)&unk_18C750 >> 16;
    v15 = *v14;
    LOWORD(v14) = -260;
    LOWORD(v16) = -220;
    HIWORD(v14) = (unsigned int)"s %d" >> 16;
    HIWORD(v16) = (unsigned int)"mac" >> 16;
    zlog(v15, v16, 151, v14, 9, 12, 20, &writefds);
    return 0;
  }
  else
  {
    v4 = strlen(s);
    v5 = v4;
    if ( s[v4 - 1] == 10 )
    {
      if ( !v4 )
        return 1;
    }
    else
    {
      v5 = v4 + 1;
      s[v4] = 10;
      s[v4 + 1] = 0;
    }
    v6 = a1 + 31;
    if ( a1 >= 0 )
      v6 = a1;
    LOBYTE(v7) = a1 & 0x1F;
    if ( a1 <= 0 )
      v7 = -(-a1 & 0x1F);
    v8 = 0;
    v9 = v6 >> 5;
    v17 = 1 << v7;
    while ( 1 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      p_tv_usec = (fd_set *)&timeout.tv_usec;
      do
      {
        p_tv_usec->__fds_bits[1] = 0;
        p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
      }
      while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
      writefds.__fds_bits[v9] |= v17;
      if ( select(a1 + 1, 0, &writefds, 0, &timeout) <= 0 )
        break;
      v11 = send(a1, &s[v8], v5, 0x4000);
      if ( v11 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 0;
      }
      else
      {
        v5 -= v11;
        v8 += v11;
        if ( v5 <= 0 )
          return 1;
      }
    }
    return 0;
  }
}
