int __fastcall sub_C634(int a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r3
  int v6; // r1
  const __int32_t *v7; // r2
  int result; // r0
  int v9; // t1
  int v10; // t1
  __int32_t v11; // r4
  __int32_t v12; // r12

  if ( a1 )
  {
    if ( a2 )
    {
      v4 = _ctype_tolower_loc();
      v5 = a1 - 1;
      v6 = a2 - 1;
      v7 = *v4;
      while ( 1 )
      {
        v9 = *(unsigned __int8 *)++v5;
        result = v9;
        v10 = *(unsigned __int8 *)++v6;
        v11 = v7[result];
        v12 = v7[v10];
        if ( v11 != v12 )
          break;
        if ( !result )
          return result;
      }
      return v11 - v12;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    result = a2;
    if ( a2 )
      return 1;
  }
  return result;
}
