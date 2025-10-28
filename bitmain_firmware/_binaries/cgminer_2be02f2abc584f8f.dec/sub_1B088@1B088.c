_DWORD *sub_1B088()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r3
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = calloc(0x770u, 1u);
  v1 = v0;
  if ( !v0 )
  {
    strcpy(s, "Failed to malloc pool in add_pool");
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v2 = dword_791E8;
  v0[1] = dword_791E8;
  *v0 = v2;
  dword_79488 = (int)realloc((void *)dword_79488, 4 * (v2 + 2));
  v3 = dword_791E8;
  *(_DWORD *)(dword_79488 + 4 * dword_791E8) = v1;
  dword_791E8 = v3 + 1;
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 49), 0) )
  {
    v4 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v4, "cgminer.c", "add_pool", 1010);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_cond_init((pthread_cond_t *)(v1 + 76), 0) )
  {
    strcpy(s, "Failed to pthread_cond_init in add_pool");
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 55), 0) )
  {
    v5 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v5, "cgminer.c", "add_pool", 1013);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  sub_13868((pthread_rwlock_t *)(v1 + 61), "cgminer.c", "add_pool", 1013);
  if ( pthread_mutex_init((pthread_mutex_t *)v1 + 30, 0) )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v6, "cgminer.c", "add_pool", 1014);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 189), 0) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v7, "cgminer.c", "add_pool", 1015);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  sub_13868((pthread_rwlock_t *)(v1 + 195), "cgminer.c", "add_pool", 1015);
  v1[88] = v1 + 88;
  v1[89] = v1 + 88;
  v1[35] = -1;
  v1[42] = "{\"method\": \"getwork\", \"params\": [], \"id\":0}\n";
  v1[48] = 0;
  v1[14] = 1;
  sub_11750();
  return v1;
}
