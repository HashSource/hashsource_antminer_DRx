int __cdecl json_array_equal(json_t *array1, json_t *array2)
{
  json_t *v6; // [sp+8h] [bp+8h]
  json_t *v7; // [sp+Ch] [bp+Ch]
  size_t v8; // [sp+10h] [bp+10h]
  size_t i; // [sp+14h] [bp+14h]

  v8 = json_array_size(array1);
  if ( json_array_size(array2) != v8 )
    return 0;
  for ( i = 0; i < v8; ++i )
  {
    v7 = json_array_get(array1, i);
    v6 = json_array_get(array2, i);
    if ( !json_equal(v7, v6) )
      return 0;
  }
  return 1;
}
