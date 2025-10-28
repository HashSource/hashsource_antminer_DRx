int __fastcall power_check_reply(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  unsigned __int16 v7; // [sp+12h] [bp+12h]
  unsigned __int16 k; // [sp+14h] [bp+14h]
  unsigned __int16 i; // [sp+14h] [bp+14h]
  unsigned __int16 j; // [sp+14h] [bp+14h]
  unsigned __int16 v11; // [sp+16h] [bp+16h]

  v11 = 0;
  if ( *a1 == *a2 && a1[1] == a2[1] && a1[3] == a2[3] && a2[2] + 2 == a3 )
  {
    for ( i = 2; i < a3 - 2; ++i )
      v11 += a2[i];
    v7 = (a2[a3 - 1] << 8) + a2[a3 - 2];
    if ( v11 == v7 )
      return 1;
    printf("power reply crc error, crc %04x != crc_reply %04x:\n", v11, v7);
    for ( j = 0; j < (unsigned int)a3; ++j )
      printf("%02x ", a2[j]);
  }
  else
  {
    puts("power reply data error:");
    for ( k = 0; k < (unsigned int)a3; ++k )
      printf("%02x ", a2[k]);
  }
  putchar(10);
  return 0;
}
