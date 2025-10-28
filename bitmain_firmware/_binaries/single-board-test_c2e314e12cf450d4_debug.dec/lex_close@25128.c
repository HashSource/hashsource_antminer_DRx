void __fastcall lex_close(int a1)
{
  if ( *(_DWORD *)(a1 + 52) == 256 )
    jsonp_free(*(void **)(a1 + 56));
  strbuffer_close((strbuffer_t *)(a1 + 40));
}
