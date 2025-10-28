int __fastcall Sha256_Final(int a1, int a2)
{
  unsigned int v3; // r0
  int v5; // r3
  int v6; // r9
  unsigned int v7; // r6
  int v8; // r4
  char v9; // r7
  bool v10; // zf
  int v11; // r3
  _BYTE *v12; // r2
  unsigned __int64 v13; // kr00_8
  int v14; // r3
  int v15; // r3
  int v16; // r2
  int v17; // r8
  int v18; // t1

  v3 = *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 36);
  LOBYTE(v6) = (v3 & 0x3F) + 1;
  *(_BYTE *)(a1 + (v3 & 0x3F) + 40) = 0x80;
  v7 = 8 * v3;
  v8 = (8 * v5) | (v3 >> 29);
  if ( (v3 & 0x3F) != 0x37 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v6 & 0x3F;
        v10 = (v6 & 0x3F) == 0;
        v11 = a1 + (v6 & 0x3F);
        v6 = (v6 & 0x3F) + 1;
        if ( !v10 )
          break;
        sub_E2790((unsigned __int8 *)a1);
        *(_BYTE *)(a1 + 40) = v9;
      }
      *(_BYTE *)(v11 + 40) = 0;
    }
    while ( v6 != 56 );
  }
  v12 = (_BYTE *)(a1 + 96);
  do
  {
    v13 = (unsigned __int64)(unsigned int)v8 << 8;
    *v12++ = BYTE4(v13);
    v14 = v13 | HIBYTE(v7);
    v7 <<= 8;
    v8 = v14;
  }
  while ( v12 != (_BYTE *)(a1 + 104) );
  sub_E2790((unsigned __int8 *)a1);
  v15 = a2 + 4;
  v16 = a1 - 4;
  v17 = a2 + 36;
  do
  {
    v18 = *(_DWORD *)(v16 + 4);
    v16 += 4;
    v15 += 4;
    *(_BYTE *)(v15 - 8) = HIBYTE(v18);
    *(_BYTE *)(v15 - 7) = *(_WORD *)(v16 + 2);
    *(_BYTE *)(v15 - 6) = BYTE1(*(_DWORD *)v16);
    *(_BYTE *)(v15 - 5) = *(_DWORD *)v16;
  }
  while ( v15 != v17 );
  *(_DWORD *)a1 = 1779033703;
  *(_DWORD *)(a1 + 4) = -1150833019;
  *(_DWORD *)(a1 + 8) = 1013904242;
  *(_DWORD *)(a1 + 12) = -1521486534;
  *(_DWORD *)(a1 + 16) = 1359893119;
  *(_DWORD *)(a1 + 20) = -1694144372;
  *(_QWORD *)(a1 + 24) = 0x5BE0CD191F83D9ABLL;
  *(_QWORD *)(a1 + 32) = 0;
  return 1359893119;
}
