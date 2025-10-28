int __fastcall set_voltage_MP2973(int a1)
{
  unsigned int v1; // r4
  _DWORD *all_created_runtime; // r10
  int v3; // r3
  unsigned int v4; // r11
  __int64 v5; // kr00_8
  int v6; // r9
  int v8; // [sp+0h] [bp-108Ch] BYREF
  int *v9; // [sp+28h] [bp-1064h]
  int v10; // [sp+2Ch] [bp-1060h]
  int v11; // [sp+30h] [bp-105Ch]
  char *s; // [sp+34h] [bp-1058h]
  int v13; // [sp+38h] [bp-1054h]
  const char *v14; // [sp+3Ch] [bp-1050h]
  int v15; // [sp+44h] [bp-1048h] BYREF
  _DWORD v16[7]; // [sp+48h] [bp-1044h] BYREF
  int v17; // [sp+64h] [bp-1028h]
  _DWORD v18[7]; // [sp+68h] [bp-1024h] BYREF
  int v19; // [sp+84h] [bp-1008h]
  char v20[4100]; // [sp+88h] [bp-1004h] BYREF

  v1 = a1 + 1150;
  all_created_runtime = get_all_created_runtime(&v15);
  V_LOCK();
  logfmt_raw(v20, 0x1000u, 0, "set all chain target voltage is %d mV", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_voltage_MP2973",
    18,
    29,
    40,
    v20);
  if ( v1 <= 0xA5A )
  {
    v3 = 2350;
    if ( v1 >= 0x92E )
      v3 = v1;
    v11 = v3;
  }
  else
  {
    v11 = 2650;
  }
  if ( v1 != v11 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "target voltage not in [%d %d], set to %d mV", 2350, 2650, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
      179,
      "set_voltage_MP2973",
      18,
      32,
      80,
      v20);
  }
  if ( v15 <= 0 )
    return 0;
  v4 = (unsigned __int16)v11;
  s = "chain";
  v14 = "set_chain_mps_voltage failed";
  v13 = 0;
  v5 = 0;
  do
  {
    v6 = 3;
    do
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(all_created_runtime[(_DWORD)v5] + 260), 0, v4, v4) )
      {
        v10 = 0;
        v9 = (int *)v5;
        V_LOCK();
        V_INT((int)v18, s, v5);
        logfmt_raw(
          v20,
          0x1000u,
          v10,
          v19,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v19,
          "set voltage to %d successfully",
          v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
          179,
          "set_voltage_MP2973",
          18,
          43,
          20,
          v20);
        goto LABEL_11;
      }
      V_LOCK();
      V_INT((int)v16, s, v5);
      v9 = &v8;
      logfmt_raw(v20, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        179,
        "set_voltage_MP2973",
        18,
        40,
        100,
        v20);
      --v6;
    }
    while ( v6 );
    v9 = (int *)v5;
    v13 = 19;
LABEL_11:
    ++v5;
  }
  while ( v15 > (int)v9 + 1 );
  return v13;
}
