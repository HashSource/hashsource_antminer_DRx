int __fastcall chain_reset_high(char a1)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  v3 = 0;
  if ( platform_is_t9 )
    fpga_read(dword_35580, &v3);
  else
    fpga_read(dword_35814, &v3);
  v3 &= ~(1 << a1);
  if ( platform_is_t9 )
    return fpga_write(dword_35580, v3);
  else
    return fpga_write(dword_35814, v3);
}
