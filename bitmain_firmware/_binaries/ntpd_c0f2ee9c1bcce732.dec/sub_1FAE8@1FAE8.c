int sub_1FAE8()
{
  int result; // r0

  if ( dword_CABD8 && dword_7A198 )
  {
    memset(&tntx, 0, sizeof(tntx));
    ntp_adjtime(&tntx);
    dbl_7D3D8 = (double)tntx.offset / 1000000000.0;
    dbl_CABA8 = (double)tntx.freq / 6.5536e10;
  }
  result = sub_1F9E4();
  dbl_CB580 = 0.0;
  return result;
}
