json_t *__cdecl json_real(double value)
{
  __int64 v1; // d0
  double v2; // r0
  json_t *v5; // [sp+Ch] [bp+Ch]

  LODWORD(v2) = _isnan(value);
  if ( LODWORD(v2) || _isinf(v2) )
    return 0;
  v5 = (json_t *)jsonp_malloc(0x10u);
  if ( !v5 )
    return 0;
  json_init(v5, 4);
  *((_QWORD *)v5 + 1) = v1;
  return v5;
}
