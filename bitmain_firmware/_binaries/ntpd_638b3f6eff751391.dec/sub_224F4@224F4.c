int **__fastcall sub_224F4(int a1)
{
  int v1; // r4
  int **v2; // r3
  unsigned int v3; // r2

  v1 = 0;
  while ( 1 )
  {
    if ( dword_CAE34[v1] )
    {
      v2 = (int **)dword_CB23C[v1];
      if ( v2 )
        break;
    }
LABEL_10:
    if ( ++v1 == 128 )
      return 0;
  }
  while ( 1 )
  {
    if ( ((_BYTE)v2[14] & 0x10) != 0 )
    {
      v3 = bswap32(*(_DWORD *)(a1 + 120));
      if ( v2[98] == (int *)bswap32(*(_DWORD *)(a1 + 116)) && v2[99] == (int *)v3 )
        return v2;
    }
    v2 = (int **)*v2;
    if ( !v2 )
      goto LABEL_10;
  }
}
