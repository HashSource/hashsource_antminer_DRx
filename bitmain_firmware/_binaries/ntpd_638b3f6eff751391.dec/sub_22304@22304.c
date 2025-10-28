int *__fastcall sub_22304(int a1, int a2, int a3, char a4, int a5, int a6, int a7, char a8, int a9)
{
  int v9; // r12
  unsigned __int8 v10; // r8
  _BOOL4 v12; // r8
  _BOOL4 v13; // r8

  v9 = a7;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a1 == 2 )
      v12 = (bswap32(*(_DWORD *)(a1 + 4)) & 0xF0000000) == -536870912;
    else
      v12 = *(unsigned __int8 *)(a1 + 8) == 255;
    if ( v12 )
      v10 = 16;
    else
      v10 = 1;
  }
  else if ( a3 == 5 )
  {
    if ( *(_WORD *)a1 == 2 )
      v13 = (bswap32(*(_DWORD *)(a1 + 4)) & 0xF0000000) == -536870912;
    else
      v13 = *(unsigned __int8 *)(a1 + 8) == 255;
    if ( v13 )
      v10 = 2;
    else
      v10 = 4;
  }
  else
  {
    v10 = 1;
  }
  if ( dword_7D5EC )
    v9 = a7 | 0x100;
  return sub_21D24(a1, a2, a3, a4, a5, a6, v9 | 1, v10, a8, a9);
}
