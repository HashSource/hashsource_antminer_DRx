int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  int v6; // r5
  int eeprom_chip_ft; // r0
  const char *v8; // r1
  bool v9; // zf
  double v10; // d6
  int result; // r0
  double v12; // [sp+0h] [bp-Ch] BYREF

  v12 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v12);
  if ( *(_BYTE *)(a1 + 320) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 321) != 55 )
    return 25;
  v6 = *(unsigned __int8 *)(a1 + 322);
  if ( *(_BYTE *)(a1 + 322) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 248));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 248));
  LOWORD(v8) = -22176;
  HIWORD(v8) = (unsigned int)"08x\n" >> 16;
  v9 = strncmp((const char *)(eeprom_chip_ft + 5), v8, 2u) == 0;
  v10 = 0.970799983;
  result = v6;
  if ( v9 )
    v10 = 0.982900023;
  *a2 = v12 * v10;
  *a3 = 50;
  return result;
}
