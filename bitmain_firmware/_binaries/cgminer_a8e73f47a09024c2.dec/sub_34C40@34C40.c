char *__fastcall sub_34C40(char *result, int a2)
{
  unsigned int v2; // r1
  char *v3; // r2
  unsigned int i; // r3
  char v5; // r12

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = result;
    for ( i = 0; i < v2; ++i )
    {
      v5 = *v3;
      *v3++ = result[v2];
      result[v2--] = v5;
    }
  }
  return result;
}
