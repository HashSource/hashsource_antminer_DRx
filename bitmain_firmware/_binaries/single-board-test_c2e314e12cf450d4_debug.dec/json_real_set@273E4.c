// local variable allocation has failed, the output may be wrong!
int __cdecl json_real_set(json_t *json, double value)
{
  __int64 v2; // d0
  double v3; // r0

  if ( !json )
    return -1;
  if ( *(_DWORD *)json != 4 )
    return -1;
  LODWORD(v3) = _isnan(*(double *)&json);
  if ( LODWORD(v3) || _isinf(v3) )
    return -1;
  *((_QWORD *)json + 1) = v2;
  return 0;
}
