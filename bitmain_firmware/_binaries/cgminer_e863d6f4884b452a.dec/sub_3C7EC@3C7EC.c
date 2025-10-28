int __fastcall sub_3C7EC(int result, int a2)
{
  unsigned __int8 v2; // r6
  unsigned int v3; // r5
  char *v4; // r4
  char v5; // t1
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  if ( *((_BYTE *)&unk_73ED8 + result + 24) == 1 )
  {
    v2 = result;
    v3 = ((unsigned __int8)byte_6D7EE << 8) | 0x4060 | a2 & 0xFFFFA09F;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s: reg_value = 0x%08x", "enable_read_temperature_from_asic_chain", v3);
      sub_343C4(5, s, 0);
    }
    v4 = &byte_6FB38;
    do
    {
      v5 = *v4++;
      sub_3C790(v2, 0, v5, 28, v3);
      result = sub_2A7F4();
    }
    while ( v4 != byte_6FB3C );
  }
  return result;
}
