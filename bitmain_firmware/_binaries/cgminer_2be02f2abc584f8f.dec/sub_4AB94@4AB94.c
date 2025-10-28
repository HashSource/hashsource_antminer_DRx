int __fastcall sub_4AB94(int a1)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 == 1 )
    return 1;
  if ( a1 == 2 )
    return 2;
  if ( (unsigned int)(a1 - 3) <= 1 )
    return 4;
  if ( (unsigned int)(a1 - 5) <= 3 )
    return 8;
  if ( (unsigned int)(a1 - 9) <= 7 )
    return 16;
  if ( (unsigned int)(a1 - 17) <= 0xF )
    return 32;
  if ( (unsigned int)(a1 - 33) <= 0x1F )
    return 64;
  if ( (unsigned int)(a1 - 65) <= 0x3F )
    return 128;
  if ( !byte_75C09 )
    return -1;
  if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
    return -1;
  snprintf(v2, 0x800u, "actual_asic_number = %d, but it is error\n", a1);
  sub_3F1C0(7, v2, 0);
  return -1;
}
