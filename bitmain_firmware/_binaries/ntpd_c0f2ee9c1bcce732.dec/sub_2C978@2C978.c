int sub_2C978()
{
  int v0; // r3
  int result; // r0

  v0 = dword_7FF60;
  if ( !dword_7FF60 )
  {
    result = sub_20D7C(2);
    v0 = dword_7FF60;
  }
  dword_7FF60 = v0 + 1;
  return result;
}
