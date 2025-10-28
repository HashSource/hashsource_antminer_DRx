size_t __cdecl json_array_size(const json_t *json)
{
  if ( json && *(_DWORD *)json == 1 )
    return *((_DWORD *)json + 3);
  else
    return 0;
}
