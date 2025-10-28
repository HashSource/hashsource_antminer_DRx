int __fastcall get_sale_hashrate_kas(int a1, double *a2, _DWORD *a3)
{
  double v5; // d8
  void (__fastcall *v7)(int, double *); // r5
  int eeprom_chip_ft; // r0
  const char *v10; // r1
  const char *v11; // r4
  const char *v12; // r1
  double v13; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  v7 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v13 = 0.0;
  v7(a1, &v13);
  if ( *(_BYTE *)(a1 + 272) != 75 || *(_BYTE *)(a1 + 273) != 65 || *(_BYTE *)(a1 + 274) != 83 || *(_BYTE *)(a1 + 275) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 220));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 220));
  LOWORD(v10) = 7960;
  v11 = (const char *)(eeprom_chip_ft + 5);
  HIWORD(v10) = (unsigned int)"iff %d, ticket mask %d" >> 16;
  if ( !strncmp((const char *)(eeprom_chip_ft + 5), v10, 4u) )
  {
    v5 = 0.982900023;
  }
  else
  {
    LOWORD(v12) = 7968;
    HIWORD(v12) = (unsigned int)"ticket mask %d" >> 16;
    if ( !strncmp(v11, v12, 4u) )
      v5 = 0.970799983;
  }
  *a2 = v13 * v5;
  *a3 = 50;
  return 0;
}
