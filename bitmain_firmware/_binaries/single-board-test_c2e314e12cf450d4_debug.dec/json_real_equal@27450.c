int __cdecl json_real_equal(json_t *real1, json_t *real2)
{
  json_real_value(real1);
  json_real_value(real2);
  return 1;
}
