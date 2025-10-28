time_t set_miner_start_time()
{
  int v0; // r2
  const char *v1; // r1
  int v2; // r12
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  time_t result; // r0
  int v7; // r4
  char *v8; // r0
  const char *v9; // r1
  int v10; // r3
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v13[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v7 = *_errno_location();
    v8 = strerror(v7);
    LOWORD(v9) = 31828;
    HIWORD(v9) = ((unsigned int)&loc_146A2E + 2) >> 16;
    sprintf(s, v9, v7, v8);
    result = time(0);
    LOWORD(v10) = 26728;
    HIWORD(v10) = (unsigned int)&unk_195860 >> 16;
    *(_DWORD *)(v10 + 0x18) = result + 1;
    *(_DWORD *)(v10 + 0x1C) = result;
  }
  else
  {
    LOWORD(v0) = 26728;
    HIWORD(v0) = (unsigned int)&unk_195860 >> 16;
    LOWORD(v1) = 31872;
    v2 = info.uptime + 1;
    *(_DWORD *)(v0 + 0x1C) = info.uptime;
    HIWORD(v1) = (unsigned int)&loc_146A5C >> 16;
    *(_DWORD *)(v0 + 0x18) = v2;
    sprintf(s, v1, "set_miner_start_time");
    V_LOCK();
    LOWORD(v3) = -21600;
    HIWORD(v3) = (unsigned int)"nfo.c" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v3, s);
    V_UNLOCK();
    LOWORD(v4) = 24916;
    HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v5) = 29968;
    HIWORD(v5) = (unsigned int)&loc_146370 >> 16;
    return zlog(*v4, v5, 137, "set_miner_start_time", 20, 355, 60, v13);
  }
  return result;
}
