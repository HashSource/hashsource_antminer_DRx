int __fastcall sub_3D9A4(int a1)
{
  char s[100]; // [sp+4h] [bp-64h] BYREF

  byte_60DEA ^= 1u;
  if ( a1 )
  {
    sprintf(s, "echo %d > /sys/class/gpio/gpio%d/value", 0, 23);
    system(s);
    sprintf(s, "echo %d > /sys/class/gpio/gpio%d/value", (unsigned __int8)byte_60DEA, 45);
  }
  else
  {
    sprintf(s, "echo %d > /sys/class/gpio/gpio%d/value", 0, 45);
    system(s);
    sprintf(s, "echo %d > /sys/class/gpio/gpio%d/value", (unsigned __int8)byte_60DEA, 23);
  }
  return system(s);
}
