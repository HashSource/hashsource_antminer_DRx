int __fastcall set_sensor_extern_mode_eth(int a1)
{
  bool v2; // zf
  int result; // r0

  v2 = sub_6E184(a1) == 0;
  result = 0;
  if ( v2 )
    *(_DWORD *)(a1 + 480) = 1;
  return result;
}
