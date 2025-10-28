FILE *sub_8C54()
{
  FILE *result; // r0
  FILE *v1; // r5
  char s[104]; // [sp+4h] [bp-68h] BYREF

  fwrite("Syntax: eepromer [-r|-w|-e|-p]  -f /dev/i2c-X  ADDRESS \n\n", 1u, 0x39u, (FILE *)stderr);
  fwrite("  ADDRESS is address of i2c device eg. 0x51\n", 1u, 0x2Cu, (FILE *)stderr);
  result = fopen("/proc/bus/i2c", "r");
  v1 = result;
  if ( result )
  {
    fwrite("  Installed I2C busses:\n", 1u, 0x18u, (FILE *)stderr);
    while ( fgets(s, 100, v1) )
      fprintf((FILE *)stderr, "    %s", s);
    return (FILE *)fclose(v1);
  }
  return result;
}
