int *__fastcall sub_10E58(int a1)
{
  int *result; // r0
  int v3; // t1
  int v4; // r1

  result = *(int **)(a1 + 4);
  if ( result )
  {
    v3 = *result;
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = v4 - 1;
    result += 2;
  }
  return result;
}
