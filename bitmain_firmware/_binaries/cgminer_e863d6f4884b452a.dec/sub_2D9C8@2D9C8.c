sem_t *__fastcall sub_2D9C8(int a1, int a2, int a3)
{
  sem_t *result; // r0
  sem_t *v7; // r5
  int v8; // r4
  pthread_t newthread[2]; // [sp+Ch] [bp-8h] BYREF

  result = (sem_t *)malloc(0x18u);
  v7 = result;
  if ( result )
  {
    sub_2D790(result, "util.c", "cg_completion_timeout", 3989);
    v7[1].__align = a1;
    *(&v7[1].__align + 1) = a2;
    pthread_create(newthread, 0, (void *(*)(void *))sub_2D840, v7);
    v8 = sub_2D8C4(v7, a3, "util.c", "cg_completion_timeout", 3995);
    if ( v8 )
    {
      pthread_cancel(newthread[0]);
    }
    else
    {
      pthread_join(newthread[0], 0);
      free(v7);
    }
    return (sem_t *)(v8 == 0);
  }
  return result;
}
