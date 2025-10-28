int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  int v6; // r5
  int eeprom_chip_ft; // r0
  bool v8; // zf
  double v9; // d6
  int result; // r0
  double v11; // [sp+0h] [bp-Ch] BYREF

  v11 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v11);
  if ( *(_BYTE *)(a1 + 324) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 325) != 55 )
    return 25;
  v6 = *(unsigned __int8 *)(a1 + 326);
  if ( *(_BYTE *)(a1 + 326) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 252));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 252));
  v8 = strncmp((const char *)(eeprom_chip_ft + 5), "B1", 2u) == 0;
  v9 = 0.970799983;
  result = v6;
  if ( v8 )
    v9 = 0.982900023;
  *a2 = v11 * v9;
  *a3 = 50;
  return result;
}
