int sub_8968()
{
  system("echo high >/sys/class/gpio/gpio941/direction");
  return system("echo high >/sys/class/gpio/gpio942/direction");
}
