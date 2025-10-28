int sub_4A798()
{
  double v0; // d0
  double v1; // d7

  v1 = 1582.35294 - v0 * 166.666667;
  if ( v1 > 255.0 )
  {
    v1 = 255.0;
  }
  else if ( v1 < 0.0 )
  {
    v1 = 0.0;
  }
  return (unsigned __int8)(unsigned int)v1;
}
