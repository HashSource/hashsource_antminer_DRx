void *machine_runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r8
  _DWORD v3[30]; // [sp+10h] [bp-1078h] BYREF
  char v4[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, 1369364);
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
    v3[0] = 337376;
    v3[1] = 337380;
    v3[3] = 342408;
    v3[2] = 342040;
    v3[7] = 343304;
    v3[8] = 342696;
    v3[10] = 339852;
    v3[9] = 348892;
    v3[11] = 343336;
    v3[12] = 347160;
    v3[14] = 348884;
    v3[13] = 348672;
    v3[15] = 344720;
    v3[16] = 340344;
    v3[21] = 3000000;
    v3[20] = "l";
    v3[24] = 1680;
    v3[29] = 1367284;
    memcpy(v0, v3, 0x78u);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1369400);
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
    printf(aInvalidPointer, 1366644);
  }
  return v1;
}
