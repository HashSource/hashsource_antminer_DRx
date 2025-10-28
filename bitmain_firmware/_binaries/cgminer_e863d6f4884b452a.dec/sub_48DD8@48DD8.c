const char *__fastcall sub_48DD8(unsigned int *a1, size_t *a2)
{
  _DWORD *v2; // r2
  int v3; // r5
  unsigned int v4; // r4
  const char *v5; // r4

  *a1 = 0;
  if ( !dword_A71FC )
    return 0;
  v2 = (_DWORD *)dword_A71F4;
  if ( *(_DWORD *)(dword_A71F4 + 4) == 8 )
  {
    v3 = dword_A71F4 + 28;
    v4 = 1;
    do
    {
      *a1 = v4;
      v2 = (_DWORD *)v3;
      v3 += 28;
      if ( dword_A71FC <= v4++ )
        return 0;
    }
    while ( v2[1] == 8 );
  }
  v5 = (const char *)(*v2 + 1);
  *a2 = strcspn(v5, "|= ");
  return v5;
}
