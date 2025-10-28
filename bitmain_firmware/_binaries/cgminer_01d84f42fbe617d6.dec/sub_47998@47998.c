int __fastcall sub_47998(const char *a1, _BYTE *a2)
{
  if ( !strcasecmp(a1, "yes") || !strcasecmp(a1, "true") )
  {
    *a2 = 1;
    return 0;
  }
  else if ( !strcasecmp(a1, dword_52370) || !strcasecmp(a1, "false") )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    return sub_48600(a1);
  }
}
