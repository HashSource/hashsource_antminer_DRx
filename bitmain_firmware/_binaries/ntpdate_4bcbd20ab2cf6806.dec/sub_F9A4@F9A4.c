int __fastcall sub_F9A4(int a1)
{
  _DWORD v3[5]; // [sp+4h] [bp-6Ch] BYREF
  _BYTE v4[88]; // [sp+18h] [bp-58h] BYREF

  if ( *(_WORD *)a1 == 2 )
    return *(_DWORD *)(a1 + 4);
  sub_13354(v4);
  sub_1339C((int)v4, a1 + 8, 0x10u);
  sub_134B0(v4, v3);
  return v3[0];
}
