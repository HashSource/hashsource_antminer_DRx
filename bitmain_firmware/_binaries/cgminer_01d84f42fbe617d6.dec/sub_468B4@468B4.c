int __fastcall sub_468B4(_DWORD *a1, _DWORD *a2)
{
  size_t v4; // r2
  char *v5; // r1
  char *v6; // r0
  int v7; // r3
  int v8; // t1

  if ( !a1 || *a1 != 1 || !a2 || *a2 != 1 || !sub_46598(a1, a2[3], 1) )
    return -1;
  v4 = a2[3];
  v5 = (char *)a2[4];
  if ( v4 )
  {
    v4 *= 4;
    v6 = (char *)a2[4];
    do
    {
      v8 = *(_DWORD *)v6;
      v6 += 4;
      v7 = v8;
      if ( v8 )
      {
        if ( *(_DWORD *)(v7 + 4) != -1 )
          ++*(_DWORD *)(v7 + 4);
      }
    }
    while ( v6 != &v5[v4] );
  }
  memcpy((void *)(a1[4] + 4 * a1[3]), v5, v4);
  a1[3] += a2[3];
  return 0;
}
