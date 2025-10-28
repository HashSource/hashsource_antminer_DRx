_DWORD *__fastcall sub_2FC4C(_DWORD *result, int *a2)
{
  int v2; // r12
  int v3; // r3

  v2 = *result + *a2;
  *a2 = v2;
  v3 = result[1] + a2[1];
  a2[1] = v3;
  if ( v3 > 999999 )
  {
    *a2 = v2 + 1;
    a2[1] = v3 - 1000000;
  }
  return result;
}
