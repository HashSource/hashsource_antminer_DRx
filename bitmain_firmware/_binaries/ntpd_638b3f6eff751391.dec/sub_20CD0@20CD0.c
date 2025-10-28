int sub_20CD0()
{
  int result; // r0
  int v1; // r12
  int v2; // r3
  int v3; // r3
  int v4; // r2

  result = sub_4F524(2880);
  v1 = dword_7D928;
  v2 = result;
  dword_7D928 = result;
  do
  {
    v2 += 72;
    *(_DWORD *)(v2 - 72) = v2;
  }
  while ( v2 != result + 2808 );
  v3 = dword_7D930;
  v4 = dword_7D92C + 40;
  *(_DWORD *)(result + 2808) = v1;
  dword_7D92C = v4;
  dword_7D930 = v3 + 1;
  return result;
}
