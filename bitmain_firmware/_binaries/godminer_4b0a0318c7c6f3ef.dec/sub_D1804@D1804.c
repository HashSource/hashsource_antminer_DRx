int *__fastcall sub_D1804(int a1)
{
  int v1; // r1
  int *v3; // r0
  int *result; // r0

  v1 = *(_DWORD *)(a1 + 20);
  v3 = **(int ***)(a1 + 12);
  if ( v1 )
    result = tree_successor(v3, v1);
  else
    result = minimum_c_rb((int)v3, (_DWORD *)*v3);
  *(_DWORD *)(a1 + 20) = result;
  if ( result )
    return (int *)result[5];
  return result;
}
