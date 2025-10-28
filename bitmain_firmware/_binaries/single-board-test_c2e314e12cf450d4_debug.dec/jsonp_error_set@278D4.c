void jsonp_error_set(json_error_t *error, int line, int column, size_t position, const char *msg, ...)
{
  va_list va; // [sp+2Ch] [bp+24h] BYREF

  va_start(va, msg);
  jsonp_error_vset(error, line, column, position, msg, va);
}
