_BYTE *__fastcall jsonp_strdup(const char *a1)
{
  size_t v2; // r1

  v2 = strlen(a1);
  return jsonp_strndup(a1, v2);
}
