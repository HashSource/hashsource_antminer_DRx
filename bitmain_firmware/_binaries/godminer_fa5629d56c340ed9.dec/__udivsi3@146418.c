// Alternative name is '__aeabi_uidiv'
// Alternative name is '.udivsi3_skip_div0_test'
unsigned int __fastcall _udivsi3(unsigned int result, unsigned int a2)
{
  if ( a2 != 1 )
  {
    if ( !a2 )
      JUMPOUT(0x146FA4);
    if ( result <= a2 )
    {
      return result == a2;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      return ((int (*)(void))((char *)&loc_146450 + 16 * (31 - (__clz(a2) - __clz(result)))))();
    }
    else
    {
      result >>= 31 - __clz(a2);
    }
  }
  return result;
}
