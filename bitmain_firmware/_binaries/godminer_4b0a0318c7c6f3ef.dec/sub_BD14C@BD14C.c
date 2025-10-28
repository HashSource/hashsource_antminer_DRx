int __fastcall sub_BD14C(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  fpga_write(192, a1);
  if ( a1 >= 0 )
    return fpga_read(192, &v4);
  v2 = 3001;
  while ( 1 )
  {
    fpga_read(192, &v4);
    result = 1000;
    if ( v4 >= 0 )
      break;
    usleep(0x3E8u);
    if ( !--v2 )
      return sub_BD0B0();
  }
  return result;
}
