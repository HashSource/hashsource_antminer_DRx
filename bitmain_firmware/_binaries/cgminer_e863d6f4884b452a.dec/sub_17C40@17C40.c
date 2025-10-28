const char *__fastcall sub_17C40(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_72C10, &dword_72C0C) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_72C10 > 0x17 || (unsigned int)dword_72C0C > 0x3B )
    return "Invalid time set.";
  byte_72C04 = 1;
  return 0;
}
