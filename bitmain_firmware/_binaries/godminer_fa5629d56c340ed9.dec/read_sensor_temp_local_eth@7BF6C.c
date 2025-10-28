int __fastcall read_sensor_temp_local_eth(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  if ( a6 )
  {
    if ( a6 == 1 )
      sub_7BE5C(a1, a2, a3, *(unsigned __int8 *)(a1[128] + a9));
    return 0;
  }
  else
  {
    sub_7B040((int)a1, a2, a3, a9);
    return 0;
  }
}
