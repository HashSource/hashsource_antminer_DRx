unsigned int power_off()
{
  bitmain_power_off_0();
  byte_197B28 = 0;
  return sleep(1u);
}
