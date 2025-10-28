json_t **__cdecl json_array_grow(json_array_t *array, size_t amount, int copy)
{
  size_t v4; // r3
  void *v8; // [sp+1Ch] [bp+14h]
  size_t v9; // [sp+20h] [bp+18h]
  json_t **v10; // [sp+24h] [bp+1Ch]

  if ( *((_DWORD *)array + 3) + amount <= *((_DWORD *)array + 2) )
    return (json_t **)*((_DWORD *)array + 4);
  v10 = (json_t **)*((_DWORD *)array + 4);
  v4 = *((_DWORD *)array + 2) + amount;
  if ( 2 * *((_DWORD *)array + 2) >= v4 )
    v4 = 2 * *((_DWORD *)array + 2);
  v9 = v4;
  v8 = jsonp_malloc(4 * v4);
  if ( !v8 )
    return 0;
  *((_DWORD *)array + 2) = v9;
  *((_DWORD *)array + 4) = v8;
  if ( !copy )
    return v10;
  array_copy(*((json_t ***)array + 4), 0, v10, 0, *((_DWORD *)array + 3));
  jsonp_free(v10);
  return (json_t **)*((_DWORD *)array + 4);
}
