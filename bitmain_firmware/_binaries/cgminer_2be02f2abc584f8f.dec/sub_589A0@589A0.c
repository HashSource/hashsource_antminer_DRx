int __fastcall sub_589A0(const char *a1, _BYTE *a2)
{
  if ( !strcasecmp(a1, "yes") || !strcasecmp(a1, "true") )
    return sub_58980(a2);
  if ( !strcasecmp(a1, (const char *)&dword_634DC) || !strcasecmp(a1, "false") )
    return sub_58990(a2);
  return sub_59550(a1);
}
