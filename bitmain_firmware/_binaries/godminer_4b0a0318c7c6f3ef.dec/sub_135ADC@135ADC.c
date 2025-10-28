unsigned int __fastcall sub_135ADC(int a1, char a2, int a3, int a4, unsigned int a5)
{
  unsigned int v7; // r12
  int v8; // r8
  int v9; // r7
  void *v10; // r0
  int v11; // r1
  int v12; // r3
  unsigned int *v13; // r4
  unsigned int *v14; // r1
  unsigned int v15; // t1
  unsigned int result; // r0

  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a1 + 104);
  v9 = a3 + *(_DWORD *)(a1 + 100) + 8 * v7;
  *(_DWORD *)(a1 + 100) = v9;
  if ( v7 | a3 )
  {
    v10 = (void *)(a1 + v7 + 1);
    *(_BYTE *)(a1 + v7) = -(128 >> a3) & a2 | (128 >> a3);
    if ( v7 <= 0x35 )
    {
      memset(v10, 0, 53 - v7);
    }
    else
    {
      memset(v10, 0, 63 - v7);
      sub_129690((_DWORD *)a1, (_DWORD *)a1);
      memset((void *)a1, 0, 0x36u);
      *(_DWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 100) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x35u);
    *(_DWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 100) = 0;
  }
  *(_BYTE *)(a1 + 58) = v8;
  *(_BYTE *)(a1 + 55) = BYTE1(v9);
  *(_BYTE *)(a1 + 57) = HIBYTE(v9);
  *(_BYTE *)(a1 + 59) = BYTE1(v8);
  *(_BYTE *)(a1 + 56) = BYTE2(v9);
  *(_BYTE *)(a1 + 60) = BYTE2(v8);
  *(_BYTE *)(a1 + 63) = a5 >> 3;
  *(_BYTE *)(a1 + 54) = v9;
  *(_BYTE *)(a1 + 61) = HIBYTE(v8);
  *(_BYTE *)(a1 + 62) = 32 * a5;
  sub_129690((_DWORD *)a1, (_DWORD *)a1);
  v11 = a1 + 4 * a5;
  v12 = a4;
  v13 = (unsigned int *)(a1 + 68);
  v14 = (unsigned int *)(v11 + 68);
  do
  {
    v15 = *v13++;
    v12 += 4;
    *(_DWORD *)(v12 - 4) = v15;
    result = HIWORD(v15);
  }
  while ( v14 != v13 );
  return result;
}
