void sub_4D748()
{
  int v0; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v0 = sub_4D62C(72);
  if ( v0 > 0 )
  {
    *(_DWORD *)((char *)&word_B4383 + 1) = *(_DWORD *)((_BYTE *)&word_B4383 + 1) & 0xFF0000FF | 0x100;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, addrInterval = %d", "calculate_address_interval", v0, 1);
      sub_3F178(5, s, 0);
    }
    byte_7CE54 = 17 * word_B4385;
    byte_7CE55 = 53 * word_B4385;
    byte_7CE56 = 0;
    byte_7CE57 = 71 * word_B4385;
  }
  else
  {
    *(_DWORD *)((char *)&word_B4383 + 1) = *(_DWORD *)((_BYTE *)&word_B4383 + 1) & 0xFF0000FF | 0x700;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, set addrInterval = '%d'", "calculate_address_interval", v0, 7);
      sub_3F178(3, s, 0);
    }
  }
}
