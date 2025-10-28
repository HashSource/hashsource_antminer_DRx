int __fastcall get_qualify_hashrate_hns(int a1, double *a2)
{
  double v4; // d8
  void (__fastcall *v5)(int, double *); // r2
  int eeprom_chip_ft; // r0
  const char *v8; // r1
  const char *v9; // r4
  const char *v10; // r1
  double v11; // [sp+0h] [bp-Ch] BYREF

  v4 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 136);
  v11 = 0.0;
  v5(a1, &v11);
  if ( *(_BYTE *)(a1 + 320) != 72 || *(_BYTE *)(a1 + 321) != 83 || *(_BYTE *)(a1 + 322) != 51 || *(_BYTE *)(a1 + 323) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 248));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 248));
  LOWORD(v8) = -22172;
  v9 = (const char *)(eeprom_chip_ft + 5);
  HIWORD(v8) = (unsigned int)"" >> 16;
  if ( !strncmp((const char *)(eeprom_chip_ft + 5), v8, 4u) )
  {
    v4 = 0.99000001;
  }
  else
  {
    LOWORD(v10) = -22164;
    HIWORD(v10) = (unsigned int)"l status: %08x\n" >> 16;
    if ( !strncmp(v9, v10, 4u) )
      v4 = 0.970700026;
  }
  *a2 = v11 * v4;
  return 0;
}
