int __cdecl json_array_insert_new(json_t *json, size_t index, json_t *value)
{
  json_t **v8; // [sp+18h] [bp+10h]

  if ( !value )
    return -1;
  if ( json && *(_DWORD *)json == 1 && json != value && *((_DWORD *)json + 3) >= index )
  {
    v8 = json_array_grow(json, 1u, 0);
    if ( v8 )
    {
      if ( *((json_t ***)json + 4) == v8 )
      {
        array_move(json, index + 1, index, *((_DWORD *)json + 3) - index);
      }
      else
      {
        array_copy(*((json_t ***)json + 4), 0, v8, 0, index);
        array_copy(*((json_t ***)json + 4), index + 1, v8, index, *((_DWORD *)json + 3) - index);
        jsonp_free(v8);
      }
      *(_DWORD *)(*((_DWORD *)json + 4) + 4 * index) = value;
      ++*((_DWORD *)json + 3);
      return 0;
    }
    else
    {
      json_decref_2((int)value);
      return -1;
    }
  }
  else
  {
    json_decref_2((int)value);
    return -1;
  }
}
