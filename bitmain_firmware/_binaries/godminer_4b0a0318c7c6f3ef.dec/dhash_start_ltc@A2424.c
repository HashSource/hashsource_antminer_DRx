int __fastcall dhash_start_ltc(int a1)
{
  char *v2; // r1
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r3
  int result; // r0
  _DWORD v8[7]; // [sp+28h] [bp-1020h] BYREF
  int v9; // [sp+44h] [bp-1004h]
  char v10[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v8, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 3356;
  HIWORD(v3) = (unsigned int)" %d" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 2556;
  HIWORD(v5) = (unsigned int)"ltc" >> 16;
  zlog(*v4, v5, 171, "dhash_start_ltc", 15, 527, 40, v10);
  sub_A2318(a1);
  v6 = *(unsigned __int8 *)(a1 + 476);
  result = 0;
  *(_BYTE *)(a1 + 264) = 1;
  if ( !v6 )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
