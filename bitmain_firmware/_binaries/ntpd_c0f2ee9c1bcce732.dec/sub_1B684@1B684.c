unsigned __int16 *__fastcall sub_1B684(int a1)
{
  unsigned __int8 v1; // r5
  unsigned __int16 *result; // r0
  int v3; // r0

  v1 = a1;
  if ( dword_7CF4C > 2 )
    printf("sending control error %d\n", a1);
  word_7CF78 = v1;
  word_7CF7E = 0;
  byte_7CF75 = ~(~((byte_7D178 & 0x1Fu) << 26) >> 26);
  if ( byte_7D181 && dword_CB46C )
  {
    v3 = sub_4E458(dword_7D184, &byte_7CF74, 12);
    result = sub_154A4((unsigned __int16 *)dword_7D188, dword_7D18C, -2, &byte_7CF74, v3 + 12);
  }
  else
  {
    result = sub_154A4((unsigned __int16 *)dword_7D188, dword_7D18C, -3, &byte_7CF74, 0xCu);
  }
  ++dword_CAAA8;
  return result;
}
