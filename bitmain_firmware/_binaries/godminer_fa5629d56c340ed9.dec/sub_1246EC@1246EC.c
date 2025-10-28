void *__fastcall sub_1246EC(_DWORD *a1, int a2, unsigned int a3, void *a4, int a5, void *src)
{
  int v8; // r11
  int v10; // r3
  size_t v11; // r2
  int v12; // r3
  int v13; // r8
  int v14; // r10
  int v15; // lr
  unsigned int v16; // r1
  char *v17; // r0
  char *v18; // r3
  __int64 v19; // r4
  char *v20; // r3
  _DWORD *v21; // r1
  int v22; // t1
  void *result; // r0
  size_t v24; // [sp+Ch] [bp-88h]
  char v25[64]; // [sp+10h] [bp-84h] BYREF
  char v26; // [sp+50h] [bp-44h] BYREF

  v8 = a1[16];
  v10 = (unsigned __int8)(128 >> a3);
  v11 = -v10;
  v12 = v10 | a2 & -v10;
  if ( v8 | a3 )
    v11 = 111 - v8;
  v25[0] = v12;
  if ( v8 | a3 )
    v12 = 128 - v8;
  else
    v11 = 47;
  if ( v8 | a3 )
  {
    v14 = 112 - v8;
    v13 = 120 - v8;
  }
  else
  {
    v12 = 64;
    v13 = 56;
    v14 = 48;
  }
  v24 = v12;
  memset(&v25[1], 0, v11);
  v15 = a1[51];
  v16 = a1[50];
  v17 = &v25[v14];
  v25[v14] = 0;
  v17[1] = 0;
  v17[6] = v15 < 0;
  v18 = &v25[v13];
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v19 = __PAIR64__((v15 << 9) | (v16 >> 23), v16 << 9) + (unsigned int)(8 * v8) + a3;
  v17[5] = 0;
  v17[7] = (unsigned int)v15 >> 23;
  v25[v13] = HIBYTE(v19);
  v18[5] = BYTE2(v19);
  v18[3] = BYTE4(v19);
  v18[7] = 8 * v8 + a3;
  v18[1] = BYTE6(v19);
  v18[2] = BYTE5(v19);
  v18[4] = ((v16 << 9) + 8 * v8 + a3) >> 24;
  v18[6] = BYTE1(v19);
  sph_jh224_0((int)a1, v25, v24);
  v20 = v25;
  v21 = a1 + 33;
  do
  {
    v22 = v21[1];
    ++v21;
    v20 += 4;
    *((_DWORD *)v20 - 1) = v22;
  }
  while ( &v26 != v20 );
  memcpy(a4, &v25[4 * (16 - a5)], 4 * a5);
  a1[16] = 0;
  result = memcpy(a1 + 18, src, 0x80u);
  *((_QWORD *)a1 + 25) = 0;
  return result;
}
