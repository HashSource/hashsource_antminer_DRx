int __fastcall sub_6CF40(char *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v4; // r7
  int result; // r0
  int v10; // r3
  int v11; // r2
  char v12; // [sp+17h] [bp-1005h] BYREF
  char v13[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = a4;
  *a3 = 0;
  *a2 = -64;
  if ( pic1704_write_iic(*a1, a4) )
  {
    usleep(0x2710u);
    result = pic1704_read_iic(*a1, v4, &v12);
    if ( result )
    {
      v10 = v12;
      *a3 = 1;
      *a2 = v10 + 15;
      return result;
    }
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "fail to read pic temp for chain %d iic_addr %d", *(_DWORD *)a1, a4);
    V_UNLOCK();
    v11 = 1021;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "pic temp write iic error! chain %d iic_addr %d", *(_DWORD *)a1, a4);
    V_UNLOCK();
    v11 = 1010;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_read_sensor_temp_remote_on_pic_DCR_1727",
    51,
    v11,
    20,
    v13);
  return 0;
}
