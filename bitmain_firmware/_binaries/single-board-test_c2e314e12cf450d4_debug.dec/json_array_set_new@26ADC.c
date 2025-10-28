int __cdecl json_array_set_new(json_t *json, size_t index, json_t *value)
{
  if ( !value )
    return -1;
  if ( json && *(_DWORD *)json == 1 && json != value && *((_DWORD *)json + 3) > index )
  {
    json_decref_2(*(_DWORD *)(*((_DWORD *)json + 4) + 4 * index));
    *(_DWORD *)(*((_DWORD *)json + 4) + 4 * index) = value;
    return 0;
  }
  else
  {
    json_decref_2((int)value);
    return -1;
  }
}
