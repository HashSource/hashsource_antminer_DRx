int sub_1A8B4()
{
  int result; // r0
  int *v1; // r3
  int v2; // r4
  int v3; // t1

  *(_DWORD *)dword_6CA70 = 0;
  dword_6CA74 = 0;
  dword_6DBA8 = 0;
  dword_6DBAC = 0;
  result = sub_16DA4(0, dword_6CA70, 8u, 0);
  if ( dword_72EF0 > 0 )
  {
    v1 = (int *)dword_732EC;
    v2 = dword_732EC + 4 * dword_72EF0;
    do
    {
      v3 = *v1++;
      *(_DWORD *)(v3 + 376) = 0;
      *(_DWORD *)(v3 + 380) = 0;
    }
    while ( v1 != (int *)v2 );
  }
  return result;
}
