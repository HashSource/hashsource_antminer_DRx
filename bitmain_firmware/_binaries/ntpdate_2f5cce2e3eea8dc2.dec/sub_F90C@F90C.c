bool __fastcall sub_F90C(int a1, int a2, int a3, size_t a4, int a5)
{
  _BYTE v9[64]; // [sp+0h] [bp-9Ch] BYREF
  _BYTE v10[92]; // [sp+40h] [bp-5Ch] BYREF

  sub_13354(v10);
  sub_1339C((int)v10, a2, dword_24098);
  sub_1339C((int)v10, a3, a4);
  sub_134B0(v10, v9);
  if ( a5 == 20 )
    return memcmp(v9, (const void *)(a3 + a4 + 4), 0x10u) == 0;
  sub_E15C(3, "MAC decrypt: MAC length error");
  return 0;
}
