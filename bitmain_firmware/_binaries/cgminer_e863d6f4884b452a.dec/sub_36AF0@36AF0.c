void sub_36AF0()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  snprintf(v0, 0x800u, "%s: i2c always busy, break\n", "i2c_write");
  sub_343C4(3, v0, 0);
}
