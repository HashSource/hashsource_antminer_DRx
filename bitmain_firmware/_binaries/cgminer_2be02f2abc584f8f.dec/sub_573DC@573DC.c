int __fastcall sub_573DC(_DWORD *a1, char *a2)
{
  bool v2; // zf

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    return 0;
  if ( *a1 )
    return 0;
  return sub_55124((int)(a1 + 2), a2);
}
