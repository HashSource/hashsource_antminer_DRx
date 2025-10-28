void __fastcall sub_4C390(int a1)
{
  int i; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain");
    sub_3F178(4, s, 0);
  }
  if ( *((_BYTE *)&unk_B3AFC + a1 + 24) == 1 )
  {
    for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
      sub_4C1B4(a1, i);
  }
}
