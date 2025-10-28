unsigned __int16 *__fastcall sub_286DC(unsigned __int16 *a1, int a2, char a3, char a4, int a5)
{
  char v5; // lr
  unsigned __int16 *result; // r0

  if ( dword_7FD48 )
    v5 = ~(~(8 * dword_7FD48) & 0x78);
  else
    v5 = -105;
  byte_7FD4C = v5;
  byte_7FD4E = a3;
  byte_7FD4F = a4;
  word_7FD50 = (unsigned __int8)(16 * a5);
  word_7FD52 = 0;
  byte_7FD4D = 0;
  result = sub_154A4(a1, a2, -1, &byte_7FD4C, 8u);
  ++dword_CB510[a5];
  return result;
}
