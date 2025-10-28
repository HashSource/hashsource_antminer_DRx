void __cdecl jsonp_error_vset(json_error_t *error, int line, int column, size_t position, const char *msg, va_list ap)
{
  if ( error )
  {
    if ( !*((_BYTE *)error + 92) )
    {
      *(_DWORD *)error = line;
      *((_DWORD *)error + 1) = column;
      *((_DWORD *)error + 2) = position;
      vsnprintf((char *)error + 92, 0xA0u, msg, ap);
      *((_BYTE *)error + 251) = 0;
    }
  }
}
