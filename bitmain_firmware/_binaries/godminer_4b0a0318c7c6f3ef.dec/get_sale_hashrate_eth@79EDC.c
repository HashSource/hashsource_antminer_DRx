int __fastcall get_sale_hashrate_eth(int a1, _QWORD *a2, int *a3)
{
  __int64 v3; // r6
  const char *v7; // r1
  int result; // r0
  int v9; // r3
  bool v10; // zf
  __int64 v11; // [sp+0h] [bp-8h] BYREF

  v3 = 0;
  v11 = 0;
  (*(void (__fastcall **)(int, __int64 *))(a1 + 136))(a1, &v11);
  LOWORD(v7) = 32408;
  HIWORD(v7) = (unsigned int)"" >> 16;
  result = strcmp((const char *)(a1 + 320), v7);
  v10 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v3 = v11;
    v9 = 50;
  }
  if ( v10 )
  {
    *a2 = v3;
    *a3 = v9;
  }
  return result;
}
