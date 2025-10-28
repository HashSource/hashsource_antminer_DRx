json_t *__cdecl json_integer_copy(const json_t *integer)
{
  __int64 v1; // r0

  v1 = json_integer_value((int)integer);
  return (json_t *)json_integer(v1);
}
