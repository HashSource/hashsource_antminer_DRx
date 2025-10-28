int sub_8ED0()
{
  system("echo 1 >/sys/class/gpio/gpio941/value");
  return system("echo 1 >/sys/class/gpio/gpio942/value");
}
