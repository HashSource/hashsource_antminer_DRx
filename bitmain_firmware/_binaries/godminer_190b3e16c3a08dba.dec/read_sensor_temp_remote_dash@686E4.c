int __fastcall read_sensor_temp_remote_dash(
        int a1,
        int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // [sp+8h] [bp-8h] BYREF
  int v18; // [sp+Ch] [bp-4h] BYREF

  if ( !a6 )
  {
    v13 = sub_681AC((char *)(a1 + 224), a2, a3, a9);
    goto LABEL_6;
  }
  if ( a6 != 1 )
  {
    if ( a6 != 2 )
      return 4;
    v13 = sub_684DC((unsigned int *)(a1 + 224), (unsigned __int8 *)(a1 + 936), a2, a3, a9);
    goto LABEL_6;
  }
  v14 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 456) + a9);
  *a3 = 0;
  *a2 = -64;
  v13 = sub_685D0((_DWORD *)a1, v14, 256, &v17, &v18);
  if ( v13 == 1 )
  {
    v15 = HIBYTE(v17);
    v16 = v18;
    if ( *(_DWORD *)(a1 + 480) == 1 )
      v15 = HIBYTE(v17) - 64;
    *a2 = v15;
    *a3 = v16;
    if ( !v16 )
      return 0;
  }
  else if ( !*a3 )
  {
    goto LABEL_6;
  }
  *a2 -= 15;
LABEL_6:
  if ( v13 == -1 )
    return 4;
  return 0;
}
