void sub_3E19C()
{
  int v0; // r0
  char v1; // r0
  char v2; // r1
  char v3; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = sub_3E114(72);
  if ( v0 <= 0 )
  {
    word_74761 = 7;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, set addrInterval = '%d'", "calculate_address_interval", v0, 7);
      sub_343C4(3, s, 0);
    }
  }
  else
  {
    word_74761 = 1;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, addrInterval = %d", "calculate_address_interval", v0, 1);
      sub_343C4(5, s, 0);
      v1 = 17 * word_74761;
      v2 = 71 * word_74761;
      v3 = 53 * word_74761;
    }
    else
    {
      v2 = 71;
      v3 = 53;
      v1 = 17;
    }
    byte_6FB38 = v1;
    byte_6FB39 = v3;
    byte_6FB3B = v2;
    byte_6FB3A = 0;
  }
}
