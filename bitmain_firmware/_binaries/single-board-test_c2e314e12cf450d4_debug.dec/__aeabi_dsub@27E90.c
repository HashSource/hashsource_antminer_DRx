// Alternative name is '__subdf3'
double __fastcall _aeabi_dsub(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}
