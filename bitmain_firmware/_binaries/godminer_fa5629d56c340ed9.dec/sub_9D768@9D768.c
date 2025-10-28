int __fastcall sub_9D768(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v7; // r6
  int result; // r0
  int v9; // r2
  int v10; // [sp+28h] [bp-1028h] BYREF
  int v11; // [sp+2Ch] [bp-1024h] BYREF
  _DWORD v12[7]; // [sp+30h] [bp-1020h] BYREF
  int v13; // [sp+4Ch] [bp-1004h]
  char v14[4096]; // [sp+50h] [bp-1000h] BYREF

  *a3 = 0;
  *a2 = -64;
  v7 = sub_9D654(a1, a4, 256, &v10, &v11);
  V_LOCK();
  V_INT((int)v12, "chain", (int)a1[65]);
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
    "remote status: %08x\n",
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_read_sensor_temp_remote_KS5_2382",
    44,
    1329,
    20,
    v14);
  result = v7;
  if ( v7 == 1 )
  {
    v9 = v11;
    *a2 = HIBYTE(v10) - 64;
    *a3 = v9;
  }
  return result;
}
