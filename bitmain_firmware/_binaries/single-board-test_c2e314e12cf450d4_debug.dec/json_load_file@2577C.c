json_t *__cdecl json_load_file(const char *path, size_t flags, json_error_t *error)
{
  int *v4; // r0
  char *v5; // r0
  json_t *v10; // [sp+18h] [bp+10h]
  FILE *stream; // [sp+1Ch] [bp+14h]

  jsonp_error_init(error, path);
  if ( path )
  {
    stream = fopen(path, "rb");
    if ( stream )
    {
      v10 = (json_t *)json_loadf((int)stream, flags, error);
      fclose(stream);
      return v10;
    }
    else
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      error_set(error, 0, "unable to open %s: %s", path, v5);
      return 0;
    }
  }
  else
  {
    error_set(error, 0, "wrong arguments");
    return 0;
  }
}
