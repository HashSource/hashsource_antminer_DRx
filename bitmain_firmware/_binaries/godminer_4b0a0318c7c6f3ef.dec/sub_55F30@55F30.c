int __fastcall sub_55F30(int a1)
{
  unsigned int v1; // r4
  _DWORD *all_created_runtime; // r11
  int v3; // r3
  __int64 v4; // kr00_8
  int v5; // r8
  int v7; // [sp+2Ch] [bp-1060h]
  int v8; // [sp+38h] [bp-1054h]
  int v9; // [sp+44h] [bp-1048h] BYREF
  _DWORD v10[7]; // [sp+48h] [bp-1044h] BYREF
  int v11; // [sp+64h] [bp-1028h]
  _DWORD v12[7]; // [sp+68h] [bp-1024h] BYREF
  int v13; // [sp+84h] [bp-1008h]
  char v14[4100]; // [sp+88h] [bp-1004h] BYREF

  v1 = a1 + 1150;
  all_created_runtime = get_all_created_runtime(&v9);
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "set all chain target voltage is %d mV", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_voltage_MP2973",
    18,
    45,
    40,
    v14);
  if ( v1 <= 0xA5A )
  {
    v3 = 2350;
    if ( v1 >= 0x92E )
      v3 = v1;
    v7 = v3;
  }
  else
  {
    v7 = 2650;
  }
  if ( v1 != v7 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "target voltage not in [%d %d], set to %d mV", 2350, 2650, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
      179,
      "set_voltage_MP2973",
      18,
      48,
      80,
      v14);
  }
  if ( v9 <= 0 )
    return 0;
  v8 = 0;
  v4 = 0;
  do
  {
    v5 = 3;
    do
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(all_created_runtime[(_DWORD)v4] + 256), (unsigned __int16)v7) )
      {
        V_LOCK();
        V_INT((int)v12, "chain", v4);
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
          "set voltage to %d successfully",
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
          179,
          "set_voltage_MP2973",
          18,
          59,
          20,
          v14);
        goto LABEL_11;
      }
      V_LOCK();
      V_INT((int)v10, "chain", v4);
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v11,
        v10[0],
        v10[1],
        v10[2],
        v10[3],
        v10[4],
        v10[5],
        v10[6],
        v11,
        "set_chain_mps_voltage failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        179,
        "set_voltage_MP2973",
        18,
        56,
        100,
        v14);
      --v5;
    }
    while ( v5 );
    v8 = 19;
LABEL_11:
    ++v4;
  }
  while ( v9 > (int)v4 );
  return v8;
}
