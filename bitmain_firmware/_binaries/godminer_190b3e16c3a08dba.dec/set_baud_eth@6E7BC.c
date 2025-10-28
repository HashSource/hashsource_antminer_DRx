int __fastcall set_baud_eth(int a1, char *a2)
{
  int v4; // r9
  int v5; // r4
  _DWORD v7[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v8[7]; // [sp+38h] [bp-1044h] BYREF
  int v9; // [sp+54h] [bp-1028h]
  _DWORD v10[7]; // [sp+58h] [bp-1024h] BYREF
  int v11; // [sp+74h] [bp-1008h]
  char v12[4100]; // [sp+78h] [bp-1004h] BYREF

  if ( a2 == (char *)&loc_FE500 + 2 )
    goto LABEL_17;
  if ( (int)a2 > (int)((char *)&loc_FE500 + 2) )
  {
    if ( a2 == byte_17D784 )
      goto LABEL_18;
    if ( (int)a2 > (int)byte_17D784 )
    {
      if ( a2 == (char *)3000000 || a2 == (char *)3125000 )
      {
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == (char *)1500000 )
    {
LABEL_18:
      v4 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v4 = -65510;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v4 = -65530;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_E1000 )
  {
LABEL_17:
    v4 = -65534;
    goto LABEL_8;
  }
  if ( a2 != (char *)38400 )
    goto LABEL_10;
  v4 = -65456;
LABEL_8:
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 224));
  logfmt_raw(v12, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "set baudrate to %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_baud_eth",
    12,
    1139,
    60,
    v12);
  v7[2] = 3145729;
  v7[1] = 0;
  v7[0] = v4;
  v7[3] = 0;
  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_misc_ctrl_ETH",
    25,
    218,
    40,
    v12);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v7);
  usleep(0x2710u);
  return v5;
}
