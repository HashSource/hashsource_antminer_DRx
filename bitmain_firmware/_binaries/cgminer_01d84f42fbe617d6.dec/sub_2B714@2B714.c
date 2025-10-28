void **__fastcall sub_2B714(void **result, unsigned int a2, size_t size, const char *a4, const char *a5, int a6)
{
  void **v8; // r6
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v8 = result;
  if ( size != a2 )
  {
    result = (void **)realloc(*result, size);
    *v8 = result;
    if ( !result )
    {
      snprintf(s, 0x800u, "Failed to realloc in %s %s():%d", a4, a5, a6);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    if ( size > a2 )
      return (void **)memset((char *)*v8 + a2, 0, size - a2);
  }
  return result;
}
