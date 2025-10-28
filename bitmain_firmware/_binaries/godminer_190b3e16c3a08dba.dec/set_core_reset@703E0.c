int __fastcall set_core_reset(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  _DWORD v5[7]; // [sp+28h] [bp-1024h] BYREF
  int v6; // [sp+44h] [bp-1008h]
  int v7; // [sp+48h] [bp-1004h] BYREF
  int v8; // [sp+4Ch] [bp-1000h]
  int v9; // [sp+50h] [bp-FFCh]
  int v10; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    (char *)&v7,
    0x1000u,
    0,
    v6,
    v5[0],
    v5[1],
    v5[2],
    v5[3],
    v5[4],
    v5[5],
    v5[6],
    v6,
    "%s...",
    "set_core_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_core_reset",
    14,
    147,
    60,
    &v7);
  sub_6E63C(a1, 240, 0x80000000);
  usleep((__useconds_t)&stru_18698.st_size);
  v9 = 0;
  v7 = 13;
  v10 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 240);
  v8 = 0;
  LOBYTE(v9) = 1;
  HIWORD(v9) = 32;
  v2(a1, &v7);
  usleep((__useconds_t)&stru_18698.st_size);
  v9 = 1;
  v10 = 0;
  v8 = 0;
  v7 = 15;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 240);
  HIWORD(v9) = 32;
  v3(a1, &v7);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
