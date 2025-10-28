int __fastcall sub_D2BC(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  bool v3; // zf
  unsigned __int8 *v4; // r2
  int v5; // t1
  bool v6; // zf
  bool v7; // zf
  int v8; // r2
  unsigned __int8 *v9; // r2
  unsigned __int8 *v10; // r12
  int v11; // r3
  int v12; // t1
  bool v13; // zf
  bool v14; // zf

  v1 = *a1;
  v2 = **a1;
  v3 = v2 == 32;
  if ( v2 != 32 )
    v3 = v2 == 9;
  if ( v3 )
  {
    v4 = v1 + 1;
    do
    {
      v1 = v4;
      v5 = *v4++;
      v2 = v5;
      v6 = v5 == 32;
      if ( v5 != 32 )
        v6 = v2 == 9;
    }
    while ( v6 );
  }
  v7 = v2 == 10;
  if ( v2 != 10 )
    v7 = v2 == 0;
  v8 = !v7;
  if ( v7 )
    return v8;
  if ( v2 == 9 || v2 == 35 )
    return 0;
  v9 = v1 + 1;
  do
  {
    v10 = v9;
    v12 = *v9++;
    v11 = v12;
    v13 = v12 == 10;
    if ( v12 != 10 )
      v13 = v11 == 0;
  }
  while ( !v13 && v11 != 32 && v11 != 9 && v11 != 35 );
  if ( v10 == v1 )
    return 0;
  v14 = v11 == 32;
  if ( v11 != 32 )
    v14 = v11 == 9;
  *v10 = 0;
  if ( v14 )
    ++v10;
  *a1 = v10;
  return (int)v1;
}
