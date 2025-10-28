int __fastcall get_qualify_hashrate_hns(int a1, double *a2)
{
  double v4; // d8
  void (__fastcall *v5)(int, double *); // r2
  const char *v7; // r4
  double v8; // [sp+0h] [bp-Ch] BYREF

  v4 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v8 = 0.0;
  v5(a1, &v8);
  if ( *(_BYTE *)(a1 + 272) != 72 || *(_BYTE *)(a1 + 273) != 83 || *(_BYTE *)(a1 + 274) != 51 || *(_BYTE *)(a1 + 275) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 220));
  v7 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 220)) + 5);
  if ( !strncmp(v7, "B1C1", 4u) )
  {
    v4 = 0.99000001;
  }
  else if ( !strncmp(v7, "B2C1", 4u) )
  {
    v4 = 0.970700026;
  }
  *a2 = v8 * v4;
  return 0;
}
