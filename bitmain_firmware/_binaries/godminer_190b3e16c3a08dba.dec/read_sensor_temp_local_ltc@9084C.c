int __fastcall read_sensor_temp_local_ltc(
        _DWORD *a1,
        int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // [sp+8h] [bp-8h] BYREF
  int v18; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v14 = *(unsigned __int8 *)(a1[114] + a9);
      *a3 = 0;
      *a2 = -64;
      v11 = sub_90654(a1, v14, 0, &v17, &v18);
      if ( v11 == 1 )
      {
        v15 = HIBYTE(v17);
        v16 = v18;
        if ( a1[120] == 1 )
          v15 = HIBYTE(v17) - 64;
        *a2 = v15;
        *a3 = v16;
        return 0;
      }
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v11 = sub_90374(a1 + 56, a2, a3, a9);
    }
  }
  else
  {
    v11 = sub_900E0((char *)a1 + 224, a2, a3, a9);
  }
  if ( v11 == -1 )
    return 4;
  return 0;
}
