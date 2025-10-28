json_t *__cdecl json_incref(json_t *json)
{
  if ( json )
  {
    if ( *((_DWORD *)json + 1) != -1 )
      ++*((_DWORD *)json + 1);
  }
  return json;
}
