int __fastcall sub_4C8C4(int result)
{
  int v1; // r7
  int i; // r4
  char s[4]; // [sp+10h] [bp-800h] BYREF
  char v4; // [sp+14h] [bp-7FCh]

  v1 = result;
  if ( *((_BYTE *)&unk_B3AFC + result + 24) == 1 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(
        s,
        0x800u,
        "%s: chain %d has %d ASIC, and addrInterval is %d",
        "software_set_address_chain",
        result,
        *((unsigned __int8 *)&unk_B3AFC + result + 2138),
        (unsigned __int16)word_B4385);
      sub_3F178(5, s, 0);
    }
    sub_4C820(v1);
    sub_30140();
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "Now Set [%d] Chain Address", v1);
      sub_3F178(5, s, 0);
    }
    for ( i = 0; i != 72; ++i )
    {
      s[3] = 0;
      v4 = 0;
      s[0] = 64;
      s[1] = 5;
      s[2] = i * word_B4385;
      v4 = sub_429CC(s, 32);
      sub_43CC0((unsigned __int8)v1, s, 5u);
      result = sub_30140();
    }
  }
  return result;
}
