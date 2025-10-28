int __fastcall set_logic_core_id(int a1)
{
  int v2; // r5
  _DWORD *v3; // r7
  int v4; // t1
  int *v5; // r7
  int i; // r5
  int v7; // t1
  int v9; // [sp+2Ch] [bp-1048h] BYREF
  _DWORD v10[7]; // [sp+30h] [bp-1044h] BYREF
  int v11; // [sp+4Ch] [bp-1028h]
  _DWORD v12[7]; // [sp+50h] [bp-1024h] BYREF
  int v13; // [sp+6Ch] [bp-1008h]
  int v14; // [sp+70h] [bp-1004h] BYREF
  int v15; // [sp+74h] [bp-1000h] BYREF

  V_LOCK();
  v2 = 0;
  V_INT((int)v10, "chain", *(int *)(a1 + 260));
  v3 = (int *)((char *)&v9 + 1);
  logfmt_raw(
    (char *)&v14,
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
    "set_logic_core_id");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_logic_core_id",
    17,
    419,
    60,
    &v14);
  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    (char *)&v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s...",
    "set_logic_core_id");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_logic_core_id",
    17,
    442,
    60,
    &v14);
  v9 = 100925952;
  v14 = 117768961;
  while ( 1 )
  {
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0, 0);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 1u, 1);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 2u, 2);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 3u, 3);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 4u, 4);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 5u, 5);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 6u, 6);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 7u, 7);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 8u, 8);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 9u, 9);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xAu, 10);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xBu, 11);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xCu, 12);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xDu, 13);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xEu, 14);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + v2), 0xFu, 15);
    if ( v3 == v10 )
      break;
    v4 = *(unsigned __int8 *)v3;
    v3 = (_DWORD *)((char *)v3 + 1);
    v2 = v4;
  }
  v5 = (int *)((char *)&v14 + 1);
  for ( i = 1; ; i = v7 )
  {
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0, 8);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 1u, 9);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 2u, 10);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 3u, 11);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 4u, 12);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 5u, 13);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 6u, 14);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 7u, 15);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 8u, 0);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 9u, 1);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xAu, 2);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xBu, 3);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xCu, 4);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xDu, 5);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xEu, 6);
    sub_7BB28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 512) + i), 0xFu, 7);
    if ( &v15 == v5 )
      break;
    v7 = *(unsigned __int8 *)v5;
    v5 = (int *)((char *)v5 + 1);
  }
  return 0;
}
