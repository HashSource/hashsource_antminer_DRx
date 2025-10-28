char *sub_1E3F0()
{
  char *v0; // r0
  char *v1; // r4
  int v2; // r3
  void *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r2
  int v8; // r3
  int v9; // r4
  int v10; // r3
  int v11; // r4
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = (char *)calloc(0x770u, 1u);
  if ( !v0 )
  {
    strcpy(s, "Failed to malloc pool in add_pool");
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  v1 = v0;
  v2 = dword_72EF0;
  v3 = (void *)dword_732EC;
  v4 = dword_72EF0 + 2;
  *(_DWORD *)v1 = dword_72EF0;
  *((_DWORD *)v1 + 1) = v2;
  v5 = realloc(v3, 4 * v4);
  v6 = dword_72EF0;
  dword_732EC = (int)v5;
  ++dword_72EF0;
  v5[v6] = v1;
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 196), 0) )
  {
    v8 = *_errno_location();
    v9 = 1010;
    goto LABEL_11;
  }
  if ( pthread_cond_init((pthread_cond_t *)(v1 + 304), 0) )
  {
    strcpy(s, "Failed to pthread_cond_init in add_pool");
    goto LABEL_12;
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 220), 0) )
  {
    v8 = *_errno_location();
    v9 = 1013;
    goto LABEL_11;
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v1 + 244), 0) )
  {
    v10 = *_errno_location();
    v11 = 1013;
LABEL_18:
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", v10, "cgminer.c", "add_pool", v11);
LABEL_12:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)v1 + 30, 0) )
  {
    v8 = *_errno_location();
    v9 = 1014;
LABEL_11:
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", v8, "cgminer.c", "add_pool", v9);
    goto LABEL_12;
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 756), 0) )
  {
    v8 = *_errno_location();
    v9 = 1015;
    goto LABEL_11;
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v1 + 780), 0) )
  {
    v10 = *_errno_location();
    v11 = 1015;
    goto LABEL_18;
  }
  *((_DWORD *)v1 + 48) = 0;
  *((_DWORD *)v1 + 42) = "{\"method\": \"getwork\", \"params\": [], \"id\":0}\n";
  *((_DWORD *)v1 + 88) = v1 + 352;
  *((_DWORD *)v1 + 89) = v1 + 352;
  *((_DWORD *)v1 + 35) = -1;
  *((_DWORD *)v1 + 14) = 1;
  sub_19C74();
  return v1;
}
