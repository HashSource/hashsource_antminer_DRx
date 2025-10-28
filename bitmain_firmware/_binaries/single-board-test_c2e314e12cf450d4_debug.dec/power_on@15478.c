unsigned int power_on()
{
  if ( access("/sys/class/gpio/gpio907", 0) == -1 )
  {
    system("echo 907 > /sys/class/gpio/export");
    system("echo out > /sys/class/gpio/gpio907/direction");
    puts("init gpio907");
  }
  system("echo 0 > /sys/class/gpio/gpio907/value");
  return sleep(1u);
}
