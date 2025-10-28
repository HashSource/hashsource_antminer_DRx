int __cdecl json_object_iter_set_new(json_t *json, void *iter, json_t *value)
{
  if ( !json || *(_DWORD *)json || !iter || !value )
    return -1;
  hashtable_iter_set((int)iter, (int)value);
  return 0;
}
