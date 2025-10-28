int __fastcall sub_56BDC(int *a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r3
  int result; // r0

  v1 = a1[1];
  if ( !v1 )
    return 0;
  v2 = *a1;
  v3 = v1 - 1;
  a1[1] = v3;
  result = *(unsigned __int8 *)(v2 + v3);
  *(_BYTE *)(v2 + v3) = 0;
  return result;
}
