const char *__cdecl json_string_value(const json_t *json)
{
  if ( json && *(_DWORD *)json == 2 )
    return (const char *)*((_DWORD *)json + 2);
  else
    return 0;
}
