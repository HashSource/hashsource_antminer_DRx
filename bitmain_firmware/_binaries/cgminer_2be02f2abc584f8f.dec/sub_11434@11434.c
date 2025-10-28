int __fastcall sub_11434(int a1, int a2, char *a3, unsigned int a4)
{
  _QWORD *v5; // r0
  int v6; // r12
  __int64 v7; // t1
  __int64 v8; // r4
  unsigned int i; // r12

  if ( (unsigned int)(a2 - 1) > 0x3F || a4 > 0x40 )
    return -1;
  v5 = &unk_5AF10;
  v6 = a1 + 120;
  do
  {
    v7 = v5[1];
    ++v5;
    *(_QWORD *)(v6 + 8) = v7;
    v6 += 8;
  }
  while ( v5 != (_QWORD *)&unk_5AF50 );
  v8 = *(_QWORD *)(a1 + 128);
  LODWORD(v8) = v8 ^ a2 ^ 0x1010000 ^ (a4 << 8);
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = a2;
  for ( i = a4; i != 128; ++i )
    *(_BYTE *)(a1 + i) = 0;
  if ( a4 )
  {
    sub_113A8((_BYTE *)a1, a3, a4);
    *(_DWORD *)(a1 + 208) = 128;
  }
  return 0;
}
