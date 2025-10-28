int set_phy_external_bist_result_rvn_0()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %ld", dword_1B5118, dword_1B511C);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %ld", dword_1B5120, dword_1B5124);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_1B5110);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_1B5114);
}
