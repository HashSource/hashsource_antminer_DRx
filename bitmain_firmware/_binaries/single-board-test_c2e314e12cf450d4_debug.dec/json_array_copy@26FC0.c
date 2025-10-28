json_t *__cdecl json_array_copy(json_t *array)
{
  json_t *v2; // r0
  json_t *v5; // [sp+8h] [bp+8h]
  size_t i; // [sp+Ch] [bp+Ch]

  v5 = (json_t *)json_array();
  if ( !v5 )
    return 0;
  for ( i = 0; json_array_size(array) > i; ++i )
  {
    v2 = json_array_get(array, i);
    json_array_append_0(v5, (int)v2);
  }
  return v5;
}
