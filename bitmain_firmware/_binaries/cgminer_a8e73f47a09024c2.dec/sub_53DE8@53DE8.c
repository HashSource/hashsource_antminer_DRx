unsigned int __fastcall sub_53DE8(_BYTE *a1)
{
  unsigned int result; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v3, "No servers could be used!");
    sub_3F178(5, v3, 0);
  }
  sub_47F68();
  sub_4939C();
  sub_34A24(dword_9A54C);
  sub_34A24(dword_9A5CC);
  sub_34A24(dword_9A548);
  sub_34A24(dword_9A5C8);
  sub_4E244(20);
  write(dword_9A5C4, word_661D0, 2u);
  for ( result = write(dword_9A550, word_661D0, 2u); !*a1; result = sleep(1u) )
    ;
  return result;
}
