// Alternative name is '__aeabi_idiv'
int __fastcall _divsi3(int a1, unsigned int a2)
{
  if ( a2 )
    return divsi3_skip_div0_test(a1, a2);
  else
    return _aeabi_ldiv0();
}
