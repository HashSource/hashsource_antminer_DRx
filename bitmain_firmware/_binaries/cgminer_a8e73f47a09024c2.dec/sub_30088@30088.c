int __fastcall sub_30088(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v3; // r12
  int result; // r0
  int v5; // r3

  v3 = *a1 - *a2;
  *a3 = v3;
  result = a1[1];
  v5 = result - a2[1];
  if ( v5 < 0 )
  {
    a3[1] = v5 + 1000000000;
    *a3 = v3 - 1;
  }
  else
  {
    a3[1] = v5;
  }
  return result;
}
