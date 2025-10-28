int __fastcall setup_all_chip_ltc(int *a1)
{
  int v2; // r8
  int v3; // r5
  int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(int *, int, int); // r3
  int v8; // r5
  int v10; // [sp+0h] [bp-1014h]
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    577,
    40,
    v11);
  v2 = a1[76];
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    580,
    60,
    v11);
  if ( !sub_8F768(a1) )
    return 12;
  v3 = a1[114];
  v4 = sub_12DB40(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v3 - 1 + (unsigned __int8)v2 != v5 );
    v3 = a1[114];
  }
  v7 = (void (__fastcall *)(int *, int, int))a1[58];
  a1[99] = v4;
  v7(a1, v3, v2);
  sub_8D28C((int)a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  if ( a1[77] > 0 )
  {
    v8 = 0;
    do
    {
      v10 = v8++;
      chip_setting_working_mode_ltc((int)a1, 1, 0, 0, v10, 0xFFu);
    }
    while ( a1[77] > v8 );
  }
  a1[108] = 900;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    649,
    60,
    v11);
  if ( !sub_8F768(a1) )
    return 12;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    653,
    40,
    v11);
  return 0;
}
