int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r5
  _DWORD *i; // r6
  int v4; // t1
  int *v5; // r7
  int j; // r5
  int v7; // t1
  int v9; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD v10[7]; // [sp+30h] [bp-1024h] BYREF
  int v11; // [sp+4Ch] [bp-1008h]
  int v12; // [sp+50h] [bp-1004h] BYREF
  int v13; // [sp+54h] [bp-1000h] BYREF

  V_LOCK();
  v2 = 0;
  V_INT((int)v10, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    (char *)&v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "set_logic_core_id_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_logic_core_id_rvn",
    21,
    400,
    60,
    &v12);
  v9 = 100925952;
  v12 = 117768961;
  for ( i = (int *)((char *)&v9 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0, 0);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 1u, 1);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 2u, 2);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 3u, 3);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 4u, 4);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 5u, 5);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 6u, 6);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 7u, 7);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 8u, 8);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 9u, 9);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xAu, 10);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xBu, 11);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xCu, 12);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xDu, 13);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xEu, 14);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xFu, 15);
    if ( i == v10 )
      break;
    v4 = *(unsigned __int8 *)i;
    v2 = v4;
  }
  v5 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v7 )
  {
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0, 8);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 1u, 9);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 2u, 10);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 3u, 11);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 4u, 12);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 5u, 13);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 6u, 14);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 7u, 15);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 8u, 0);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 9u, 1);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xAu, 2);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xBu, 3);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xCu, 4);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xDu, 5);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xEu, 6);
    sub_A6904(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + j), 0xFu, 7);
    if ( &v13 == v5 )
      break;
    v7 = *(unsigned __int8 *)v5;
    v5 = (int *)((char *)v5 + 1);
  }
  return 0;
}
