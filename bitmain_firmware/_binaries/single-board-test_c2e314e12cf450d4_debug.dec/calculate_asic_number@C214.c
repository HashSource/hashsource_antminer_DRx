int __fastcall calculate_asic_number(unsigned int a1)
{
  if ( a1 == 1 )
    return 1;
  if ( a1 == 2 )
    return 2;
  if ( a1 > 2 && a1 <= 4 )
    return 4;
  if ( a1 > 4 && a1 <= 8 )
    return 8;
  if ( a1 > 8 && a1 <= 0x10 )
    return 16;
  if ( a1 > 0x10 && a1 <= 0x20 )
    return 32;
  if ( a1 > 0x20 && a1 <= 0x40 )
    return 64;
  if ( a1 > 0x40 && a1 <= 0x80 )
    return 128;
  printf("actual_asic_number = %d, but it is error\n", a1);
  return -1;
}
