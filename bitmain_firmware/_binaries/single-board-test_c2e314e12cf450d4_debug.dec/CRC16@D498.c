int __fastcall CRC16(char *a1, int a2)
{
  char v2; // r3
  unsigned __int16 i; // [sp+Eh] [bp+Eh]

  for ( i = -1; a2-- != 0; i = crc_itu_t_byte(i, v2) )
    v2 = *a1++;
  return i;
}
