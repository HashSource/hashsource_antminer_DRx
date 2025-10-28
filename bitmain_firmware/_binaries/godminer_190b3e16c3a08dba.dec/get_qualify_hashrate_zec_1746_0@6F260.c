int __fastcall get_qualify_hashrate_zec_1746_0(int a1, double *a2)
{
  double v2; // d7
  const char *v5; // r1
  int result; // r0
  bool v7; // zf
  double v8; // [sp+0h] [bp-Ch] BYREF

  v8 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v8);
  LOWORD(v5) = 15376;
  HIWORD(v5) = (unsigned int)"in_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c" >> 16;
  result = strcmp((const char *)(a1 + 272), v5);
  v7 = result == 0;
  if ( result )
    result = 25;
  else
    v2 = v8;
  if ( v7 )
    *a2 = v2 * 0.962850034;
  return result;
}
