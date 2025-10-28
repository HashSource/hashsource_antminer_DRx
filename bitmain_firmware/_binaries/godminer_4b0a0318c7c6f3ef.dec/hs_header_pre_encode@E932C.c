int __fastcall hs_header_pre_encode(int a1, int a2)
{
  int v3; // [sp+4h] [bp-8h] BYREF

  v3 = a2;
  return hs_header_pre_write(a1, &v3);
}
