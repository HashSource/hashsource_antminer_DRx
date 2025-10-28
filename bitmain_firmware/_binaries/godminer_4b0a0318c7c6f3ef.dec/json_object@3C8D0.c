_DWORD *json_object()
{
  _DWORD *v0; // r4
  void *v2; // r0

  v0 = jsonp_malloc((void *)0x24);
  if ( v0 )
  {
    if ( !hashtable_seed )
      json_object_seed(0);
    v0[1] = 1;
    *v0 = 0;
    if ( hashtable_init(v0 + 2) )
    {
      v2 = v0;
      v0 = 0;
      jsonp_free(v2);
    }
  }
  return v0;
}
