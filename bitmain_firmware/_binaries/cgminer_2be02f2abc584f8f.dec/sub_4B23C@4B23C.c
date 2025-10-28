int __fastcall sub_4B23C(int a1, int a2)
{
  int v4; // r11
  int v5; // r4
  int v6; // r5
  int v7; // r4
  char s[2040]; // [sp+8h] [bp-80Ch] BYREF
  int v10; // [sp+808h] [bp-Ch] BYREF
  char v11; // [sp+80Ch] [bp-8h]

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(s, "tty_init");
    sub_3F1C0(5, s, 0);
  }
  if ( a2 != 115200 )
  {
    if ( a2 == 921600 )
    {
      byte_73971 = 2;
    }
    else
    {
      if ( a2 > 921600 )
      {
        if ( a2 == 1500000 )
        {
          byte_73971 = 1;
          goto LABEL_25;
        }
        if ( a2 == 3000000 )
        {
          byte_73971 = 0;
          goto LABEL_25;
        }
      }
      else if ( a2 == 460800 )
      {
        byte_73971 = 6;
        goto LABEL_25;
      }
      byte_73971 = 26;
    }
LABEL_25:
    v6 = a1;
    v5 = 0;
    do
    {
      if ( *(_BYTE *)(v6 + 124) == 1 )
      {
        v4 = ((unsigned __int8)byte_73971 << 8) | 0x7002001;
        sub_47C40(v5, 1, 0, 28, v4);
        if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
        {
          snprintf(s, 0x800u, "MISC_CONTROL : %x", v4);
          sub_3F1C0(5, s, 0);
        }
      }
      sub_2FF20();
      v5 = (unsigned __int8)(v5 + 1);
      ++v6;
    }
    while ( v5 != 4 );
    sub_425E0((unsigned __int8)byte_73971);
  }
  LOBYTE(v7) = 0;
  do
  {
    sub_4AFB8(v7, a1);
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v7 != 4 );
  v10 = a1;
  v11 = 0;
  sub_346C4(a1 + 3930, 0, (void *(*)(void *))sub_42D50, &v10);
  return sub_2FF20();
}
