void *sub_8BF8()
{
  void *result; // r0

  if ( !byte_11CB0 )
  {
    result = sub_8B80();
    byte_11CB0 = 1;
  }
  return result;
}
