int *sub_F2A8()
{
  int *result; // r0

  if ( !byte_60E84 )
  {
    result = sub_F230();
    byte_60E84 = 1;
  }
  return result;
}
