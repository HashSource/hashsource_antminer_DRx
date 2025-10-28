bool __fastcall sub_15FDC(int a1, int a2)
{
  unsigned int v3; // r0

  *(_DWORD *)(a1 + 76) = a2;
  if ( byte_63DF9 )
    sub_14A88(a1);
  else
    sub_117A4(a1);
  if ( byte_63DF9 )
    v3 = 0xFFFF;
  else
    v3 = 0;
  return v3 >= *(_DWORD *)(a1 + 220);
}
