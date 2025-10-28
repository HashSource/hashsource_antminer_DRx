int __fastcall softreset_all_chip_one_by_one_ks5(int *a1)
{
  int v2; // r6
  int v3; // r2
  void (__fastcall *v4)(int *, _DWORD *); // r3
  _DWORD v6[7]; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+44h] [bp-1008h]
  _DWORD v8[2]; // [sp+48h] [bp-1004h] BYREF
  int v9; // [sp+50h] [bp-FFCh]
  int v10; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v6, "chain", a1[65]);
  logfmt_raw((char *)v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "softreset_all_chip_one_by_one_ks5",
    33,
    653,
    40,
    v8);
  if ( a1[89] > 0 )
  {
    v2 = 0;
    do
    {
      V_LOCK();
      logfmt_raw((char *)v8, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_one_asic_KS5_2382", 68);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_software_reset_one_asic_KS5_2382",
        44,
        193,
        20,
        v8);
      v3 = a1[113];
      v9 = 0;
      v4 = (void (__fastcall *)(int *, _DWORD *))a1[70];
      v8[0] = 3;
      LOBYTE(v3) = v3 * v2;
      v8[1] = 0;
      HIWORD(v9) = 68;
      ++v2;
      v10 = 0;
      BYTE1(v9) = v3;
      v4(a1, v8);
      usleep(0x3E8u);
    }
    while ( a1[89] > v2 );
  }
  sub_9B4B0((int)a1, 10, 0);
  sub_9B7F8(a1, 127);
  return 0;
}
