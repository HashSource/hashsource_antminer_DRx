void __fastcall __noreturn dram_bist_rvn(int a1)
{
  _DWORD v2[4]; // [sp+30h] [bp-1124h] BYREF
  int v3; // [sp+40h] [bp-1114h] BYREF
  int v4; // [sp+44h] [bp-1110h]
  int v5; // [sp+48h] [bp-110Ch]
  int v6; // [sp+4Ch] [bp-1108h]
  int v7; // [sp+50h] [bp-1104h]
  int v8; // [sp+54h] [bp-1100h]
  int v9; // [sp+58h] [bp-10FCh]
  int v10; // [sp+5Ch] [bp-10F8h]
  _DWORD v11[7]; // [sp+60h] [bp-10F4h] BYREF
  int v12; // [sp+7Ch] [bp-10D8h]
  _BYTE s[208]; // [sp+80h] [bp-10D4h] BYREF
  char v14[4100]; // [sp+150h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s...", "dram_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dram_bist_rvn",
    13,
    3330,
    40,
    v14);
  sub_A592C(a1, 9699344);
  v3 = -58331;
  v5 = 6356993;
  v6 = 0;
  v4 = 0;
  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "set bist err num threshold %08x",
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bist_threshold_set_rvn_RVN",
    38,
    302,
    40,
    v14);
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v3);
  usleep(0x2710u);
  v2[1] = 0;
  v2[2] = 6553601;
  v2[3] = 0;
  v2[0] = 1100;
  V_LOCK();
  V_INT((int)&v3, "chain", *(int *)(a1 + 260));
  logfmt_raw(v14, 0x1000u, 0, v10, v3, v4, v5, v6, v7, v8, v9, v10, "set retin on %08x", 1100);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_retin_on_rvn_RVN",
    28,
    316,
    40,
    v14);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v2);
  usleep(0x2710u);
  dram_pre_bist0_rvn(a1, 0);
  dram_pre_bist1_rvn(a1, 0);
  dram_bist_check_and_repair_rvn(a1, 0, 0);
}
