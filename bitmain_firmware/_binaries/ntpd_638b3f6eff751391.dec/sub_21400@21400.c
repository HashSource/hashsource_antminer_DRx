int sub_21400()
{
  int v0; // r2
  char *v1; // r1
  int v2; // r3
  int v3; // r12
  int result; // r0

  memset(&unk_CB23C, 0, 0x200u);
  memset(&unk_CAE34, 0, 0x200u);
  memset(&unk_CB03C, 0, 0x200u);
  memset(&unk_CAC34, 0, 0x200u);
  v0 = 0;
  v1 = 0;
  v2 = 0;
  dword_CB038 = 0;
  dword_CB43C = 0;
  dword_CB448 = 0;
  dword_CAC2C = 0;
  do
  {
    v3 = 9 * v2++;
    *(_DWORD *)((char *)&unk_7D940 + v0) = v1;
    v0 += 576;
    v1 = (char *)&unk_7D940 + 64 * v3;
  }
  while ( v2 != 15 );
  dword_7D938 = (int)&unk_7D940 + 64 * v3;
  dword_CAC30 = 15;
  dword_CB440 = 15;
  do
  {
    result = (unsigned __int16)sub_504EC();
    word_7FB00 = result;
  }
  while ( !(_WORD)result );
  return result;
}
