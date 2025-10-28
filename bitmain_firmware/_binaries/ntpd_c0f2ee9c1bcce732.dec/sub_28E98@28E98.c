unsigned __int16 *__fastcall sub_28E98(int a1, int a2, int a3)
{
  _DWORD *v3; // r0
  unsigned int v4; // s13
  unsigned int v5; // r3
  double v6; // d16
  unsigned int v7; // s13
  unsigned int v8; // r12
  int v10; // s13
  int v11; // s13

  v3 = sub_28654(a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), 24);
  if ( dbl_CABD0 < 0.0 )
  {
    v10 = (int)-dbl_CABD0;
    v5 = (unsigned int)((-dbl_CABD0 - (double)(unsigned int)v10) * 4294967300.0);
    if ( v5 )
    {
      v5 = bswap32(-v5);
      v4 = ~v10;
    }
    else
    {
      v4 = -v10;
    }
  }
  else
  {
    v4 = (int)dbl_CABD0;
    v5 = bswap32((unsigned int)((dbl_CABD0 - (double)(unsigned int)(int)dbl_CABD0) * 4294967300.0));
  }
  v3[1] = v5;
  *v3 = bswap32(v4);
  v6 = dbl_CABA8 * 1000000.0;
  if ( dbl_CABA8 * 1000000.0 < 0.0 )
  {
    v11 = (int)-v6;
    v8 = (unsigned int)((-v6 - (double)(unsigned int)v11) * 4294967300.0);
    if ( v8 )
    {
      v8 = bswap32(-v8);
      v7 = ~v11;
    }
    else
    {
      v7 = -v11;
    }
  }
  else
  {
    v7 = (int)v6;
    v8 = bswap32((unsigned int)((v6 - (double)(unsigned int)(int)v6) * 4294967300.0));
  }
  v3[3] = v8;
  v3[5] = bswap32(dword_CB548 - dword_CB4A8);
  v3[2] = bswap32(v7);
  v3[4] = bswap32(dword_CABBC);
  sub_2824C();
  return sub_28778();
}
