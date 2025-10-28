_DWORD *__fastcall sub_DA28(int a1, int a2)
{
  _DWORD *result; // r0
  bool v3; // cc
  bool v4; // cc

  result = *(_DWORD **)(a1 + 8);
  v3 = (int)result <= 0;
  if ( result )
    v3 = a2 <= 0;
  if ( !v3 )
  {
    do
    {
      result = (_DWORD *)*result;
      --a2;
      v4 = (int)result <= 0;
      if ( result )
        v4 = a2 <= 0;
    }
    while ( !v4 );
  }
  return result;
}
