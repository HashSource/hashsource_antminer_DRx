bool __fastcall json_string_equal(const json_t *a1, const json_t *a2)
{
  const char *v2; // r4
  const char *v3; // r0

  v2 = json_string_value(a1);
  v3 = json_string_value(a2);
  return strcmp(v2, v3) == 0;
}
