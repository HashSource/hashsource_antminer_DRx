void __cdecl jsonp_error_init(json_error_t *error, const char *source)
{
  if ( error )
  {
    *((_BYTE *)error + 92) = 0;
    *(_DWORD *)error = -1;
    *((_DWORD *)error + 1) = -1;
    *((_DWORD *)error + 2) = 0;
    if ( source )
      jsonp_error_set_source((char *)error, source);
    else
      *((_BYTE *)error + 12) = 0;
  }
}
