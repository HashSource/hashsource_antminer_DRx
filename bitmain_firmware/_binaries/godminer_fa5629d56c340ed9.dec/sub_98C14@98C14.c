int __fastcall sub_98C14(int a1, int a2, int a3)
{
  _DWORD v6[2]; // [sp+30h] [bp-1030h] BYREF
  char v7; // [sp+38h] [bp-1028h]
  char v8; // [sp+39h] [bp-1027h]
  __int16 v9; // [sp+3Ah] [bp-1026h]
  int v10; // [sp+3Ch] [bp-1024h]
  _DWORD v11[7]; // [sp+40h] [bp-1020h] BYREF
  int v12; // [sp+5Ch] [bp-1004h]
  char v13[4096]; // [sp+60h] [bp-1000h] BYREF

  v7 = 0;
  v6[0] = (a3 << 16) | 2;
  v9 = 92;
  v10 = 0;
  v6[1] = 0;
  v8 = a2;
  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v13,
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
    "set uart relay, chip:%02x, %08x",
    a2,
    v6[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_uart_relay_KDA_2110",
    31,
    1081,
    40,
    v13);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v6);
}
