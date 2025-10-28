int __fastcall api_get_eeprom_freq(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_PT2_freq(dword_1B4538[a1], &v2);
  return v2;
}
