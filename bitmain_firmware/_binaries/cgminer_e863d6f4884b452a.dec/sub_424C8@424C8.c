unsigned int __fastcall sub_424C8(_BYTE *a1)
{
  unsigned int result; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v3, "No servers could be used!");
    sub_343C4(5, v3, 0);
  }
  sub_3A550();
  sub_3B2F8();
  sub_2A384(dword_73ED4);
  sub_2A384(dword_73E7C);
  sub_2A384(dword_73E78);
  sub_2A384(dword_8DCD8);
  sub_3E808(20);
  write(dword_73E84, &word_513BC, 2u);
  for ( result = write(dword_73ED0, &word_513BC, 2u); !*a1; result = sleep(1u) )
    ;
  return result;
}
