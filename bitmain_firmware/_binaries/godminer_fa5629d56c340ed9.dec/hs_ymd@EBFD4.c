int __fastcall hs_ymd(unsigned int *a1, unsigned int *a2, _DWORD *a3)
{
  time_t v6; // r0

  v6 = time(0);
  return hs_date(v6, v6 >> 31, a1, a2, a3, 0, 0, 0);
}
