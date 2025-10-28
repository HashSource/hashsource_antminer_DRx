int __fastcall sub_48F88(int result, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  char v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  bool v7; // zf

  if ( !a2 )
    JUMPOUT(0x49478);
  v2 = result ^ a2;
  if ( (a2 & 0x80000000) != 0 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v2 ^ result) < 0 )
      return -result;
  }
  else
  {
    v3 = result;
    if ( result < 0 )
      v3 = -result;
    if ( v3 <= a2 )
    {
      if ( v3 < a2 )
        result = 0;
      if ( v3 == a2 )
        return (v2 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v4 = __clz(a2) - __clz(v3);
      v5 = a2 << v4;
      v6 = 1 << v4;
      result = 0;
      while ( 1 )
      {
        if ( v3 >= v5 )
        {
          v3 -= v5;
          result |= v6;
        }
        if ( v3 >= v5 >> 1 )
        {
          v3 -= v5 >> 1;
          result |= v6 >> 1;
        }
        if ( v3 >= v5 >> 2 )
        {
          v3 -= v5 >> 2;
          result |= v6 >> 2;
        }
        if ( v3 >= v5 >> 3 )
        {
          v3 -= v5 >> 3;
          result |= v6 >> 3;
        }
        v7 = v3 == 0;
        if ( v3 )
        {
          v6 >>= 4;
          v7 = v6 == 0;
        }
        if ( v7 )
          break;
        v5 >>= 4;
      }
      if ( v2 < 0 )
        return -result;
    }
    else
    {
      result = v3 >> (31 - __clz(a2));
      if ( v2 < 0 )
        return -result;
    }
  }
  return result;
}
