int create_pool_stratum_threads()
{
  int v0; // r5
  void *(*v1)(void *); // r8
  int v2; // r4
  int v3; // r7
  char *v4; // r0
  int v5; // r7

  byte_196BA0 = 1;
  set_current_pool(*(_DWORD *)pools);
  if ( total_pools <= 0 )
    return 0;
  v0 = 1795088;
  LOWORD(v1) = 19708;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(pools + 4 * v2);
    if ( !*(_BYTE *)(v3 + 28) )
      goto LABEL_3;
    *(_DWORD *)v0 = v2 + 4;
    v4 = tq_new();
    *(_DWORD *)(v0 + 44) = v4;
    if ( !v4 )
      return -1;
    tq_push((int)v4, v3);
    pthread_attr_init((pthread_attr_t *)(v0 + 8));
    HIWORD(v1) = (unsigned int)&loc_32774 >> 16;
    v5 = pthread_create((pthread_t *)(v0 + 4), (const pthread_attr_t *)(v0 + 8), v1, (void *)v0);
    pthread_attr_destroy((pthread_attr_t *)(v0 + 8));
    if ( v5 )
      return sub_320E8();
LABEL_3:
    ++v2;
    v0 += 48;
    if ( total_pools <= v2 )
      return 0;
  }
}
