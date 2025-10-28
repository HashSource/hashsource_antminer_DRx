int __fastcall set_onechip_to_lower_level_ks5(int a1, int a2)
{
  int v4; // r3
  void (__fastcall *v5)(int, int *); // r2
  int v6; // r3
  int v7; // r5
  float v8; // s16
  float v9; // s17
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  int v13; // [sp+48h] [bp-1000h] BYREF
  int v14; // [sp+4Ch] [bp-FFCh]
  int v15; // [sp+50h] [bp-FF8h]
  int v16; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    (char *)&v13,
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
    "set onechip's freq to low, chip id %d",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "set_onechip_to_lower_level_ks5",
    30,
    683,
    40,
    &v13);
  v4 = *(_DWORD *)(a1 + 376);
  v15 = 4456448;
  v16 = 0;
  v14 = 0;
  v13 = 3;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 280);
  BYTE1(v15) = v4 * a2;
  v5(a1, &v13);
  v6 = *(_DWORD *)(a1 + 376);
  v15 = 655360;
  v16 = 255;
  v14 = 0;
  v13 = 0;
  BYTE1(v15) = v6 * a2;
  (*(void (__fastcall **)(int, int *))(a1 + 284))(a1, &v13);
  usleep(0x4E20u);
  sub_9B7F8((int *)a1, 36);
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 552) + 44 * a2 + 20));
  v7 = *(_DWORD *)(a1 + 552) + 44 * a2;
  v8 = *(float *)(v7 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 20));
  v9 = *(float *)(a1 + 1004) - 100.0;
  while ( v9 < v8 )
  {
    v8 = v8 - 6.25;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 200))(a1, 0, a2);
    usleep((__useconds_t)&loc_493E0);
  }
  return 0;
}
