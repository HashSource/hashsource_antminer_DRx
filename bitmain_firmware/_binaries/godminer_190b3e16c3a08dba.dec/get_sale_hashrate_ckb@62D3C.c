int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  double v5; // d8
  void (__fastcall *v7)(int, double *); // r5
  int eeprom_chip_ft; // r0
  const char *v9; // r1
  const char *v10; // r4
  const char *v11; // r1
  const char *v12; // r1
  double v14; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  v7 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v14 = 0.0;
  v7(a1, &v14);
  if ( *(_BYTE *)(a1 + 272) != 75 || *(_BYTE *)(a1 + 273) != 55 || *(_BYTE *)(a1 + 274) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 220));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 220));
  LOWORD(v9) = 7960;
  v10 = (const char *)(eeprom_chip_ft + 5);
  HIWORD(v9) = (unsigned int)"iff %d, ticket mask %d" >> 16;
  if ( !strncmp((const char *)(eeprom_chip_ft + 5), v9, 4u) )
  {
    v5 = 0.982900023;
  }
  else
  {
    LOWORD(v11) = 7968;
    HIWORD(v11) = (unsigned int)"ticket mask %d" >> 16;
    if ( !strncmp(v10, v11, 4u) )
    {
      v5 = 0.970799983;
    }
    else
    {
      LOWORD(v12) = 7976;
      HIWORD(v12) = (unsigned int)"ask %d" >> 16;
      if ( !strncmp(v10, v12, 4u) )
        v5 = 0.970799983;
    }
  }
  *a2 = v14 * v5;
  *a3 = 50;
  return 0;
}
