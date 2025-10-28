void *__fastcall sub_5BAF4(_DWORD *a1, int a2, int a3)
{
  unsigned int v5; // r3
  void *v6; // r5
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r7
  void *v10; // r0

  v5 = a1[2];
  if ( a2 + a1[3] <= v5 )
    return (void *)a1[4];
  v6 = (void *)a1[4];
  v7 = a2 + v5;
  v8 = 2 * v5;
  if ( v7 < v8 )
    v9 = v8;
  else
    v9 = v7;
  v10 = sub_5B2A8(4 * v9);
  if ( !v10 )
    return 0;
  a1[2] = v9;
  a1[4] = v10;
  if ( a3 )
  {
    sub_5BAD8((int)v10, 0, (int)v6, 0, a1[3]);
    sub_5B2D0(v6);
    return (void *)a1[4];
  }
  return v6;
}
