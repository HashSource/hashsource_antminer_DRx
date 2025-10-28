unsigned int power_init()
{
  puts("power init ... ");
  power_check_protocal_type();
  return power_on();
}
