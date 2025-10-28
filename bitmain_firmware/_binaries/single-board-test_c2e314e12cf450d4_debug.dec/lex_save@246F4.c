void __cdecl lex_save(lex_t *lex, int c)
{
  strbuffer_append_byte((lex_t *)((char *)lex + 40), c);
}
