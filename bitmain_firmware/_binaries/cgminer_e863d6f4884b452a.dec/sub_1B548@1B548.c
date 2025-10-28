bool __fastcall sub_1B548(int a1, int a2)
{
  double v2; // d0
  double v4; // d7

  sub_1B2B8((_DWORD *)a1, a2);
  v4 = 4294901760.0;
  if ( byte_73D04 )
    v4 = 2.81470682e14;
  return (unsigned __int64)sub_4A178(COERCE_UNSIGNED_INT64(v4 / v2), HIDWORD(COERCE_UNSIGNED_INT64(v4 / v2))) >= *(_QWORD *)(a1 + 268);
}
