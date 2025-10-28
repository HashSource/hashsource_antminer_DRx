int __fastcall _aeabi_uidivmod(unsigned int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x27BB2);
  return a1 / a2;
}
