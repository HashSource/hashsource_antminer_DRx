int __fastcall get_sale_hashrate_eth(int a1, _QWORD *a2, int *a3)
{
  __int64 v3; // r6
  int result; // r0
  int v8; // r3
  bool v9; // zf
  __int64 v10; // [sp+0h] [bp-8h] BYREF

  v3 = 0;
  v10 = 0;
  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v10);
  result = strcmp((const char *)(a1 + 272), "E9 Pro");
  v9 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v3 = v10;
    v8 = 50;
  }
  if ( v9 )
  {
    *a2 = v3;
    *a3 = v8;
  }
  return result;
}
