int sub_15BEC()
{
  int result; // r0
  int *v1; // r3
  int v2; // r1
  int v3; // t1

  dword_60064 = 0;
  dword_60068 = 0;
  dword_611C8 = 0;
  dword_611CC = 0;
  result = sub_11130(0, (char *)&dword_60064, 8u, 0);
  if ( dword_63740 > 0 )
  {
    result = 0;
    v1 = (int *)dword_639E0;
    v2 = dword_639E0 + 4 * dword_63740;
    do
    {
      v3 = *v1++;
      *(_DWORD *)(v3 + 368) = 0;
      *(_DWORD *)(v3 + 372) = 0;
    }
    while ( v1 != (int *)v2 );
  }
  return result;
}
