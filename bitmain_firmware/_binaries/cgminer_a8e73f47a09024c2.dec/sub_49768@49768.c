void sub_49768()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v0, "power check ...");
    sub_3F178(5, v0, 0);
  }
  write(dword_9A5C4, word_661D0, 2u);
  write(dword_9A550, word_661D0, 2u);
  word_7A9BC = 1;
  while ( word_7A9BC != 2 )
  {
    sub_49594();
    if ( word_7A9BC != 2 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        strcpy(v0, "power check Err!!! We need power using package cmd, please check the power or iic bus.");
        sub_3F178(3, v0, 0);
      }
      sub_30140();
    }
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v0, "power check OK!");
    sub_3F178(5, v0, 0);
  }
}
