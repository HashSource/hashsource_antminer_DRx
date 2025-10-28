int __fastcall chip_setting_misc_ltc(int a1, char *a2)
{
  int v4; // r3
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  char v7; // [sp+18h] [bp-100Ch]
  char v8; // [sp+19h] [bp-100Bh]
  __int16 v9; // [sp+1Ah] [bp-100Ah]
  int v10; // [sp+1Ch] [bp-1008h]
  char v11[4100]; // [sp+20h] [bp-1004h] BYREF

  v8 = 0;
  v10 = 0;
  v6[1] = 0;
  v7 = 1;
  v9 = 24;
  if ( a2 == (char *)1500000 )
    goto LABEL_21;
  if ( (int)a2 > 1500000 )
  {
    if ( a2 == (char *)3125000 )
      goto LABEL_19;
    if ( (int)a2 > 3125000 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_13;
LABEL_19:
      v4 = 117465329;
      goto LABEL_8;
    }
LABEL_21:
    v4 = 117465585;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v4 = 117466865;
    goto LABEL_8;
  }
  if ( (int)a2 > 460800 )
  {
    if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
    {
      v4 = 117465841;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != (char *)38400 )
  {
LABEL_13:
    v4 = 117471985;
    goto LABEL_8;
  }
  v4 = 117469425;
LABEL_8:
  v6[0] = v4;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "set_misc value %08x/%d", v6[0], a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_misc_ltc",
    21,
    98,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v6);
}
