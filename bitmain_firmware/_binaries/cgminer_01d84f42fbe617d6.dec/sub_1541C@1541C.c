__int64 __fastcall sub_1541C(int a1)
{
  __int64 v2; // r0
  double v3; // d9
  double v4; // d8
  double v5; // d8
  double v6; // d17
  double v7; // d8

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 216);
  v3 = 1.7668201e72;
  if ( !byte_63DF9 )
    v3 = 2.69595353e67;
  v4 = sub_493C8(v2) * 6.27710174e57;
  v5 = v4 + sub_493C8(*(_DWORD *)(a1 + 208)) * 3.40282367e38;
  v6 = sub_493C8(*(_DWORD *)(a1 + 200));
  v7 = v5 + v6 * 1.84467441e19 + sub_493C8(*(_DWORD *)(a1 + 192));
  if ( v7 == 0.0 )
    return 0;
  else
    return sub_494C0(COERCE_UNSIGNED_INT64(v3 / v7), HIDWORD(COERCE_UNSIGNED_INT64(v3 / v7)));
}
