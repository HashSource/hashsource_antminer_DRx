_BYTE *__fastcall sub_47E64(unsigned int *a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  unsigned int v4; // r12
  _BYTE *result; // r0
  int v6; // r2
  int v7; // r12
  int v8; // r3
  int v9; // t1

  *a1 = 0;
  if ( !dword_C54C8 )
    return 0;
  v2 = (_DWORD *)dword_C54D0;
  if ( *(_DWORD *)(dword_C54D0 + 4) == 8 )
  {
    v3 = dword_C54D0 + 28;
    v4 = 1;
    do
    {
      *a1 = v4;
      v2 = (_DWORD *)v3;
      v3 += 28;
      if ( dword_C54C8 <= v4++ )
        return 0;
    }
    while ( v2[1] == 8 );
  }
  result = (_BYTE *)(*v2 + 1);
  v6 = (unsigned __int8)*result;
  if ( *result )
  {
    if ( v6 == 124 || v6 == 61 || v6 == 32 )
    {
      v6 = 0;
    }
    else
    {
      v7 = *v2 + 1;
      v6 = 0;
      do
      {
        v9 = *(unsigned __int8 *)++v7;
        v8 = v9;
        ++v6;
      }
      while ( v9 && v8 != 124 && v8 != 61 && v8 != 32 );
    }
  }
  *a2 = v6;
  return result;
}
