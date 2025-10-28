int __fastcall get_qualify_hashrate_eth(int a1, double *a2)
{
  double v2; // d7
  const char *v5; // r1
  int result; // r0
  bool v7; // zf
  double v8; // [sp+0h] [bp-Ch] BYREF

  v8 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v8);
  LOWORD(v5) = 32408;
  HIWORD(v5) = (unsigned int)"" >> 16;
  result = strcmp((const char *)(a1 + 320), v5);
  v7 = result == 0;
  if ( result )
    result = 25;
  else
    v2 = v8;
  if ( v7 )
    *a2 = v2 * 0.962850034;
  return result;
}
