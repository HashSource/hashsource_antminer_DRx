int __fastcall get_qualify_hashrate_zec_1746(int a1, double *a2)
{
  double v2; // d7
  int result; // r0
  bool v6; // zf
  double v7; // [sp+0h] [bp-Ch] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v7);
  result = strcmp((const char *)(a1 + 272), "Z15 Pro");
  v6 = result == 0;
  if ( result )
    result = 25;
  else
    v2 = v7;
  if ( v6 )
    *a2 = v2 * 0.959999979;
  return result;
}
