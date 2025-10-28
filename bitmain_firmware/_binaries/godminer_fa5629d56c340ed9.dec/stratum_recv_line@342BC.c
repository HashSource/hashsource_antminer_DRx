char *__fastcall stratum_recv_line(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r7
  char *spins; // r10
  size_t v4; // r0
  const char *v5; // r1
  signed int v6; // r5
  char *v7; // r0
  char *v8; // r6
  size_t v9; // r0
  _BYTE *v10; // r3
  int v12; // r9
  int *v13; // r8
  ssize_t v14; // r10
  int *v15; // r11
  int *v16; // r10
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r2
  int lock; // r2
  char *v22; // r1
  int v23; // r4
  _DWORD *v24; // r3
  int v25; // r1
  int *v26; // r12
  int v27; // r3
  int *v28; // r8
  int v29; // r1
  char *v30; // r1
  int v31; // r1
  int v32; // r3
  _DWORD *v33; // r3
  int v34; // r1
  ssize_t v35; // [sp+0h] [bp-5054h]
  time_t v36; // [sp+2Ch] [bp-5028h] BYREF
  _DWORD v37[7]; // [sp+30h] [bp-5024h] BYREF
  int v38; // [sp+4Ch] [bp-5008h]
  _DWORD v39[7]; // [sp+50h] [bp-5004h] BYREF
  int v40; // [sp+6Ch] [bp-4FE8h]
  char v41[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  spins = (char *)a1[1].__spins;
  if ( !strchr(spins, 10) && a1[1].__kind != -1 )
  {
    LOWORD(v12) = -23876;
    LOWORD(v13) = 24916;
    HIWORD(v13) = (unsigned int)&unk_1B503C >> 16;
    time(&v36);
    while ( 1 )
    {
      memset(v41, 0, 0x4000u);
      v14 = recv(a1[1].__kind, v41, 0x3FFCu, 0);
      if ( !v14 )
      {
        V_LOCK();
        LOWORD(v26) = 24916;
        LOWORD(v27) = -23908;
        HIWORD(v26) = (unsigned int)&unk_1B503C >> 16;
        v28 = v26;
        HIWORD(v27) = (unsigned int)", reload log" >> 16;
        v16 = v26;
        logfmt_raw((char *)v39, 0x1000u, 0, v27);
        V_UNLOCK();
        v19 = *v28;
        v20 = 58;
        goto LABEL_20;
      }
      if ( v14 < 0 )
      {
        V_LOCK();
        v15 = _errno_location();
        HIWORD(v12) = (unsigned int)" it should not be here" >> 16;
        v35 = v14;
        v16 = v13;
        logfmt_raw((char *)v39, 0x1000u, 0, v12, v35, *v15);
        V_UNLOCK();
        LOWORD(v17) = -24056;
        HIWORD(v17) = (unsigned int)"fan slow happend" >> 16;
        zlog(*v13, v17, 145, "stratum_recv_line", 17, 63, 20, v39);
        if ( *v15 != 11 || !socket_full(a1[1].__kind, 1) )
        {
          V_LOCK();
          LOWORD(v18) = -23832;
          HIWORD(v18) = (unsigned int)"dswitch file ret=%d" >> 16;
          logfmt_raw((char *)v39, 0x1000u, 0, v18, *v15);
          V_UNLOCK();
          v19 = *v13;
          v20 = 65;
LABEL_20:
          LOWORD(v29) = -24056;
          HIWORD(v29) = (unsigned int)"fan slow happend" >> 16;
          zlog(v19, v29, 145, "stratum_recv_line", 17, v20, 20, v39);
          V_LOCK();
          LOWORD(v30) = -26296;
          HIWORD(v30) = (unsigned int)"" >> 16;
          V_INT((int)v37, v30, a1->__lock);
          logfmt_raw(
            v41,
            0x1000u,
            0,
            v38,
            v37[0],
            v37[1],
            v37[2],
            v37[3],
            v37[4],
            v37[5],
            v37[6],
            v38,
            "stratum_recv_line failed");
          V_UNLOCK();
          LOWORD(v31) = -24056;
          HIWORD(v31) = (unsigned int)"fan slow happend" >> 16;
          zlog(*v16, v31, 145, "stratum_recv_line", 17, 74, 20, v41);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v41);
      }
      if ( time(0) - v36 > 59 )
        break;
      spins = (char *)a1[1].__spins;
      if ( strchr(spins, 10) )
        goto LABEL_2;
    }
    spins = (char *)a1[1].__spins;
  }
LABEL_2:
  v4 = strlen(spins);
  LOWORD(v5) = -27816;
  v6 = v4;
  HIWORD(v5) = (unsigned int)"Accepted shares: %lld" >> 16;
  v7 = strtok(spins, v5);
  if ( v7 )
  {
    v8 = _strdup(v7);
    v9 = strlen(v8);
    v10 = (_BYTE *)a1[1].__spins;
    if ( (int)(v9 + 1) < v6 )
      memmove(a1[1].__list.__next, &v10[v9 + 1], v6 - v9 + 1);
    else
      *v10 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK();
      lock = a1->__lock;
      LOWORD(v22) = -26296;
      HIWORD(v22) = (unsigned int)"" >> 16;
      LOWORD(v23) = -23692;
      V_INT((int)v39, v22, lock);
      HIWORD(v23) = (unsigned int)"or!" >> 16;
      logfmt_raw(v41, 0x1000u, 0, v40, v39[0], v39[1], v39[2], v39[3], v39[4], v39[5], v39[6], v40, v23, v8);
      V_UNLOCK();
      LOWORD(v24) = 24916;
      HIWORD(v24) = (unsigned int)&unk_1B503C >> 16;
      LOWORD(v25) = -24056;
      HIWORD(v25) = (unsigned int)"fan slow happend" >> 16;
      zlog(*v24, v25, 145, "stratum_recv_line", 17, 97, 60, v41);
    }
    return v8;
  }
  else
  {
    V_LOCK();
    LOWORD(v32) = -23756;
    HIWORD(v32) = (unsigned int)"u" >> 16;
    logfmt_raw(v41, 0x1000u, 0, v32);
    V_UNLOCK();
    LOWORD(v33) = 24916;
    HIWORD(v33) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v34) = -24056;
    HIWORD(v34) = (unsigned int)"fan slow happend" >> 16;
    zlog(*v33, v34, 145, "stratum_recv_line", 17, 82, 100, v41);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
