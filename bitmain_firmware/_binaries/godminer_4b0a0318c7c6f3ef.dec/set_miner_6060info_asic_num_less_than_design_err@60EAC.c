int __fastcall set_miner_6060info_asic_num_less_than_design_err(int a1, int a2)
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
  struct timeval v16[512]; // [sp+90h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK();
    LOWORD(v12) = -32564;
    HIWORD(v12) = (unsigned int)"l, keep the state of all chips!" >> 16;
    logfmt_raw((char *)v16, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v13) = 20532;
    HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v14) = 32724;
    HIWORD(v14) = (unsigned int)"qualify nonce count %f" >> 16;
    v3 = 0;
    zlog(*v13, v14, 169, "set_miner_6060info_asic_num_less_than_design_err", 48, 122, 40, v16);
  }
  else
  {
    v3 = a1;
  }
  LOWORD(v4) = 27568;
  HIWORD(v4) = (unsigned int)&unk_196BB8 >> 16;
  v5 = v4 + 8 * (v3 + 43);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 520));
  *(_BYTE *)(v5 + 24) = a2;
  v16[0].tv_sec = 0;
  v16[0].tv_usec = 0;
  if ( a2 )
  {
    gettimeofday(v16, 0);
    v7 = *(unsigned __int8 *)(v5 + 544);
    a2 = *(unsigned __int8 *)(v5 + 24);
    *(_DWORD *)(v5 + 28) = v16[0].tv_sec;
    if ( !v7 )
    {
      if ( a2 )
      {
        LOWORD(v8) = -32484;
        HIWORD(v8) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
        snprintf(s, 0x80u, v8, v3);
        V_LOCK();
        LOWORD(v9) = -32588;
        HIWORD(v9) = (unsigned int)"k lost connection to pool, keep the state of all chips!" >> 16;
        logfmt_raw((char *)v16, 0x1000u, 0, v9, s);
        V_UNLOCK();
        LOWORD(v10) = 20532;
        HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v11) = 32724;
        HIWORD(v11) = (unsigned int)"qualify nonce count %f" >> 16;
        zlog(*v10, v11, 169, "set_miner_6060info_asic_num_less_than_design_err", 48, 125, 100, v16);
        LOBYTE(a2) = *(_BYTE *)(v5 + 24);
      }
    }
  }
  *(_BYTE *)(v4 + 8 * (v3 + 43) + 544) = a2;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
