unsigned int __fastcall sub_15C68(unsigned int result, unsigned int a2)
{
  char v2; // r2
  unsigned int v3; // r1
  unsigned int v4; // r3
  int v5; // r2
  bool v6; // zf

  if ( a2 != 1 )
  {
    if ( a2 )
    {
      if ( result <= a2 )
      {
        return result == a2;
      }
      else if ( (a2 & (a2 - 1)) != 0 )
      {
        v2 = __clz(a2) - __clz(result);
        v3 = a2 << v2;
        v4 = 1 << v2;
        v5 = 0;
        while ( 1 )
        {
          if ( result >= v3 )
          {
            result -= v3;
            v5 |= v4;
          }
          if ( result >= v3 >> 1 )
          {
            result -= v3 >> 1;
            v5 |= v4 >> 1;
          }
          if ( result >= v3 >> 2 )
          {
            result -= v3 >> 2;
            v5 |= v4 >> 2;
          }
          if ( result >= v3 >> 3 )
          {
            result -= v3 >> 3;
            v5 |= v4 >> 3;
          }
          v6 = result == 0;
          if ( result )
          {
            v4 >>= 4;
            v6 = v4 == 0;
          }
          if ( v6 )
            break;
          v3 >>= 4;
        }
        return v5;
      }
      else
      {
        result >>= 31 - __clz(a2);
      }
    }
    else
    {
      if ( result )
        result = -1;
      return sub_15E68(result);
    }
  }
  return result;
}
