ssize_t __fastcall sub_4DF7C(int a1)
{
  int v1; // r0
  char *v2; // r1

  byte_7A9BF ^= 1u;
  if ( a1 )
  {
    write(dword_9A5C4, word_661D0, 2u);
    v1 = dword_9A550;
    if ( byte_7A9BF )
      v2 = "1";
    else
      v2 = (char *)word_661D0;
  }
  else
  {
    write(dword_9A550, word_661D0, 2u);
    v1 = dword_9A5C4;
    if ( byte_7A9BF )
      v2 = "1";
    else
      v2 = (char *)word_661D0;
  }
  return write(v1, v2, 2u);
}
