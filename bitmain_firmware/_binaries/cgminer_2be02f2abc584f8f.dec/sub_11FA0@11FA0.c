__int64 __fastcall sub_11FA0(int a1)
{
  double v1; // d0
  double v2; // d8

  if ( !a1 )
    return 0;
  v2 = 1.7668201e72;
  if ( !byte_79921 )
    v2 = 2.69595353e67;
  sub_BF0C((_DWORD *)(a1 + 244));
  if ( v1 == 0.0 )
    return 0;
  else
    return sub_5A4E8(COERCE_UNSIGNED_INT64(v2 / v1), HIDWORD(COERCE_UNSIGNED_INT64(v2 / v1)));
}
