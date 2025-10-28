int __fastcall read_sensor_temp_remote_rvn(
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
  int v10; // r12
  int v12; // [sp+4h] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v10 = a1[126];
      v12 = 0;
      sub_A59C0(a1, &v12, a3, *(unsigned __int8 *)(v10 + a9));
      *a2 = v12 - 6;
    }
  }
  else
  {
    sub_A5128((int)a1, a2, a3, a9);
  }
  return 0;
}
