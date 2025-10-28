int __fastcall get_sale_hashrate_zec_1746(int a1, double *a2, int *a3)
{
  double v3; // d6
  double v4; // d7
  int result; // r0
  int v9; // r3
  bool v10; // zf
  double v11; // [sp+0h] [bp-8h] BYREF

  v11 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v11);
  result = strcmp((const char *)(a1 + 324), "Z15 Pro");
  v10 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v4 = v11;
    v9 = 10;
    v3 = 0.920000017;
  }
  if ( v10 )
  {
    *a2 = v4 * v3;
    *a3 = v9;
  }
  return result;
}
