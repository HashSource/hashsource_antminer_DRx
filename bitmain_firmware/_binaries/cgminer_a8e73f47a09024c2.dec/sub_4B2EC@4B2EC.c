int __fastcall sub_4B2EC(int result, int a2)
{
  unsigned __int8 v2; // r5
  unsigned int v3; // r6
  char *v4; // r4
  char v5; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = result;
  if ( *((_BYTE *)&unk_B3AFC + result + 24) == 1 )
  {
    v3 = ((unsigned __int8)byte_7A9BE << 8) | 0x4060 | a2 & 0xFFFFA09F;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "%s: reg_value = 0x%08x", "enable_read_temperature_from_asic_chain", v3);
      sub_3F178(5, s, 0);
    }
    v4 = (char *)&unk_7CE53;
    do
    {
      v5 = *++v4;
      sub_4B140(v2, 0, v5, 28, v3);
      result = sub_30140();
    }
    while ( v4 != &byte_7CE57 );
  }
  return result;
}
