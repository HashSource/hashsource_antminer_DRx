int __fastcall check_core_reg_with_expect_data(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r7
  unsigned int v8; // r4
  int v9; // r6
  char *v10; // r5
  int v11; // r0
  char *v12; // r3
  int v13; // r12
  int v14; // r2

  v6 = a3;
  v8 = bswap32(a5);
  v9 = 5;
  v10 = (char *)malloc(0x600u);
  while ( 1 )
  {
    v11 = sub_7F8BC(a1, v6, a4, v10);
    if ( !v11 )
    {
LABEL_9:
      free(v10);
      return 22;
    }
    v12 = v10;
    v13 = 0;
    do
    {
      v14 = *(_DWORD *)v12;
      v12 += 12;
      if ( (v8 & ~v14) == 0 )
        ++v13;
    }
    while ( &v10[12 * v11] != v12 );
    if ( v13 == v11 )
      break;
    usleep((__useconds_t)&loc_7A120);
    if ( !--v9 )
      goto LABEL_9;
  }
  free(v10);
  return 0;
}
