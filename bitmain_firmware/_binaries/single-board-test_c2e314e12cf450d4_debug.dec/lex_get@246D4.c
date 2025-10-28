int __cdecl lex_get(lex_t *lex, json_error_t *error)
{
  return stream_get((int)lex, error);
}
