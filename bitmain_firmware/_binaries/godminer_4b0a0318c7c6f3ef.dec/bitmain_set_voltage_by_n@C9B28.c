int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B45FC )
    return sub_C8DF0((void *)dword_1B45F8, a1);
  v2 = sub_C91DC();
  if ( v2 >= 0 )
    return sub_C8DF0((void *)dword_1B45F8, a1);
  LOWORD(v4) = 30548;
  HIWORD(v4) = (unsigned int)"%d, slave: %d, addr: %d" >> 16;
  snprintf(s, 0x800u, v4, "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 30196;
  HIWORD(v6) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
  zlog(*v5, v6, 173, "bitmain_set_voltage_by_n", 24, 730, 100, v8);
  return v2;
}
