int get_hardware_version()
{
  int v2; // [sp+4h] [bp+4h] BYREF

  v2 = 0;
  if ( platform_inited )
  {
    if ( platform_is_t9 )
      fpga_read(t9_fpga_map, &v2);
    else
      fpga_read(v9_fpga_map, &v2);
    return (unsigned __int16)v2;
  }
  else
  {
    printf("%s:%d", "get_hardware_version", 301);
    puts("platform not inited");
    return 0;
  }
}
