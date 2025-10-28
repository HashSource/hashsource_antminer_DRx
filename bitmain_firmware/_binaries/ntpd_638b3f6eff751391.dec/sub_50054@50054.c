char *__fastcall sub_50054(unsigned int a1)
{
  unsigned int v1; // r4
  int v2; // r3
  bool v3; // cc
  char *v4; // r5

  v1 = bswap32(a1);
  if ( !dword_C9AF4 )
    sub_4F7C0();
  v2 = 5 * dword_CB86C;
  v3 = dword_CB86C + 1 <= 199;
  if ( dword_CB86C + 1 <= 199 )
    ++dword_CB86C;
  v4 = (char *)&unk_CB870 + 16 * v2;
  if ( !v3 )
    dword_CB86C = 0;
  memset(v4, 0, 0x50u);
  snprintf(v4, 0x50u, "%lu.%lu.%lu.%lu", HIBYTE(v1), BYTE2(v1), BYTE1(v1), (unsigned __int8)v1);
  return v4;
}
