int fan_init()
{
  if ( platform_inited )
    return 0;
  printf("%s:%d", "fan_init", 11);
  puts("please init platform first!!");
  return -1;
}
