bool __fastcall sub_18164(int a1, int a2)
{
  double v2; // d0
  __int64 v4; // d16
  double v5; // r0

  sub_180A4(a1, a2);
  v4 = 0xFFFF00000000LL;
  if ( !byte_80A01 )
    v4 = 4294901760LL;
  v5 = sub_5ED20(v4, HIDWORD(v4));
  return (unsigned __int64)sub_5EE18(COERCE_UNSIGNED_INT64(v5 / v2), HIDWORD(COERCE_UNSIGNED_INT64(v5 / v2))) >= *(_QWORD *)(a1 + 268);
}
