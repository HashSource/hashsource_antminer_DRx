size_t __fastcall set_BM1722_freq(unsigned __int8 a1, unsigned __int8 a2, char a3)
{
  float v3; // s0
  float v8; // [sp+10h] [bp+8h] BYREF
  unsigned __int8 v9; // [sp+17h] [bp+Fh] BYREF
  int v10; // [sp+18h] [bp+10h] BYREF
  int pllparam_divider; // [sp+1Ch] [bp+14h]

  v10 = 0;
  v9 = 0;
  pllparam_divider = 0;
  v8 = 0.0;
  printf("\n--- %s: freq = %f\n", "set_BM1722_freq", v3);
  pllparam_divider = get_pllparam_divider(&v10, &v9, &v8);
  v10 |= 0xC0000000;
  printf("\n%s: pll_param = %08x, divider = %02x, pll_freq = %f\n", "set_BM1722_freq", v10, --v9, v8);
  set_BM1722_asic_register(a1, a2, 0xCu, a3, v10);
  usleep(0x3E8u);
  set_BM1722_asic_register(a1, a2, 0x70u, a3, v9);
  usleep(0x3E8u);
  return set_BM1722_asic_register(a1, a2, 0xCu, a3, v10);
}
