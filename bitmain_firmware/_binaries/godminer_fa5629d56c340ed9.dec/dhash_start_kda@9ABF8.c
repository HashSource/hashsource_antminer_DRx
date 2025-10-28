int __fastcall dhash_start_kda(int a1)
{
  int v2; // r3
  int result; // r0
  _DWORD v4[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v5[7]; // [sp+38h] [bp-1044h] BYREF
  int v6; // [sp+54h] [bp-1028h]
  _DWORD v7[7]; // [sp+58h] [bp-1024h] BYREF
  int v8; // [sp+74h] [bp-1008h]
  char v9[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 260));
  logfmt_raw(v9, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "dhash_start_kda");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "dhash_start_kda",
    15,
    482,
    40,
    v9);
  v4[2] = 5505025;
  v4[1] = 0;
  v4[0] = 4;
  v4[3] = 0;
  V_LOCK();
  V_INT((int)v7, "chain", *(int *)(a1 + 260));
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "set nonce len value %08x", 4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_nonce_len_KDA_2110",
    30,
    380,
    40,
    v9);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v4);
  usleep(0x2710u);
  v2 = *(unsigned __int8 *)(a1 + 484);
  result = 0;
  *(_BYTE *)(a1 + 266) = 1;
  if ( !v2 )
    *(_DWORD *)(a1 + 488) = (int)*(float *)(a1 + 1004);
  return result;
}
