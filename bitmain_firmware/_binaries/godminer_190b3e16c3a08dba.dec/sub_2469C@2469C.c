int sub_2469C()
{
  int result; // r0

  if ( !byte_179E84 )
  {
    result = deregister_tm_clones();
    byte_179E84 = 1;
  }
  return result;
}
