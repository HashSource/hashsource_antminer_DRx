int __fastcall get_sale_hashrate_dash(int a1, double *a2, _DWORD *a3)
{
  int result; // r0
  double v7; // [sp+0h] [bp-8h] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v7);
  if ( *(_BYTE *)(a1 + 320) != 68 )
    return 25;
  if ( *(_BYTE *)(a1 + 321) != 57 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 322);
  if ( *(_BYTE *)(a1 + 322) )
    return 25;
  *a2 = v7 * 0.977;
  *a3 = 10;
  return result;
}
