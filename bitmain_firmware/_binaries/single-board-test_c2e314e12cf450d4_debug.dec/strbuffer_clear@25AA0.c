void __cdecl strbuffer_clear(strbuffer_t *strbuff)
{
  *((_DWORD *)strbuff + 1) = 0;
  **(_BYTE **)strbuff = 0;
}
