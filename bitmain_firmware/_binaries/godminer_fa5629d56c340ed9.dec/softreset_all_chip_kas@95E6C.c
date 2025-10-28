int __fastcall softreset_all_chip_kas(int a1)
{
  int v2; // r4
  _DWORD v4[7]; // [sp+28h] [bp-20h] BYREF
  int v5; // [sp+44h] [bp-4h]
  _DWORD v6[1024]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 260));
  v2 = 10;
  logfmt_raw((char *)v6, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    &unk_170C5C,
    22,
    629,
    40,
    v6);
  V_LOCK();
  logfmt_raw((char *)v6, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_software_reset_KAS_2380",
    35,
    180,
    20,
    v6);
  v6[3] = 0;
  v6[0] = 3;
  v6[2] = 4456449;
  v6[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v6);
  do
  {
    usleep((__useconds_t)&stru_18698.st_size);
    send_fake_work_kas(a1);
    --v2;
  }
  while ( v2 );
  sub_922A8(a1, 10, 0);
  sub_923BC((int *)a1, 127);
  return 0;
}
