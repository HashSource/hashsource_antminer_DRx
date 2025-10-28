void *sub_E7F4()
{
  void *result; // r0
  _BYTE s[8]; // [sp+20h] [bp+Ch] BYREF

  word_258C0 = 0;
  byte_258C2 = 0;
  word_26AB4 = 0;
  byte_26AB6 = 0;
  word_258B8 = 0;
  memset(byte_25AB4, 0, sizeof(byte_25AB4));
  LOBYTE(STACK[0x1020]) = 0;
  LOBYTE(STACK[0x1021]) = 0;
  LOBYTE(STACK[0x1022]) = 0;
  LOBYTE(STACK[0x1023]) = 0;
  LOBYTE(STACK[0x1024]) = 0;
  LOBYTE(STACK[0x1025]) = 0;
  LOBYTE(STACK[0x1026]) = 0;
  result = memset(s, 0, 0x1000u);
  dword_26ABC = 0;
  *(_DWORD *)dest = 0;
  dword_26AC0 = 0;
  dword_26AC4 = 0;
  dword_26AC8 = 0;
  dword_26ACC = 0;
  dword_26AD0 = 0;
  dword_26AD4 = 0;
  dword_26AD8 = 0;
  dword_26ADC = 0;
  return result;
}
