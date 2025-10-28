int *__fastcall sub_2FE70(int *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r3
  int v6; // r2
  int v7; // r12

  *result += *a2;
  v2 = result[1] + a2[1];
  result[1] = v2;
  if ( v2 > 999999999 )
  {
    v3 = *result + 1;
    do
    {
      v2 -= 1000000000;
      v4 = v3++;
    }
    while ( v2 > 999999999 );
    result[1] = v2;
    *result = v4;
  }
  v5 = result[1];
  if ( v5 < 0 )
  {
    v6 = *result - 1;
    do
    {
      v7 = v6--;
      v5 += 1000000000;
    }
    while ( v5 < 0 );
    result[1] = v5;
    *result = v7;
  }
  return result;
}
