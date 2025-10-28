int __fastcall sub_5D878(int result, unsigned int *a2, _DWORD *a3)
{
  unsigned int i; // r3
  int *v6; // r3

  for ( i = *a2; dword_B43B4 > i; *a2 = i )
  {
    v6 = (int *)(dword_B43BC + 28 * i);
    if ( v6[1] != 8 )
    {
      if ( !result )
        return sub_5D714(*v6, a3);
      result = sub_5D798(result, a3);
      if ( result )
        return result;
    }
    i = *a2 + 1;
  }
  return 0;
}
