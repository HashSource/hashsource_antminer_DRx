int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  _DWORD *v5; // r8
  int v6; // r3
  int v7; // r5
  int v8; // r1
  char *v9; // r4
  void *v10; // r0
  _DWORD *v11; // r3
  int v12; // r8
  _DWORD *v13; // r7
  int v14; // r4
  int v15; // r1
  int v16; // r1
  char *s; // [sp+38h] [bp-1084h]
  void *src; // [sp+44h] [bp-1078h]
  void *dest; // [sp+54h] [bp-1068h]
  __int16 v23; // [sp+58h] [bp-1064h]
  _DWORD v24[2]; // [sp+68h] [bp-1054h] BYREF
  int v25; // [sp+70h] [bp-104Ch]
  int v26; // [sp+74h] [bp-1048h]
  _DWORD v27[7]; // [sp+78h] [bp-1044h] BYREF
  int v28; // [sp+94h] [bp-1028h]
  char v29[4100]; // [sp+B8h] [bp-1004h] BYREF

  v3 = a2;
  LOWORD(v5) = 20532;
  V_LOCK();
  LOWORD(v6) = -14172;
  HIWORD(v6) = (unsigned int)": %d" >> 16;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  v23 = v3;
  LOWORD(v7) = 10252;
  logfmt_raw(v29, 0x1000u, 0, v6, "cache_dag_done_check_rvn");
  V_UNLOCK();
  LOWORD(v8) = 9076;
  HIWORD(v8) = (unsigned int)"" >> 16;
  LOWORD(v9) = 27372;
  zlog(*v5, v8, 171, "cache_dag_done_check_rvn", 24, 2656, 40, v29);
  v10 = malloc(0x1800u);
  v11 = v5;
  v12 = a1;
  v13 = v11;
  dest = v10;
  HIWORD(v9) = (unsigned int)":" >> 16;
  s = v9;
  do
  {
    sleep(0xAu);
    v14 = *(_DWORD *)(v12 + 440);
    V_LOCK();
    V_INT((int)v27, s, *(int *)(v12 + 256));
    HIWORD(v7) = (unsigned int)"phy_external_bist_rvn" >> 16;
    logfmt_raw(
      v29,
      0x1000u,
      0,
      v28,
      v27[0],
      v27[1],
      v27[2],
      v27[3],
      v27[4],
      v27[5],
      v27[6],
      v28,
      v7,
      "ChipSetting_get_cache_done_status_rvn_RVN",
      v14 << 6);
    V_UNLOCK();
    LOWORD(v15) = -23880;
    HIWORD(v15) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
    zlog(*v13, v15, 150, "ChipSetting_get_cache_done_status_rvn_RVN", 41, 1943, 40, v29);
    v24[0] = 0;
    v24[1] = 0;
    v25 = 0;
    v26 = 0;
    src = calloc(768 * v14, 1u);
    HIWORD(v25) = v23;
    (*(void (__fastcall **)(int, _DWORD *, int))(v12 + 316))(v12, v24, v14 << 6);
    if ( dest )
      memcpy(dest, src, 768 * v14);
    free(src);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", 0, a3);
    V_UNLOCK();
    LOWORD(v16) = 9076;
    HIWORD(v16) = (unsigned int)"" >> 16;
    zlog(*v13, v16, 171, "cache_dag_done_check_rvn", 24, 2671, 40, v29);
  }
  while ( a2 != 73 );
  return 0;
}
