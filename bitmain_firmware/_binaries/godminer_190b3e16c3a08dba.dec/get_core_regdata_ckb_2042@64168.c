void __fastcall get_core_regdata_ckb_2042(int a1, __int16 a2)
{
  int v2; // r5
  void *v4; // r6
  int v5; // [sp+14h] [bp-14h] BYREF
  _BYTE v6[10]; // [sp+18h] [bp-10h] BYREF
  __int16 v7; // [sp+22h] [bp-6h]
  char v8; // [sp+24h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 304);
  v7 = a2;
  v6[8] = 1;
  v5 = 0;
  v6[9] = 0;
  v8 = 0;
  v4 = calloc(12 * v2, 1u);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 268))(a1, v6, v2, v4, &v5);
  free(v4);
}
