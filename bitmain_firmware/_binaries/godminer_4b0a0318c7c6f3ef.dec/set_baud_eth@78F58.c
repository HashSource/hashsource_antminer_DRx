int __fastcall set_baud_eth(int a1, char *a2)
{
  int v4; // r9
  char *v5; // r1
  int v6; // r7
  _DWORD *v7; // r6
  int v8; // r1
  char *v9; // r1
  int v10; // r1
  int v11; // r4
  _DWORD v13[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v14[7]; // [sp+38h] [bp-1044h] BYREF
  int v15; // [sp+54h] [bp-1028h]
  _DWORD v16[7]; // [sp+58h] [bp-1024h] BYREF
  int v17; // [sp+74h] [bp-1008h]
  char v18[4100]; // [sp+78h] [bp-1004h] BYREF

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
    if ( a2 == "s PHY core %02x macro0 rx is invalid!" )
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
  LOWORD(v5) = 27372;
  HIWORD(v5) = (unsigned int)":" >> 16;
  LOWORD(v6) = -14264;
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v14, v5, *(int *)(a1 + 256));
  HIWORD(v6) = (unsigned int)"err: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v6, a2);
  V_UNLOCK();
  LOWORD(v8) = -14448;
  HIWORD(v8) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v7, v8, 171, "set_baud_eth", 12, 1285, 60, v18);
  v13[2] = 3145729;
  v13[1] = 0;
  v13[0] = v4;
  v13[3] = 0;
  V_LOCK();
  LOWORD(v9) = 27372;
  HIWORD(v9) = (unsigned int)":" >> 16;
  V_INT((int)v16, v9, *(int *)(a1 + 256));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  LOWORD(v10) = -23880;
  HIWORD(v10) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v7, v10, 150, "ChipSetting_misc_ctrl_ETH", 25, 286, 40, v18);
  v11 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v13);
  usleep(0x2710u);
  return v11;
}
