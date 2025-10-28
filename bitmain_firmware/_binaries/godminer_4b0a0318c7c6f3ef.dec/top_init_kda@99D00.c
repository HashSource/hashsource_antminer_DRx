int __fastcall top_init_kda(int a1)
{
  char *v2; // r1
  int v3; // r9
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(int, int, int); // r3
  char *v9; // r1
  int v10; // r1
  _DWORD v12[4]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v13[7]; // [sp+40h] [bp-1044h] BYREF
  int v14; // [sp+5Ch] [bp-1028h]
  _DWORD v15[7]; // [sp+60h] [bp-1024h] BYREF
  int v16; // [sp+7Ch] [bp-1008h]
  char v17[4100]; // [sp+80h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v13, v2, *(int *)(a1 + 256));
  logfmt_raw(v17, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, 1506964);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "top_init_kda",
    12,
    462,
    40,
    v17);
  v3 = *(_DWORD *)(a1 + 352);
  v4 = *(_DWORD *)(a1 + 504);
  v5 = sub_1451E0(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = *(_DWORD *)(a1 + 504);
  }
  v8 = *(void (__fastcall **)(int, int, int))(a1 + 268);
  *(_DWORD *)(a1 + 444) = v5;
  v8(a1, v4, v3);
  sub_962E0(a1, 0);
  v12[0] = 5381904;
  v12[2] = 1835009;
  v12[1] = 0;
  v12[3] = 0;
  V_LOCK();
  LOWORD(v9) = 27372;
  HIWORD(v9) = (unsigned int)":" >> 16;
  V_INT((int)v15, v9, *(int *)(a1 + 256));
  logfmt_raw(
    v17,
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
    "set misc ctrl %08x",
    v12[0]);
  V_UNLOCK();
  LOWORD(v10) = -23880;
  HIWORD(v10) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(g_zc, v10, 150, "ChipSetting_misc_ctrl_KDA_2110", 30, 286, 40, v17);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v12);
  usleep(0x2710u);
  return 0;
}
