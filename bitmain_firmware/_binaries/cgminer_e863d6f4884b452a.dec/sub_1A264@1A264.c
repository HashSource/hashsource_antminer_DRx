__int64 __fastcall sub_1A264(int a1)
{
  double v2; // d9
  __int64 v3; // r0
  double v4; // d8
  double v5; // d8
  double v6; // d6
  double v7; // d8

  if ( !a1 )
    return 0;
  v2 = 2.69595353e67;
  v3 = *(_QWORD *)(a1 + 268);
  if ( byte_73D04 )
    v2 = 1.7668201e72;
  v4 = sub_4A0AC(v3, HIDWORD(v3)) * 6.27710174e57;
  v5 = v4 + sub_4A0AC(*(_DWORD *)(a1 + 260), *(_DWORD *)(a1 + 264)) * 3.40282367e38;
  v6 = sub_4A0AC(*(_DWORD *)(a1 + 252), *(_DWORD *)(a1 + 256));
  v7 = sub_4A0AC(*(_DWORD *)(a1 + 244), *(_DWORD *)(a1 + 248)) + v5 + v6 * 1.84467441e19;
  if ( v7 == 0.0 )
    return 0;
  else
    return sub_4A178(COERCE_UNSIGNED_INT64(v2 / v7), HIDWORD(COERCE_UNSIGNED_INT64(v2 / v7)));
}
