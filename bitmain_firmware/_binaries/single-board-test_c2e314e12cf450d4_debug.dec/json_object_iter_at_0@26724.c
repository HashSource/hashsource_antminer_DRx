json_t *__cdecl json_object_iter_at_0(const json_t *json, const char *key)
{
  if ( key && json && !*(_DWORD *)json )
    return (json_t *)hashtable_iter_at((int)json + 8, (char *)key);
  else
    return 0;
}
