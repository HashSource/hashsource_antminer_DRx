int __fastcall sub_41058(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  char *v7; // r1
  char *v8; // r3

  v5 = a1 << 7;
  v6 = sub_49AF0(a2, (unsigned __int16)word_74761);
  byte_6D7F0 = a3 >= 0;
  v7 = &byte_6FAD8[4 * v5 + 4 * v6];
  v8 = (char *)&unk_70BD0 + v5 + v6;
  ++byte_6FAD8[a1 + 2552];
  *((_DWORD *)v7 + 639) = a3;
  v8[260] = 1;
  return 1;
}
