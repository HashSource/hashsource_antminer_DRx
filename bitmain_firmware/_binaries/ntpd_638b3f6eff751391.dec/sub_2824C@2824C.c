char *sub_2824C()
{
  char v0; // r7
  int v1; // r3
  int v2; // r5
  int v3; // r2
  int v4; // r3
  char *result; // r0
  int v6; // r2
  char v7; // r3

  if ( dword_7FD38 )
  {
    if ( dword_7CF4C > 2 )
      puts("request: sending pkt");
    v7 = dword_7FD48;
    if ( dword_7FD48 )
      v7 = ~(~(8 * dword_7FD48) & 0x38);
    else
      v0 = -41;
    if ( dword_7FD48 )
      v0 = v7;
    byte_7FD4D = dword_7FF48 & 0x7F;
    byte_7FD4C = v0;
    word_7FD50 = BYTE1(dword_7FD44) | (unsigned __int16)((_WORD)dword_7FD44 << 8);
    sub_154A4((unsigned __int16 *)dword_7FF4C, dword_7FF50, -1, &byte_7FD4C, dword_7FD3C + 8);
    v2 = dword_7FD40;
    ++dword_CB530;
    memcpy(&unk_7FD54, &unk_7FB44, dword_7FD40);
    v3 = 1;
    v1 = 0;
    dword_7FD38 = 0;
    ++dword_7FF48;
  }
  else
  {
    v1 = dword_7FD3C;
    v2 = dword_7FD40;
    v3 = dword_7FD44 + 1;
  }
  v4 = v1 + v2;
  dword_7FD44 = v3;
  dword_7FD3C = v4;
  if ( v4 + v2 > 500 )
  {
    if ( dword_7CF4C > 3 )
      puts("request: into extra buffer");
    v6 = dword_7FF48;
    if ( dword_7FF48 == 127 )
    {
      result = 0;
    }
    else
    {
      result = (char *)&unk_7FB44;
      v6 = 1;
    }
    if ( dword_7FF48 != 127 )
      dword_7FD38 = v6;
  }
  else
  {
    if ( dword_7CF4C > 3 )
    {
      puts("request: giving him more data");
      v4 = dword_7FD3C;
    }
    return (char *)&unk_7FD54 + v4;
  }
  return result;
}
