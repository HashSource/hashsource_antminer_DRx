int __fastcall top_init_zec_1746(int a1)
{
  char *v2; // r1
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r0
  int v9; // r1
  char v10; // r3
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  char v14[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v12, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 18880;
  HIWORD(v3) = (unsigned int)"ed range(%d-%d)" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 18512;
  HIWORD(v5) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  zlog(*v4, v5, 171, "top_init_zec_1746", 17, 644, 40, v14);
  v6 = *(_DWORD *)(a1 + 352);
  v7 = *(_DWORD *)(a1 + 504);
  v8 = sub_1451E0(256, (unsigned __int8)v6);
  if ( (_BYTE)v6 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v9 != v7 - 1 + (unsigned __int8)v6 );
    v7 = *(_DWORD *)(a1 + 504);
  }
  *(_DWORD *)(a1 + 444) = v8;
  (*(void (__fastcall **)(int, int, int))(a1 + 268))(a1, v7, v6);
  sub_B8428(a1, 1);
  return 0;
}
