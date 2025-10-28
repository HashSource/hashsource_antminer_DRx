int print_works()
{
  int v0; // r3
  int v2; // [sp+0h] [bp+0h]
  int v3; // [sp+0h] [bp+0h]
  int v4; // [sp+4h] [bp+4h]
  int v5; // [sp+4h] [bp+4h]
  unsigned int j; // [sp+8h] [bp+8h]
  unsigned int ii; // [sp+8h] [bp+8h]
  unsigned int i; // [sp+Ch] [bp+Ch]
  unsigned int n; // [sp+Ch] [bp+Ch]
  unsigned int m; // [sp+10h] [bp+10h]
  int k; // [sp+14h] [bp+14h]
  int jj; // [sp+14h] [bp+14h]

  printf("\n%s begin\n\n", "print_works");
  if ( dword_336848 == 1 )
  {
    for ( i = 0; dword_33684C > i; ++i )
    {
      v4 = *((_DWORD *)&cgpu + i + 131112);
      for ( j = 0; dword_33681C > j; ++j )
      {
        v2 = v4 + 204 * j;
        printf("core[%02d][%02d].work=0x", i, j);
        for ( k = 0; k <= 179; ++k )
          printf("%02x", *(unsigned __int8 *)(v2 + k + 8));
        printf(" nonce=0x%08x\n", *(_DWORD *)(v2 + 4));
      }
      putchar(10);
    }
  }
  else
  {
    for ( m = 0; dword_336848 > m; ++m )
    {
      v5 = *((_DWORD *)&cgpu + m + 131112);
      for ( n = 0; dword_33684C > n; ++n )
      {
        for ( ii = 0; dword_33681C > ii; ++ii )
        {
          v3 = v5 + 204 * (n * dword_33681C + ii);
          printf("asic[%02d][%02d][%02d].work=0x", m, n, ii);
          for ( jj = 0; jj <= 179; ++jj )
            printf("%02x", *(unsigned __int8 *)(v3 + jj + 8));
          printf(" nonce=0x%08x\n", *(_DWORD *)(v3 + 4));
        }
        putchar(10);
      }
      putchar(10);
    }
  }
  printf("\n%s end\n\n", "print_works");
  return v0;
}
