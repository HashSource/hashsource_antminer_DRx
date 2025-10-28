unsigned int __fastcall sub_19BB8(_DWORD *a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r7
  unsigned int v4; // r6
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned int result; // r0
  unsigned int v9; // r3
  _DWORD v10[9]; // [sp+0h] [bp-24h] BYREF

  sub_19B8C((int)a1, 80, (int)v10);
  v2 = v10[3];
  v3 = bswap32(v10[6]);
  v4 = bswap32(v10[5]);
  v5 = v10[2];
  v6 = v10[1];
  v7 = bswap32(v10[4]);
  a1[61] = bswap32(v10[7]);
  result = bswap32(v2);
  v9 = v10[0];
  a1[62] = v3;
  a1[63] = v4;
  a1[64] = v7;
  a1[65] = result;
  a1[66] = bswap32(v5);
  a1[67] = bswap32(v6);
  a1[68] = bswap32(v9);
  return result;
}
