_DWORD *json_array()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r0
  void *v4; // r0

  v0 = jsonp_malloc((void *)0x14);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 1;
    v0[1] = 1;
    v0[3] = 0;
    v0[2] = 8;
    v2 = jsonp_malloc((void *)0x20);
    v1[4] = v2;
    if ( !v2 )
    {
      v4 = v1;
      v1 = 0;
      jsonp_free(v4);
    }
  }
  return v1;
}
