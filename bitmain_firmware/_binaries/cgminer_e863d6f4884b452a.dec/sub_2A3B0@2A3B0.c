int __fastcall sub_2A3B0(int result)
{
  int v1; // r4
  pthread_t v2; // r0
  sem_t *v3; // r0

  if ( result )
  {
    v1 = result;
    v2 = *(_DWORD *)(result + 12);
    if ( v2 )
    {
      pthread_join(v2, 0);
      v3 = (sem_t *)(v1 + 16);
      *(_DWORD *)(v1 + 12) = 0;
    }
    else
    {
      v3 = (sem_t *)(v1 + 16);
    }
    return j_sem_destroy(v3);
  }
  return result;
}
