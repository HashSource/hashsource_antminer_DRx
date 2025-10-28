int __cdecl strbuffer_init(strbuffer_t *strbuff)
{
  *((_DWORD *)strbuff + 2) = 16;
  *((_DWORD *)strbuff + 1) = 0;
  *(_DWORD *)strbuff = jsonp_malloc(*((_DWORD *)strbuff + 2));
  if ( !*(_DWORD *)strbuff )
    return -1;
  **(_BYTE **)strbuff = 0;
  return 0;
}
