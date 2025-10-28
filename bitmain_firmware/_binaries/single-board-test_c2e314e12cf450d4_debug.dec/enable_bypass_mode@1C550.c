int enable_bypass_mode()
{
  int v2; // [sp+4h] [bp+4h] BYREF

  v2 = 0;
  if ( platform_inited )
  {
    if ( platform_is_t9 )
      fpga_read(t9_fpga_map, &v2);
    else
      fpga_read(v9_fpga_map, &v2);
    v2 |= 0x20000000u;
    if ( platform_is_t9 )
      fpga_write(t9_fpga_map, v2);
    else
      fpga_write(v9_fpga_map, v2);
    return 0;
  }
  else
  {
    printf("%s:%d", "enable_bypass_mode", 260);
    puts("platform not inited");
    return -2;
  }
}
