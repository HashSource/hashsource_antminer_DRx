int __fastcall api_get_eeprom_voltage(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_voltage(dword_18C508[a1 + 2], &v2);
  return v2;
}
