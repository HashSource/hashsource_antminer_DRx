ssize_t __fastcall sub_4B4D0(int a1)
{
  int v1; // r0
  char *v2; // r1

  byte_73972 ^= 1u;
  if ( a1 )
  {
    write(dword_86A64, word_6187C, 2u);
    v1 = dword_869F0;
    if ( byte_73972 )
      v2 = "1";
    else
      v2 = (char *)word_6187C;
  }
  else
  {
    write(dword_869F0, word_6187C, 2u);
    v1 = dword_86A64;
    if ( byte_73972 )
      v2 = "1";
    else
      v2 = (char *)word_6187C;
  }
  return write(v1, v2, 2u);
}
