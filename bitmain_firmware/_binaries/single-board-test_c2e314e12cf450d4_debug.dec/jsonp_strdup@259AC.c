void *__fastcall jsonp_strdup(const char *a1)
{
  void *dest; // [sp+8h] [bp+8h]
  size_t v5; // [sp+Ch] [bp+Ch]

  v5 = strlen(a1);
  if ( v5 == -1 )
    return 0;
  dest = jsonp_malloc(v5 + 1);
  if ( !dest )
    return 0;
  memcpy(dest, a1, v5 + 1);
  return dest;
}
