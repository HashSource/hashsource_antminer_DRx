int __fastcall sub_5D2D0(const char *a1, _BYTE *a2)
{
  if ( !strcasecmp(a1, "yes") || !strcasecmp(a1, "true") )
    return sub_5D2B0(a2);
  if ( !strcasecmp(a1, (const char *)&dword_67E50) || !strcasecmp(a1, "false") )
    return sub_5D2C0(a2);
  return sub_5DE80(a1);
}
