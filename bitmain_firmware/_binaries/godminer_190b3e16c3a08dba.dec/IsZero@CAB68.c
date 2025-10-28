int __fastcall IsZero(_BYTE *a1, int a2)
{
  _BYTE *v2; // r1

  if ( !a2 )
    return 1;
  if ( !*a1 )
  {
    v2 = &a1[a2 - 1];
    while ( a1 != v2 )
    {
      if ( *++a1 )
        return 0;
    }
    return 1;
  }
  return 0;
}
