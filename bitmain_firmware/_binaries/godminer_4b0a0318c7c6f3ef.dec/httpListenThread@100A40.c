int httpListenThread()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r10
  int v5; // r0
  int v6; // r2
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v8; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  char v10[4100]; // [sp+40h] [bp-1004h] BYREF

  do
  {
    v0 = socket(2, 1, 6);
    listen_sockfd = v0;
    if ( v0 < 0 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, 1548676);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "httpListenThread",
        16,
        198,
        80,
        v10);
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&v8.sa_family = -1407778814;
      memset(&v8.sa_data[2], 0, 12);
      if ( bind(v0, &v8, 0x10u) < 0 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, 1548724);
        V_UNLOCK();
        v5 = g_zc;
        v6 = 211;
      }
      else
      {
        if ( listen(listen_sockfd, 100) >= 0 )
          break;
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, 1548772);
        V_UNLOCK();
        v5 = g_zc;
        v6 = 222;
      }
      zlog(
        v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "httpListenThread",
        16,
        v6,
        80,
        v10);
      close(listen_sockfd);
      listen_sockfd = -1;
      sleep(0xAu);
    }
  }
  while ( !ExitServer );
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, 1548816);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "httpListenThread",
    16,
    235,
    60,
    v10);
  if ( !ExitServer )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(listen_sockfd, &addr, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_10;
      }
      v3 = (unsigned __int8)ExitServer;
      if ( ExitServer )
        break;
      V_LOCK();
      logfmt_raw(v10, 0x1000u, v3, 1548844, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "httpListenThread",
        16,
        257,
        20,
        v10);
      statusServiceThread(v2);
      if ( ExitServer )
        goto LABEL_10;
    }
    close(v1);
  }
LABEL_10:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
