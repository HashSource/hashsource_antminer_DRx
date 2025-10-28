char *__fastcall BUFX_strdup(char *result)
{
  char *v1; // r4
  size_t v2; // r0

  if ( result )
  {
    v1 = result;
    v2 = strlen(result);
    return (char *)json_stringn(v1, v2);
  }
  return result;
}
