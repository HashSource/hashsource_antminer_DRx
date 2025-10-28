int __fastcall sub_34970(int result)
{
  int v1; // r4
  pthread_t v2; // r0

  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(result + 12);
    if ( v2 )
    {
      pthread_join(v2, 0);
      *(_DWORD *)(v1 + 12) = 0;
    }
    return sub_34964((sem_t *)(v1 + 16));
  }
  return result;
}
