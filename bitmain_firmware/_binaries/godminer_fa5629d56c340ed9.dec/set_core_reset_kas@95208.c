int __fastcall set_core_reset_kas(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = -8076;
  HIWORD(v2) = (unsigned int)"" >> 16;
  logfmt_raw(v5, 0x1000u, 0, v2, 1510276);
  V_UNLOCK();
  LOWORD(v3) = 24916;
  HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
  zlog(
    *v3,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_core_reset_kas",
    18,
    173,
    40,
    v5);
  sub_922A8(a1, 68, 2);
  return 0;
}
