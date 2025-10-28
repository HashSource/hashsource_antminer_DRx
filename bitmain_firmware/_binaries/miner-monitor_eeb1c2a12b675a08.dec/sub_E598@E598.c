int __fastcall sub_E598(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r7
  _DWORD src[3]; // [sp+1Ch] [bp-Ch] BYREF

  v5 = a1[2];
  v6 = a1[1];
  src[0] = a2;
  src[1] = a3;
  src[2] = a4;
  if ( (v5 + 1) % 9 == v6 )
    return 0;
  memcpy((void *)(*a1 + 4111 * v5), src, 0x100Fu);
  a1[2] = (a1[2] + 1) % 9;
  return 1;
}
