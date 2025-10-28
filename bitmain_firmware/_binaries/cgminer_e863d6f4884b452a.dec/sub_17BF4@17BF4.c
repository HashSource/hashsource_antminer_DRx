const char *__fastcall sub_17BF4(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_72ECC, &dword_72EC8) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_72ECC > 0x17 || (unsigned int)dword_72EC8 > 0x3B )
    return "Invalid time set.";
  byte_72EC0 = 1;
  return 0;
}
