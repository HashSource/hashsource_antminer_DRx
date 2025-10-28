int __fastcall get_sale_hashrate_kda(int a1, double *a2, _DWORD *a3)
{
  int result; // r0
  double v7; // [sp+0h] [bp-8h] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v7);
  if ( *(_BYTE *)(a1 + 272) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 273) != 65 )
    return 25;
  if ( *(_BYTE *)(a1 + 274) != 51 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 275);
  if ( *(_BYTE *)(a1 + 275) )
    return 25;
  *a2 = v7 * 0.9875;
  *a3 = 100;
  return result;
}
