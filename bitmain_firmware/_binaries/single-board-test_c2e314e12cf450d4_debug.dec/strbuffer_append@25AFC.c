int __fastcall strbuffer_append(strbuffer_t *a1, const char *a2)
{
  size_t v2; // r0

  v2 = strlen(a2);
  return strbuffer_append_bytes(a1, a2, v2);
}
