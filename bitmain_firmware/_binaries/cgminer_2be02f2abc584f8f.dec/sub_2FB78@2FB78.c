int __fastcall sub_2FB78(_DWORD *a1)
{
  int result; // r0
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  result = lldiv(v3);
  *a1 = v3[0];
  a1[1] = 1000 * v3[2];
  return result;
}
