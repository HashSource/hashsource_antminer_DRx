int __fastcall sub_15D38(int result, unsigned int a2)
{
  char v2; // nf
  int v3; // r12
  unsigned int v4; // r3
  char v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  bool v8; // zf

  v3 = result ^ a2;
  if ( v2 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v3 ^ result) < 0 )
      return -result;
  }
  else
  {
    v4 = result;
    if ( result < 0 )
      v4 = -result;
    if ( v4 <= a2 )
    {
      if ( v4 < a2 )
        result = 0;
      if ( v4 == a2 )
        return (v3 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v5 = __clz(a2) - __clz(v4);
      v6 = a2 << v5;
      v7 = 1 << v5;
      result = 0;
      while ( 1 )
      {
        if ( v4 >= v6 )
        {
          v4 -= v6;
          result |= v7;
        }
        if ( v4 >= v6 >> 1 )
        {
          v4 -= v6 >> 1;
          result |= v7 >> 1;
        }
        if ( v4 >= v6 >> 2 )
        {
          v4 -= v6 >> 2;
          result |= v7 >> 2;
        }
        if ( v4 >= v6 >> 3 )
        {
          v4 -= v6 >> 3;
          result |= v7 >> 3;
        }
        v8 = v4 == 0;
        if ( v4 )
        {
          v7 >>= 4;
          v8 = v7 == 0;
        }
        if ( v8 )
          break;
        v6 >>= 4;
      }
      if ( v3 < 0 )
        return -result;
    }
    else
    {
      result = v4 >> (31 - __clz(a2));
      if ( v3 < 0 )
        return -result;
    }
  }
  return result;
}
