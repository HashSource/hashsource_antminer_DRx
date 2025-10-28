int sub_129AC()
{
  int result; // r0
  int v1; // r2
  int v2; // r3
  int v3; // t1

  dbl_7AD68 = 0.0;
  dword_79C24 = 0;
  dword_79C28 = 0;
  sub_E144(0, (char *)&dword_79C24, 8u, 0);
  result = dword_802C8;
  if ( dword_802C8 > 0 )
  {
    v1 = dword_80568 - 4;
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
