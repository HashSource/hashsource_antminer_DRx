int __fastcall fan_get_check_fan_speed(int a1)
{
  int v1; // r4
  int v2; // r3
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = 90 * a1;
  V_LOCK();
  LOWORD(v2) = 29268;
  HIWORD(v2) = (unsigned int)"ort power version, %04x" >> 16;
  v1 /= 110;
  logfmt_raw(v7, 0x1000u, 0, v2, v1);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  v4 = *v3;
  LOWORD(v3) = 29244;
  LOWORD(v5) = 29296;
  HIWORD(v3) = (unsigned int)"e power!" >> 16;
  HIWORD(v5) = (unsigned int)"ble power watchdog: %04x" >> 16;
  zlog(v4, v5, 160, v3, 23, 33, 20, v7);
  return v1;
}
