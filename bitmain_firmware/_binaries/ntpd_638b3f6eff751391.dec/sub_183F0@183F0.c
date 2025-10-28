int sub_183F0()
{
  int v0; // r1
  _DWORD *v1; // r2
  int v2; // r12
  int result; // r0
  int v4; // r3

  if ( dword_794D8 )
    return sub_18358(dword_CA668);
  v0 = dword_CA570;
  if ( !byte_C9D70[dword_CA570] )
    return -1;
  v1 = (_DWORD *)dword_CA668;
  v2 = *(_DWORD *)(dword_CA668 + 12) + 1;
  *(_DWORD *)(dword_CA668 + 12) = v2;
  result = (unsigned __int8)byte_C9D70[v0];
  dword_CA570 = v0 + 1;
  if ( result == 10 )
  {
    v4 = v1[2];
    v1[4] = v2;
    v1[3] = 1;
    v1[2] = v4 + 1;
  }
  return result;
}
