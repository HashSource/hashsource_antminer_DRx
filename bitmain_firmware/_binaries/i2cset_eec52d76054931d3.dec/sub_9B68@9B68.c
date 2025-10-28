void __noreturn sub_9B68()
{
  fwrite(
    "Usage: i2cset [-f] [-y] [-m MASK] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\n"
    "  I2CBUS is an integer or an I2C bus name\n"
    "  ADDRESS is an integer (0x03 - 0x77)\n"
    "  MODE is one of:\n"
    "    c (byte, no value)\n"
    "    b (byte data, default)\n"
    "    w (word data)\n"
    "    i (I2C block data)\n"
    "    s (SMBus block data)\n"
    "    Append p for SMBus PEC\n",
    1u,
    0x147u,
    (FILE *)stderr);
  exit(1);
}
