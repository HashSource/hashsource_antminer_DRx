int __fastcall sub_2FC10(_DWORD *a1, int *a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3

  v2 = *a1 - *a2;
  *a2 = v2;
  result = a1[1];
  v4 = result - a2[1];
  a2[1] = v4;
  if ( v4 < 0 )
  {
    *a2 = v2 - 1;
    a2[1] = v4 + 1000000;
  }
  return result;
}
