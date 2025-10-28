int get_hardware_type()
{
  int v2; // [sp+4h] [bp+4h] BYREF

  v2 = 0;
  if ( platform_inited )
  {
    if ( platform_is_t9 )
      fpga_read(t9_fpga_map, &v2);
    else
      fpga_read(v9_fpga_map, &v2);
    return v2 < 0;
  }
  else
  {
    printf("%s:%d", "get_hardware_type", 222);
    puts("platform not inited");
    return 2;
  }
}
