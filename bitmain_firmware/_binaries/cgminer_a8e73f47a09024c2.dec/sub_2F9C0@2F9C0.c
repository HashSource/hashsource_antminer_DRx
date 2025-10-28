void __fastcall sub_2F9C0(char *a1)
{
  _DWORD *v2; // r0
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r2
  char *v6; // r3

  if ( a1 )
  {
    v2 = (_DWORD *)(*(_DWORD *)a1 - 4);
    v3 = **(_DWORD **)a1 - 4;
    if ( a1 != *(char **)a1 )
    {
      do
      {
        v4 = (_DWORD *)v2[2];
        v5 = v2[1];
        *(_DWORD *)(v5 + 4) = v4;
        *v4 = v5;
        v2[1] = 0;
        v2[2] = 0;
        free(v2);
        v6 = (char *)(v3 + 4);
        v2 = (_DWORD *)v3;
        v3 = *(_DWORD *)(v3 + 4) - 4;
      }
      while ( v6 != a1 );
    }
    pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 12));
    memset(a1, 0, 0x58u);
    free(a1);
  }
}
