int __fastcall phy_rx_term_dc_enable_one_core(int a1, unsigned int a2, int a3)
{
  int v6; // r4
  int v7; // r6
  int v8; // r5
  int v9; // r2
  int result; // r0

  v6 = 0;
  do
  {
    v7 = v6 | 0x1023;
    v8 = serdes_apb_read(a1, a2, a3, v6 | 0x1023) & 0xFEFF;
    v9 = v6 | 0x1023;
    v6 = (unsigned __int16)(v6 + 512);
    sub_80014(a1, a3, v9, v8);
    result = sub_80014(a1, a3, v7, v8 | 0x200);
  }
  while ( v6 != 2048 );
  return result;
}
