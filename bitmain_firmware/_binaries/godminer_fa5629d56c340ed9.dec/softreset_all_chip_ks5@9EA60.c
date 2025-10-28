int __fastcall softreset_all_chip_ks5(int *a1)
{
  void (__fastcall *v2)(int *, _DWORD *); // r3
  _DWORD v4[7]; // [sp+28h] [bp-1024h] BYREF
  int v5; // [sp+44h] [bp-1008h]
  _DWORD v6[2]; // [sp+48h] [bp-1004h] BYREF
  int v7; // [sp+50h] [bp-FFCh]
  int v8; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v4, "chain", a1[65]);
  logfmt_raw((char *)v6, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "softreset_all_chip_ks5",
    22,
    628,
    40,
    v6);
  V_LOCK();
  logfmt_raw((char *)v6, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_KS5_2382", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_software_reset_KS5_2382",
    35,
    180,
    20,
    v6);
  v7 = 0;
  v6[0] = 3;
  v8 = 0;
  v2 = (void (__fastcall *)(int *, _DWORD *))a1[70];
  HIWORD(v7) = 68;
  LOBYTE(v7) = 1;
  v6[1] = 0;
  v2(a1, v6);
  sub_9B4B0((int)a1, 10, 0);
  sub_9B7F8(a1, 127);
  return 0;
}
