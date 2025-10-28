void __fastcall sub_48CA4(int a1)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain");
    sub_3F1C0(4, s, 0);
  }
  if ( *((_BYTE *)&unk_93504 + a1 + 8) == 1 )
  {
    sub_48AC4(a1, 0);
    sub_48AC4(a1, 1);
  }
}
