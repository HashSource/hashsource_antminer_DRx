_DWORD *__fastcall sub_53BF4(_DWORD *a1, char a2, int a3, int a4, int a5)
{
  int v7; // r7
  unsigned int v8; // r3
  int v9; // r1
  int v10; // r8
  int v11; // r10
  bool v12; // zf
  int v13; // r10
  int v14; // r8
  _DWORD *result; // r0
  int i; // r2
  int v17; // r10
  int v18; // r8
  _BYTE *v19; // r12
  int v20; // r1
  _DWORD v21[13]; // [sp+0h] [bp-44h] BYREF
  int v22; // [sp+34h] [bp-10h]
  unsigned int v23; // [sp+38h] [bp-Ch]
  unsigned int v24; // [sp+3Ch] [bp-8h]

  v7 = a1[16];
  v8 = a3 + 8 * v7;
  *((_BYTE *)v21 + v7) = (128 >> a3) | -(128 >> a3) & a2;
  v9 = a1[29];
  v10 = v8 + v9;
  v11 = a1[30];
  v12 = a3 == 0;
  if ( !a3 )
    v12 = v7 == 0;
  if ( v12 )
  {
    a1[29] = -512;
    a1[30] = -1;
  }
  else if ( v9 )
  {
    a1[29] = v10 - 512;
  }
  else
  {
    a1[29] = v8 - 512;
    a1[30] = v11 - 1;
  }
  if ( v8 > 0x1BE )
  {
    memset((char *)v21 + v7 + 1, 0, 63 - v7);
    sub_5101C(a1, (char *)v21 + v7, 64 - v7);
    a1[29] = -512;
    a1[30] = -1;
    memset(v21, 0, sizeof(v21));
    v22 = 0;
    if ( a5 == 8 )
      HIBYTE(v22) = 1;
    v17 = __ROR4__(v11, 16);
    v23 = ((v17 & 0xFF00FF) << 8) | ((v17 & 0xFF00FFFF) >> 8);
    v18 = __ROR4__(v10, 16);
    v24 = ((v18 & 0xFF00FF) << 8) | ((v18 & 0xFF00FFFF) >> 8);
    result = sub_5101C(a1, (char *)v21, 0x40u);
  }
  else
  {
    memset((char *)v21 + v7 + 1, 0, 55 - v7);
    if ( a5 == 8 )
      HIBYTE(v22) |= 1u;
    v13 = __ROR4__(v11, 16);
    v23 = ((v13 & 0xFF00FF) << 8) | ((v13 & 0xFF00FFFF) >> 8);
    v14 = __ROR4__(v10, 16);
    v24 = ((v14 & 0xFF00FF) << 8) | ((v14 & 0xFF00FFFF) >> 8);
    result = sub_5101C(a1, (char *)v21 + v7, 64 - v7);
  }
  if ( a5 )
  {
    result = a1;
    for ( i = 0; i != a5; ++i )
    {
      v19 = (_BYTE *)(a4 + 4 * i);
      v20 = result[17];
      *v19 = HIBYTE(v20);
      v19[1] = BYTE2(v20);
      v19[2] = BYTE1(v20);
      v19[3] = v20;
      ++result;
    }
  }
  return result;
}
