void sub_1FBF0()
{
  double v0; // d16

  byte_CABC8 = dword_7A1C8;
  if ( byte_CB478 < 0 )
    v0 = 1.0 / (double)(1 << -byte_CB478);
  else
    v0 = (double)(1 << byte_CB478);
  dbl_CABB0 = v0;
}
