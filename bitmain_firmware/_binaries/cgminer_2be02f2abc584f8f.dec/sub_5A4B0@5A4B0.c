__int64 __fastcall sub_5A4B0(double a1)
{
  if ( a1 >= 0.0 )
    return sub_5A4E8(LODWORD(a1), HIDWORD(a1));
  else
    return -sub_5A4E8(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
}
