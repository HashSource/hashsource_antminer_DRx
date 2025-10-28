int __fastcall sub_6B2BC(int *a1, int a2)
{
  int v4; // r2
  int (__fastcall *v5)(int *, _DWORD *); // r3
  int v6; // r4
  int v8; // [sp+2Ch] [bp-1038h]
  _DWORD v9[2]; // [sp+30h] [bp-1034h] BYREF
  int v10; // [sp+38h] [bp-102Ch]
  int v11; // [sp+3Ch] [bp-1028h]
  _DWORD v12[7]; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+5Ch] [bp-1008h]
  char v14[4100]; // [sp+60h] [bp-1004h] BYREF

  v9[1] = 0;
  v10 = 0;
  v11 = 0;
  v9[0] = 0;
  V_LOCK();
  V_INT((int)v12, "chain", a1[65]);
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "set core ticket mask reg %02x tm %02x",
    3,
    a2,
    v8,
    0,
    0,
    0,
    0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_core_ticket_mask_CKB_2042",
    37,
    239,
    40,
    v14);
  v4 = a1[90];
  LOBYTE(v11) = -1;
  BYTE1(v11) = v4;
  v10 = 196609;
  BYTE2(v11) = 1;
  v5 = (int (__fastcall *)(int *, _DWORD *))a1[71];
  v9[0] = a2;
  v6 = v5(a1, v9);
  usleep(0x3E8u);
  a1[114] = a2;
  return v6;
}
