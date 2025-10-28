int __fastcall sub_1E504(int *ptr)
{
  int *v2; // r3
  void *v3; // r0
  int v4; // r5

  v2 = &dword_7D3BC;
  if ( (int *)dword_7D3BC == ptr )
    goto LABEL_8;
  if ( !dword_7D3BC )
    goto LABEL_9;
  v2 = *(int **)dword_7D3BC;
  if ( *(int **)dword_7D3BC == ptr )
  {
    v2 = (int *)dword_7D3BC;
LABEL_8:
    *v2 = *ptr;
    goto LABEL_9;
  }
  while ( v2 )
  {
    if ( (int *)*v2 == ptr )
      goto LABEL_8;
    v2 = (int *)*v2;
  }
LABEL_9:
  v3 = (void *)ptr[1];
  v4 = *ptr;
  if ( v3 )
    free(v3);
  free(ptr);
  return v4;
}
