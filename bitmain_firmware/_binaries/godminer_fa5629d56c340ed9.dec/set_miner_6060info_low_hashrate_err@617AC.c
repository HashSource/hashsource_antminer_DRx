int __fastcall set_miner_6060info_low_hashrate_err(int a1, int a2)
{
  int v3; // r6
  int v4; // r4
  int v5; // r8
  int v7; // r10
  const char *v8; // r2
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  char s[128]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK();
    LOWORD(v12) = -26636;
    HIWORD(v12) = (unsigned int)"y times error, pls check <<" >> 16;
    logfmt_raw((char *)&tv, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v13) = 24916;
    HIWORD(v13) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v14) = -26884;
    HIWORD(v14) = (unsigned int)"nable power watchdog failed!" >> 16;
    v3 = 0;
    zlog(*v13, v14, 169, "set_miner_6060info_low_hashrate_err", 35, 97, 40, &tv);
  }
  else
  {
    v3 = a1;
  }
  LOWORD(v4) = 31684;
  HIWORD(v4) = (unsigned int)&unk_196BB8 >> 16;
  v5 = v4 + 8 * (v3 + 11);
  tv.tv_sec = 0;
  *(_BYTE *)(v5 + 24) = a2;
  tv.tv_usec = 0;
  if ( a2 )
  {
    gettimeofday(&tv, 0);
    v7 = *(unsigned __int8 *)(v5 + 544);
    a2 = *(unsigned __int8 *)(v5 + 24);
    *(_DWORD *)(v5 + 28) = tv.tv_sec;
    if ( !v7 )
    {
      if ( a2 )
      {
        LOWORD(v8) = -26564;
        HIWORD(v8) = (unsigned int)"eat_thread" >> 16;
        snprintf(s, 0x80u, v8, v3);
        V_LOCK();
        LOWORD(v9) = -26660;
        HIWORD(v9) = (unsigned int)"eedback voltage: too many times error, pls check <<" >> 16;
        logfmt_raw((char *)&tv, 0x1000u, 0, v9, s);
        V_UNLOCK();
        LOWORD(v10) = 24916;
        HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
        LOWORD(v11) = -26884;
        HIWORD(v11) = (unsigned int)"nable power watchdog failed!" >> 16;
        zlog(*v10, v11, 169, "set_miner_6060info_low_hashrate_err", 35, 99, 100, &tv);
        LOBYTE(a2) = *(_BYTE *)(v5 + 24);
      }
    }
  }
  *(_BYTE *)(v4 + 8 * (v3 + 11) + 544) = a2;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
