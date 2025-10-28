int __fastcall sub_1E278(char *s1)
{
  int v2; // r4

  v2 = dword_7D3B8;
  if ( dword_7D3B8 )
  {
    while ( *(char **)v2 != s1 && strcmp(s1, *(const char **)v2) )
    {
      v2 = *(_DWORD *)(v2 + 8);
      if ( !v2 )
        goto LABEL_9;
    }
    if ( dword_7CF4C > 3 )
      printf("filegen_get(%s) = %p\n", s1, *(const void **)(v2 + 4));
    return *(_DWORD *)(v2 + 4);
  }
  else
  {
LABEL_9:
    if ( dword_7CF4C > 3 )
      printf("filegen_get(%s) = NULL\n", s1);
    return 0;
  }
}
