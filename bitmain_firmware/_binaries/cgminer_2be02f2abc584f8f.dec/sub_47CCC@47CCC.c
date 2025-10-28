void __fastcall sub_47CCC(int a1, int a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v3 = a2 & 0xFFFFA0FF;
  v4 = ((unsigned __int8)byte_73971 << 8) | 0x4060 | v3 & 0xFFFFFF9F;
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s: reg_value = 0x%08x",
      "enable_read_temperature_from_asic_chain",
      ((unsigned __int8)byte_73971 << 8) | 0x4060 | v3 & 0xFFFFFF9F);
    sub_3F1C0(5, s, 0);
  }
  if ( *((_BYTE *)&unk_93504 + a1 + 8) == 1 )
  {
    sub_47C40((unsigned __int8)a1, 0, byte_75D9C, 28, v4);
    sub_2FF20();
    sub_47C40((unsigned __int8)a1, 0, byte_75D9D, 28, v4);
    sub_2FF20();
  }
}
