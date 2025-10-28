int __fastcall sub_58EA8(unsigned int *a1, _DWORD *a2)
{
  int *v3; // r2
  unsigned int i; // r3
  int v5; // r12

  *a1 = 0;
  if ( !dword_93CA8 )
    return 0;
  v3 = (int *)dword_93CB0;
  if ( *(_DWORD *)(dword_93CB0 + 4) != 8 )
    return sub_58DE4(*v3, a2);
  v5 = 28;
  for ( i = 1; ; ++i )
  {
    *a1 = i;
    if ( dword_93CA8 <= i )
      break;
    v3 = (int *)(dword_93CB0 + v5);
    v5 += 28;
    if ( v3[1] != 8 )
      return sub_58DE4(*v3, a2);
  }
  return 0;
}
