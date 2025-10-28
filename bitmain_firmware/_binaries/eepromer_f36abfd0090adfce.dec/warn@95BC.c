int warn()
{
  fwrite("\n\n!!!!!!!!!!!!!!!!!!!!!WARNING!!!!!!!!!!!!!!!!!!!!!\n", 1u, 0x34u, (FILE *)stderr);
  fwrite(
    "This program is intended for use on eeproms\nusing external busses such as i2c-pport.\n",
    1u,
    0x55u,
    (FILE *)stderr);
  fwrite(
    "Do not use this on your SDRAM DIMM EEPROMS\n"
    "unless you REALLY REALLY know what you are\n"
    "doing!!! Doing so will render your SDRAM\n"
    "USELESS and leave your system UNBOOTABLE!!!\n",
    1u,
    0xABu,
    (FILE *)stderr);
  fwrite("To disable this warning use -force\n", 1u, 0x23u, (FILE *)stderr);
  fwrite("\n\nPress  ENTER  to continue or hit Control-C NOW !!!!\n\n\n", 1u, 0x38u, (FILE *)stderr);
  return IO_getc((_IO_FILE *)stdin);
}
