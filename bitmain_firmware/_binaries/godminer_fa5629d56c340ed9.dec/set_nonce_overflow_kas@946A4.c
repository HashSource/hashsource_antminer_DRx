int __fastcall set_nonce_overflow_kas(int a1, int a2)
{
  _DWORD *v4; // r3
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1511188, 1509820, a2);
  V_UNLOCK();
  LOWORD(v4) = 24916;
  HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
  zlog(
    *v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_nonce_overflow_kas",
    22,
    111,
    40,
    v6);
  sub_922A8(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
