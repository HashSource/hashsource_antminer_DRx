int __fastcall serdes_apb_read(int a1, unsigned int a2, int a3, int a4)
{
  void *v7; // r6
  int v8; // r0
  unsigned int *v9; // r3
  int v10; // r2

  sub_7F86C(a1, a3, 78, a4 | 0x310000);
  v7 = malloc(0x600u);
  v8 = sub_7F8BC(a1, a3, 79, v7);
  if ( v8 )
  {
    if ( v8 > 0 )
    {
      v9 = (unsigned int *)v7;
      v10 = 0;
      while ( 1 )
      {
        ++v10;
        if ( *((unsigned __int8 *)v9 + 4) == a2 && *((unsigned __int8 *)v9 + 8) == a3 )
          break;
        v9 += 3;
        if ( v8 == v10 )
          return a2;
      }
      a2 = bswap32(*v9);
      free(v7);
    }
    return a2;
  }
  else
  {
    free(v7);
    return -1;
  }
}
