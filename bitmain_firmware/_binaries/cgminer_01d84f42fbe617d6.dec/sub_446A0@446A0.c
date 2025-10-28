int __fastcall sub_446A0(_DWORD *a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r1
  int v5; // r4
  _DWORD *v6; // r2
  int v7; // r3

  result = sub_4420C((int)a1);
  v3 = dword_56E0C[a1[2]];
  if ( v3 )
  {
    v4 = a1[1];
    v5 = 8 * v3;
    v6 = a1 + 3;
    v7 = 0;
    do
    {
      *(_DWORD *)(v4 + v7 + 4) = v6;
      *(_DWORD *)(v4 + v7) = v6;
      v7 += 8;
    }
    while ( v7 != v5 );
  }
  else
  {
    v6 = a1 + 3;
  }
  a1[4] = v6;
  a1[3] = v6;
  *a1 = 0;
  return result;
}
