int __fastcall sub_1F8F0(int result)
{
  double v1; // d0
  int v2; // r4

  v2 = result;
  if ( dword_7CF4C > 1 )
    result = printf(
               "local_clock: mu %lu state %d poll %d count %d\n",
               dword_CB548 - dword_7D3D0,
               result,
               (unsigned __int8)byte_CABC8,
               dword_CABBC);
  if ( v2 != dword_CABB8 && v2 != 2 )
    result = sub_1D3D8(v2, 0, 0);
  dbl_7D3D8 = v1;
  dbl_CABD0 = v1;
  dword_CABB8 = v2;
  dword_7D3D0 = dword_CB548;
  return result;
}
