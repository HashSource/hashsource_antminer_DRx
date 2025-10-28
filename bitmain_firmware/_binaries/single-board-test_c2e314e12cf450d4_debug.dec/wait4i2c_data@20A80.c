int __fastcall wait4i2c_data(_BYTE *a1)
{
  unsigned int v5; // [sp+8h] [bp+8h] BYREF
  unsigned int v6; // [sp+Ch] [bp+Ch]

  v5 = 0;
  v6 = 0;
  do
  {
    if ( platform_is_t9 )
      fpga_read(dword_3557C, &v5);
    else
      fpga_read(dword_35810, &v5);
    if ( v5 >> 31 == 1 )
    {
      *a1 = v5;
      return 1;
    }
    usleep(0x1388u);
  }
  while ( v6++ <= 0x13 );
  return 0;
}
