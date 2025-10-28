_DWORD *__fastcall sub_302E4(_DWORD *a1, int a2)
{
  int v3; // r3
  int v5; // r6
  char *v6; // r0
  int v7; // r6
  int v8; // r2
  size_t v9; // r2
  int v10; // r8
  int v11; // r10
  int v12; // r9
  int v13; // r11
  int v14; // r7
  int v15; // r6
  _DWORD *result; // r0
  int i; // r3
  _BYTE *v18; // r2

  v3 = a1[1];
  v5 = *a1;
  v6 = (char *)a1 + v3 + 8;
  v7 = v3 + v5;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v8 = 128;
  else
    v8 = 64;
  v9 = v8 - v3;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v10 = 31;
  else
    v10 = 15;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v11 = 125;
  else
    v11 = 61;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v12 = 126;
  else
    v12 = 62;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v13 = 127;
  else
    v13 = 63;
  if ( (v3 & 0x3Fu) >= 0x38 )
    v14 = 2;
  else
    v14 = 1;
  memset(v6, 0, v9);
  v15 = 8 * v7;
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  *((_BYTE *)a1 + v13 + 8) = v15;
  *((_BYTE *)a1 + v12 + 8) = BYTE1(v15);
  *((_BYTE *)a1 + v11 + 8) = BYTE2(v15);
  LOBYTE(a1[v10 + 2]) = HIBYTE(v15);
  sub_2FFF0((unsigned int)a1, (int)(a1 + 2), v14);
  result = a1;
  for ( i = 0; i != 8; ++i )
  {
    v18 = (_BYTE *)(a2 + 4 * i);
    v18[3] = result[34];
    v18[2] = BYTE1(result[34]);
    v18[1] = *((_WORD *)result + 69);
    LOBYTE(v18) = *((_BYTE *)result++ + 139);
    *(_BYTE *)(a2 + 4 * i) = (_BYTE)v18;
  }
  return result;
}
