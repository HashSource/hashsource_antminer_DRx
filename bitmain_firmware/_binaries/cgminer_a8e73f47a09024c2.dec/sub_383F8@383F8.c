int __fastcall sub_383F8(int *a1)
{
  int v2; // r6
  void **v3; // r4
  void **v4; // r5
  int v5; // r0

  sub_36AA8(&stru_7CB10, "api.c", "tidyup", 4593);
  byte_7CB04 = 1;
  if ( *a1 != -1 )
  {
    shutdown(*a1, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_7CB0C )
  {
    free((void *)dword_7CB0C);
    dword_7CB0C = 0;
  }
  v2 = dword_7CB28;
  if ( dword_7CB28 )
  {
    v3 = (void **)dword_7CB28;
    do
    {
      v4 = (void **)v3[2];
      free(*((void **)*v3 + 1));
      free(*v3);
      free(v3);
      v3 = v4;
    }
    while ( (void **)v2 != v4 );
    dword_7CB28 = 0;
  }
  v5 = sub_36B80(&stru_7CB10, "api.c", "tidyup", 4614);
  return off_79D40(v5);
}
