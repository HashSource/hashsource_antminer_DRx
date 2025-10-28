int __fastcall get_sale_hashrate_hns(int a1, double *a2, _DWORD *a3)
{
  double v5; // d8
  void (__fastcall *v7)(int, double *); // r5
  const char *v9; // r4
  double v10; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  v7 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v10 = 0.0;
  v7(a1, &v10);
  if ( *(_BYTE *)(a1 + 272) != 72 || *(_BYTE *)(a1 + 273) != 83 || *(_BYTE *)(a1 + 274) != 51 || *(_BYTE *)(a1 + 275) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 220));
  v9 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 220)) + 5);
  if ( !strncmp(v9, "B1C1", 4u) )
  {
    v5 = 0.980000019;
  }
  else if ( !strncmp(v9, "B2C1", 4u) )
  {
    v5 = 0.970000029;
  }
  *a2 = v10 * v5;
  *a3 = 50;
  return 0;
}
