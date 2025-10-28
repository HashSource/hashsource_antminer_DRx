int __fastcall get_chip_freq(int a1)
{
  FILE *v2; // r8
  int v3; // r6
  int v4; // r5
  int v5; // r4
  int v6; // r5
  int v7; // t1
  __int16 v9; // [sp+6h] [bp-2h] BYREF

  v2 = (FILE *)fopen64("/nvdata/sweep_result.txt", "r");
  if ( v2 )
  {
    v3 = a1 - 2;
    v4 = v3;
    v5 = 0;
    while ( _isoc99_fscanf(v2, "%hu", &v9) == 1 )
    {
      if ( v5 == 20 )
      {
        fclose(v2);
        puts("Integers read from file:");
        goto LABEL_7;
      }
      ++v5;
      *(_WORD *)(v4 + 2) = v9;
      v4 += 2;
    }
    fclose(v2);
    puts("Integers read from file:");
    if ( !v5 )
      return 0;
LABEL_7:
    v6 = 0;
    do
    {
      ++v6;
      v7 = *(unsigned __int16 *)(v3 + 2);
      v3 += 2;
      printf("%d\n", v7);
    }
    while ( v6 < v5 );
    return 0;
  }
  else
  {
    puts("Error opening /nvdata/sweep_result.txt.");
    return 1;
  }
}
