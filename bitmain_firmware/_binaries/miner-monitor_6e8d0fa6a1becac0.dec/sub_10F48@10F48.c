void __fastcall sub_10F48(_DWORD *ptr)
{
  int v1; // r4
  int v3; // r5

  v1 = ptr[1];
  ptr[1] = 0;
  if ( v1 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 4);
      free(*(void **)v1);
      free((void *)v1);
      v1 = v3;
    }
    while ( v3 );
  }
  free(ptr);
}
