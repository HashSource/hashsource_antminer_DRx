int sub_40128()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // t1
  int v5; // t1

  v0 = 805859;
  v1 = 805836;
  v2 = 805859;
  v3 = 805836;
  do
  {
    v4 = *(unsigned __int8 *)++v2;
    if ( v4 == 1 )
    {
      sub_3F864(*(_DWORD *)(v3 + 8), 1, 0, 24, 272252993);
      sub_2B21C();
    }
    v3 += 4;
  }
  while ( v2 != 805863 );
  do
  {
    v5 = *(unsigned __int8 *)++v0;
    if ( v5 == 1 )
    {
      sub_3F864(*(_DWORD *)(v1 + 8), 0, 12, 24, 1887060033);
      sub_2B21C();
      sub_3F864(*(_DWORD *)(v1 + 8), 0, 201, 24, 1887060033);
      sub_2B21C();
    }
    v1 += 4;
  }
  while ( v0 != 805863 );
  sub_2B21C();
  return sub_3EF84(0, 24, 1);
}
