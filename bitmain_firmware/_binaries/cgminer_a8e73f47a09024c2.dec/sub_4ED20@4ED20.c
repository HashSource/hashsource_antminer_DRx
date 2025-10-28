void sub_4ED20()
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "%s:%d set FAN speed according to temperature\n", "set_PWM_according_to_temperature", 4729);
    sub_3F178(7, s, 0);
  }
  if ( byte_B438A && (unsigned __int8)byte_B438B <= 0x64u )
  {
    sub_4E244((unsigned __int8)byte_B438B);
  }
  else if ( dword_7FCEC == 1 )
  {
    sub_4E7A8();
  }
  else
  {
    sub_4E97C();
  }
}
