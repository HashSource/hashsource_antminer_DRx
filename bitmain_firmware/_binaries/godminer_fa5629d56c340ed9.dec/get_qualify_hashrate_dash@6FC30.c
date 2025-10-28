int __fastcall get_qualify_hashrate_dash(int a1, double *a2)
{
  int result; // r0
  double v5; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v5);
  if ( *(_BYTE *)(a1 + 324) != 68 )
    return 25;
  if ( *(_BYTE *)(a1 + 325) != 57 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 326);
  if ( *(_BYTE *)(a1 + 326) )
    return 25;
  *a2 = v5 * 0.975;
  return result;
}
