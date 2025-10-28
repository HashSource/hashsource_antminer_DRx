int __fastcall reset_chip_reg_rvn(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[7]; // [sp+28h] [bp-1024h] BYREF
  int v5; // [sp+44h] [bp-1008h]
  _DWORD v6[2]; // [sp+48h] [bp-1004h] BYREF
  int v7; // [sp+50h] [bp-FFCh]
  int v8; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    (char *)v6,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "%s...",
    "reset_chip_reg_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "reset_chip_reg_rvn",
    18,
    324,
    60,
    v6);
  v7 = 16515072;
  v8 = 0;
  v6[1] = 0;
  v6[0] = -1414856447;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
  LOBYTE(v7) = 1;
  v2(a1, v6);
  return usleep(0x2710u);
}
