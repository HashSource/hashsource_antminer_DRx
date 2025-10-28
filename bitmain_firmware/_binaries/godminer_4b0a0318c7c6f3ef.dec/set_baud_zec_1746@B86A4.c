int __fastcall set_baud_zec_1746(int a1, int a2)
{
  int v4; // r9
  _DWORD *v5; // r6
  int v6; // r3
  int v7; // r1
  char *v8; // r1
  int v9; // r1
  int v10; // r4
  _DWORD v12[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v13[7]; // [sp+38h] [bp-1024h] BYREF
  int v14; // [sp+54h] [bp-1008h]
  char v15[4100]; // [sp+58h] [bp-1004h] BYREF

  if ( (char *)a2 != "s PHY core %02x macro0 rx is invalid!" )
  {
    if ( a2 <= (int)"s PHY core %02x macro0 rx is invalid!" )
    {
      if ( a2 == 460800 )
      {
        v4 = 26212;
        goto LABEL_9;
      }
      if ( a2 <= 460800 )
      {
        if ( a2 == 38400 )
        {
          v4 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v4 = 31332;
      goto LABEL_9;
    }
    if ( a2 == 3125000 )
      goto LABEL_22;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_16;
LABEL_22:
      v4 = 24676;
      goto LABEL_9;
    }
    if ( (char *)a2 != byte_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v4 = 24932;
LABEL_9:
  LOWORD(v5) = 20532;
  V_LOCK();
  LOWORD(v6) = 4252;
  HIWORD(v6) = (unsigned int)"ops_rvn" >> 16;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v15, 0x1000u, 0, v6, v4, a2);
  V_UNLOCK();
  LOWORD(v7) = 18512;
  HIWORD(v7) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  zlog(*v5, v7, 171, "set_baud_zec_1746", 17, 776, 60, v15);
  v12[2] = 1835009;
  v12[0] = v4;
  v12[3] = 0;
  v12[1] = 0;
  V_LOCK();
  LOWORD(v8) = 27372;
  HIWORD(v8) = (unsigned int)":" >> 16;
  V_INT((int)v13, v8, *(int *)(a1 + 256));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  LOWORD(v9) = -23880;
  HIWORD(v9) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v5, v9, 150, "ChipSetting_misc_ctrl_ZEC_1746", 30, 286, 40, v15);
  v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v12);
  usleep(0x2710u);
  if ( v10 )
    return 47;
  else
    return 0;
}
