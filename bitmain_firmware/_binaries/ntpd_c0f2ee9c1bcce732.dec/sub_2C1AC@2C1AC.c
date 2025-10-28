unsigned __int16 *__fastcall sub_2C1AC(int a1, int a2, int a3)
{
  unsigned __int16 *v4; // r7
  unsigned int v6; // r5
  unsigned int v7; // r2
  int v8; // r3
  int *v9; // r4
  int v10; // t1
  int v11; // t1

  v4 = (unsigned __int16 *)a1;
  if ( (((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFFu) > 1 )
  {
    sub_4FE78(3, "reset_stats: err_nitems > 1");
    return sub_286DC(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v6 = bswap32(*(_DWORD *)(a3 + 8));
  v7 = v6 & 0xFFFFFF80;
  if ( (v6 & 0xFFFFFF80) != 0 )
  {
    sub_4FE78(3, "reset_stats: reset leaves %#lx", v7);
    return sub_286DC(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v8 = dword_7A2C8;
  if ( dword_7A2C8 )
  {
    v9 = (int *)&unk_7A2D0;
    do
    {
      while ( (v6 & v8) == 0 )
      {
        v10 = *v9;
        v9 += 2;
        v8 = v10;
        if ( !v10 )
          return sub_286DC(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
      }
      a1 = ((int (__fastcall *)(int, int, unsigned int))*(v9 - 1))(a1, a2, v7);
      v11 = *v9;
      v9 += 2;
      v8 = v11;
    }
    while ( v11 );
  }
  return sub_286DC(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
