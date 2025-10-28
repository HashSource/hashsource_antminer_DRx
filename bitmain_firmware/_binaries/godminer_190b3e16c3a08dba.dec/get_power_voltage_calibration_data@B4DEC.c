int get_power_voltage_calibration_data()
{
  int v0; // r0
  unsigned __int16 *v1; // r4
  double *v2; // r6
  unsigned __int8 *v3; // r5
  int v4; // r1
  double v5; // d7
  _BYTE v7[30]; // [sp+10h] [bp-20h] BYREF
  unsigned __int16 v8; // [sp+2Eh] [bp-2h] BYREF
  char v9[4100]; // [sp+30h] [bp+0h] BYREF

  bitmain_power_read(64, (int)v7, 32);
  v8 = HIBYTE(v8) | (v8 << 8);
  v0 = POWER_CRC16((int)v7, 30);
  if ( v8 == v0 )
  {
    v1 = (unsigned __int16 *)v7;
    v2 = (double *)&unk_18C608;
    v3 = &algn_18C5F4[3];
    dword_18C658 = 0;
    do
    {
      v4 = *(unsigned __int8 *)v1;
      v1 = (unsigned __int16 *)((char *)v1 + 3);
      if ( !v4 && !*((_BYTE *)v1 - 2) && !*((_BYTE *)v1 - 1) )
        break;
      *v2 = (double)(*((unsigned __int8 *)v1 - 1) | ((unsigned __int8)(*(_BYTE *)(v1 - 1) & 3) << 8)) / 1000.0
          + (double)(*((unsigned __int8 *)v1 - 2) >> 2);
      *++v3 = v4;
      ++dword_18C658;
      V_LOCK();
      v5 = *v2++;
      logfmt_raw(v9, 0x1000u, 0, "vol %f N %d", v5, *v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "get_power_voltage_calibration_data",
        34,
        908,
        40,
        v9);
    }
    while ( v1 != &v8 );
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s error!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "get_power_voltage_calibration_data",
      34,
      891,
      100,
      v9);
    return -1;
  }
}
