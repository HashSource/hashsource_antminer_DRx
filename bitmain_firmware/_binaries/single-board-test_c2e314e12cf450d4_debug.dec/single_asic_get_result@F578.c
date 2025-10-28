int __fastcall single_asic_get_result(unsigned __int8 a1)
{
  int v1; // r3
  unsigned int v4; // [sp+8h] [bp+8h]
  int v5; // [sp+Ch] [bp+Ch]
  int v6; // [sp+14h] [bp+14h]
  int v7; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]
  unsigned int k; // [sp+20h] [bp+20h]
  unsigned int n; // [sp+20h] [bp+20h]
  unsigned int jj; // [sp+20h] [bp+20h]
  unsigned int i; // [sp+24h] [bp+24h]
  unsigned int j; // [sp+24h] [bp+24h]
  unsigned int m; // [sp+24h] [bp+24h]
  unsigned int ii; // [sp+24h] [bp+24h]

  v8 = 1;
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  printf("every CORE require nonce number: %lu\n\n", dword_33681C);
  puts("\n\nevery core returned valid nonce count:");
  v5 = dword_2B63AC;
  for ( i = 0; dword_33684C > i; ++i )
  {
    if ( !(i % 0xA) )
      putchar(10);
    printf("core[%02d]=%02d\t", i, *((_DWORD *)&gAsic_Core_Nonce_Num + 0x20000 * a1 + i));
  }
  puts("\n\n");
  for ( j = 0; dword_33684C > j; ++j )
  {
    if ( *((_DWORD *)&gAsic_Core_Nonce_Num + 0x20000 * a1 + j) < (unsigned int)dword_33681C )
    {
      v8 &= ~1u;
      printf(
        "core[%02d] = %d,      lost these pattern's nonce : ",
        j,
        *((_DWORD *)&gAsic_Core_Nonce_Num + 0x20000 * a1 + j));
      for ( k = 0; dword_33681C > k; ++k )
      {
        if ( !*(_DWORD *)(v5 + 204 * (j * dword_33681C + k) + 4 * (a1 + 46) + 4) )
          printf("%d  ", k);
      }
      putchar(10);
    }
  }
  puts("\n\nevery core returned all nonce count:");
  for ( m = 0; dword_33684C > m; ++m )
  {
    v7 = 0;
    if ( !(m % 0xA) )
      putchar(10);
    for ( n = 0; dword_33681C > n; ++n )
      v7 += *(_DWORD *)(v5 + 204 * (m * dword_33681C + n) + 4 * (a1 + 46) + 4);
    printf("core[%02d]=%02d\t", m, v7);
  }
  puts("\n\nevery core returned repeated nonce count:");
  for ( ii = 0; dword_33684C > ii; ++ii )
  {
    v6 = 0;
    if ( !(ii % 0xA) )
      putchar(10);
    for ( jj = 0; dword_33681C > jj; ++jj )
    {
      v4 = v5 + 204 * (ii * dword_33681C + jj);
      if ( *(_DWORD *)(v4 + 4 * (a1 + 46) + 4) )
        v1 = *(_DWORD *)(v4 + 4 * (a1 + 46) + 4) - 1;
      else
        v1 = 0;
      v6 += v1;
    }
    printf("core[%02d]=%02d\t", ii, v6);
  }
  puts("\n------------------------------------------------------------------------------------------------------\n");
  printf("Chain%d total valid nonce number: %d\n\n", a1, gValid_Nonce_Num[a1]);
  printf("Chain%d total receive nonce number: %d\n\n", a1, gReceive_Nonce_Num[a1]);
  printf("Chain%d total repeate nonce number: %d\n\n", a1, gRepeated_Nonce_Id[a1]);
  printf("Chain%d HW number = %d\n\n", a1, gHw_Nonce_Num[a1]);
  if ( (v8 & 1) != 0 )
    puts("Pattern OK\n");
  else
    puts("Pattern NG\n");
  return v8;
}
