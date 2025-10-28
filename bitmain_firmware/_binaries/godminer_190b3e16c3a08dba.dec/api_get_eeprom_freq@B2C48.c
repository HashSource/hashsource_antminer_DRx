int __fastcall api_get_eeprom_freq(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_freq(dword_18C510[a1], &v2);
  return v2;
}
