size_t __fastcall sub_B208(const char *a1, int a2)
{
  size_t result; // r0
  size_t v5; // r3
  const char *v6; // r2
  int v7; // r12

  result = strlen(a1);
  v5 = result;
  if ( result )
  {
    v6 = &a1[result];
    v7 = (unsigned __int8)a1[result - 1];
    if ( v7 == a2 )
    {
      result = 0;
      do
      {
        --v5;
        *--v6 = 0;
      }
      while ( v5 && *((unsigned __int8 *)v6 - 1) == v7 );
    }
  }
  return result;
}
