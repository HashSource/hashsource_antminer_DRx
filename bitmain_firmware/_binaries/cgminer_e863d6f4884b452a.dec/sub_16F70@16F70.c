int __fastcall sub_16F70(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d8
  int v5; // r5
  unsigned __int64 v6; // r0
  int result; // r0
  double v8; // d7
  double v9; // d7
  __int64 v10; // r0
  double v11; // d9
  double v12; // d9
  double v13; // d6
  double v14; // d9

  v3 = *(_DWORD *)(a1 + 316);
  if ( v1 == 0.0 )
  {
    v4 = 65536.0;
    v10 = *(_QWORD *)(a1 + 236);
    if ( !byte_73D04 )
      v4 = 2.69595353e67;
    v11 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A0AC)(v10, HIDWORD(v10))) * 6.27710174e57;
    v12 = v11
        + COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A0AC)(*(_DWORD *)(a1 + 228), *(_DWORD *)(a1 + 232)))
        * 3.40282367e38;
    v13 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A0AC)(*(_DWORD *)(a1 + 220), *(_DWORD *)(a1 + 224)));
    v14 = sub_4A0AC(*(_DWORD *)(a1 + 212), *(_DWORD *)(a1 + 216)) + v12 + v13 * 1.84467441e19;
    if ( v14 != 0.0 )
      v4 = v4 / v14;
    *(double *)(a1 + 440) = v4;
  }
  else
  {
    v4 = v1;
    *(double *)(a1 + 440) = v1;
  }
  *(double *)(v3 + 480) = v4;
  round();
  v5 = *(_DWORD *)(a1 + 316);
  v6 = sub_4A178(LODWORD(v4), HIDWORD(v4));
  result = sub_16DA4(v6, (char *)(v5 + 48), 8u, 0);
  v8 = *(double *)(v3 + 464);
  if ( v8 == v4 )
  {
    ++*(_DWORD *)(v3 + 488);
    goto LABEL_5;
  }
  if ( v8 <= v4 )
  {
    if ( v8 != 0.0 )
    {
LABEL_5:
      v9 = *(double *)(v3 + 472);
      if ( v9 != v4 )
        goto LABEL_6;
LABEL_12:
      ++*(_DWORD *)(v3 + 492);
      return result;
    }
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  else
  {
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  v9 = *(double *)(v3 + 472);
  if ( v9 == v4 )
    goto LABEL_12;
LABEL_6:
  if ( v9 < v4 )
  {
    *(double *)(v3 + 472) = v4;
    *(_DWORD *)(v3 + 492) = 1;
  }
  return result;
}
