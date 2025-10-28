int __fastcall sub_4426C(_DWORD *a1)
{
  int v2; // r2
  _DWORD *v3; // r1
  int v4; // r0
  int v5; // r12
  int v6; // r12
  int v7; // r3

  *a1 = 0;
  a1[2] = 0;
  v2 = sub_45DE4(40);
  a1[1] = v2;
  if ( !v2 )
    return -1;
  v3 = a1 + 3;
  v4 = a1[2];
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  v5 = dword_56E0C[v4];
  if ( v5 )
  {
    v6 = 8 * v5;
    v7 = 0;
    do
    {
      *(_DWORD *)(v2 + v7 + 4) = v3;
      *(_DWORD *)(v2 + v7) = v3;
      v7 += 8;
    }
    while ( v7 != v6 );
  }
  return 0;
}
