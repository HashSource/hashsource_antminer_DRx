int __fastcall sub_3D704(int a1)
{
  int v2; // r5
  unsigned __int8 v3; // r3
  int result; // r0
  _WORD s[2]; // [sp+10h] [bp-804h] BYREF
  char v6; // [sp+14h] [bp-800h]

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(
      (char *)s,
      0x800u,
      "%s: chain %d has %d ASIC, and addrInterval is %d",
      "software_set_address_chain",
      a1,
      *((unsigned __int8 *)&unk_73ED8 + a1 + 2138),
      (unsigned __int16)word_74761);
    sub_343C4(5, (const char *)s, 0);
  }
  sub_3D6D0(a1);
  sub_2A7F4();
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf((char *)s, 0x800u, "Now Set [%d] Chain Address", a1);
    sub_343C4(5, (const char *)s, 0);
  }
  v2 = 0;
  do
  {
    v6 = 0;
    s[0] = 1344;
    v3 = word_74761 * v2++;
    s[1] = v3;
    v6 = sub_36D08(s, 0x20u);
    sub_37A50((unsigned __int8)a1, s, 5u);
    result = sub_2A7F4();
  }
  while ( v2 != 72 );
  return result;
}
