int __fastcall set_miner_6060info_uneffective_temp_err(int a1)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6[32]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_196BD8 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_196BD8;
    dword_196BDC = tv.tv_sec;
    if ( !byte_196DE0 )
    {
      if ( byte_196BD8 )
      {
        v6[0] = 3553866;
        V_LOCK();
        LOWORD(v3) = -32588;
        HIWORD(v3) = (unsigned int)"k lost connection to pool, keep the state of all chips!" >> 16;
        logfmt_raw((char *)&tv, 0x1000u, 0, v3, v6);
        V_UNLOCK();
        LOWORD(v4) = 20532;
        HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v5) = 32724;
        HIWORD(v5) = (unsigned int)"qualify nonce count %f" >> 16;
        zlog(*v4, v5, 169, "set_miner_6060info_uneffective_temp_err", 39, 84, 100, &tv);
        LOBYTE(a1) = byte_196BD8;
      }
    }
  }
  byte_196DE0 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
