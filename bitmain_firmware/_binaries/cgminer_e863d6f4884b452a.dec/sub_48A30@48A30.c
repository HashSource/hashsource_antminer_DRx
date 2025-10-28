int __fastcall sub_48A30(int a1, char *s)
{
  if ( a1 )
  {
    *(_BYTE *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = -1;
    *(_DWORD *)(a1 + 4) = -1;
    if ( s )
      return (int)sub_489F0(a1, s);
    else
      *(_BYTE *)(a1 + 12) = 0;
  }
  return a1;
}
