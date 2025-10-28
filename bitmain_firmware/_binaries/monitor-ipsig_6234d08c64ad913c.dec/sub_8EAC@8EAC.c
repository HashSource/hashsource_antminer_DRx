int sub_8EAC()
{
  system("echo 0 >/sys/class/gpio/gpio941/value");
  return system("echo 0 >/sys/class/gpio/gpio942/value");
}
