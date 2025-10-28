_BYTE *__fastcall sub_4E09C(int a1, int a2, int a3)
{
  int v5; // r0
  _BYTE *result; // r0

  v5 = sub_59FB0(a2, (unsigned __int16)word_93C7A);
  byte_73973 = a3 >= 0;
  *(_DWORD *)&byte_75C10[512 * a1 + 2460 + 4 * v5] = a3;
  result = &byte_77C08[128 * a1 + v5];
  *(result - 3676) = 1;
  ++byte_75C10[a1 + 2456];
  return result;
}
