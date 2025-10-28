int __fastcall sub_4ADC4(int a1)
{
  double v1; // d0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  *(_BYTE *)(a1 + 67) = 0;
  if ( sub_4AB98(a1) || (sub_4A800(), v1 >= 9.0) )
  {
    sub_4A710((_BYTE *)(a1 + 67));
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      sub_4A800();
      snprintf(s, 0x800u, "%s, power power tuning OK! hash board avg voltage is %fV\n", "power_power_tuning", v1);
      sub_3F178(5, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(s, 0x800u, "%s, hash board avg voltage is %fV, power abnormal...\n", "power_power_tuning", v1);
    sub_3F178(3, s, 0);
    return -9;
  }
  else
  {
    return -9;
  }
}
