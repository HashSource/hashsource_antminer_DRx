int __fastcall sub_4AFB8(unsigned __int8 a1, int a2)
{
  int v3; // r3
  unsigned __int8 v5; // [sp+7h] [bp-801h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v5 = a1;
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(s, "tty_init_chain");
    sub_3F1C0(5, s, 0);
  }
  v3 = v5;
  if ( *(_BYTE *)(a2 + v5 + 124) == 1 )
  {
    byte_77C08[v5 + 4088] = 1;
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "create rx read thread for chain %d", v3);
      sub_3F1C0(3, s, 0);
    }
    if ( sub_346C4(a2 + (v5 << 6) + 3994, 0, (void *(*)(void *))&sub_4CFC4, &v5) )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(s, 0x800u, "create rx read thread for chain %d failed", v5);
        sub_3F1C0(3, s, 0);
      }
    }
    else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "create rx read thread for chain %d ok", v5);
      sub_3F1C0(3, s, 0);
    }
    sub_2FF20();
  }
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(s, "open device over");
    sub_3F1C0(5, s, 0);
  }
  return sub_2FF20();
}
