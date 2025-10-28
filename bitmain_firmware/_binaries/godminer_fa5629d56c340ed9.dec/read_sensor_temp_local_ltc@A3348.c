int __fastcall read_sensor_temp_local_ltc(
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
  int v10; // r0

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v10 = sub_A3238(a1, a2, a3, *(unsigned __int8 *)(a1[128] + a9));
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v10 = sub_A2894((int)a1, a2, a3, a9);
    }
  }
  else
  {
    v10 = sub_A2600((int)a1, a2, a3, a9);
  }
  if ( v10 == -1 )
    return 4;
  return 0;
}
