int __fastcall set_hardware_type(int a1)
{
  int v4; // [sp+Ch] [bp+Ch] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    if ( platform_is_t9 )
      fpga_read(t9_fpga_map, &v4);
    else
      fpga_read(v9_fpga_map, &v4);
    if ( a1 )
    {
      if ( a1 == 1 )
        v4 |= 0x80000000;
    }
    else
    {
      v4 &= ~0x80000000;
    }
    if ( platform_is_t9 )
      fpga_write(t9_fpga_map, v4);
    else
      fpga_write(v9_fpga_map, v4);
    return 0;
  }
  else
  {
    printf("%s:%d", "set_hardware_type", 237);
    puts("platform not inited");
    return -2;
  }
}
