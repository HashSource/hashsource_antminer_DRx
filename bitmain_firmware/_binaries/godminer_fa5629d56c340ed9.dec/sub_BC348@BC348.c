bool __fastcall sub_BC348(int a1, char a2, char a3, void *src, size_t n)
{
  _BYTE srca[2]; // [sp+8h] [bp-14h] BYREF
  _BYTE dest[18]; // [sp+Ah] [bp-12h] BYREF

  srca[0] = a2;
  srca[1] = a3;
  memcpy(dest, src, n);
  return sub_BBFE0(a1, 59, srca, n + 2, 0, 0) == 0;
}
