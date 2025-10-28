int __fastcall read_sensor_temp_remote_dash(
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
      v10 = sub_72C70(a1, a2, a3, *(unsigned __int8 *)(a1[126] + a9));
      if ( *a3 )
        *a2 -= 15;
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v10 = sub_71D18((int)a1, a2, a3, a9);
    }
  }
  else
  {
    v10 = sub_719E8((int)a1, a2, a3, a9);
  }
  if ( v10 == -1 )
    return 4;
  return 0;
}
