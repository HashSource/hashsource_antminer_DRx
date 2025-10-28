void sub_3F138()
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "%s:%d set FAN speed according to temperature\n", "set_PWM_according_to_temperature", 4729);
    sub_343C4(7, s, 0);
  }
  if ( byte_74766 && (unsigned __int8)byte_74767 <= 0x64u )
  {
    sub_3E808((unsigned __int8)byte_74767);
  }
  else if ( dword_72AFC == 1 )
  {
    sub_3EC40();
  }
  else
  {
    sub_3ED9C();
  }
}
