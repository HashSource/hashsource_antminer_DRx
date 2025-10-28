void __noreturn sub_935C()
{
  fwrite(
    "Usage: i2cget [-f] [-y] I2CBUS CHIP-ADDRESS [DATA-ADDRESS [MODE]]\n"
    "  I2CBUS is an integer or an I2C bus name\n"
    "  ADDRESS is an integer (0x03 - 0x77)\n"
    "  MODE is one of:\n"
    "    b (read byte data, default)\n"
    "    w (read word data)\n"
    "    c (write byte/read byte)\n"
    "    Append p for SMBus PEC\n",
    1u,
    0x113u,
    (FILE *)stderr);
  exit(1);
}
