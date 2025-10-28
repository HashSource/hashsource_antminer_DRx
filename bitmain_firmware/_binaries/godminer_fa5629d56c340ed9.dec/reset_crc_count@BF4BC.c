int __fastcall reset_crc_count(int a1)
{
  if ( a1 )
    return fpga_write(248, 0x80000000);
  else
    return fpga_write(248, 0);
}
