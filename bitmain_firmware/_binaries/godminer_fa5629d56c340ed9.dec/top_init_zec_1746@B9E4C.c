int __fastcall top_init_zec_1746(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r0
  int v5; // r1
  char v6; // r3
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 260));
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "top_init_zec_1746");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "top_init_zec_1746",
    17,
    644,
    40,
    v10);
  v2 = *(_DWORD *)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 512);
  v4 = sub_146690(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v5 != v3 - 1 + (unsigned __int8)v2 );
    v3 = *(_DWORD *)(a1 + 512);
  }
  *(_DWORD *)(a1 + 452) = v4;
  (*(void (__fastcall **)(int, int, int))(a1 + 272))(a1, v3, v2);
  sub_B94D0(a1, 1);
  return 0;
}
