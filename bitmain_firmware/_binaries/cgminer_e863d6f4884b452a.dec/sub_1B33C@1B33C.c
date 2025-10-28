bool __fastcall sub_1B33C(_DWORD *a1, int a2)
{
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_6FA71 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      strcpy(s, "test_nonce");
      sub_343C4(7, s, 0);
      if ( !byte_6FA71 )
        goto LABEL_8;
      if ( byte_73320 )
        goto LABEL_7;
    }
    if ( byte_6FA70 || dword_6D35C > 6 )
    {
LABEL_7:
      snprintf(s, 0x800u, "%s: 1 *hash_32 = 0x%08x", "test_nonce", a1[68]);
      sub_343C4(7, s, 0);
    }
  }
LABEL_8:
  sub_1B2B8(a1, a2);
  if ( byte_6FA71 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
    {
      v4 = (unsigned __int8)byte_73D04;
LABEL_13:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
      {
        if ( v4 )
        {
          v6 = 0xFFFF;
LABEL_18:
          if ( !byte_6FA70 && dword_6D35C <= 6 )
            return a1[68] <= v6;
LABEL_19:
          snprintf(s, 0x800u, "%s: diff1targ = 0x%08x", "test_nonce", v6);
          sub_343C4(7, s, 0);
          return a1[68] <= v6;
        }
        v5 = (unsigned __int8)byte_6FA71;
LABEL_15:
        v6 = 0;
LABEL_16:
        if ( !v5 )
          return a1[68] <= v6;
        if ( byte_73320 )
          goto LABEL_19;
        goto LABEL_18;
      }
LABEL_14:
      snprintf(s, 0x800u, "%s opt_scrypt = %d", "test_nonce", v4);
      sub_343C4(7, s, 0);
      v5 = (unsigned __int8)byte_6FA71;
      v6 = 0xFFFF;
      if ( byte_73D04 )
        goto LABEL_16;
      goto LABEL_15;
    }
    snprintf(s, 0x800u, "%s: 2 *hash_32 = 0x%08x", "test_nonce", a1[68]);
    sub_343C4(7, s, 0);
    if ( byte_6FA71 )
    {
      v4 = (unsigned __int8)byte_73D04;
      if ( byte_73320 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  if ( byte_73D04 )
    v6 = 0xFFFF;
  else
    v6 = 0;
  return a1[68] <= v6;
}
