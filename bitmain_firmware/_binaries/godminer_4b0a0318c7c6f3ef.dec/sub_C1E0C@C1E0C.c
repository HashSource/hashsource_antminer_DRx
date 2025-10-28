unsigned int __fastcall sub_C1E0C(int a1)
{
  unsigned int result; // r0
  unsigned int v2; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v4[4100]; // [sp+818h] [bp-1004h] BYREF

  v2 = 0;
  switch ( a1 )
  {
    case 0:
      fpga_read(496, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 1:
      fpga_read(496, &v2);
      result = v2 & 0x3FF;
      break;
    case 2:
      fpga_read(500, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 3:
      fpga_read(500, &v2);
      result = v2 & 0x3FF;
      break;
    case 4:
      fpga_read(504, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 5:
      fpga_read(504, &v2);
      result = v2 & 0x3FF;
      break;
    case 6:
      fpga_read(508, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 7:
      fpga_read(508, &v2);
      result = v2 & 0x3FF;
      break;
    case 8:
      fpga_read(512, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 9:
      fpga_read(512, &v2);
      result = v2 & 0x3FF;
      break;
    case 10:
      fpga_read(516, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 11:
      fpga_read(516, &v2);
      result = v2 & 0x3FF;
      break;
    case 12:
      fpga_read(520, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 13:
      fpga_read(520, &v2);
      result = v2 & 0x3FF;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!", "check_how_many_uart_data_in_fpga", a1);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
        172,
        "check_how_many_uart_data_in_fpga",
        32,
        275,
        100,
        v4);
      result = 0;
      break;
  }
  return result;
}
