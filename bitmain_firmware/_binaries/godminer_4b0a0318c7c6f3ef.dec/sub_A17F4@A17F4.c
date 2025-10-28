int __fastcall sub_A17F4(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v8; // r3
  int v10; // [sp+34h] [bp-1030h]
  _BYTE v11[4]; // [sp+3Ch] [bp-1028h] BYREF
  _DWORD v12[7]; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+5Ch] [bp-1008h]
  char v14[4100]; // [sp+60h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "%s chain[%d] iic_addr:%d",
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1489",
    *(_DWORD *)(a1 + 256),
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/./backend/chip_setting.c",
    152,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1489",
    56,
    1398,
    20,
    v14);
  *a3 = 0;
  v10 = tsensor_read(*(_DWORD *)(a1 + 256), a4, 0, (int)v11, 2u);
  if ( v10 == 2 )
  {
    v8 = v11[0];
    *a3 = 1;
    *a2 = v8;
    V_LOCK();
    V_INT((int)v12, "chain", *(int *)(a1 + 256));
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
      "read ctrlboard temp, local[%02x] %d",
      a4,
      *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/./backend/chip_setting.c",
      152,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1489",
      56,
      1410,
      20,
      v14);
  }
  else
  {
    *a2 = -64;
    v10 = -1;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *(_DWORD *)(a1 + 256));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/./backend/chip_setting.c",
      152,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1489",
      56,
      1405,
      80,
      v14);
  }
  return v10;
}
