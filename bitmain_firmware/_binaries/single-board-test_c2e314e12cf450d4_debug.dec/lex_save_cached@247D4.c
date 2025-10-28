void __cdecl lex_save_cached(lex_t *lex)
{
  while ( *((_BYTE *)lex + *((_DWORD *)lex + 4) + 8) )
  {
    lex_save(lex, *((unsigned __int8 *)lex + *((_DWORD *)lex + 4) + 8));
    ++*((_DWORD *)lex + 4);
    ++*((_DWORD *)lex + 9);
  }
}
