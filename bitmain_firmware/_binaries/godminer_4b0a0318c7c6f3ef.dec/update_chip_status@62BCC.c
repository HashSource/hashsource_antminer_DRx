_DWORD *__fastcall update_chip_status(int a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v4; // r7
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r1

  v3 = *(_DWORD *)(a1 + 248);
  v4 = (_DWORD *)(a3 + 48);
  v7 = byte_198260[v3];
  if ( !byte_198260[v3] )
  {
    v8 = *(_DWORD *)(a1 + 352);
    if ( v8 > 0 )
    {
      v9 = *(_DWORD *)(a1 + 544);
      v10 = v9 + 44 * v8;
      do
      {
        *(_DWORD *)(v9 + 16) = v7;
        v9 += 44;
      }
      while ( v10 != v9 );
    }
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 480);
    update_str_and_flag(a1, a2, v4);
    v11 = *(_DWORD *)(a1 + 440);
    byte_198260[*(_DWORD *)(a1 + 248)] = 1;
    *(_DWORD *)(a2 + 64) = v11;
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 265) )
    return v4;
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 480);
  chip_speed_test((_DWORD *)a1);
  update_str_and_flag(a1, a2, v4);
  return v4;
}
