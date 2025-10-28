void __fastcall sub_2AAD0(char *a1)
{
  int v1; // r5
  _DWORD *v3; // r3
  int v4; // r2
  _DWORD *v5; // r4
  _DWORD *v6; // r1
  bool v7; // zf

  if ( a1 )
  {
    v3 = (_DWORD *)(*(_DWORD *)a1 - 4);
    v4 = **(_DWORD **)a1;
    if ( a1 != *(char **)a1 )
      v1 = 0;
    v5 = (_DWORD *)(v4 - 4);
    if ( a1 != *(char **)a1 )
    {
      do
      {
        v6 = (_DWORD *)v3[2];
        *(_DWORD *)(v4 + 4) = v6;
        *v6 = v4;
        v3[1] = v1;
        v3[2] = v1;
        free(v3);
        v4 = v5[1];
        v3 = v5;
        v7 = v5 + 1 == (_DWORD *)a1;
        v5 = (_DWORD *)(v4 - 4);
      }
      while ( !v7 );
    }
    pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 12));
    memset(a1, 0, 0x58u);
    free(a1);
  }
}
