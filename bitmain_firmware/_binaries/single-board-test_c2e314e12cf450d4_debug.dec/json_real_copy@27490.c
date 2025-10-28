json_t *__cdecl json_real_copy(const json_t *real)
{
  double v1; // r0

  v1 = json_real_value(real);
  return json_real(v1);
}
