int __fastcall hs_ymdh(unsigned int *a1, unsigned int *a2, _DWORD *a3, int *a4)
{
  time_t v8; // r0

  v8 = time(0);
  return hs_date(v8, v8 >> 31, a1, a2, a3, a4, 0, 0);
}
