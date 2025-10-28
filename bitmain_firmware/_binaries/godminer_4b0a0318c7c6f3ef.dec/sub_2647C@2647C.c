size_t __fastcall sub_2647C(size_t result, int a2, const char *a3)
{
  int *v4; // r4
  int *v5; // r6
  size_t v6; // r0
  int v7; // t1

  if ( a2 <= 0 )
    result = -1;
  if ( a2 > 0 )
  {
    v4 = (int *)result;
    v5 = (int *)(result + 4 * a2);
    v6 = 0;
    do
    {
      v7 = *v4++;
      sprintf((char *)&a3[v6], "%d-", v7);
      v6 = strlen(a3);
    }
    while ( v4 != v5 );
    result = v6 - 1;
  }
  a3[result] = 0;
  return result;
}
