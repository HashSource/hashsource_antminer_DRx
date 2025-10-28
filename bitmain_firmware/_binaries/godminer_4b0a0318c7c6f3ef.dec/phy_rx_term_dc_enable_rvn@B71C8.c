int __fastcall phy_rx_term_dc_enable_rvn(int result, unsigned int a2, unsigned __int8 *a3, int a4)
{
  int v5; // r7
  unsigned __int8 *v6; // r6
  unsigned __int8 *v7; // r10
  int v8; // r4
  int v9; // r11
  int v10; // r5
  int v11; // r2

  if ( a4 )
  {
    v5 = result;
    v6 = a3;
    v7 = &a3[(unsigned __int8)(a4 - 1) + 1];
    do
    {
      v8 = 0;
      do
      {
        v9 = v8 | 0x1023;
        v10 = serdes_apb_read_rvn(v5, a2, *v6, v8 | 0x1023) & 0xFEFF;
        v11 = v8 | 0x1023;
        v8 = (unsigned __int16)(v8 + 512);
        sub_AF090(v5, *v6, v11, v10);
        result = sub_AF090(v5, *v6, v9, v10 | 0x200);
      }
      while ( v8 != 2048 );
      ++v6;
    }
    while ( v6 != v7 );
  }
  return result;
}
