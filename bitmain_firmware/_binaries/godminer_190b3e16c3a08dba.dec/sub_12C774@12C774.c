unsigned int __fastcall sub_12C774(_DWORD *s, char a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v9; // r8
  unsigned int v11; // r3
  _DWORD *v12; // r0
  int v13; // r12
  _DWORD *v14; // r5
  int v15; // r2
  int v16; // r3
  int v17; // r3
  unsigned int v18; // t1
  unsigned int result; // r0

  v6 = s[32];
  v9 = v6 | a3;
  if ( v6 | a3 )
  {
    memset((char *)s + v6, 0, 128 - v6);
    *((_BYTE *)s + s[32]) = a2 & (-1 << (8 - a3));
    sub_124208((int)s, 0);
    v9 = s[32];
  }
  memset(s, 0, 0x80u);
  v11 = s[65];
  v12 = s;
  v13 = s[66];
  v14 = s + 32;
  v11 <<= 10;
  v15 = a3 + v11 + 8 * v9;
  v16 = (v11 >> 22) + (v13 << 10);
  *((_BYTE *)v14 - 128) = v15;
  *((_BYTE *)v14 - 124) = v16;
  *((_BYTE *)v14 - 127) = BYTE1(v15);
  *((_BYTE *)v14 - 121) = HIBYTE(v16);
  *((_BYTE *)v14 - 126) = BYTE2(v15);
  *((_BYTE *)v14 - 125) = HIBYTE(v15);
  *((_BYTE *)v14 - 123) = BYTE1(v16);
  *((_BYTE *)v14 - 122) = BYTE2(v16);
  sub_124208((int)v12, 1);
  v17 = a4;
  do
  {
    v18 = v14[1];
    ++v14;
    v17 += 4;
    *(_DWORD *)(v17 - 4) = v18;
    result = v18 >> 8;
  }
  while ( a4 + 4 * a5 != v17 );
  return result;
}
