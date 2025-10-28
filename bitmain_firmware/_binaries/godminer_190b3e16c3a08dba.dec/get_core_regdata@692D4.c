void __fastcall get_core_regdata(int a1, __int16 a2)
{
  int v3; // r2
  int v4; // r4
  int v5; // r4
  void *v6; // r6
  int v7; // [sp+14h] [bp-14h] BYREF
  _BYTE v8[10]; // [sp+18h] [bp-10h] BYREF
  __int16 v9; // [sp+22h] [bp-6h]
  char v10; // [sp+24h] [bp-4h]

  v3 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v9 = a2;
  v8[8] = 1;
  v7 = 0;
  v5 = v4 * v3;
  v8[9] = 0;
  v10 = -1;
  v6 = calloc(12 * v5, 1u);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 268))(a1, v8, v5, v6, &v7);
  free(v6);
}
