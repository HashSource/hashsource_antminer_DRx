int __cdecl json_array_extend(json_t *json, json_t *other_json)
{
  unsigned int i; // [sp+1Ch] [bp+14h]

  if ( !json || *(_DWORD *)json != 1 || !other_json || *(_DWORD *)other_json != 1 )
    return -1;
  if ( !json_array_grow(json, *((_DWORD *)other_json + 3), 1) )
    return -1;
  for ( i = 0; *((_DWORD *)other_json + 3) > i; ++i )
    json_incref_0(*(_DWORD *)(*((_DWORD *)other_json + 4) + 4 * i));
  array_copy(
    *((json_t ***)json + 4),
    *((_DWORD *)json + 3),
    *((json_t ***)other_json + 4),
    0,
    *((_DWORD *)other_json + 3));
  *((_DWORD *)json + 3) += *((_DWORD *)other_json + 3);
  return 0;
}
