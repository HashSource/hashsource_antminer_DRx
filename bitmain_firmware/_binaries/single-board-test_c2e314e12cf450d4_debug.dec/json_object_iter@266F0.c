void *__cdecl json_object_iter(json_t *json)
{
  if ( json && !*(_DWORD *)json )
    return (void *)hashtable_iter((int)json + 8);
  else
    return 0;
}
