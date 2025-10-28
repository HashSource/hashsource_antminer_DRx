int __fastcall sub_F890(int a1, int a2, int a3, size_t a4)
{
  int v7; // r1
  int v8; // r2
  int v9; // r3
  _DWORD *v10; // r12
  _DWORD v12[16]; // [sp+0h] [bp-98h] BYREF
  _BYTE v13[88]; // [sp+40h] [bp-58h] BYREF

  sub_13354(v13);
  sub_1339C((int)v13, a2, dword_24098);
  sub_1339C((int)v13, a3, a4);
  sub_134B0(v13, v12);
  v7 = v12[1];
  v8 = v12[2];
  v9 = v12[3];
  v10 = (_DWORD *)(a3 + a4 + 4);
  *v10 = v12[0];
  v10[1] = v7;
  v10[2] = v8;
  v10[3] = v9;
  return 20;
}
