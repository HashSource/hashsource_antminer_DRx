int __fastcall sub_3E3D8(unsigned __int8 a1, int a2)
{
  int v3; // r3
  int v5; // r0
  unsigned __int8 v6; // [sp+7h] [bp-805h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v6 = a1;
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
  {
    v3 = v6;
    if ( *(_BYTE *)(a2 + v6 + 156) != 1 )
      goto LABEL_10;
    *((_BYTE *)&unk_71CC8 + v6 + 3628) = 1;
LABEL_13:
    if ( !byte_6FA70 && dword_6D35C <= 2 )
    {
LABEL_16:
      if ( sub_2D7E0(a2 + (v6 << 6) + 4602, 0, (void *(*)(void *))sub_3FBDC, &v6) )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
          goto LABEL_21;
        snprintf(s, 0x800u, "create rx read thread for chain %d failed", v6);
      }
      else
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
          goto LABEL_21;
        snprintf(s, 0x800u, "create rx read thread for chain %d ok", v6);
      }
      sub_343C4(3, s, 0);
LABEL_21:
      sub_2A7F4();
      goto LABEL_4;
    }
LABEL_15:
    snprintf(s, 0x800u, "create rx read thread for chain %d", v3);
    sub_343C4(3, s, 0);
    goto LABEL_16;
  }
  strcpy(s, "tty_init_chain");
  sub_343C4(5, s, 0);
  v3 = v6;
  if ( *(_BYTE *)(a2 + v6 + 156) == 1 )
  {
    v5 = (unsigned __int8)byte_73320;
    *((_BYTE *)&unk_71CC8 + v6 + 3628) = 1;
    if ( v5 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_4:
  if ( byte_73320 || byte_6FA70 )
    goto LABEL_6;
LABEL_10:
  if ( dword_6D35C > 4 )
  {
LABEL_6:
    strcpy(s, "open device over");
    sub_343C4(5, s, 0);
    return sub_2A7F4();
  }
  return sub_2A7F4();
}
