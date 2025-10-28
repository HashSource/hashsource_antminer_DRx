int sub_1F9E4()
{
  double v0; // d0
  char s[80]; // [sp+8h] [bp-50h] BYREF

  dbl_CABA8 = v0;
  if ( dword_CABD8 && dword_7A198 )
  {
    memset(&tntx, 0, sizeof(tntx));
    tntx.modes = 2;
    tntx.freq = (int)(v0 * 6.5536e10);
    ntp_adjtime(&tntx);
    snprintf(s, 0x50u, "kernel %.3f PPM", dbl_CABA8 * 1000000.0);
    return sub_1D3D8(2, 0, s);
  }
  else
  {
    snprintf(s, 0x50u, "ntpd %.3f PPM", v0 * 1000000.0);
    return sub_1D3D8(2, 0, s);
  }
}
