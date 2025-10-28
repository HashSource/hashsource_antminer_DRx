void *machine_runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r8
  _DWORD v3[30]; // [sp+10h] [bp-1078h] BYREF
  char v4[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, 1363740);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v4);
  memset(&v3[4], 0, 0x64u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = 336016;
    v3[1] = 336020;
    v3[3] = 340300;
    v3[2] = 340104;
    v3[7] = 341196;
    v3[8] = 340588;
    v3[10] = 337916;
    v3[9] = 346728;
    v3[11] = 341228;
    v3[12] = 345024;
    v3[14] = 346720;
    v3[13] = 346508;
    v3[15] = 342584;
    v3[16] = 338408;
    v3[21] = 3000000;
    v3[20] = "tu_t_table";
    v3[24] = 1680;
    v3[29] = 1361660;
    memcpy(v0, v3, 0x78u);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1363776);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      179,
      "machine_runtime_ctrl_ltc_1489",
      29,
      71,
      40,
      v4);
  }
  else
  {
    printf(aInvalidPointer, 1361020);
  }
  return v1;
}
