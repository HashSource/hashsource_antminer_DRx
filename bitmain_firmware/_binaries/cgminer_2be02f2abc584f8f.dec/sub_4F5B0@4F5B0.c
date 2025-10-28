int *__fastcall sub_4F5B0(int *result, int a2)
{
  int v2; // r3

  v2 = *result + 1;
  if ( v2 >= a2 )
    v2 = 0;
  *result = v2;
  return result;
}
