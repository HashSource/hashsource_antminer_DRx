const char *__fastcall sub_14A0C(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_63E20, &dword_63E1C) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( dword_63E20 > 23 || dword_63E1C > 59 || dword_63E20 < 0 || dword_63E1C < 0 )
    return "Invalid time set.";
  byte_63E14 = 1;
  return 0;
}
