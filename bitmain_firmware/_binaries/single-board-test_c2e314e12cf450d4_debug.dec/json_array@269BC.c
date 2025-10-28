_DWORD *json_array()
{
  _DWORD *v2; // [sp+4h] [bp+4h]

  v2 = jsonp_malloc(0x18u);
  if ( !v2 )
    return 0;
  json_init(v2, 1);
  v2[3] = 0;
  v2[2] = 8;
  v2[4] = jsonp_malloc(4 * v2[2]);
  if ( v2[4] )
  {
    v2[5] = 0;
    return v2;
  }
  else
  {
    jsonp_free(v2);
    return 0;
  }
}
