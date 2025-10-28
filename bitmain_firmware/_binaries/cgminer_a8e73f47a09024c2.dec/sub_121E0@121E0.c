__int64 __fastcall sub_121E0(int a1)
{
  double v1; // d0
  double v2; // d8

  if ( !a1 )
    return 0;
  v2 = 1.7668201e72;
  if ( !byte_80A01 )
    v2 = 2.69595353e67;
  sub_C0D4((_DWORD *)(a1 + 244));
  if ( v1 == 0.0 )
    return 0;
  else
    return sub_5EE18(COERCE_UNSIGNED_INT64(v2 / v1), HIDWORD(COERCE_UNSIGNED_INT64(v2 / v1)));
}
