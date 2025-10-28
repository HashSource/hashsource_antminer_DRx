int machine_info_init()
{
  _DWORD *v0; // r4
  int v1; // r3
  int v2; // r1
  int v3; // r0
  int v4; // r3
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v0) = 20532;
  HIWORD(v0) = (unsigned int)&g_fan_zc >> 16;
  V_LOCK();
  LOWORD(v1) = -10844;
  HIWORD(v1) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v1);
  V_UNLOCK();
  LOWORD(v2) = -11848;
  HIWORD(v2) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  zlog(*v0, v2, 166, "machine_info_init", 17, 925, 60, v7);
  v3 = platform_topol_init();
  if ( v3 )
    exit(v3);
  V_LOCK();
  LOWORD(v4) = -10824;
  HIWORD(v4) = (unsigned int)"ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_interface.c" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v4);
  V_UNLOCK();
  LOWORD(v5) = -11848;
  HIWORD(v5) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  zlog(*v0, v5, 166, "machine_info_init", 17, 929, 60, v7);
  return 0;
}
