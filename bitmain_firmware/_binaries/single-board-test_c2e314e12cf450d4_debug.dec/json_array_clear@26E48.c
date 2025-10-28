int __cdecl json_array_clear(json_t *json)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  if ( !json || *(_DWORD *)json != 1 )
    return -1;
  for ( i = 0; *((_DWORD *)json + 3) > i; ++i )
    json_decref_2(*(_DWORD *)(*((_DWORD *)json + 4) + 4 * i));
  *((_DWORD *)json + 3) = 0;
  return 0;
}
