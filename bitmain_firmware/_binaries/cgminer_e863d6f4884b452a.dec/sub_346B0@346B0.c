FILE *__fastcall sub_346B0(const char *a1)
{
  FILE *result; // r0

  result = fopen(a1, "w");
  if ( result )
    return (FILE *)j_fclose(result);
  return result;
}
