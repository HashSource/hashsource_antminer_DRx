int __fastcall json_string_setn_nocheck(int a1, const void *a2, size_t a3)
{
  _BYTE *v6; // r7

  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 2 || a2 == 0 )
    return -1;
  v6 = jsonp_strndup(a2, a3);
  if ( !v6 )
    return -1;
  jsonp_free(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = a3;
  return 0;
}
