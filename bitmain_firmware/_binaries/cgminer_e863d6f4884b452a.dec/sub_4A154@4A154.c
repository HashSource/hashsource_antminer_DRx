int __fastcall sub_4A154(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_4A178(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_4A178(LODWORD(a1), HIDWORD(a1));
}
