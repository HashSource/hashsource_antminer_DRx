void sub_4BAAC()
{
  _BOOL4 v0; // r2
  int v1; // r3
  int v2; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  dword_78C04 = dword_93C61;
  if ( dword_93C61 > 84 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "%s: Temperature is higher than %d 'C", "set_PWM_according_to_temperature", dword_93C61);
    sub_3F1C0(7, s, 0);
  }
  if ( byte_93C7F && (unsigned __int8)byte_93C80 <= 0x64u )
  {
    sub_4B834((unsigned __int8)byte_93C80);
  }
  else
  {
    v0 = dword_78C04 > 84;
    if ( !dword_78C04 )
      v0 = 1;
    if ( v0 )
    {
      sub_4B834(100);
      byte_93C80 = 100;
    }
    else if ( dword_78C04 > 55 )
    {
      if ( (unsigned int)(dword_78C04 - dword_78C08 + 1) > 2 )
      {
        v1 = (dword_78C04 - 35) & ~((dword_78C04 - 35) >> 31);
        v2 = (unsigned __int8)v1;
        byte_93C80 = (dword_78C04 - 35) & ~((dword_78C04 - 35) >> 31);
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "%s: Set PWM percent : %d", "set_PWM_according_to_temperature", v1);
          sub_3F1C0(7, s, 0);
        }
        sub_4B834(v2);
        dword_78C08 = dword_78C04;
      }
    }
    else
    {
      sub_4B834(20);
      byte_93C80 = 20;
    }
  }
}
