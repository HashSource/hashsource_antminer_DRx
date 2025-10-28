int __fastcall sub_34A54(int a1, int a2, int a3)
{
  sem_t *v6; // r0
  sem_t *v7; // r4
  _BOOL4 v8; // r5
  pthread_t newthread[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = (sem_t *)malloc(0x18u);
  v7 = v6;
  if ( !v6 )
    return 0;
  sub_346C4(v6, "util.c", "cg_completion_timeout", 3989);
  v7[1].__align = a1;
  *(&v7[1].__align + 1) = a2;
  pthread_create(newthread, 0, (void *(*)(void *))sub_34808, v7);
  v8 = sub_348D0(v7, a3, "util.c", "cg_completion_timeout", 3995) != 0;
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
