_BYTE *__fastcall sub_51ED4(int a1, int a2, int a3)
{
  int v5; // r0
  _BYTE *result; // r0

  v5 = sub_5E8E0(a2, (unsigned __int16)word_B4385);
  byte_7A9C0 = a3 >= 0;
  *(_DWORD *)&byte_7CCC8[512 * a1 + 2460 + 4 * v5] = a3;
  result = &byte_7ECC0[128 * a1 + v5];
  *(result - 3676) = 1;
  ++byte_7CCC8[a1 + 2456];
  return result;
}
