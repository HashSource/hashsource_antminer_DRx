bool is_bypass_mode_enable()
{
  int v2; // [sp+4h] [bp+4h] BYREF

  v2 = 0;
  if ( platform_inited )
  {
    if ( platform_is_t9 )
      fpga_read(t9_fpga_map, &v2);
    else
      fpga_read(v9_fpga_map, &v2);
    v2 &= 0x20000000u;
    return v2 != 0;
  }
  else
  {
    printf("%s:%d", "is_bypass_mode_enable", 288);
    puts("platform not inited");
    return 0;
  }
}
