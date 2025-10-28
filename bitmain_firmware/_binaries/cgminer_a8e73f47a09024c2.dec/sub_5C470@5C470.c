int __fastcall sub_5C470(_DWORD *a1)
{
  unsigned int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r3

  if ( !a1 )
    return -1;
  if ( *a1 != 1 )
    return -1;
  if ( a1[3] )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(a1[4] + 4 * v2);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 4);
        if ( v4 != -1 )
        {
          v5 = v4 - 1;
          *(_DWORD *)(v3 + 4) = v5;
          if ( !v5 )
            sub_5C394((void **)v3);
        }
      }
      ++v2;
    }
    while ( a1[3] > v2 );
  }
  a1[3] = 0;
  return 0;
}
