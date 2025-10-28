int wait4i2c_ready()
{
  unsigned int v3; // [sp+0h] [bp+0h] BYREF
  unsigned int v4; // [sp+4h] [bp+4h]

  v3 = 0;
  v4 = 0;
  do
  {
    if ( platform_is_t9 )
      fpga_read(dword_3557C, &v3);
    else
      fpga_read(dword_35810, &v3);
    if ( v3 >> 31 == 1 )
      return 1;
    usleep(0x1388u);
  }
  while ( v4++ <= 0x13 );
  return 0;
}
