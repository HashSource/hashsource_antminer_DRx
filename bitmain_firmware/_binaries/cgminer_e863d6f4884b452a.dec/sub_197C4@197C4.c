_DWORD *__fastcall sub_197C4(_DWORD *a1)
{
  _DWORD *v2; // r1
  _BYTE **v3; // r2
  unsigned int v4; // t1
  unsigned int v5; // r3
  _DWORD *result; // r0
  unsigned int v7; // t1
  _BYTE *v8; // [sp+4h] [bp-20254h] BYREF
  _BYTE v9[72]; // [sp+8h] [bp-20250h] BYREF
  _DWORD v10[2]; // [sp+50h] [bp-20208h] BYREF
  _DWORD v11[128]; // [sp+58h] [bp-20200h] BYREF

  v11[0] = 0;
  memset(&v11[1], 0, (size_t)&loc_201FC);
  v2 = a1 - 1;
  v3 = &v8;
  do
  {
    v4 = v2[1];
    ++v2;
    v3[1] = (_BYTE *)bswap32(v4);
    ++v3;
  }
  while ( v3 != v10 );
  v5 = a1[19];
  v8 = v9;
  v10[1] = bswap32(v5);
  sub_17C8C((int)v9, (int)v11, a1 + 61);
  result = a1 + 60;
  do
  {
    v7 = result[1];
    *++result = bswap32(v7);
  }
  while ( result != a1 + 68 );
  return result;
}
