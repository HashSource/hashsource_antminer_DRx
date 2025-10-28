int sub_891C()
{
  system("echo low >/sys/class/gpio/gpio941/direction");
  return system("echo low >/sys/class/gpio/gpio942/direction");
}
