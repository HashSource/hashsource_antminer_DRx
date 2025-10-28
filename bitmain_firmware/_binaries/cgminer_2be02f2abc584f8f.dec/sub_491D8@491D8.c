void __fastcall sub_491D8(int a1)
{
  int i; // r4
  char s[4]; // [sp+10h] [bp-800h] BYREF
  char v4; // [sp+14h] [bp-7FCh]

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s: chain %d has %d ASIC, and addrInterval is %d",
      "software_set_address_chain",
      a1,
      *((unsigned __int8 *)&unk_93504 + a1 + 1868),
      (unsigned __int16)word_93C7A);
    sub_3F1C0(5, s, 0);
  }
  if ( *((_BYTE *)&unk_93504 + a1 + 8) == 1 )
  {
    sub_49134(a1);
    sub_2FF20();
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "Now Set [%d] Chain Address", a1);
      sub_3F1C0(5, s, 0);
    }
    for ( i = 0; i != 54; ++i )
    {
      s[3] = 0;
      v4 = 0;
      s[0] = 64;
      s[1] = 5;
      s[2] = i * word_93C7A;
      v4 = sub_41784(s, 32);
      sub_429E0((unsigned __int8)a1, s, 5u);
      sub_2FF20();
    }
  }
}
