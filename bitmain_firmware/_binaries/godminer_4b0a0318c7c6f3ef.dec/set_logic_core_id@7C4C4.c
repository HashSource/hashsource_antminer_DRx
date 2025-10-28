int __fastcall set_logic_core_id(int a1)
{
  int v2; // r11
  char *v3; // r1
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r1
  char *v7; // r1
  int v8; // r1
  int v9; // t1
  int *v10; // r7
  int i; // r5
  int v12; // t1
  int v14; // [sp+2Ch] [bp-1048h] BYREF
  _DWORD v15[7]; // [sp+30h] [bp-1044h] BYREF
  int v16; // [sp+4Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+50h] [bp-1024h] BYREF
  int v18; // [sp+6Ch] [bp-1008h]
  int v19; // [sp+70h] [bp-1004h] BYREF
  int v20; // [sp+74h] [bp-1000h] BYREF

  LOWORD(v2) = -14172;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  v4 = 0;
  V_INT((int)v15, v3, *(int *)(a1 + 256));
  v5 = (int *)((char *)&v14 + 1);
  logfmt_raw(
    (char *)&v19,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    v2,
    "set_logic_core_id");
  V_UNLOCK();
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(g_zc, v6, 171, "set_logic_core_id", 17, 410, 60, &v19);
  V_LOCK();
  LOWORD(v7) = 27372;
  HIWORD(v7) = (unsigned int)":" >> 16;
  V_INT((int)v17, v7, *(int *)(a1 + 256));
  logfmt_raw(
    (char *)&v19,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    v2,
    "set_logic_core_id");
  V_UNLOCK();
  LOWORD(v8) = -14448;
  HIWORD(v8) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(g_zc, v8, 171, "set_logic_core_id", 17, 433, 60, &v19);
  v14 = 100925952;
  v19 = 117768961;
  while ( 1 )
  {
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0, 0);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 1u, 1);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 2u, 2);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 3u, 3);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 4u, 4);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 5u, 5);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 6u, 6);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 7u, 7);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 8u, 8);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 9u, 9);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xAu, 10);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xBu, 11);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xCu, 12);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xDu, 13);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xEu, 14);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + v4), 0xFu, 15);
    if ( v5 == v15 )
      break;
    v9 = *(unsigned __int8 *)v5;
    v5 = (_DWORD *)((char *)v5 + 1);
    v4 = v9;
  }
  v10 = (int *)((char *)&v19 + 1);
  for ( i = 1; ; i = v12 )
  {
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0, 8);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 1u, 9);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 2u, 10);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 3u, 11);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 4u, 12);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 5u, 13);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 6u, 14);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 7u, 15);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 8u, 0);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 9u, 1);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xAu, 2);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xBu, 3);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xCu, 4);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xDu, 5);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xEu, 6);
    sub_7AA88(a1, *(_BYTE *)(*(_DWORD *)(a1 + 504) + i), 0xFu, 7);
    if ( &v20 == v10 )
      break;
    v12 = *(unsigned __int8 *)v10;
    v10 = (int *)((char *)v10 + 1);
  }
  return 0;
}
