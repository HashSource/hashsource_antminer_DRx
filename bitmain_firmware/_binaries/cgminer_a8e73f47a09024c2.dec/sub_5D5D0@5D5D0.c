char *__fastcall sub_5D5D0(char *a1, _BYTE *a2)
{
  const char *v2; // r1

  if ( *a2 )
    v2 = "true";
  else
    v2 = "false";
  return strncpy(a1, v2, 0x50u);
}
