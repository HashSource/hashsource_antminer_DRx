__int64 __fastcall sub_5EDE0(double a1)
{
  if ( a1 >= 0.0 )
    return sub_5EE18(LODWORD(a1), HIDWORD(a1));
  else
    return -sub_5EE18(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
}
