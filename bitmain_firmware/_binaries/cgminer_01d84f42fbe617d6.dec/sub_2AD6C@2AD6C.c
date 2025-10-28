int __fastcall sub_2AD6C(_DWORD *a1, int *a2)
{
  int v2; // r3
  int v3; // r12
  int result; // r0
  int v5; // r3

  v2 = a2[1];
  v3 = *a1 + *a2;
  *a2 = v3;
  result = a1[1];
  v5 = result + v2;
  a2[1] = v5;
  if ( v5 > 999999 )
  {
    *a2 = v3 + 1;
    a2[1] = v5 - 1000000;
  }
  return result;
}
