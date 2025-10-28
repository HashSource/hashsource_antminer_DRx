int __fastcall read_sensor_temp_remote_eth(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v13; // r1
  int v14; // r3
  int v15; // r3
  int v16; // [sp+8h] [bp-8h] BYREF
  int v17; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v13 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 456) + a9);
      *a3 = 0;
      if ( sub_6FEA8((_DWORD *)a1, v13, 256, &v16, &v17) == 1 )
      {
        v15 = HIBYTE(v16);
        if ( *(_DWORD *)(a1 + 480) == 1 )
          v15 = HIBYTE(v16) - 64;
        v14 = v15 - 6;
        *a3 = v17;
      }
      else
      {
        v14 = -70;
      }
      *a2 = v14;
    }
  }
  else
  {
    sub_6FCB4((char *)(a1 + 224), a2, a3, a9);
  }
  return 0;
}
