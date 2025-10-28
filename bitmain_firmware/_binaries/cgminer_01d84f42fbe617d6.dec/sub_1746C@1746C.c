char *sub_1746C()
{
  char *v0; // r4
  int v1; // r3
  void *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r12
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = (char *)calloc(0x708u, 1u);
  if ( !v0 )
  {
    strcpy(v7, "Failed to malloc pool in add_pool");
    sub_38438(3, v7, 1);
    sub_16724(1);
  }
  v1 = dword_63740;
  v2 = (void *)dword_639E0;
  v3 = dword_63740 + 2;
  *((_DWORD *)v0 + 1) = dword_63740;
  *(_DWORD *)v0 = v1;
  v4 = realloc(v2, 4 * v3);
  v5 = dword_63740 + 1;
  dword_639E0 = (int)v4;
  v4[dword_63740] = v0;
  dword_63740 = v5;
  if ( pthread_mutex_init((pthread_mutex_t *)(v0 + 188), 0) )
    sub_B5BC("add_pool", 748);
  if ( pthread_cond_init((pthread_cond_t *)(v0 + 296), 0) )
  {
    strcpy(v7, "Failed to pthread_cond_init in add_pool");
    sub_38438(3, v7, 1);
    sub_16724(1);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v0 + 212), 0) )
    sub_B5BC("add_pool", 751);
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v0 + 236), 0) )
    sub_B628("add_pool", 751);
  if ( pthread_mutex_init((pthread_mutex_t *)v0 + 28, 0) )
    sub_B5BC("add_pool", 752);
  if ( pthread_mutex_init((pthread_mutex_t *)(v0 + 708), 0) )
    sub_B5BC("add_pool", 753);
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v0 + 732), 0) )
    sub_B628("add_pool", 753);
  *((_DWORD *)v0 + 86) = v0 + 344;
  *((_DWORD *)v0 + 87) = v0 + 344;
  *((_DWORD *)v0 + 40) = "{\"method\": \"getwork\", \"params\": [], \"id\":0}\n";
  *((_DWORD *)v0 + 34) = -1;
  *((_DWORD *)v0 + 46) = 0;
  *((_DWORD *)v0 + 14) = 1;
  sub_14E18();
  return v0;
}
