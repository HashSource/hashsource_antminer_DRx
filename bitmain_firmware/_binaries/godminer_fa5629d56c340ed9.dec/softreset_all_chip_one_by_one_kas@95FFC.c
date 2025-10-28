int __fastcall softreset_all_chip_one_by_one_kas(int *a1)
{
  int v2; // r6
  int v3; // r2
  void (__fastcall *v4)(int *, _DWORD *); // r3
  int v5; // r4
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  _DWORD v9[2]; // [sp+48h] [bp-1004h] BYREF
  int v10; // [sp+50h] [bp-FFCh]
  int v11; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v7, "chain", a1[65]);
  logfmt_raw((char *)v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "softreset_all_chip_one_by_one_kas",
    33,
    658,
    40,
    v9);
  if ( a1[89] > 0 )
  {
    v2 = 0;
    do
    {
      V_LOCK();
      logfmt_raw((char *)v9, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_one_asic_KAS_2380", 68);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_software_reset_one_asic_KAS_2380",
        44,
        193,
        20,
        v9);
      v3 = a1[113];
      v4 = (void (__fastcall *)(int *, _DWORD *))a1[70];
      v10 = 4456448;
      v9[0] = 3;
      LOBYTE(v3) = v3 * v2;
      v9[1] = 0;
      ++v2;
      v11 = 0;
      BYTE1(v10) = v3;
      v4(a1, v9);
      send_fake_work_kas((int)a1);
      usleep(0x3E8u);
    }
    while ( a1[89] > v2 );
  }
  v5 = 10;
  do
  {
    usleep((__useconds_t)&stru_18698.st_size);
    send_fake_work_kas((int)a1);
    --v5;
  }
  while ( v5 );
  sub_922A8((int)a1, 10, 0);
  sub_923BC(a1, 127);
  return 0;
}
