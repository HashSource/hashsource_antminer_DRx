unsigned __int8 *__fastcall sub_47F4C(unsigned __int8 *a1, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned int i; // r3
  _DWORD *v7; // r4
  _BYTE *v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // t1

  for ( i = *a2; dword_C54C8 > i; *a2 = ++i )
  {
    v7 = (_DWORD *)(dword_C54D0 + 28 * i);
    if ( v7[1] != 8 )
    {
      if ( !a1 )
      {
        v9 = (_BYTE *)(*v7 + 1);
        v10 = (unsigned __int8)*v9;
        if ( *v9 && v10 != 124 && v10 != 61 && v10 != 32 )
        {
          v11 = *v7 + 1;
          do
          {
            v13 = *(unsigned __int8 *)++v11;
            v12 = v13;
            ++a1;
          }
          while ( v13 && v12 != 124 && v12 != 61 && v12 != 32 );
        }
        *a3 = a1;
        return v9;
      }
      a1 = sub_47DBC((int)a1, a3);
      if ( a1 )
        return a1;
      i = *a2;
    }
  }
  return 0;
}
