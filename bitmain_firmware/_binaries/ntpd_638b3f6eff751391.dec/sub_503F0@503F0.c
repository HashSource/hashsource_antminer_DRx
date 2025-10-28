int *__fastcall sub_503F0(int *a1, int a2)
{
  int v2; // r5
  __int64 v4; // r2
  int *v5; // r7
  int v6; // r10
  int v7; // r3
  int v8; // r3
  int v9; // r8
  int *v10; // r6
  int v11; // r10
  int v12; // r1
  int v14; // r2

  v2 = *a1;
  v4 = 1717986919LL * *a1;
  LODWORD(v4) = dword_7BEA4;
  v5 = off_7BEA0;
  v6 = *a1 >> 31;
  if ( dword_7BEA4 )
    a2 = (int)off_7BEA8;
  v7 = (SHIDWORD(v4) >> 1) - v6;
  if ( dword_7BEA4 )
    a2 -= (int)off_7BEA0;
  v8 = 5 * v7;
  if ( dword_7BEA4 )
    a2 >>= 2;
  HIDWORD(v4) = v2 - v8;
  if ( dword_7BEA4 )
    LODWORD(v4) = dword_7BEA4 + 5 * a2;
  *(int *)((char *)off_7BEA0 + 0xFFFFFFFC) = v4;
  if ( HIDWORD(v4) <= 4 )
  {
    dword_7BEA4 = HIDWORD(v4);
    v9 = dword_6DC90[HIDWORD(v4)];
    v14 = dword_6DC90[HIDWORD(v4) + 5];
    dword_7BEAC = v9;
    dword_7BEB0 = v14;
  }
  else
  {
    fwrite("random: state info corrupted; not changed.\n", 1u, 0x2Bu, (FILE *)stderr);
    HIDWORD(v4) = dword_7BEA4;
    v9 = dword_7BEAC;
  }
  v10 = a1 + 1;
  off_7BEA0 = v10;
  if ( HIDWORD(v4) )
  {
    v11 = ((int)((unsigned __int64)(1717986919LL * v2) >> 32) >> 1) - v6;
    off_7BEA8 = &v10[v11];
    sub_5AA04(v11 + dword_7BEB0, v9);
    off_7BEB4 = &v10[v12];
  }
  off_7BEB8 = &v10[v9];
  return v5 - 1;
}
