int __fastcall get_qualify_hashrate_ckb(int a1, double *a2)
{
  double v4; // d8
  void (__fastcall *v5)(int, double *); // r2
  const char *v6; // r4
  double v8; // [sp+0h] [bp-Ch] BYREF

  v4 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v8 = 0.0;
  v5(a1, &v8);
  if ( *(_BYTE *)(a1 + 272) != 75 || *(_BYTE *)(a1 + 273) != 55 || *(_BYTE *)(a1 + 274) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 220));
  v6 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 220)) + 5);
  if ( !strncmp(v6, "B1C1", 4u) )
  {
    v4 = 0.987500012;
  }
  else if ( !strncmp(v6, "B2C1", 4u) )
  {
    v4 = 0.975000024;
  }
  *a2 = v8 * v4;
  return 0;
}
