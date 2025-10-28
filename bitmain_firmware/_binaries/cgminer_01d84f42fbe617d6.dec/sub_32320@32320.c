int __fastcall sub_32320(int *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r6
  void **v5; // r4
  void **v6; // r5

  if ( pthread_mutex_lock(&stru_62F70) )
    sub_B844("tidyup", 4602);
  v2 = *a1;
  v3 = *a1 == -1;
  byte_62F64 = 1;
  if ( !v3 )
  {
    shutdown(v2, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_62F6C )
  {
    free((void *)dword_62F6C);
    dword_62F6C = 0;
  }
  v4 = dword_62F88;
  if ( dword_62F88 )
  {
    v5 = (void **)dword_62F88;
    do
    {
      v6 = (void **)v5[2];
      free(*((void **)*v5 + 1));
      free(*v5);
      free(v5);
      v5 = v6;
    }
    while ( (void **)v4 != v6 );
    dword_62F88 = 0;
  }
  if ( pthread_mutex_unlock(&stru_62F70) )
    sub_B91C("tidyup", 4623);
  return off_60178();
}
