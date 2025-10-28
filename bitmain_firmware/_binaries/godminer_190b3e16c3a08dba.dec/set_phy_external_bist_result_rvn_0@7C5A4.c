int set_phy_external_bist_result_rvn_0()
{
  _DWORD *v0; // r4
  const char *v1; // r1
  const char *v2; // r1
  char v4[132]; // [sp+0h] [bp-84h] BYREF

  LOWORD(v0) = -16560;
  memset(v4, 0, 0x80u);
  HIWORD(v0) = (unsigned int)&unk_185158 >> 16;
  LOWORD(v1) = 20364;
  HIWORD(v1) = (unsigned int)"max_uneffective_count" >> 16;
  sprintf(v4, v1, v0[2], v0[3]);
  memset(v4, 0, 0x80u);
  LOWORD(v2) = 20388;
  HIWORD(v2) = (unsigned int)"get max_uneffective_count failed" >> 16;
  sprintf(v4, v2, v0[4], v0[5]);
  memset(v4, 0, 0x80u);
  sprintf(v4, "<phy lost lane num> %d", *v0);
  memset(v4, 0, 0x80u);
  return sprintf(v4, "<phy err lane num> %d", v0[1]);
}
