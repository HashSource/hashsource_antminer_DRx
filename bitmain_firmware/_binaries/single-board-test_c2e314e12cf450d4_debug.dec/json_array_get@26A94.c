json_t *__cdecl json_array_get(const json_t *json, size_t index)
{
  if ( !json || *(_DWORD *)json != 1 )
    return 0;
  if ( *((_DWORD *)json + 3) > index )
    return *(json_t **)(*((_DWORD *)json + 4) + 4 * index);
  return 0;
}
