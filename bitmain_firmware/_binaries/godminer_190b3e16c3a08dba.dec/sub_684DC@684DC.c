int __fastcall sub_684DC(unsigned int *a1, unsigned __int8 *a2, _DWORD *a3, _DWORD *a4, unsigned __int8 a5)
{
  int result; // r0
  int v10; // r3
  _BYTE v11[4]; // [sp+14h] [bp-1004h] BYREF
  char v12[4072]; // [sp+18h] [bp-1000h] BYREF

  *a4 = 0;
  result = tsensor_read(*a1, a5, 0, (int)v11, 2u);
  if ( result == 2 )
  {
    v10 = v11[0];
    *a4 = 1;
    *a3 = v10 + *a2;
  }
  else
  {
    *a3 = -64;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_DASH_1766",
      58,
      1061,
      80,
      v12);
    return -1;
  }
  return result;
}
