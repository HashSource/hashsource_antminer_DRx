const char *__fastcall sub_48E68(int a1, unsigned int *a2, size_t *a3)
{
  unsigned int i; // r3
  _DWORD *v7; // r2
  const char *v9; // r4

  for ( i = *a2; i < dword_A71FC; *a2 = ++i )
  {
    v7 = (_DWORD *)(dword_A71F4 + 28 * i);
    if ( v7[1] != 8 )
    {
      if ( !a1 )
      {
        v9 = (const char *)(*v7 + 1);
        *a3 = strcspn(v9, "|= ");
        return v9;
      }
      a1 = sub_48E38(a1, a3);
      if ( a1 )
        return (const char *)a1;
      i = *a2;
    }
  }
  return 0;
}
