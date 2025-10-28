int __fastcall sub_4DA64(unsigned __int8 a1, int a2)
{
  int v3; // r3
  unsigned __int8 v5; // [sp+7h] [bp-801h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v5 = a1;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(s, "tty_init_chain");
    sub_3F178(5, s, 0);
  }
  v3 = v5;
  if ( *(_BYTE *)(a2 + v5 + 156) == 1 )
  {
    *((_BYTE *)&dbl_80CB8 + v5 - 4052) = 1;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(s, 0x800u, "create rx read thread for chain %d", v3);
      sub_3F178(3, s, 0);
    }
    if ( sub_34744(a2 + (v5 << 6) + 4602, 0, (void *(*)(void *))sub_4FB04, &v5) )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "create rx read thread for chain %d failed", v5);
        sub_3F178(3, s, 0);
      }
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(s, 0x800u, "create rx read thread for chain %d ok", v5);
      sub_3F178(3, s, 0);
    }
    sub_30140();
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(s, "open device over");
    sub_3F178(5, s, 0);
  }
  return sub_30140();
}
