int __fastcall sub_4D8F8(int a1, int a2)
{
  int v2; // r4
  _DWORD *all_created_runtime; // r11
  int v4; // r3
  __int64 v5; // kr00_8
  int v6; // r8
  int v8; // [sp+34h] [bp-1058h]
  int v9; // [sp+38h] [bp-1054h]
  int v10; // [sp+44h] [bp-1048h] BYREF
  _DWORD v11[7]; // [sp+48h] [bp-1044h] BYREF
  int v12; // [sp+64h] [bp-1028h]
  _DWORD v13[7]; // [sp+68h] [bp-1024h] BYREF
  int v14; // [sp+84h] [bp-1008h]
  char v15[4100]; // [sp+88h] [bp-1004h] BYREF

  v2 = a2 + 1150;
  all_created_runtime = get_all_created_runtime(&v10);
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "set all chain target voltage is %d mV", v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_voltage_zec",
    15,
    21,
    40,
    v15);
  if ( v2 > 2500 )
  {
    v8 = 2500;
LABEL_16:
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "target voltage not in [%d %d], set to %d mV", 2350, 2500, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
      179,
      "set_voltage_zec",
      15,
      24,
      80,
      v15);
    goto LABEL_5;
  }
  v4 = 2350;
  if ( v2 >= 2350 )
    v4 = v2;
  v8 = v4;
  if ( v2 <= 2349 )
    goto LABEL_16;
LABEL_5:
  if ( v10 <= 0 )
    return 0;
  v9 = 0;
  v5 = 0;
  do
  {
    v6 = 3;
    do
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(all_created_runtime[(_DWORD)v5] + 224), (unsigned __int16)v8) )
      {
        V_LOCK();
        V_INT((int)v13, "chain", v5);
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
          "set voltage to %d successfully",
          v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
          179,
          "set_voltage_zec",
          15,
          35,
          60,
          v15);
        goto LABEL_8;
      }
      V_LOCK();
      V_INT((int)v11, "chain", v5);
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "set_chain_mps_voltage failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        179,
        "set_voltage_zec",
        15,
        32,
        100,
        v15);
      --v6;
    }
    while ( v6 );
    v9 = 19;
LABEL_8:
    ++v5;
  }
  while ( v10 > (int)v5 );
  return v9;
}
