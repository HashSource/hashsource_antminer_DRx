int sub_3B3C4()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v1, "bitmain_dcr_shutdown");
    sub_343C4(5, v1, 0);
  }
  sub_3A550();
  sub_3B2F8();
  sub_2A384(dword_73ED4);
  sub_2A384(dword_73E7C);
  sub_2A384(dword_73E78);
  return sub_2A384(dword_8DCD8);
}
