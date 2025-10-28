unsigned __int16 *sub_28778()
{
  char v0; // r5
  unsigned __int16 *result; // r0

  if ( dword_7CF4C > 2 )
    printf("request: flushing packet, %d items\n", dword_7FD44);
  if ( !dword_7FF48 && !dword_7FD44 )
    return sub_286DC((unsigned __int16 *)dword_7FF4C, dword_7FF50, byte_7FD4E, byte_7FD4F, 4);
  if ( dword_7FD48 )
    v0 = ~(~(8 * dword_7FD48) & 0x78);
  else
    v0 = -105;
  byte_7FD4D = dword_7FF48 & 0x7F;
  byte_7FD4C = v0;
  word_7FD50 = BYTE1(dword_7FD44) | (unsigned __int16)((_WORD)dword_7FD44 << 8);
  result = sub_154A4((unsigned __int16 *)dword_7FF4C, dword_7FF50, -1, &byte_7FD4C, dword_7FD3C + 8);
  ++dword_CB530;
  return result;
}
