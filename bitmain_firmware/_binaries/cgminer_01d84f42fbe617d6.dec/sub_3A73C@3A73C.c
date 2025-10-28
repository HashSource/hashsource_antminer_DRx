int __fastcall sub_3A73C(const char *a1)
{
  char *v1; // r3
  const char *v2; // r0
  char *v3; // r2

  v1 = strchr(a1, 58) + 1;
  do
    v2 = v1++;
  while ( *v2 == 32 );
  do
    v3 = v1++;
  while ( *v3 != 32 );
  *v3 = 0;
  return strtol(v2, 0, 10);
}
