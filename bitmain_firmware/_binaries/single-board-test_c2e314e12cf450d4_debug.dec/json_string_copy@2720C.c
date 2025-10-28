_DWORD *__fastcall json_string_copy(const json_t *a1)
{
  const char *v1; // r0

  v1 = json_string_value(a1);
  return json_string_nocheck(v1);
}
