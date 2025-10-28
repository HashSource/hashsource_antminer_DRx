int __fastcall sub_50DAC(const char *a1)
{
  FILE *v2; // r4
  int v3; // r5
  int result; // r0

  v2 = fopen(a1, "r");
  v3 = 1;
  while ( !feof(v2) )
  {
    if ( (unsigned __int8)fgetc(v2) == 10 )
      ++v3;
  }
  printf("line row: %d\n", v3);
  result = fclose(v2);
  if ( v3 > 500 )
    return sub_42834(a1, 1, v3 - 500);
  return result;
}
