void *malloc_register_buf()
{
  reg_value_buf = (int)malloc(0x1410u);
  if ( reg_value_buf )
    return memset((void *)reg_value_buf, 0, 0x1410u);
  else
    return (void *)printf("%s: malloc reg_value_buf failed\n", "malloc_register_buf");
}
