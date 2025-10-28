int __fastcall sub_513CC(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r4
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r12
  unsigned int v8; // r3
  int v9; // r1

  v3 = a2 - 1;
  if ( (unsigned int)(a2 - 1) > 0xB || a3 <= 0 )
    return -1;
  if ( (a1 & 3) != 0 )
  {
    v4 = a1 >> 31;
  }
  else
  {
    v4 = a1 >> 31;
    if ( a1 % 100 )
      goto LABEL_7;
  }
  if ( a1 == 400 * (((int)((unsigned __int64)(1374389535LL * a1) >> 32) >> 7) - v4) )
  {
LABEL_7:
    v5 = &unk_7C99C;
    goto LABEL_8;
  }
  v5 = &unk_7C9CC;
LABEL_8:
  v6 = v5[v3];
  v7 = 4 * v3;
  if ( a3 > v6 )
    return -1;
  if ( a2 != 1 )
  {
    v8 = 0;
    do
    {
      v9 = v5[v8 / 4];
      v8 += 4;
      a3 += v9;
    }
    while ( v7 != v8 );
  }
  return a3;
}
