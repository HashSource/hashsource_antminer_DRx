int __fastcall sub_40708(const char *a1)
{
  int v2; // r5
  FILE *v3; // r4
  int result; // r0

  v2 = 1;
  v3 = fopen(a1, "r");
  while ( !feof(v3) )
  {
    if ( (unsigned __int8)fgetc(v3) == 10 )
      ++v2;
  }
  printf("line row: %d\n", v2);
  result = fclose(v3);
  if ( v2 > 500 )
    return sub_36BF0(a1, v2 - 500);
  return result;
}
