void sub_3B5A4()
{
  int v0; // r3
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v1, "power check ...");
    sub_343C4(5, v1, 0);
  }
  write(dword_73E84, &word_513BC, 2u);
  write(dword_73ED0, &word_513BC, 2u);
  v0 = 1;
  for ( word_6D7EC = 1; v0 != 2; v0 = (unsigned __int16)word_6D7EC )
  {
    sub_3B45C();
    if ( word_6D7EC == 2 )
      break;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      strcpy(v1, "power check Err!!! We need power using package cmd, please check the power or iic bus.");
      sub_343C4(3, v1, 0);
    }
    sub_2A7F4();
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v1, "power check OK!");
    sub_343C4(5, v1, 0);
  }
}
