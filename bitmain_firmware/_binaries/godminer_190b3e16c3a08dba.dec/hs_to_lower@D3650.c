_BYTE *__fastcall hs_to_lower(_BYTE *result)
{
  int v1; // r3
  unsigned int v2; // r2
  char v3; // r3
  int v4; // t1

  v1 = (unsigned __int8)*result;
  if ( *result )
  {
    do
    {
      v2 = v1 - 65;
      v3 = v1 + 32;
      if ( v2 <= 0x19 )
        *result = v3;
      v4 = (unsigned __int8)*++result;
      v1 = v4;
    }
    while ( v4 );
  }
  return result;
}
