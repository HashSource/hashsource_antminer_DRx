int __fastcall get_qualify_hashrate_ks5(int a1, double *a2)
{
  int v5; // r5
  double v6; // [sp+0h] [bp-8h] BYREF

  v6 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v6);
  if ( *(_BYTE *)(a1 + 320) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 321) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 322) != 51 )
    return 25;
  v5 = *(unsigned __int8 *)(a1 + 323);
  if ( *(_BYTE *)(a1 + 323) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 248));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 248));
  *a2 = v6 * 0.980000019;
  return v5;
}
