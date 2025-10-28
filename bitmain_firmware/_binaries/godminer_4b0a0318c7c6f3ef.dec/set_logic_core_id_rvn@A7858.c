int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r5
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD *i; // r6
  int v8; // t1
  int *v9; // r7
  int j; // r5
  int v11; // t1
  int v13; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD v14[7]; // [sp+30h] [bp-1024h] BYREF
  int v15; // [sp+4Ch] [bp-1008h]
  int v16; // [sp+50h] [bp-1004h] BYREF
  int v17; // [sp+54h] [bp-1000h] BYREF

  LOWORD(v2) = -14172;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  v4 = 0;
  V_INT((int)v14, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw(
    (char *)&v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    v2,
    "set_logic_core_id_rvn");
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 9076;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v5, v6, 171, "set_logic_core_id_rvn", 21, 400, 60, &v16);
  v13 = 100925952;
  v16 = 117768961;
  for ( i = (int *)((char *)&v13 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0, 0);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 1u, 1);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 2u, 2);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 3u, 3);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 4u, 4);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 5u, 5);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 6u, 6);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 7u, 7);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 8u, 8);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 9u, 9);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xAu, 10);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xBu, 11);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xCu, 12);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xDu, 13);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xEu, 14);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xFu, 15);
    if ( i == v14 )
      break;
    v8 = *(unsigned __int8 *)i;
    v4 = v8;
  }
  v9 = (int *)((char *)&v16 + 1);
  for ( j = 1; ; j = v11 )
  {
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0, 8);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 1u, 9);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 2u, 10);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 3u, 11);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 4u, 12);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 5u, 13);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 6u, 14);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 7u, 15);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 8u, 0);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 9u, 1);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xAu, 2);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xBu, 3);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xCu, 4);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xDu, 5);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xEu, 6);
    sub_A585C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + j), 0xFu, 7);
    if ( &v17 == v9 )
      break;
    v11 = *(unsigned __int8 *)v9;
    v9 = (int *)((char *)v9 + 1);
  }
  return 0;
}
