int __fastcall chip_setting_misc_ltc(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD v8[2]; // [sp+10h] [bp-1014h] BYREF
  char v9; // [sp+18h] [bp-100Ch]
  char v10; // [sp+19h] [bp-100Bh]
  __int16 v11; // [sp+1Ah] [bp-100Ah]
  int v12; // [sp+1Ch] [bp-1008h]
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v10 = 0;
  v12 = 0;
  v8[1] = 0;
  v9 = 1;
  v11 = 24;
  if ( (char *)a2 == "s PHY core %02x macro0 rx is invalid!" )
    goto LABEL_21;
  if ( a2 > (int)"s PHY core %02x macro0 rx is invalid!" )
  {
    if ( a2 == 3125000 )
      goto LABEL_19;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( (char *)a2 != byte_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_13;
LABEL_19:
      v4 = 117465329;
      goto LABEL_8;
    }
LABEL_21:
    v4 = 117465585;
    goto LABEL_8;
  }
  if ( a2 == 460800 )
  {
    v4 = 117466865;
    goto LABEL_8;
  }
  if ( a2 > 460800 )
  {
    if ( a2 == 921600 || (_UNKNOWN *)a2 == (_UNKNOWN *)((char *)&loc_FE500 + 2) )
    {
      v4 = 117465841;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != 38400 )
  {
LABEL_13:
    v4 = 117471985;
    goto LABEL_8;
  }
  v4 = 117469425;
LABEL_8:
  v8[0] = v4;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set_misc value %08x/%d", v8[0], a2);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 4072;
  HIWORD(v6) = (unsigned int)"VN" >> 16;
  zlog(*v5, v6, 176, "chip_setting_misc_ltc", 21, 98, 60, v13);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v8);
}
