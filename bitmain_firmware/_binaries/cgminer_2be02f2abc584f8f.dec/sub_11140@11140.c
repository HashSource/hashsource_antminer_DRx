int __fastcall sub_11140(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4
  int i; // r1
  unsigned int v5; // r5
  _BYTE v7[131592]; // [sp+8h] [bp-20A84h] BYREF
  char v8[12]; // [sp+20210h] [bp-87Ch] BYREF
  int v9[8]; // [sp+20A10h] [bp-7Ch] BYREF
  _DWORD v10[20]; // [sp+20A30h] [bp-5Ch] BYREF

  v3 = *(_DWORD *)(a2 + 28);
  for ( i = 0; i != 19; ++i )
    v10[i] = bswap32(*(_DWORD *)(a1 + i * 4));
  v10[19] = bswap32(a3);
  sub_EA4C(v10, (int)v7, v9);
  v5 = bswap32(v9[7]);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(v8, 0x800u, "htarget %08lx diff1 %08lx hash %08lx", v3, 0xFFFF, v5);
    sub_3F1C0(7, v8, 0);
  }
  if ( v5 >= 0x10000 )
    return -1;
  else
    return v3 >= v5;
}
