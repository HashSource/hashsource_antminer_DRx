char *__fastcall sub_5D5F8(char *a1, _BYTE *a2)
{
  const char *v2; // r1

  if ( *a2 )
    v2 = "false";
  else
    v2 = "true";
  return strncpy(a1, v2, 0x50u);
}
