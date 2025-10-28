int __fastcall sub_38440(int *a1)
{
  int v2; // r6
  void **v3; // r4
  void **v4; // r5
  int v5; // r0

  sub_36AF0(&stru_75AB8, "api.c", "tidyup", 4593);
  byte_75AAC = 1;
  if ( *a1 != -1 )
  {
    shutdown(*a1, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_75AB4 )
  {
    free((void *)dword_75AB4);
    dword_75AB4 = 0;
  }
  v2 = dword_75AD0;
  if ( dword_75AD0 )
  {
    v3 = (void **)dword_75AD0;
    do
    {
      v4 = (void **)v3[2];
      free(*((void **)*v3 + 1));
      free(*v3);
      free(v3);
      v3 = v4;
    }
    while ( (void **)v2 != v4 );
    dword_75AD0 = 0;
  }
  v5 = sub_36BC8(&stru_75AB8, "api.c", "tidyup", 4614);
  return off_72D00(v5);
}
