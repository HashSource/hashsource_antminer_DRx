int __fastcall get_qualify_hashrate_eth(int a1, double *a2)
{
  double v2; // d7
  int result; // r0
  bool v6; // zf
  double v7; // [sp+0h] [bp-Ch] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v7);
  result = strcmp((const char *)(a1 + 324), "E9 Pro");
  v6 = result == 0;
  if ( result )
    result = 25;
  else
    v2 = v7;
  if ( v6 )
    *a2 = v2 * 0.962850034;
  return result;
}
