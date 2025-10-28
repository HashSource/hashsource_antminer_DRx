int __fastcall dhash_start_zec_1746(int a1)
{
  char *v2; // r1
  int v3; // r5
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  int v8; // r3
  int result; // r0
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  int v12; // [sp+48h] [bp-1004h] BYREF
  int v13; // [sp+4Ch] [bp-1000h]
  int v14; // [sp+50h] [bp-FFCh]
  int v15; // [sp+54h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v10, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 18684;
  HIWORD(v3) = (unsigned int)"%s write iic err" >> 16;
  logfmt_raw((char *)&v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 18512;
  HIWORD(v5) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  zlog(*v4, v5, 171, "dhash_start_zec_1746", 20, 707, 40, &v12);
  v14 = 2621440;
  v15 = 0;
  v12 = (int)&stru_14820;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v13 = 0;
  LOBYTE(v14) = 1;
  v6(a1, &v12);
  v14 = 5242881;
  v15 = 0;
  v13 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v12 = 0;
  v7(a1, &v12);
  v14 = 5767169;
  v15 = 0;
  v13 = 0;
  v12 = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v12);
  (*(void (__fastcall **)(int))(a1 + 152))(a1);
  v8 = *(unsigned __int8 *)(a1 + 476);
  result = 0;
  *(_BYTE *)(a1 + 264) = 1;
  if ( !v8 )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
