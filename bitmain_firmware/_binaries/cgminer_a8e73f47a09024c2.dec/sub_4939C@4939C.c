unsigned int sub_4939C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v1, "power off!");
    sub_3F178(5, v1, 0);
  }
  if ( access("/sys/class/gpio/gpio907", 0) == -1 )
  {
    system("echo 907 > /sys/class/gpio/export");
    system("echo out > /sys/class/gpio/gpio907/direction");
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      strcpy(v1, "init gpio907\n");
      sub_3F178(5, v1, 0);
    }
  }
  system("echo 1 > /sys/class/gpio/gpio907/value");
  return sleep(1u);
}
