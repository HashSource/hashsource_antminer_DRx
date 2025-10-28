int __fastcall dhash_start_kda(int a1)
{
  char *v2; // r1
  _DWORD *v3; // r7
  char *v4; // r1
  int v5; // r1
  int v6; // r3
  int result; // r0
  _DWORD v8[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v9[7]; // [sp+38h] [bp-1044h] BYREF
  int v10; // [sp+54h] [bp-1028h]
  _DWORD v11[7]; // [sp+58h] [bp-1024h] BYREF
  int v12; // [sp+74h] [bp-1008h]
  char v13[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v9, v2, *(int *)(a1 + 256));
  logfmt_raw(v13, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, 1506920);
  V_UNLOCK();
  zlog(
    *v3,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "dhash_start_kda",
    15,
    482,
    40,
    v13);
  v8[2] = 5505025;
  v8[1] = 0;
  v8[0] = 4;
  v8[3] = 0;
  V_LOCK();
  LOWORD(v4) = 27372;
  HIWORD(v4) = (unsigned int)":" >> 16;
  V_INT((int)v11, v4, *(int *)(a1 + 256));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "set nonce len value %08x",
    4);
  V_UNLOCK();
  LOWORD(v5) = -23880;
  HIWORD(v5) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v3, v5, 150, "ChipSetting_nonce_len_KDA_2110", 30, 380, 40, v13);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v8);
  usleep(0x2710u);
  v6 = *(unsigned __int8 *)(a1 + 476);
  result = 0;
  *(_BYTE *)(a1 + 264) = 1;
  if ( !v6 )
    *(_DWORD *)(a1 + 480) = (int)*(float *)(a1 + 996);
  return result;
}
