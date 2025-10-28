int __fastcall get_sale_hashrate_zec_1746(int a1, double *a2, int *a3)
{
  double v3; // d6
  double v4; // d7
  const char *v8; // r1
  int result; // r0
  int v10; // r3
  bool v11; // zf
  double v12; // [sp+0h] [bp-8h] BYREF

  v12 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v12);
  LOWORD(v8) = 19112;
  HIWORD(v8) = (unsigned int)"" >> 16;
  result = strcmp((const char *)(a1 + 320), v8);
  v11 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v4 = v12;
    v10 = 10;
    v3 = 0.920000017;
  }
  if ( v11 )
  {
    *a2 = v4 * v3;
    *a3 = v10;
  }
  return result;
}
