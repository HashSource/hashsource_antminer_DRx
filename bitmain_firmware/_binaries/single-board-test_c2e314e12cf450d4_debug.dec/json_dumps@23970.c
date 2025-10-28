char *__cdecl json_dumps(const json_t *json, size_t flags)
{
  const char *v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp+8h] BYREF
  char *v8; // [sp+14h] [bp+14h]

  if ( strbuffer_init((strbuffer_t *)v7) )
    return 0;
  if ( json_dump_callback(json, dump_to_strbuffer, v7, flags) )
  {
    v8 = 0;
  }
  else
  {
    v3 = (const char *)strbuffer_value((int)v7);
    v8 = (char *)jsonp_strdup(v3);
  }
  strbuffer_close((strbuffer_t *)v7);
  return v8;
}
