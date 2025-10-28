const char **__fastcall sub_10600(const char *a1, const char *a2, const char *a3)
{
  char *v6; // r0
  const char **result; // r0

  v6 = strchr(a1, 61);
  if ( v6 )
    *v6 = 0;
  result = (const char **)sub_10D64(12);
  *result = a1;
  result[1] = a2;
  result[2] = a3;
  return result;
}
