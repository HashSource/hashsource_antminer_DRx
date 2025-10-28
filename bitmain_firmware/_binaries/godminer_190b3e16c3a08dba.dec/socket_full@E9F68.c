int __fastcall socket_full(int a1, __time_t a2)
{
  int v2; // r4
  fd_set *p_tv_usec; // r3
  _DWORD *v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  struct timeval timeout; // [sp+10h] [bp-108Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-1084h] BYREF
  char v17[4100]; // [sp+98h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    LOWORD(v12) = -236;
    HIWORD(v12) = (unsigned int)"mand" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v13) = -12376;
    HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v14) = -220;
    HIWORD(v14) = (unsigned int)"mac" >> 16;
    zlog(*v13, v14, 151, "socket_full", 11, 53, 20, v17);
    return 0;
  }
  else
  {
    v2 = a1;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
    timeout.tv_usec = 0;
    timeout.tv_sec = a2;
    LOBYTE(a1) = a1 & 0x1F;
    if ( v2 <= 0 )
      a1 = -(-v2 & 0x1F);
    LOWORD(v4) = -12376;
    HIWORD(v4) = (unsigned int)&unk_18C750 >> 16;
    readfds.__fds_bits[v2 / 32] |= 1 << a1;
    V_LOCK();
    LOWORD(v5) = -68;
    HIWORD(v5) = (unsigned int)"dhash_acc_control" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = -220;
    HIWORD(v6) = (unsigned int)"mac" >> 16;
    zlog(*v4, v6, 151, "socket_full", 11, 61, 20, v17);
    if ( select(v2 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      LOWORD(v10) = -16;
      HIWORD(v10) = (unsigned int)"a_id" >> 16;
      logfmt_raw(v17, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v11) = -220;
      HIWORD(v11) = (unsigned int)"mac" >> 16;
      zlog(*v4, v11, 151, "socket_full", 11, 66, 20, v17);
      return 0;
    }
    else
    {
      V_LOCK();
      LOWORD(v7) = -40;
      HIWORD(v7) = (unsigned int)"in_reset_all" >> 16;
      logfmt_raw(v17, 0x1000u, 0, v7);
      V_UNLOCK();
      LOWORD(v8) = -220;
      HIWORD(v8) = (unsigned int)"mac" >> 16;
      zlog(*v4, v8, 151, "socket_full", 11, 63, 20, v17);
      return 1;
    }
  }
}
