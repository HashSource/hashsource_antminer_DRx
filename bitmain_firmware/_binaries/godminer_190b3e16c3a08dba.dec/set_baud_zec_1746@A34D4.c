int __fastcall set_baud_zec_1746(int a1, char *a2)
{
  int v4; // r9
  int v5; // r4
  _DWORD v7[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v8[7]; // [sp+38h] [bp-1024h] BYREF
  int v9; // [sp+54h] [bp-1008h]
  char v10[4100]; // [sp+58h] [bp-1004h] BYREF

  if ( a2 != (char *)1500000 )
  {
    if ( (int)a2 <= 1500000 )
    {
      if ( a2 == (char *)&loc_70800 )
      {
        v4 = 26212;
        goto LABEL_9;
      }
      if ( (int)a2 <= 460800 )
      {
        if ( a2 == (char *)38400 )
        {
          v4 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
      {
        v4 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v4 = 31332;
      goto LABEL_9;
    }
    if ( a2 == (char *)3125000 )
      goto LABEL_22;
    if ( (int)a2 > 3125000 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_16;
LABEL_22:
      v4 = 24676;
      goto LABEL_9;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v4 = 24932;
LABEL_9:
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "set_misc value %08x/%d", v4, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "set_baud_zec_1746",
    17,
    775,
    60,
    v10);
  v7[2] = 1835009;
  v7[0] = v4;
  v7[3] = 0;
  v7[1] = 0;
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 224));
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "set misc ctrl %08x", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_misc_ctrl_ZEC_1746",
    30,
    218,
    40,
    v10);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v7);
  usleep(0x2710u);
  if ( v5 )
    return 36;
  else
    return 0;
}
