const char *__fastcall sub_14990(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_63B9C, &dword_63B98) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( dword_63B9C > 23 || dword_63B98 > 59 || dword_63B9C < 0 || dword_63B98 < 0 )
    return "Invalid time set.";
  byte_63B90 = 1;
  return 0;
}
