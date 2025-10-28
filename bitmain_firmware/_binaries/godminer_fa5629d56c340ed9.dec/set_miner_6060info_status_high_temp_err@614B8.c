int __fastcall set_miner_6060info_status_high_temp_err(int a1)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6[32]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_197BDC = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_197BDC;
    dword_197BE0 = tv.tv_sec;
    if ( !byte_197DE4 )
    {
      if ( byte_197BDC )
      {
        v6[0] = 3226192;
        V_LOCK();
        LOWORD(v3) = -26660;
        HIWORD(v3) = (unsigned int)"eedback voltage: too many times error, pls check <<" >> 16;
        logfmt_raw((char *)&tv, 0x1000u, 0, v3, v6);
        V_UNLOCK();
        LOWORD(v4) = 24916;
        HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
        LOWORD(v5) = -26884;
        HIWORD(v5) = (unsigned int)"nable power watchdog failed!" >> 16;
        zlog(*v4, v5, 169, "set_miner_6060info_status_high_temp_err", 39, 74, 100, &tv);
        LOBYTE(a1) = byte_197BDC;
      }
    }
  }
  byte_197DE4 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
