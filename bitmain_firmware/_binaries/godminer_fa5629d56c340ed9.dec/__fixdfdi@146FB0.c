// Alternative name is '__aeabi_d2lz'
int __fastcall _fixdfdi(double a1)
{
  if ( a1 < 0.0 )
  {
    HIDWORD(a1) ^= 0x80000000;
    LODWORD(a1) = -(int)(unsigned __int64)a1;
  }
  else
  {
    *(_QWORD *)&a1 = (unsigned __int64)a1;
  }
  return LODWORD(a1);
}
