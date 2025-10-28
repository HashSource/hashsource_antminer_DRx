int __fastcall set_pass(char *s)
{
  int v2; // r3
  int v3; // r4
  void *v4; // r0

  v2 = ++dword_195A70;
  if ( dword_195A70 > total_pools )
  {
    add_pool();
    v2 = dword_195A70;
  }
  v3 = *(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF));
  v4 = *(void **)(v3 + 20);
  if ( v4 )
    free(v4);
  *(_DWORD *)(v3 + 20) = _strdup(s);
  return 0;
}
