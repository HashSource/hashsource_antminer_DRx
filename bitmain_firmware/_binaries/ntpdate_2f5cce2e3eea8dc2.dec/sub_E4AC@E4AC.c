int *__fastcall sub_E4AC(int *a1, int a2)
{
  int v2; // r5
  __int64 v4; // r2
  int *v5; // r7
  int v6; // r10
  int v7; // r3
  int v8; // r3
  int v9; // r8
  int *v10; // r6
  __int64 v11; // kr00_8
  int v12; // r10
  int v13; // r1
  int v15; // r2

  v2 = *a1;
  v4 = 1717986919LL * *a1;
  LODWORD(v4) = dword_21334;
  v5 = off_21330;
  v6 = *a1 >> 31;
  if ( dword_21334 )
    a2 = (int)off_21338;
  v7 = (SHIDWORD(v4) >> 1) - v6;
  if ( dword_21334 )
    a2 -= (int)off_21330;
  v8 = 5 * v7;
  if ( dword_21334 )
    a2 >>= 2;
  HIDWORD(v4) = v2 - v8;
  if ( dword_21334 )
    LODWORD(v4) = dword_21334 + 5 * a2;
  *(int *)((char *)off_21330 + 0xFFFFFFFC) = v4;
  if ( HIDWORD(v4) <= 4 )
  {
    dword_21334 = HIDWORD(v4);
    v9 = dword_174B0[HIDWORD(v4)];
    v15 = dword_174B0[HIDWORD(v4) + 5];
    dword_2133C = v9;
    dword_21340 = v15;
  }
  else
  {
    fwrite("random: state info corrupted; not changed.\n", 1u, 0x2Bu, (FILE *)stderr);
    HIDWORD(v4) = dword_21334;
    v9 = dword_2133C;
  }
  v10 = a1 + 1;
  off_21330 = v10;
  if ( HIDWORD(v4) )
  {
    v11 = 1717986919LL * v2;
    v12 = (SHIDWORD(v11) >> 1) - v6;
    off_21338 = &v10[v12];
    sub_15E0C(v12 + dword_21340, v9, v11);
    off_21344 = (int)&v10[v13];
  }
  off_21348 = (int (*)[128])&v10[v9];
  return v5 - 1;
}
