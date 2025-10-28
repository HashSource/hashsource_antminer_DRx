int sub_3A0EC()
{
  int result; // r0

  if ( !byte_630D8 )
    return system("/etc/init.d/cgminer.sh restart > /dev/null 2>&1 &");
  return result;
}
