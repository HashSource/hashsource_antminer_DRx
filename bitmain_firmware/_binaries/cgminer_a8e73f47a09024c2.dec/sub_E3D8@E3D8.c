int __fastcall sub_E3D8(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d8
  double v5; // d8
  unsigned __int64 v6; // r0
  int result; // r0
  double v8; // d16
  double v9; // d16

  v3 = *(_DWORD *)(a1 + 316);
  if ( v1 == 0.0 )
  {
    v4 = 65536.0;
    if ( !byte_80A01 )
      v4 = 2.69595353e67;
    sub_C0D4((_DWORD *)(a1 + 212));
    if ( v1 == 0.0 )
      v1 = 1.0;
    *(double *)(a1 + 440) = v4 / v1;
  }
  else
  {
    *(double *)(a1 + 440) = v1;
  }
  v5 = *(double *)(a1 + 440);
  *(double *)(v3 + 480) = v5;
  round();
  v6 = sub_5EE18(LODWORD(v5), HIDWORD(v5));
  result = sub_E144(v6, (char *)(*(_DWORD *)(a1 + 316) + 48), 8u, 0);
  v8 = *(double *)(v3 + 464);
  if ( v8 == v5 )
  {
    ++*(_DWORD *)(v3 + 488);
  }
  else if ( v5 < v8 || v8 == 0.0 )
  {
    *(double *)(v3 + 464) = v5;
    *(_DWORD *)(v3 + 488) = 1;
  }
  v9 = *(double *)(v3 + 472);
  if ( v9 == v5 )
  {
    ++*(_DWORD *)(v3 + 492);
  }
  else if ( v5 > v9 )
  {
    *(double *)(v3 + 472) = v5;
    *(_DWORD *)(v3 + 492) = 1;
  }
  return result;
}
