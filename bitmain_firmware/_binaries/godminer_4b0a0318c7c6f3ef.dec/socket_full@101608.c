int __fastcall socket_full(int a1, __time_t a2)
{
  int v2; // r4
  fd_set *p_tv_usec; // r3
  struct timeval timeout; // [sp+10h] [bp-108Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-1084h] BYREF
  char v7[4100]; // [sp+98h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, 1549308);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "socket_full",
      11,
      53,
      20,
      v7);
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
    readfds.__fds_bits[v2 / 32] |= 1 << a1;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, 1549476);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "socket_full",
      11,
      61,
      20,
      v7);
    if ( select(v2 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, 1549528);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/socket.c",
        151,
        "socket_full",
        11,
        66,
        20,
        v7);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, 1549504);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/socket.c",
        151,
        "socket_full",
        11,
        63,
        20,
        v7);
      return 1;
    }
  }
}
