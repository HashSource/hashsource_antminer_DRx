bool __fastcall sub_17F84(int a1, int a2)
{
  double v2; // d0
  __int64 v4; // d16
  double v5; // r0

  sub_17EC4(a1, a2);
  v4 = 0xFFFF00000000LL;
  if ( !byte_79921 )
    v4 = 4294901760LL;
  v5 = sub_5A3F0(v4, HIDWORD(v4));
  return (unsigned __int64)sub_5A4E8(COERCE_UNSIGNED_INT64(v5 / v2), HIDWORD(COERCE_UNSIGNED_INT64(v5 / v2))) >= *(_QWORD *)(a1 + 268);
}
