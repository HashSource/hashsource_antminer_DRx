int __fastcall get_qualify_nonce_num_kda(int a1, float *a2)
{
  int v4; // r0
  char v5; // r1
  int v6; // r3
  __int64 v7; // r0
  double v8; // r0
  double v9; // d4
  float v11; // s14
  double v12; // [sp+0h] [bp-Ch] BYREF

  v12 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 136))(a1, &v12);
  v4 = *(_DWORD *)(a1 + 448);
  v5 = 32 - v4;
  v6 = 1 << (v4 - 32);
  LODWORD(v7) = 1 << v4;
  HIDWORD(v7) = v6 | (1u >> v5);
  LODWORD(v8) = sub_14579C(v7);
  v9 = v8;
  v11 = v12 / v9 / 92.0 * 0.4;
  *a2 = v11;
  return 0;
}
