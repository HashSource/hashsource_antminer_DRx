FILE *__fastcall sub_3F5B4(const char *a1)
{
  FILE *result; // r0

  result = fopen(a1, "w");
  if ( result )
    return (FILE *)fclose(result);
  return result;
}
