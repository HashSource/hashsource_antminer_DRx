char *__fastcall godminer_fan_monitor(int a1)
{
  char *result; // r0
  int v2; // r1
  char *v3; // r5
  const char *v4; // r2
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  const char *v9; // r2
  char *v10; // r1
  int v11; // r7
  int v12; // r1
  int v13; // r1
  int v14; // r3
  int v15; // r1
  _DWORD v16[7]; // [sp+28h] [bp-1040h] BYREF
  int v17; // [sp+44h] [bp-1024h]
  _DWORD v18[7]; // [sp+48h] [bp-1020h] BYREF
  int v19; // [sp+64h] [bp-1004h]
  char v20[4096]; // [sp+68h] [bp-1000h] BYREF

  ++dword_195898[*(_DWORD *)(a1 + 248)];
  result = get_flag_from_monitor(a1);
  v2 = *((_DWORD *)result + 8);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK();
    LOWORD(v9) = 31192;
    LOWORD(v10) = 31204;
    HIWORD(v9) = (unsigned int)"hine" >> 16;
    HIWORD(v10) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
    LOWORD(v11) = 31212;
    V_STR(v16, v10, v9);
    HIWORD(v11) = (unsigned int)"forbidden to start again as it is already started, will exit immediately." >> 16;
    logfmt_raw(v20, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v11);
    V_UNLOCK();
    LOWORD(v12) = 31052;
    HIWORD(v12) = (unsigned int)"rror %d" >> 16;
    zlog(g_zc, v12, 139, "godminer_fan_monitor", 20, 543, 20, v20);
    V_LOCK();
    LOWORD(v13) = 31260;
    LOWORD(v14) = 31232;
    HIWORD(v13) = (unsigned int)"d, will exit immediately." >> 16;
    HIWORD(v14) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v20, 0x1000u, 0, v14, v13);
    V_UNLOCK();
    LOWORD(v15) = 31052;
    HIWORD(v15) = (unsigned int)"rror %d" >> 16;
    result = (char *)zlog(g_zc, v15, 139, "godminer_fan_monitor", 20, 544, 100, v20);
    v2 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 10) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v4) = 31264;
    LOWORD(v5) = 31204;
    HIWORD(v4) = (unsigned int)"ill exit immediately." >> 16;
    HIWORD(v5) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
    V_STR(v18, v5, v4);
    LOWORD(v6) = 31276;
    HIWORD(v6) = (unsigned int)"ediately." >> 16;
    logfmt_raw(v20, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v6);
    V_UNLOCK();
    LOWORD(v7) = 20532;
    HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v8) = 31052;
    HIWORD(v8) = (unsigned int)"rror %d" >> 16;
    result = (char *)zlog(*v7, v8, 139, "godminer_fan_monitor", 20, 552, 20, v20);
    *((_DWORD *)v3 + 10) |= 1u;
  }
  return result;
}
