int __fastcall fan_get_realtime_speed(int a1)
{
  unsigned int v4; // [sp+8h] [bp+8h] BYREF
  int i; // [sp+Ch] [bp+Ch]

  v4 = 0;
  for ( i = 0; i <= 5; ++i )
  {
    if ( platform_is_t9 )
      fpga_read(dword_35554, &v4);
    else
      fpga_read(dword_357E8, &v4);
    printf("%s:%d", "fan_get_realtime_speed", 32);
    printf("FAN_SPEED fpga value = 0x%x\n", v4);
    if ( ((v4 >> 8) & 7) == a1 )
      return 120 * (unsigned __int8)v4;
    usleep(0x2710u);
  }
  return -1;
}
