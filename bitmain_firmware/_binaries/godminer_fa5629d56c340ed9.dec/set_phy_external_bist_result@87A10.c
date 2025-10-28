int set_phy_external_bist_result()
{
  _DWORD *v0; // r4
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  const char *v4; // r1
  char v6[132]; // [sp+0h] [bp-84h] BYREF

  LOWORD(v0) = 20224;
  memset(v6, 0, 0x80u);
  HIWORD(v0) = (unsigned int)&unk_1A3DE8 >> 16;
  LOWORD(v1) = -1524;
  HIWORD(v1) = (unsigned int)"chip %02x membist0: lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  sprintf(v6, v1, v0[4], v0[5]);
  memset(v6, 0, 0x80u);
  LOWORD(v2) = -1504;
  HIWORD(v2) = (unsigned int)"lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  sprintf(v6, v2, v0[6], v0[7]);
  memset(v6, 0, 0x80u);
  LOWORD(v3) = -1484;
  HIWORD(v3) = (unsigned int)"x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  sprintf(v6, v3, v0[2]);
  memset(v6, 0, 0x80u);
  LOWORD(v4) = -1460;
  HIWORD(v4) = (unsigned int)"err/etherr: %llx/%llx/%llx" >> 16;
  return sprintf(v6, v4, v0[3]);
}
