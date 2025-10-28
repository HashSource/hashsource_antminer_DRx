int __fastcall sub_2F6FC(int *a1)
{
  int v2; // r0
  int v3; // r6
  void **v4; // r4
  void **v5; // r5
  void **v6; // r0

  if ( pthread_mutex_lock(&stru_6F924) )
    sub_2F624("tidyup", 4593);
  v2 = *a1;
  byte_6F918 = 1;
  if ( v2 != -1 )
  {
    shutdown(v2, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_6F91C )
  {
    free((void *)dword_6F91C);
    dword_6F91C = 0;
  }
  v3 = dword_6F93C;
  if ( dword_6F93C )
  {
    v4 = (void **)dword_6F93C;
    do
    {
      v5 = (void **)v4[2];
      free(*((void **)*v4 + 1));
      free(*v4);
      v6 = v4;
      v4 = v5;
      free(v6);
    }
    while ( (void **)v3 != v5 );
    dword_6F93C = 0;
  }
  if ( pthread_mutex_unlock(&stru_6F924) )
    sub_2F6B4("tidyup", 4614);
  return off_6CB70(0);
}
