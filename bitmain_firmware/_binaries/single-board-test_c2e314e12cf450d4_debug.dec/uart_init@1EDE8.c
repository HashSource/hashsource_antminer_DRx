int uart_init()
{
  if ( platform_inited )
    return 0;
  printf("%s:%d", "uart_init", 518);
  puts("please init platform first!!");
  return -1;
}
