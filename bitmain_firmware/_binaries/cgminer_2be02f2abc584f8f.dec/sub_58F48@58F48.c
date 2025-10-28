int __fastcall sub_58F48(int result, unsigned int *a2, _DWORD *a3)
{
  unsigned int i; // r3
  int *v6; // r3

  for ( i = *a2; dword_93CA8 > i; *a2 = i )
  {
    v6 = (int *)(dword_93CB0 + 28 * i);
    if ( v6[1] != 8 )
    {
      if ( !result )
        return sub_58DE4(*v6, a3);
      result = sub_58E68(result, a3);
      if ( result )
        return result;
    }
    i = *a2 + 1;
  }
  return 0;
}
