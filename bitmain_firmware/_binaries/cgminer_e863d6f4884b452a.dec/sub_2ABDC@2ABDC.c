int __fastcall sub_2ABDC(int a1)
{
  int v1; // r1
  int v2; // r6
  int v3; // r3
  unsigned int v4; // r5
  unsigned int v5; // t1
  unsigned int v6; // r2
  unsigned __int8 v7; // r4

  v1 = 0;
  v2 = a1 + 32;
  do
  {
    v3 = 31;
    v5 = *(_DWORD *)(v2 - 4);
    v2 -= 4;
    v4 = v5;
    do
    {
      v6 = v4 >> v3;
      v7 = v1 + 1;
      --v3;
      if ( (v6 & 1) != 0 )
        return v1;
      v1 = v7;
    }
    while ( v3 != -1 );
  }
  while ( v2 != a1 );
  return v7;
}
