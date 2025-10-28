unsigned __int16 *sub_1C62C()
{
  int v0; // r5
  unsigned int v1; // r0
  int *v2; // r6
  int i; // r4
  int v4; // t1
  unsigned int v5; // r0
  int v6; // r3
  int v8; // r0
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r0
  char *v12; // r4
  int v13; // t1
  _BYTE src[472]; // [sp+4h] [bp-1D8h] BYREF

  if ( dword_7CF4C > 2 )
    printf("read_status: ID %d\n", (unsigned __int16)word_7D3AC);
  v0 = (unsigned __int16)word_7D3AC;
  if ( !word_7D3AC )
  {
    v1 = sub_1C21C();
    v2 = &dword_CB038;
    word_7CF78 = ((_WORD)v1 << 8) | (v1 >> 8);
    do
    {
      v4 = v2[1];
      ++v2;
      for ( i = v4; i; i = *(_DWORD *)(i + 4) )
      {
        while ( 1 )
        {
          *(_WORD *)&src[2 * v0] = (*(_WORD *)(i + 44) << 8) | HIBYTE(*(_WORD *)(i + 44));
          v5 = sub_1C1BC(i);
          v6 = v0 + 1;
          v0 += 2;
          *(_WORD *)&src[2 * v6] = ((_WORD)v5 << 8) | (v5 >> 8);
          if ( v0 == 234 )
            break;
          i = *(_DWORD *)(i + 4);
          if ( !i )
            goto LABEL_10;
        }
        v0 = 0;
        sub_19D60(src, 0x1D4u, 1);
      }
LABEL_10:
      ;
    }
    while ( v2 != (int *)&unk_CB238 );
    if ( v0 )
      sub_19D60(src, 2 * v0, 1);
    return sub_19AF8(0);
  }
  v8 = sub_21604((unsigned __int16)word_7D3AC);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_1C1BC(v8);
    word_7CF78 = ((_WORD)v10 << 8) | (v10 >> 8);
    if ( byte_7D3AF )
      *(_BYTE *)(v9 + 58) = 0;
    v11 = (unsigned __int8)byte_7A160;
    if ( byte_7A160 )
    {
      v12 = &byte_7A160;
      do
      {
        sub_1AC4C(v11, v9);
        v13 = (unsigned __int8)*++v12;
        v11 = v13;
      }
      while ( v13 );
    }
    return sub_19AF8(0);
  }
  return sub_1B684(4);
}
