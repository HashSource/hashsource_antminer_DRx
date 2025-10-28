void sub_4ACB0()
{
  int v0; // r0
  int v1; // r4
  unsigned __int16 v2; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = sub_4AB94(54);
  v1 = v0;
  if ( v0 > 0 )
  {
    v2 = sub_59FB0(256, v0);
    word_93C7A = v2;
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, addrInterval = %d", "calculate_address_interval", v1, v2);
      sub_3F1C0(5, s, 0);
    }
    byte_75D9C = 10 * word_93C7A;
    byte_75D9D = 37 * word_93C7A;
    byte_75D9E = 0;
  }
  else
  {
    word_93C7A = 7;
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "%s: temp_asic_number = %d, set addrInterval = '%d'", "calculate_address_interval", v0, 7);
      sub_3F1C0(3, s, 0);
    }
  }
}
