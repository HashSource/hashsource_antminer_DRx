void *sub_8F94()
{
  void *result; // r0

  if ( !byte_11D4C )
  {
    result = sub_8F1C();
    byte_11D4C = 1;
  }
  return result;
}
