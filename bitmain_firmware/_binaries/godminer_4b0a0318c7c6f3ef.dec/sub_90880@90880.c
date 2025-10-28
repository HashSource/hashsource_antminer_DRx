int __fastcall sub_90880(int a1)
{
  int v2; // r4
  _DWORD v4[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v5[7]; // [sp+38h] [bp-1024h] BYREF
  int v6; // [sp+54h] [bp-1008h]
  char v7[4100]; // [sp+58h] [bp-1004h] BYREF

  v4[0] = 5381904;
  v4[2] = 1835009;
  v4[3] = 0;
  v4[1] = 0;
  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 256));
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "set misc ctrl %08x", 5381904);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_misc_ctrl_HNS_2130",
    30,
    286,
    40,
    v7);
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v4);
  usleep(0x2710u);
  return v2;
}
