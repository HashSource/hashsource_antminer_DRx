int __fastcall dhash_start_rvn(int a1)
{
  char *v2; // r1
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r1
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -14460;
  HIWORD(v3) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3, "dhash_start_rvn");
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, "dhash_start_rvn", 15, 1337, 40, v9);
  result = 0;
  if ( !*(_BYTE *)(a1 + 476) )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
