int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_197B28 = 1;
  return result;
}
