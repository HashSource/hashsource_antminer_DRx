_DWORD *json_object()
{
  _DWORD *v2; // [sp+4h] [bp+4h]

  v2 = jsonp_malloc(0x24u);
  if ( !v2 )
    return 0;
  json_init(v2, 0);
  if ( hashtable_init(v2 + 2) )
  {
    jsonp_free(v2);
    return 0;
  }
  else
  {
    v2[7] = 0;
    v2[8] = 0;
    return v2;
  }
}
