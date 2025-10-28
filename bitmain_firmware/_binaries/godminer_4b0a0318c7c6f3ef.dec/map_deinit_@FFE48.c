void __fastcall map_deinit_(char **a1)
{
  char *v2; // r3
  char *v3; // r5
  int v4; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r4

  v2 = *a1;
  v3 = a1[1] - 1;
  v4 = 4 * (_DWORD)v3;
  if ( a1[1] )
  {
    do
    {
      v5 = *(_DWORD **)&v2[v4];
      if ( v5 )
      {
        do
        {
          v6 = (_DWORD *)v5[2];
          free(v5);
          v5 = v6;
        }
        while ( v6 );
        v2 = *a1;
      }
      --v3;
      v4 -= 4;
    }
    while ( v3 != (char *)-1 );
  }
  free(v2);
}
