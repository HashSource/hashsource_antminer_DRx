int *__fastcall sub_2AF78(int *result, _DWORD *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r1

  v2 = result[1];
  v3 = *result + *a2;
  *result = v3;
  v4 = v2 + a2[1];
  result[1] = v4;
  if ( v4 > 999999999 )
  {
    v5 = v3 + 1;
    do
    {
      v6 = v5++;
      v4 -= 1000000000;
    }
    while ( v4 > 999999999 );
    *result = v6;
    result[1] = v4;
  }
  if ( v4 < 0 )
  {
    v7 = *result - 1;
    do
    {
      v8 = v7--;
      v4 += 1000000000;
    }
    while ( v4 < 0 );
    *result = v8;
    result[1] = v4;
  }
  return result;
}
