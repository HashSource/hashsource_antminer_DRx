int __fastcall sub_594A0(_BYTE *a1)
{
  int v1; // r3
  _BYTE *v2; // r2
  int result; // r0
  int v4; // t1

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 5381;
  v2 = a1;
  result = 5381;
  do
  {
    result += v1 + 32 * result;
    v4 = (unsigned __int8)*++v2;
    v1 = v4;
  }
  while ( v4 );
  return result;
}
