int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v1; // r5
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = bitmain_convert_V_to_N_calibration();
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "N before calibration %d, N after calibration %d", (int)(1280.57782 - v0 * 73.979365), v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    173,
    "bitmain_convert_V_to_N",
    22,
    746,
    20,
    v3);
  if ( v1 <= 0 )
  {
    switch ( dword_18C5F0 )
    {
      case 'A':
      case 'B':
        v1 = (int)(765.411764 - v0 * 35.833333);
        break;
      case 'C':
        v1 = (int)(933.240365 - v0 * 59.806034);
        break;
      case 'a':
        v1 = (int)(1144.50226 - v0 * 52.243589);
        break;
      case 'q':
      case 'r':
      case 'u':
        v1 = (int)(1190.93534 - v0 * 78.742588);
        break;
      case 's':
      case 'x':
        v1 = (int)(1280.57782 - v0 * 73.979365);
        break;
      case 't':
      case 'v':
        v1 = (int)(1156.10754 - v0 * 76.0904922);
        break;
      default:
        v1 = -1;
        break;
    }
  }
  return v1;
}
