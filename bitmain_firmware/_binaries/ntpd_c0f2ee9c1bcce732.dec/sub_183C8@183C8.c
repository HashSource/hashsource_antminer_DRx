int __fastcall sub_183C8(FILE **a1)
{
  int v2; // r5

  v2 = fclose(a1[1]);
  if ( !v2 )
    free(a1);
  return v2;
}
