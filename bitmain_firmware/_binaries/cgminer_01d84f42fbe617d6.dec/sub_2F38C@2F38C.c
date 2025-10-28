int __fastcall sub_2F38C(int a1, int a2, int a3)
{
  sem_t *v6; // r0
  sem_t *v7; // r4
  _BOOL4 v8; // r5
  pthread_t newthread[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = (sem_t *)malloc(0x18u);
  v7 = v6;
  if ( !v6 )
    return 0;
  sub_2F06C(v6, "util.c", "cg_completion_timeout", 3366);
  v7[1].__align = a1;
  *(&v7[1].__align + 1) = a2;
  pthread_create(newthread, 0, (void *(*)(void *))sub_2F1B4, v7);
  v8 = sub_2F27C(v7, a3, "util.c", "cg_completion_timeout", 3372) != 0;
  if ( v8 )
  {
    pthread_cancel(newthread[0]);
  }
  else
  {
    pthread_join(newthread[0], 0);
    free(v7);
  }
  return !v8;
}
