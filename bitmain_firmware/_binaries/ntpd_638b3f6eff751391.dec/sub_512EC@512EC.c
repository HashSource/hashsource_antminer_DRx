char *__fastcall sub_512EC(int a1)
{
  if ( (a1 & 0x80) != 0 )
    return sub_50DC4(a1 & 0xFFFFFF7F, dword_7C094);
  else
    return sub_50DC4(a1, dword_7BFBC);
}
