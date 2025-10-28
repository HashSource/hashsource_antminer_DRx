int __fastcall sub_4AF00(int a1)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%s, quickly setting to working voltage...\n", "power_quickly_set_to_working_voltage");
    sub_3F178(5, s, 0);
  }
  if ( !*(_BYTE *)(a1 + 67) )
    return sub_4ADC4(a1);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s, iic data set to %d\n",
      "power_quickly_set_to_working_voltage",
      *(unsigned __int8 *)(a1 + 67));
    sub_3F178(5, s, 0);
  }
  sub_4A73C(*(unsigned __int8 *)(a1 + 67));
  return 0;
}
