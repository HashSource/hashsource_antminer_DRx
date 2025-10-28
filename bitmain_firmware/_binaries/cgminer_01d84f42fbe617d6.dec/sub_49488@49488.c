__int64 __fastcall sub_49488(double a1)
{
  if ( a1 >= 0.0 )
    return sub_494C0(LODWORD(a1), HIDWORD(a1));
  else
    return -sub_494C0(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
}
