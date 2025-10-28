char *__cdecl strbuffer_steal_value(strbuffer_t *strbuff)
{
  char *v2; // [sp+Ch] [bp+Ch]

  v2 = *(char **)strbuff;
  *(_DWORD *)strbuff = 0;
  return v2;
}
