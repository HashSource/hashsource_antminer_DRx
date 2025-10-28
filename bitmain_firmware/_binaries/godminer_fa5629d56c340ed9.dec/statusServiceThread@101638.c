int __fastcall statusServiceThread(int a1)
{
  char *v2; // r9
  int v3; // r7
  ssize_t v4; // r3
  int v5; // r11
  int v6; // r4
  int v7; // r4
  int v8; // r4
  int v9; // r4
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r4
  size_t v13; // r0
  ssize_t v14; // r0
  int v15; // r0
  int v16; // r12
  int v17; // r3
  int v18; // r1
  int v20; // r12
  int v21; // r5
  ssize_t v22; // r8
  int v23; // r0
  int v24; // r2
  char *v25; // [sp+Ch] [bp-7040h]
  struct sockaddr *v26; // [sp+14h] [bp-7038h]
  int v27; // [sp+18h] [bp-7034h]
  char v28[4]; // [sp+20h] [bp-702Ch] BYREF
  socklen_t addr_len; // [sp+24h] [bp-7028h] BYREF
  char needle[8]; // [sp+28h] [bp-7024h] BYREF
  _DWORD optval[2]; // [sp+30h] [bp-701Ch] BYREF
  struct sockaddr addr; // [sp+38h] [bp-7014h] BYREF
  char s[4096]; // [sp+48h] [bp-7004h] BYREF
  char v34[4088]; // [sp+1048h] [bp-6004h] BYREF
  char v35[10240]; // [sp+2048h] [bp-5004h] BYREF
  char v36[10244]; // [sp+4848h] [bp-2804h] BYREF

  optval[0] = 3;
  optval[1] = 0;
  v2 = v35;
  memset(s, 0, sizeof(s));
  strcpy(v28, "\r\n");
  addr_len = 0;
  v3 = 0;
  strcpy(needle, "\r\n\r\n");
  memset(v35, 0, sizeof(v35));
  do
  {
    v5 = (unsigned __int8)ExitServer;
    if ( ExitServer )
      goto LABEL_6;
    v4 = recvfrom(a1, v2, 10239 - v3, 0, &addr, &addr_len);
    v3 += v4;
    if ( v4 <= 0 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, v5, ":statusServiceThread recvfrom<=0");
      V_UNLOCK();
      v20 = 52;
LABEL_25:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        v20,
        20,
        v36);
      return v5;
    }
    v2 = &v35[v3];
    if ( v3 > 10238 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, v5, "BUFSIZE is too small!");
      V_UNLOCK();
      v20 = 60;
      goto LABEL_25;
    }
  }
  while ( !strstr(v35, needle) );
  V_LOCK();
  logfmt_raw(v36, 0x1000u, v5, "find http request end flag!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "statusServiceThread",
    19,
    67,
    20,
    v36);
LABEL_6:
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "get http=%s", v35);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "statusServiceThread",
    19,
    72,
    20,
    v36);
  if ( v35[0] == 71 && v35[1] == 69 && v35[2] == 84 && v35[3] == 32 )
  {
    if ( setsockopt(a1, 1, 21, optval, 8u) )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "setsockopt SO_SNDTIMEO failed");
      V_UNLOCK();
      v23 = g_zc;
      v24 = 87;
      goto LABEL_38;
    }
    if ( setsockopt(a1, 1, 20, optval, 8u) )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "setsockopt SO_RCVTIMEO failed");
      V_UNLOCK();
      v23 = g_zc;
      v24 = 95;
      goto LABEL_38;
    }
    if ( http_test_case )
    {
      if ( !((int (__fastcall *)(char *, char *, int))http_test_case)(v35, s, 4096) )
        goto LABEL_14;
      close(a1);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "statusServiceThread exit for Error cmd!");
      V_UNLOCK();
      v23 = g_zc;
      v24 = 108;
LABEL_38:
      zlog(
        v23,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        v24,
        20,
        v36);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "No 6060 test case found.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        103,
        20,
        v36);
LABEL_14:
      v26 = (struct sockaddr *)strlen(s);
      v6 = sprintf(v36, "HTTP/1.0  200  OK%s", v28);
      v7 = v6 + sprintf(&v36[v6], "Server: SearchFreqServer%s", v28);
      v8 = v7 + sprintf(&v36[v7], "Cache-Control: no-cache%s", v28);
      v9 = v8 + sprintf(&v36[v8], "Pragma: no-cache%s", v28);
      v10 = v9 + sprintf(&v36[v9], "Content-Type: text/plain%s", v28);
      v11 = sprintf(&v36[v10], "Content-Length: %d%s", v26, v28);
      sprintf(&v36[v10 + v11], "Connection: Keep-Alive%s", needle);
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, "send http response...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        123,
        20,
        v34);
      v12 = (unsigned __int8)ExitServer;
      if ( !ExitServer )
      {
        v13 = strlen(v36);
        do
        {
          v14 = send(a1, &v36[v12], v13 - v12, 0x4000);
          if ( v14 == -1 )
          {
            if ( *_errno_location() != 11 )
            {
LABEL_21:
              close(a1);
              V_LOCK();
              logfmt_raw(v34, 0x1000u, 0, "statusServiceThread send http response error");
              V_UNLOCK();
              v15 = g_zc;
              v16 = 139;
              LOWORD(v17) = (unsigned __int16)"statusServiceThread";
              LOWORD(v18) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/bui"
                                              "ldroot/tmp/release/build/godminer-origin_godminer-new/common/general/http.c";
              v25 = v34;
              goto LABEL_23;
            }
            V_LOCK();
            logfmt_raw(v34, 0x1000u, 0, "statusServiceThread send http timeout, try again...");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/common/general/http.c",
              149,
              "statusServiceThread",
              19,
              132,
              20,
              v34);
            usleep((__useconds_t)&stru_18698.st_size);
          }
          else
          {
            v12 += v14;
            if ( v14 <= 0 )
              goto LABEL_21;
          }
          v13 = strlen(v36);
        }
        while ( v13 > v12 && !ExitServer );
      }
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, "send http data...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        153,
        20,
        v34);
      v21 = 0;
      do
      {
        v22 = send(a1, &s[v21], (size_t)v26 - v21, 0);
        V_LOCK();
        logfmt_raw(v34, 0x1000u, 0, "send http data ret=%d", v22);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          159,
          20,
          v34);
        if ( v22 <= 0 )
        {
          v27 = v21;
          V_LOCK();
          logfmt_raw(v34, 0x1000u, 0, "statusServiceThread send http data error");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/common/general/http.c",
            149,
            "statusServiceThread",
            19,
            163,
            20,
            v34);
          goto LABEL_33;
        }
        v21 += v22;
      }
      while ( (int)v26 > v21 && !ExitServer );
      v27 = v21;
LABEL_33:
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, "one client disconnected!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        173,
        20,
        v34);
      close(a1);
      return v27;
    }
  }
  else
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "statusServiceThread not support http command");
    V_UNLOCK();
    v16 = 79;
    LOWORD(v17) = -18656;
    LOWORD(v18) = -18560;
    v15 = g_zc;
    v25 = v36;
LABEL_23:
    HIWORD(v17) = (unsigned int)"statusServiceThread" >> 16;
    HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/common/general/http.c" >> 16;
    zlog(v15, v18, 149, v17, 19, v16, 20, v25);
    return 0;
  }
}
