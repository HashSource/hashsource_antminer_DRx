int __fastcall sub_199D8(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r8
  char v7; // t1
  bool v8; // zf
  int v9; // r2
  unsigned __int64 v10; // r6
  char v11; // t1

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = result;
    v5 = *(_DWORD *)(result + 208);
    v6 = a2 - 1 + a3;
    do
    {
      while ( 1 )
      {
        v8 = v5 == 128;
        v9 = v5++;
        if ( v8 )
          break;
        *(_DWORD *)(v4 + 208) = v5;
        v7 = *(_BYTE *)++v3;
        *(_BYTE *)(v4 + v9) = v7;
        if ( v3 == v6 )
          return result;
      }
      v10 = *(_QWORD *)(v4 + 192) + 128LL;
      *(_QWORD *)(v4 + 192) = v10;
      if ( v10 < 0x80 )
        ++*(_QWORD *)(v4 + 200);
      result = sub_14EA8(v4, 0);
      v5 = 1;
      *(_DWORD *)(v4 + 208) = 1;
      v11 = *(_BYTE *)++v3;
      *(_BYTE *)v4 = v11;
    }
    while ( v3 != v6 );
  }
  return result;
}
