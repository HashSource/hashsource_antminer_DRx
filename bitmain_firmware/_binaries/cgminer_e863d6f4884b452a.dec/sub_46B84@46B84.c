int __fastcall sub_46B84(int a1, int a2)
{
  int v2; // r3
  int v4; // r2
  int v5; // r6
  int v7; // r0
  int v8; // r5
  int v9; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r8
  _BYTE *v15; // r6
  _BYTE *v16; // r9
  int v17; // r3
  int v18; // r3

  v2 = *(_DWORD *)(a1 + 16);
  v4 = a1 + v2;
  v5 = *(unsigned __int8 *)(a1 + v2 + 8);
  if ( *(_BYTE *)(a1 + v2 + 8) )
  {
    v9 = v2 + 1;
  }
  else
  {
    v7 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    v8 = v7;
    if ( v7 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return v8;
    }
    *(_DWORD *)(a1 + 16) = v5;
    *(_BYTE *)(a1 + 8) = v7;
    if ( (unsigned int)(v7 - 128) <= 0x7F )
    {
      v13 = sub_47BB0((unsigned __int8)v7);
      v14 = v13;
      if ( !v13 )
        goto LABEL_20;
      if ( v13 <= 1 )
        _assert_fail("count >= 2", "load.c", 0xAFu, "stream_get");
      v15 = (_BYTE *)(a1 + 9);
      v16 = (_BYTE *)(a1 + 8 + v13);
      do
        *v15++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      while ( v16 != v15 );
      if ( !sub_47BF0(a1 + 8, v14, 0) )
      {
LABEL_20:
        v18 = v8;
        *(_DWORD *)(a1 + 20) = -2;
        v8 = -2;
        sub_469A4(a2, a1, "unable to decode byte 0x%x", v18);
        return v8;
      }
      *(_BYTE *)(v14 + a1 + 8) = 0;
      v17 = *(_DWORD *)(a1 + 16);
      v9 = v17 + 1;
      v4 = a1 + v17;
    }
    else
    {
      v9 = 1;
      v4 = a1;
      *(_BYTE *)(a1 + 9) = v5;
    }
  }
  *(_DWORD *)(a1 + 16) = v9;
  v8 = *(unsigned __int8 *)(v4 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v8 != 10 )
  {
    if ( sub_47BB0(v8) )
      ++*(_DWORD *)(a1 + 28);
    return v8;
  }
  v11 = *(_DWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = v11 + 1;
  *(_DWORD *)(a1 + 32) = v12;
  return 10;
}
