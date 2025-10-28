int sub_1276C()
{
  int result; // r0
  int v1; // r2
  int v2; // r3
  int v3; // t1

  dbl_73D08 = 0.0;
  dword_72BE8 = 0;
  dword_72BEC = 0;
  sub_DF7C(0, (char *)&dword_72BE8, 8u, 0);
  result = dword_791E8;
  if ( dword_791E8 > 0 )
  {
    v1 = dword_79488 - 4;
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      *(_QWORD *)(v3 + 376) = 0;
      ++v2;
    }
    while ( v2 < result );
  }
  return result;
}
