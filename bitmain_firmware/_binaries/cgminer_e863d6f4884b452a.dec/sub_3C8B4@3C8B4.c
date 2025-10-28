int __fastcall sub_3C8B4(int result, int a2)
{
  unsigned __int8 v3; // r5
  char *v4; // r4
  char v5; // t1
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  if ( *((_BYTE *)&unk_73ED8 + result + 24) == 1 )
  {
    v3 = result;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s: diode_mux_sel = %d", "select_core_to_check_temperature_chain", a2);
      sub_343C4(5, s, 0);
    }
    v4 = &byte_6FB38;
    do
    {
      v5 = *v4++;
      sub_3C790(v3, 0, v5, 64, a2);
      result = sub_2A7F4();
    }
    while ( v4 != byte_6FB3C );
  }
  return result;
}
