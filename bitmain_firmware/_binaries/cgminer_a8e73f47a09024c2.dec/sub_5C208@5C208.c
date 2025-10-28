_DWORD *__fastcall sub_5C208(double a1)
{
  __int64 v1; // d0
  double v2; // r0
  _DWORD *result; // r0

  LODWORD(v2) = _isnan(a1);
  if ( LODWORD(v2) )
    return 0;
  if ( _isinf(v2) )
    return 0;
  result = sub_5B2A8(0x10u);
  if ( !result )
    return 0;
  *result = 4;
  result[1] = 1;
  *((_QWORD *)result + 1) = v1;
  return result;
}
