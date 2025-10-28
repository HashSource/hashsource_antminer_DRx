int __fastcall sub_4DCE8(int a1, const char *a2)
{
  int v4; // r11
  int v5; // r4
  int v6; // r5
  int v7; // r4
  char s[2040]; // [sp+8h] [bp-80Ch] BYREF
  int v10; // [sp+808h] [bp-Ch] BYREF
  char v11; // [sp+80Ch] [bp-8h]

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(s, "tty_init");
    sub_3F178(5, s, 0);
  }
  if ( a2 != (const char *)&loc_1C200 )
  {
    if ( a2 == (const char *)921600 )
    {
      byte_7A9BE = 2;
    }
    else
    {
      if ( (int)a2 > 921600 )
      {
        if ( a2 == (const char *)1500000 )
        {
          byte_7A9BE = 1;
          goto LABEL_25;
        }
        if ( a2 == (const char *)3000000 )
        {
          byte_7A9BE = 0;
          goto LABEL_25;
        }
      }
      else if ( a2 == "er[stream->buffer_pos] == c" )
      {
        byte_7A9BE = 6;
        goto LABEL_25;
      }
      byte_7A9BE = 26;
    }
LABEL_25:
    v6 = a1;
    v5 = 0;
    do
    {
      if ( *(_BYTE *)(v6 + 156) == 1 )
      {
        v4 = ((unsigned __int8)byte_7A9BE << 8) | 0x7002001;
        sub_4B140(v5, 1, 0, 28, v4);
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "MISC_CONTROL : %x", v4);
          sub_3F178(5, s, 0);
        }
      }
      sub_30140();
      v5 = (unsigned __int8)(v5 + 1);
      ++v6;
    }
    while ( v5 != 4 );
    sub_438C0((unsigned __int8)byte_7A9BE);
  }
  LOBYTE(v7) = 0;
  do
  {
    sub_4DA64(v7, a1);
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v7 != 4 );
  v10 = a1;
  v11 = 0;
  sub_34744(a1 + 4538, 0, (void *(*)(void *))sub_44044, &v10);
  return sub_30140();
}
