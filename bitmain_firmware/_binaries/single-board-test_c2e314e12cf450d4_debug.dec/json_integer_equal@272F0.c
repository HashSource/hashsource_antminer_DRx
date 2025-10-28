int __cdecl json_integer_equal(json_t *integer1, json_t *integer2)
{
  __int64 v2; // r4

  v2 = json_integer_value((int)integer1);
  return v2 == json_integer_value((int)integer2);
}
