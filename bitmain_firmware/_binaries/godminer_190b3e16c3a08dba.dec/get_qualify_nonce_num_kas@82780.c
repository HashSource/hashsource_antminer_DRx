int __fastcall get_qualify_nonce_num_kas(int a1, _DWORD *a2)
{
  int v4; // r0
  char v5; // r1
  int v6; // r3
  __int64 v7; // r0
  double v8; // r0
  double v9; // d7
  double v11; // [sp+0h] [bp-Ch] BYREF

  v11 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v11);
  v4 = *(_DWORD *)(a1 + 400);
  v5 = 32 - v4;
  v6 = 1 << (v4 - 32);
  LODWORD(v7) = 1 << v4;
  HIDWORD(v7) = v6 | (1u >> v5);
  LODWORD(v8) = sub_12E0FC(v7);
  v9 = v8;
  *(float *)&v9 = v11 / v9 * 0.125 * 0.3;
  *a2 = LODWORD(v9);
  return 0;
}
