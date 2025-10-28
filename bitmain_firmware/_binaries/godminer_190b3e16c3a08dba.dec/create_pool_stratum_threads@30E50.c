int create_pool_stratum_threads()
{
  void *(*v0)(void *); // r8
  int v1; // r5
  int v2; // r4
  int v3; // r7
  char *v4; // r0
  int v5; // r7

  byte_17A1C0 = 1;
  set_current_pool(*(_DWORD *)pools);
  if ( total_pools <= 0 )
    return 0;
  LOWORD(v1) = -12216;
  LOWORD(v0) = 10744;
  HIWORD(v1) = (unsigned int)&unk_186238 >> 16;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(pools + 4 * v2);
    if ( !*(_BYTE *)(v3 + 28) )
      goto LABEL_3;
    *(_DWORD *)v1 = v2 + 4;
    v4 = tq_new();
    *(_DWORD *)(v1 + 44) = v4;
    if ( !v4 )
      return -1;
    tq_push((int)v4, v3);
    pthread_attr_init((pthread_attr_t *)(v1 + 8));
    HIWORD(v0) = (unsigned int)&loc_32774 >> 16;
    v5 = pthread_create((pthread_t *)(v1 + 4), (const pthread_attr_t *)(v1 + 8), v0, (void *)v1);
    pthread_attr_destroy((pthread_attr_t *)(v1 + 8));
    if ( v5 )
      return sub_2FEE8();
LABEL_3:
    ++v2;
    v1 += 48;
    if ( total_pools <= v2 )
      return 0;
  }
}
