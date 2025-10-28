void __fastcall sub_1E458(const char *a1)
{
  int v2; // r4
  const char *v3; // r0
  int *v4; // r6
  int v5; // r5

  if ( dword_7CF4C > 3 )
    printf("filegen_unregister(%s)\n", a1);
  v2 = dword_7D3B8;
  if ( dword_7D3B8 )
  {
    v3 = *(const char **)dword_7D3B8;
    v4 = &dword_7D3B8;
    if ( *(const char **)dword_7D3B8 != a1 )
    {
      do
      {
        if ( !strcmp(v3, a1) )
          break;
        v4 = (int *)(v2 + 8);
        v2 = *(_DWORD *)(v2 + 8);
        if ( !v2 )
          return;
        v3 = *(const char **)v2;
      }
      while ( *(const char **)v2 != a1 );
    }
    *v4 = *(_DWORD *)(v2 + 8);
    v5 = *(_DWORD *)(v2 + 4);
    free(*(void **)v2);
    free((void *)v2);
    free(*(void **)(v5 + 8));
  }
}
