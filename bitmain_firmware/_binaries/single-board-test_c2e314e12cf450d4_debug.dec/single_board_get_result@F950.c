int __fastcall single_board_get_result(unsigned __int8 a1)
{
  int v1; // r3
  int v4; // [sp+8h] [bp+8h]
  int v5; // [sp+Ch] [bp+Ch]
  int v6; // [sp+10h] [bp+10h]
  unsigned int v7; // [sp+14h] [bp+14h]
  unsigned int v8; // [sp+14h] [bp+14h]
  int v9; // [sp+18h] [bp+18h]
  int v10; // [sp+1Ch] [bp+1Ch]
  int v11; // [sp+20h] [bp+20h]
  int v12; // [sp+24h] [bp+24h]
  int v13; // [sp+28h] [bp+28h]
  unsigned int v14; // [sp+2Ch] [bp+2Ch]
  int v15; // [sp+30h] [bp+30h]
  unsigned int m; // [sp+34h] [bp+34h]
  unsigned int jj; // [sp+34h] [bp+34h]
  unsigned int nn; // [sp+34h] [bp+34h]
  unsigned int k; // [sp+38h] [bp+38h]
  unsigned int ii; // [sp+38h] [bp+38h]
  unsigned int mm; // [sp+38h] [bp+38h]
  unsigned int i; // [sp+3Ch] [bp+3Ch]
  unsigned int j; // [sp+3Ch] [bp+3Ch]
  unsigned int n; // [sp+3Ch] [bp+3Ch]
  unsigned int kk; // [sp+3Ch] [bp+3Ch]

  v15 = 0;
  v13 = 7;
  v9 = 0;
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  printf("every ASIC require nonce number: %lu\n", dword_33684C * dword_33681C);
  v6 = dword_33684C * dword_33681C * dword_336848;
  puts("\n\nevery asic returned valid nonce count:");
  for ( i = 0; dword_336848 > i; ++i )
  {
    if ( !(i % 9) )
      putchar(10);
    v7 = calculate_how_many_nonce_per_asic_get(a1, i, dword_33684C);
    printf("asic[%02d]=%d\t", i, v7);
    if ( dword_33684C * dword_33681C > v7 && dword_3368C4 < (unsigned int)++v15 )
      v13 &= ~1u;
  }
  puts("\n\nevery asic returned all nonce count:");
  v10 = 0;
  for ( j = 0; dword_336848 > j; ++j )
  {
    if ( !(j % 9) )
      putchar(10);
    v12 = 0;
    for ( k = 0; dword_33684C > k; ++k )
    {
      for ( m = 0; dword_33681C > m; ++m )
        v12 += *(_DWORD *)(*((_DWORD *)&cgpu + j + 131112) + 204 * (k * dword_33681C + m) + 4 * (a1 + 46) + 4);
    }
    printf("asic[%02d]=%d\t", j, v12);
    v10 += v12;
  }
  puts("\n\nevery asic returned repeated nonce count:");
  for ( n = 0; dword_336848 > n; ++n )
  {
    if ( !(n % 9) )
      putchar(10);
    v11 = 0;
    for ( ii = 0; dword_33684C > ii; ++ii )
    {
      for ( jj = 0; dword_33681C > jj; ++jj )
      {
        v4 = *((_DWORD *)&cgpu + n + 131112) + 204 * (ii * dword_33681C + jj);
        if ( *(_DWORD *)(v4 + 4 * (a1 + 46) + 4) )
          v1 = *(_DWORD *)(v4 + 4 * (a1 + 46) + 4) - 1;
        else
          v1 = 0;
        v11 += v1;
      }
    }
    printf("asic[%02d]=%d\t", n, v11);
  }
  puts("\n");
  for ( kk = 0; dword_336848 > kk; ++kk )
  {
    v8 = calculate_how_many_nonce_per_asic_get(a1, kk, dword_33684C);
    if ( dword_33684C * dword_33681C > v8 )
    {
      printf("asic[%02d] = %d\n", kk, v8);
      v5 = *((_DWORD *)&cgpu + kk + 131112);
      v14 = 0;
      for ( mm = 0; dword_33684C > mm; ++mm )
      {
        if ( *((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((a1 << 8) + kk) + mm) < (unsigned int)dword_33681C )
        {
          v9 += ++v14;
          if ( dword_3368C8 < v14 )
            v13 &= ~1u;
          if ( *((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((a1 << 8) + kk) + mm) < (unsigned int)dword_3368CC )
            v13 &= ~1u;
          printf(
            "core[%02d] = %d,      lost these nonce : ",
            mm,
            *((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((a1 << 8) + kk) + mm));
          for ( nn = 0; dword_33681C > nn; ++nn )
          {
            if ( !*(_DWORD *)(v5 + 204 * (mm * dword_33681C + nn) + 4 * (a1 + 46) + 4) )
              printf("%d  ", nn);
          }
          putchar(10);
        }
      }
      puts("\n");
    }
  }
  if ( gHw_Nonce_Num[a1] > (unsigned int)dword_3368D4 )
  {
    v13 &= ~1u;
    printf("ret = %d\n", v13);
  }
  if ( v6 - gValid_Nonce_Num[a1] > (unsigned int)dword_3368D0 )
  {
    v13 &= ~1u;
    printf("ret = %d\n", v13);
  }
  puts("\n------------------------------------------------------------------------------------------------------\n");
  if ( gHigherThanAlarmTemp[a1] )
    v13 &= ~4u;
  printf("Chain%d total valid nonce number: %d\n\n", a1, gValid_Nonce_Num[a1]);
  printf("Chain%d total returned nonce number: %d\n\n", a1, v10);
  printf("Chain%d total repeated nonce number: %d\n\n", a1, gRepeated_Nonce_Id[a1]);
  printf("Chain%d HW number = %d\n\n", a1, gHw_Nonce_Num[a1]);
  printf("total invalid asic number %d\n", v15);
  printf("total invalid core number %d\n", v9);
  printf("total nonce expected %d lost %d allow most %d\n", v6, v6 - gValid_Nonce_Num[a1], dword_3368D0);
  if ( (v13 & 1) != 0 )
    puts("Pattern OK\n");
  else
    puts("Pattern NG\n");
  if ( (v13 & 2) != 0 )
    puts("Sensor OK\n");
  else
    puts("Sensor NG\n");
  if ( (v13 & 4) != 0 )
    puts("Temperature OK\n");
  else
    puts("Temperature NG\n");
  return v13;
}
