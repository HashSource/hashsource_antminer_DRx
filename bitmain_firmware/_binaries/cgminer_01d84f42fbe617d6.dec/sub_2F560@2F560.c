char *__fastcall sub_2F560(char *result, int a2)
{
  unsigned int v2; // r1
  char *v3; // r2
  unsigned int v4; // r3
  char v5; // r12

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      ++v4;
      v5 = *v3;
      *v3++ = result[v2];
      result[v2--] = v5;
    }
    while ( v4 < v2 );
  }
  return result;
}
