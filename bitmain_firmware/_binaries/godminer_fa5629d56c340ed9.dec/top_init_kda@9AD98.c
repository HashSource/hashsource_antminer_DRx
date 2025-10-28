int __fastcall top_init_kda(int a1)
{
  int v2; // r9
  int v3; // r4
  int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(int, int, int); // r3
  _DWORD v9[4]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v10[7]; // [sp+40h] [bp-1044h] BYREF
  int v11; // [sp+5Ch] [bp-1028h]
  _DWORD v12[7]; // [sp+60h] [bp-1024h] BYREF
  int v13; // [sp+7Ch] [bp-1008h]
  char v14[4100]; // [sp+80h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 260));
  logfmt_raw(v14, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, "top_init_kda");
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
    v14);
  v2 = *(_DWORD *)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 512);
  v4 = sub_146690(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v5 != v3 - 1 + (unsigned __int8)v2 );
    v3 = *(_DWORD *)(a1 + 512);
  }
  v7 = *(void (__fastcall **)(int, int, int))(a1 + 272);
  *(_DWORD *)(a1 + 452) = v4;
  v7(a1, v3, v2);
  sub_97378(a1, 0);
  v9[0] = 5381904;
  v9[2] = 1835009;
  v9[1] = 0;
  v9[3] = 0;
  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v14,
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
    "set misc ctrl %08x",
    v9[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_misc_ctrl_KDA_2110",
    30,
    286,
    40,
    v14);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v9);
  usleep(0x2710u);
  return 0;
}
