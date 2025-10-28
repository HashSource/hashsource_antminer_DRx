int __fastcall sub_5D7D8(unsigned int *a1, _DWORD *a2)
{
  int *v3; // r2
  unsigned int i; // r3
  int v5; // r12

  *a1 = 0;
  if ( !dword_B43B4 )
    return 0;
  v3 = (int *)dword_B43BC;
  if ( *(_DWORD *)(dword_B43BC + 4) != 8 )
    return sub_5D714(*v3, a2);
  v5 = 28;
  for ( i = 1; ; ++i )
  {
    *a1 = i;
    if ( dword_B43B4 <= i )
      break;
    v3 = (int *)(dword_B43BC + v5);
    v5 += 28;
    if ( v3[1] != 8 )
      return sub_5D714(*v3, a2);
  }
  return 0;
}
