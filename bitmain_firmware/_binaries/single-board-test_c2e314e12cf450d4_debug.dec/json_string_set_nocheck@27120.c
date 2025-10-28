int __fastcall json_string_set_nocheck(int a1, const char *a2)
{
  void *v5; // [sp+Ch] [bp+Ch]

  if ( !a1 || *(_DWORD *)a1 != 2 || !a2 )
    return -1;
  v5 = jsonp_strdup(a2);
  if ( !v5 )
    return -1;
  jsonp_free(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v5;
  return 0;
}
