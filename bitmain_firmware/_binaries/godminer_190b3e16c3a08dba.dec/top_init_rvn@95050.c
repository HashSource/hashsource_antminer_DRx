int __fastcall top_init_rvn(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1040h] BYREF
  int v7; // [sp+44h] [bp-1024h]
  _DWORD v8[7]; // [sp+48h] [bp-1020h] BYREF
  int v9; // [sp+64h] [bp-1004h]
  char v10[4096]; // [sp+68h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 224));
  logfmt_raw(v10, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s start", "top_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    171,
    "top_init_rvn",
    12,
    2044,
    60,
    v10);
  if ( sub_93AC8((int *)a1) )
  {
    V_LOCK();
    V_INT((int)v8, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v9,
      v8[0],
      v8[1],
      v8[2],
      v8[3],
      v8[4],
      v8[5],
      v8[6],
      v9,
      "check asic num failed",
      "top_init_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      171,
      "top_init_rvn",
      12,
      2048,
      100,
      v10);
    return 12;
  }
  else
  {
    set_reset_rvn(a1);
    set_core_reset_rvn(a1);
    set_inactive_rvn(a1);
    set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 400));
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 456) - 1;
    do
      *(_BYTE *)++v3 = v2++;
    while ( v2 != 8 );
    v4 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 396) = 1;
    (*(void (__fastcall **)(int, int))(a1 + 232))(a1, v4);
    sub_93AC8((int *)a1);
    result = 0;
    if ( !*(_BYTE *)(a1 + 428) )
      *(_DWORD *)(a1 + 432) = (int)*(float *)(a1 + 924);
  }
  return result;
}
