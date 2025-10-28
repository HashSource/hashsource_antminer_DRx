int get_works()
{
  unsigned int v1; // r4
  unsigned int v2; // r4
  char s[64]; // [sp+Ch] [bp+4h] BYREF
  int v5; // [sp+4Ch] [bp+44h]
  unsigned int i; // [sp+50h] [bp+48h]
  unsigned int j; // [sp+54h] [bp+4Ch]
  unsigned int v8; // [sp+58h] [bp+50h]
  unsigned int k; // [sp+5Ch] [bp+54h]

  memset(s, 0, sizeof(s));
  j = 0;
  i = 0;
  v5 = 0;
  printf("%s, Conf.AsicNum %d, Conf.CoreNum %d\n", "get_works", dword_336848, dword_33684C);
  for ( i = 0; dword_336848 > i; ++i )
  {
    *((_DWORD *)&cgpu + i + 131112) = malloc(204 * dword_33684C * dword_33681C);
    if ( !*((_DWORD *)&cgpu + i + 131112) )
    {
      printf("%s: malloc struct work err!\n", "get_works");
      return -1;
    }
    for ( j = 0; dword_33684C > j; ++j )
    {
      sprintf(s, "%s%02d%s%03d.txt", dest, i, byte_2B636C, j);
      v1 = i * dword_33684C + j;
      *((_DWORD *)&cgpu + v1) = fopen(s, "r");
      if ( !*((_DWORD *)&cgpu + i * dword_33684C + j) )
      {
        printf("%s: Open test file %s error\n", "get_works", s);
        return -1;
      }
      v2 = i * dword_33684C + j;
      *((_DWORD *)&cgpu + v2 + 131368) = get_work(i, j, *((FILE **)&cgpu + v2), dword_33681C);
      fclose(*((FILE **)&cgpu + i * dword_33684C + j));
    }
  }
  dword_3367AC = dword_2B67AC;
  v8 = 0;
  for ( k = 0; k < dword_33684C * dword_336848; ++k )
  {
    if ( dword_3367AC > *((_DWORD *)&cgpu + k + 131368) )
    {
      dword_3367AC = *((_DWORD *)&cgpu + k + 131368);
      v8 = k;
    }
  }
  if ( dword_33681C <= (unsigned int)dword_3367AC )
    return 0;
  write_lcd(1u, (int)"Get Less Work", 0xDu);
  printf("%s: cgpu.subid[%d] = %d, is the least pattern number\n", "get_works", v8, dword_3367AC);
  return -1;
}
