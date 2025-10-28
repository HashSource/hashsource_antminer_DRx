int *__fastcall sub_31C1C(int *a1, char a2)
{
  int *result; // r0
  int v5; // r1
  int *v6; // r2
  int v7; // t1
  int v8; // [sp+4h] [bp-8h] BYREF

  v8 = 0;
  result = (int *)get_all_created_runtime(&v8);
  if ( v8 > 0 )
  {
    v5 = *a1;
    v6 = &result[v8];
    do
    {
      v7 = *result++;
      *(_BYTE *)(v7 + v5 + 552) = a2;
    }
    while ( result != v6 );
  }
  return result;
}
