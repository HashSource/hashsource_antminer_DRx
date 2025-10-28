void __cdecl strbuffer_close(strbuffer_t *strbuff)
{
  if ( *(_DWORD *)strbuff )
    jsonp_free(*(void **)strbuff);
  *((_DWORD *)strbuff + 2) = 0;
  *((_DWORD *)strbuff + 1) = 0;
  *(_DWORD *)strbuff = 0;
}
