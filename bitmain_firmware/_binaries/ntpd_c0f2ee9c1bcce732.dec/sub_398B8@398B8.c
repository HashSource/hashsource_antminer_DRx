int __fastcall sub_398B8(double *a1)
{
  int v2; // r12
  int result; // r0
  int v4; // r1
  double v5; // d16
  int *v6; // r12

  v2 = *(_DWORD *)a1;
  result = *((_DWORD *)a1 + 1) + 1;
  *((_DWORD *)a1 + 1) = result;
  v4 = v2 - 1;
  v5 = a1[v2 + 3];
  if ( result == v2 )
  {
    result = 0;
    *((_DWORD *)a1 + 1) = 0;
  }
  if ( v4 > 0 )
  {
    v6 = (int *)&a1[v2 + 4];
    do
    {
      --v4;
      *((_QWORD *)v6 - 1) = *((_QWORD *)v6 - 2);
      v6 -= 2;
    }
    while ( v4 );
  }
  a1[4] = (double)(int)v5;
  return result;
}
