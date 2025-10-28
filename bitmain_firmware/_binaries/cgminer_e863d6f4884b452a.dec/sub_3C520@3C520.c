int __fastcall sub_3C520(int a1)
{
  double v1; // d0
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  *(_BYTE *)(a1 + 67) = 0;
  if ( sub_3C378(a1) || (sub_3C020(), v1 >= 9.0) )
  {
    sub_3BF54((_BYTE *)(a1 + 67));
    if ( byte_73320 || (result = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 4 )
    {
      sub_3C020();
      snprintf(s, 0x800u, "%s, power power tuning OK! hash board avg voltage is %fV\n", "power_power_tuning", v1);
      sub_343C4(5, s, 0);
      return 0;
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "%s, hash board avg voltage is %fV, power abnormal...\n", "power_power_tuning", v1);
    sub_343C4(3, s, 0);
    return -9;
  }
  else
  {
    return -9;
  }
  return result;
}
