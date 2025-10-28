int __fastcall sph_enc64be(_BYTE *a1, int a2, int a3, int a4)
{
  *a1 = HIBYTE(a4);
  a1[1] = BYTE2(a4);
  a1[2] = BYTE1(a4);
  a1[3] = a4;
  a1[4] = HIBYTE(a3);
  a1[5] = BYTE2(a3);
  a1[6] = BYTE1(a3);
  a1[7] = a3;
  return a4;
}
