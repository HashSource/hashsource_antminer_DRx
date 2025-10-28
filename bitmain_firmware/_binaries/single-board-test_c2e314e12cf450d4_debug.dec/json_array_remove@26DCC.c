int __cdecl json_array_remove(json_t *json, size_t index)
{
  if ( !json || *(_DWORD *)json != 1 )
    return -1;
  if ( *((_DWORD *)json + 3) <= index )
    return -1;
  json_decref_2(*(_DWORD *)(*((_DWORD *)json + 4) + 4 * index));
  if ( *((_DWORD *)json + 3) - 1 > index )
    array_move(json, index, index + 1, *((_DWORD *)json + 3) - index - 1);
  --*((_DWORD *)json + 3);
  return 0;
}
