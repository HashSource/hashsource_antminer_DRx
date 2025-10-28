char *tq_new()
{
  char *v0; // r0
  char *v1; // r4

  v0 = (char *)calloc(1u, 0x58u);
  v1 = v0;
  if ( v0 )
  {
    *(_DWORD *)v0 = v0;
    *((_DWORD *)v0 + 1) = v0;
    pthread_mutex_init((pthread_mutex_t *)(v0 + 12), 0);
    pthread_cond_init((pthread_cond_t *)(v1 + 40), 0);
  }
  return v1;
}
