int __fastcall set_debug_ctrl_rvn(int a1, int a2)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    (char *)v8,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "%s...",
    "set_debug_ctrl_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    171,
    "set_debug_ctrl_rvn",
    18,
    182,
    60,
    v8);
  v9 = 0;
  v10 = 0;
  v8[0] = a2;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  v8[1] = 0;
  LOBYTE(v9) = 1;
  HIWORD(v9) = 80;
  v4(a1, v8);
  usleep(0x2710u);
  return 0;
}
