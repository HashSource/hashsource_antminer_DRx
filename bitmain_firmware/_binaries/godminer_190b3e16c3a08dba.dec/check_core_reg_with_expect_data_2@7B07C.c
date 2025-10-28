int __fastcall check_core_reg_with_expect_data_2(
        int a1,
        int a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned int a5,
        int a6)
{
  char *v9; // r6
  int v10; // r5
  unsigned int v11; // r4
  int v12; // r0
  char *v13; // r3
  int v14; // r12
  int v15; // r2

  v9 = (char *)malloc(0x600u);
  v10 = 2 * a6;
  if ( 2 * a6 )
  {
    v11 = bswap32(a5);
    do
    {
      v12 = sub_744E8(a1, a3, a4, v9);
      if ( !v12 )
        break;
      v13 = v9;
      v14 = 0;
      do
      {
        v15 = *(_DWORD *)v13;
        v13 += 12;
        if ( (v11 & ~v15) == 0 )
          ++v14;
      }
      while ( &v9[12 * v12] != v13 );
      if ( v14 == v12 )
      {
        free(v9);
        return 0;
      }
      usleep((__useconds_t)&loc_7A120);
      --v10;
    }
    while ( v10 );
  }
  free(v9);
  return 22;
}
