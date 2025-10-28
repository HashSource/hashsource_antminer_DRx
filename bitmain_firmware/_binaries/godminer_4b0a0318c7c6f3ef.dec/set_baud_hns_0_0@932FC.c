int __fastcall set_baud_hns_0_0(int a1, int a2)
{
  int v4; // r4
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r4
  _DWORD v11[4]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v12[7]; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+5Ch] [bp-1008h]
  char v14[4100]; // [sp+60h] [bp-1004h] BYREF

  v11[2] = 6291457;
  v11[1] = 0;
  v11[3] = 0;
  v11[0] = 0;
  if ( (char *)a2 == "s PHY core %02x macro0 rx is invalid!" )
    goto LABEL_24;
  if ( a2 <= (int)"s PHY core %02x macro0 rx is invalid!" )
  {
    if ( a2 == 460800 )
    {
      v4 = 1536;
      goto LABEL_10;
    }
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 512;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v4 = 20480;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v4 = 0;
    goto LABEL_10;
  }
  if ( a2 <= 3125000 )
  {
    if ( (char *)a2 != byte_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v4 = 256;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v4 = 257;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v4 = 6656;
    goto LABEL_10;
  }
  v4 = 1;
LABEL_9:
  (*(void (__fastcall **)(int, int))(a1 + 192))(a1, 1);
LABEL_10:
  v11[0] = v4;
  V_LOCK();
  LOWORD(v5) = 27372;
  HIWORD(v5) = (unsigned int)":" >> 16;
  V_INT((int)v12, v5, *(int *)(a1 + 256));
  LOWORD(v6) = -21540;
  HIWORD(v6) = (unsigned int)"_remote_on_ctrlboard_DASH_1766" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v6, v11[0], a2);
  V_UNLOCK();
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v8) = -23880;
  HIWORD(v8) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v7, v8, 150, "ChipSetting_fuart_cfg_KAS_2380", 30, 584, 40, v14);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v11);
  usleep(0x2710u);
  return v9;
}
