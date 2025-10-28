void __cdecl json_decref(json_t *json)
{
  if ( json && *((_DWORD *)json + 1) != -1 && !--*((_DWORD *)json + 1) )
    json_delete((void **)json);
}
