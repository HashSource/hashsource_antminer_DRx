char *__fastcall stratum_recv_line(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r7
  char *spins; // r10
  signed int v4; // r5
  char *v5; // r0
  char *v6; // r6
  size_t v7; // r0
  _BYTE *v8; // r3
  ssize_t v10; // r10
  int *v11; // r11
  int v12; // r0
  int v13; // r2
  time_t v14; // [sp+2Ch] [bp-5028h] BYREF
  _DWORD v15[7]; // [sp+30h] [bp-5024h] BYREF
  int v16; // [sp+4Ch] [bp-5008h]
  _DWORD v17[7]; // [sp+50h] [bp-5004h] BYREF
  int v18; // [sp+6Ch] [bp-4FE8h]
  char v19[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  spins = (char *)a1[1].__spins;
  if ( !strchr(spins, 10) && a1[1].__kind != -1 )
  {
    time(&v14);
    while ( 1 )
    {
      memset(v19, 0, 0x4000u);
      v10 = recv(a1[1].__kind, v19, 0x3FFCu, 0);
      if ( !v10 )
      {
        V_LOCK();
        logfmt_raw((char *)v17, 0x1000u, 0, 1250332);
        V_UNLOCK();
        v12 = g_zc;
        v13 = 58;
        goto LABEL_20;
      }
      if ( v10 < 0 )
      {
        V_LOCK();
        v11 = _errno_location();
        logfmt_raw((char *)v17, 0x1000u, 0, 1250364, v10, *v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_recv_line",
          17,
          63,
          20,
          v17);
        if ( *v11 != 11 || !socket_full(a1[1].__kind, 1) )
        {
          V_LOCK();
          logfmt_raw((char *)v17, 0x1000u, 0, 1250408, *v11);
          V_UNLOCK();
          v12 = g_zc;
          v13 = 65;
LABEL_20:
          zlog(
            v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_recv_line",
            17,
            v13,
            20,
            v17);
          V_LOCK();
          V_INT((int)v15, "poolno", a1->__lock);
          logfmt_raw(
            v19,
            0x1000u,
            0,
            v16,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            v15[5],
            v15[6],
            v16,
            "stratum_recv_line failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_recv_line",
            17,
            74,
            20,
            v19);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v19);
      }
      if ( time(0) - v14 > 59 )
        break;
      spins = (char *)a1[1].__spins;
      if ( strchr(spins, 10) )
        goto LABEL_2;
    }
    spins = (char *)a1[1].__spins;
  }
LABEL_2:
  v4 = strlen(spins);
  v5 = strtok(spins, "\n");
  if ( v5 )
  {
    v6 = _strdup(v5);
    v7 = strlen(v6);
    v8 = (_BYTE *)a1[1].__spins;
    if ( (int)(v7 + 1) < v4 )
      memmove(a1[1].__list.__next, &v8[v7 + 1], v4 - v7 + 1);
    else
      *v8 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK();
      V_INT((int)v17, "poolno", a1->__lock);
      logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, 1250548, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/stratum_handler.c",
        145,
        "stratum_recv_line",
        17,
        97,
        60,
        v19);
    }
    return v6;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, 1250484);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_recv_line",
      17,
      82,
      100,
      v19);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
