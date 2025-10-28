void *__cdecl json_object_iter_next(json_t *json, void *iter)
{
  if ( json && !*(_DWORD *)json && iter )
    return (void *)hashtable_iter_next((int)json + 8, (int)iter);
  else
    return 0;
}
