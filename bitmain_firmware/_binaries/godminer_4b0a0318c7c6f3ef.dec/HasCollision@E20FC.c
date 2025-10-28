int __fastcall HasCollision(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r2
  int v4; // r12
  int v5; // t1
  int v6; // t1

  if ( a3 <= 0 )
    return 1;
  if ( *a1 == *a2 )
  {
    v3 = &a1[a3 - 1];
    while ( a1 != v3 )
    {
      v5 = *++a1;
      v4 = v5;
      v6 = *++a2;
      if ( v4 != v6 )
        return 0;
    }
    return 1;
  }
  return 0;
}
