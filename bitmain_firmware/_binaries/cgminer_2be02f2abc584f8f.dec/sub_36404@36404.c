_DWORD *__fastcall sub_36404(_DWORD *a1, int a2)
{
  int v4; // r2
  int v5; // r7
  int v6; // r6
  _BYTE *v7; // r3
  _DWORD *result; // r0
  int i; // r3
  _BYTE *v10; // r2

  v4 = a1[1];
  if ( (v4 & 0x3Fu) > 0x37 )
    v5 = 2;
  else
    v5 = 1;
  v6 = 8 * (v4 + *a1);
  memset((char *)a1 + v4 + 8, 0, (v5 << 6) - v4);
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  v7 = &a1[16 * v5];
  v7[7] = v6;
  v7[6] = BYTE1(v6);
  v7[5] = BYTE2(v6);
  v7[4] = HIBYTE(v6);
  sub_36110((int)a1, (int)(a1 + 2), v5);
  result = a1;
  for ( i = 0; i != 8; ++i )
  {
    v10 = (_BYTE *)(a2 + 4 * i);
    v10[3] = result[34];
    v10[2] = BYTE1(result[34]);
    v10[1] = *((_WORD *)result + 69);
    *v10 = *((_BYTE *)result++ + 139);
  }
  return result;
}
