int __fastcall serdes_apb_write_rvn(int a1, int a2, unsigned __int8 a3, int a4, int a5)
{
  sub_AEAEC(a1, a3, 77, a5 | (a5 << 16));
  sub_AEAEC(a1, a3, 78, a4 | 0x80310000);
  return 0;
}
