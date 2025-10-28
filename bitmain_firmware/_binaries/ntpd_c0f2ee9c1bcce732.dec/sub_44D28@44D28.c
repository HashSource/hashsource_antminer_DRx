char *__fastcall sub_44D28(const char *a1)
{
  char *result; // r0
  size_t v3; // r0

  result = _strdup(a1);
  if ( !result )
  {
    v3 = strlen(a1);
    fprintf((FILE *)stderr, off_7B86C[0], v3);
    exit(1);
  }
  return result;
}
