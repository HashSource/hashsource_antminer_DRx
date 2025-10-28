int __fastcall sub_2AD04(int result)
{
  int v1; // r4
  pthread_t v2; // r0

  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(result + 12);
    if ( v2 )
    {
      pthread_cancel(v2);
      *(_DWORD *)(v1 + 12) = 0;
    }
    return sem_destroy((sem_t *)(v1 + 16));
  }
  return result;
}
