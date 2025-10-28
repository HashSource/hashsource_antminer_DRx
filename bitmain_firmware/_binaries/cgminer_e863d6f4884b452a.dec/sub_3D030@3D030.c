void __fastcall sub_3D030(int a1)
{
  int i; // r4
  int v3; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain");
    sub_343C4(4, s, 0);
  }
  if ( *((_BYTE *)&unk_73ED8 + a1 + 24) == 1 )
  {
    for ( i = 0; i != 4; ++i )
    {
      v3 = (unsigned __int8)i;
      sub_3CEE8(a1, v3);
    }
  }
}
