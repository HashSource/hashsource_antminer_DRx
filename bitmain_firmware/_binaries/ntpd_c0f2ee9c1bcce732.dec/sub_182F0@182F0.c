const char **__fastcall sub_182F0(const char *a1, const char *a2)
{
  const char **v4; // r4
  FILE *v5; // r0
  const char **v7; // r0

  v4 = (const char **)sub_4F524(36);
  v4[3] = 0;
  v4[4] = 0;
  v4[6] = 0;
  *v4 = a1;
  v4[2] = (const char *)1;
  v5 = fopen(a1, a2);
  v4[1] = (const char *)v5;
  if ( !v5 )
  {
    v7 = v4;
    v4 = 0;
    free(v7);
  }
  return v4;
}
