int __fastcall sub_B9044(int a1, int a2)
{
  int result; // r0
  _DWORD v5[4]; // [sp+10h] [bp-1010h] BYREF
  char v6[4096]; // [sp+20h] [bp-1000h] BYREF

  v5[1] = 0;
  v5[3] = 0;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "set ticket mask reg %02x tm %d", 20, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_ticket_mask_ZEC_1746",
    32,
    222,
    20,
    v6);
  v5[2] = 1310721;
  v5[0] = a2;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v5);
  *(_DWORD *)(a1 + 456) = a2;
  return result;
}
