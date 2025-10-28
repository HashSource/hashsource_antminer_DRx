int __fastcall sub_117A4(int a1)
{
  int i; // r1
  int v3; // [sp+0h] [bp-70h] BYREF
  _BYTE v4[80]; // [sp+20h] [bp-50h] BYREF

  for ( i = 0; i != 80; i += 4 )
    *(_DWORD *)&v4[i] = bswap32(*(_DWORD *)(a1 + i));
  sub_303DC((int)v4, 0x50u);
  return sub_303DC((int)&v3, 0x20u);
}
