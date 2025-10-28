int display_arguments()
{
  char v1[64]; // [sp+0h] [bp+0h] BYREF

  memset(v1, 32, sizeof(v1));
  memcpy(v1, &Conf, gName_len);
  sprintf(&v1[16], "IC:%2d P:%2d", dword_336848, dword_33681C);
  sprintf(&v1[32], "FREQ: %d  CORE:%d", dword_336824, dword_33684C);
  sprintf(&v1[48], "Voltage: %d", dword_33687C);
  return write_lcd(0, (int)v1, 0x40u);
}
