_QWORD *__fastcall json_integer(__int64 a1)
{
  _QWORD *v4; // [sp+Ch] [bp+Ch]

  v4 = jsonp_malloc(0x10u);
  if ( !v4 )
    return 0;
  json_init(v4, 3);
  v4[1] = a1;
  return v4;
}
