int configMiner()
{
  read_config();
  if ( get_works() < 0 )
    return -14;
  malloc_register_buf();
  return 0;
}
