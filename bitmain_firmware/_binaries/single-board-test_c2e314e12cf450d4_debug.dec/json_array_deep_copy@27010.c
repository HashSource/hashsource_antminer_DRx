json_t *__cdecl json_array_deep_copy(const json_t *array)
{
  json_t *v2; // r0
  json_t *v3; // r0
  json_t *v6; // [sp+8h] [bp+8h]
  size_t i; // [sp+Ch] [bp+Ch]

  v6 = (json_t *)json_array();
  if ( !v6 )
    return 0;
  for ( i = 0; json_array_size(array) > i; ++i )
  {
    v2 = json_array_get(array, i);
    v3 = json_deep_copy(v2);
    json_array_append_new(v6, v3);
  }
  return v6;
}
