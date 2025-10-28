int __fastcall sub_41C30(int a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v6; // r8
  int v7; // r9
  int v8; // r5
  unsigned __int8 *v9; // r6
  unsigned __int8 *v10; // r4
  int v11; // r0
  int v12; // r1

  v3 = (int)a2 <= 0;
  if ( a2 )
    v3 = a3 <= 0;
  if ( v3 || !a1 )
    return -1;
  v6 = a3 >> 1;
  v7 = a3 & 1;
  if ( a3 >> 1 )
  {
    v8 = a1 - 1;
    v9 = &a2[2 * v6];
    v10 = a2;
    do
    {
      v11 = *v10;
      v12 = v10[1];
      v10 += 2;
      *(_BYTE *)++v8 = sub_41C04(v11, v12);
    }
    while ( v10 != v9 );
  }
  if ( v7 )
    *(_BYTE *)(a1 + v6) = sub_41C04(a2[2 * v6], 0);
  return v6 + v7;
}
