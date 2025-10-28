void *__fastcall sub_28654(int a1, int a2, char *a3, char *a4, int a5)
{
  char v9; // r3
  char v11; // r3

  if ( dword_7CF4C > 3 )
    puts("request: preparing pkt");
  v9 = *a3;
  dword_7FF4C = a1;
  byte_7FD4E = v9;
  v11 = *a4;
  dword_7FF50 = a2;
  dword_7FD40 = a5;
  byte_7FD4F = v11;
  word_7FD52 = BYTE1(a5) | (unsigned __int16)((_WORD)a5 << 8);
  dword_7FF48 = 0;
  dword_7FD44 = 0;
  dword_7FD3C = 0;
  dword_7FD38 = 0;
  return &unk_7FD54;
}
