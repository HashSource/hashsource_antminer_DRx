void __fastcall __noreturn sub_A920(int a1, const char *a2, int a3, const char *a4, const char *a5)
{
  _snprintf_chk(byte_1603C, 2048, 1, 2048, a5, a1, a2, a3, a4);
  dword_1683C = (int)byte_1603C;
  byte_1683B = 0;
  sub_A138(2u, a2, a3, a4, 0, 0, byte_1603C);
  abort();
}
