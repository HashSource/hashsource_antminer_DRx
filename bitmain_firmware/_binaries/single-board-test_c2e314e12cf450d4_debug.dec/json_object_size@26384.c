size_t __cdecl json_object_size(const json_t *json)
{
  if ( json && !*(_DWORD *)json )
    return *((_DWORD *)json + 2);
  else
    return 0;
}
