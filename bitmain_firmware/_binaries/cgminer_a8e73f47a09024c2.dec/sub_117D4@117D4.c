int __fastcall sub_117D4(int a1)
{
  int result; // r0
  unsigned int v3[8]; // [sp+0h] [bp-20h] BYREF

  result = sub_11788((char *)a1, 80, (int)v3);
  *(_DWORD *)(a1 + 244) = bswap32(v3[7]);
  *(_DWORD *)(a1 + 248) = bswap32(v3[6]);
  *(_DWORD *)(a1 + 252) = bswap32(v3[5]);
  *(_DWORD *)(a1 + 256) = bswap32(v3[4]);
  *(_DWORD *)(a1 + 260) = bswap32(v3[3]);
  *(_DWORD *)(a1 + 264) = bswap32(v3[2]);
  *(_DWORD *)(a1 + 268) = bswap32(v3[1]);
  *(_DWORD *)(a1 + 272) = bswap32(v3[0]);
  return result;
}
