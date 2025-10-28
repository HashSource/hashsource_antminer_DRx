int __fastcall recover_mining_kas(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s ...", "recover_mining_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "recover_mining_kas",
    18,
    1648,
    60,
    v3);
  set_ticketmask_kas(a1, 9);
  open_cores_kas(a1);
  set_work_num_kas(a1, 64);
  set_work_timeout_kas(a1, 1);
  set_nonce_num_kas(a1, 0);
  *(_BYTE *)(a1 + 229) = 1;
  *(_BYTE *)(a1 + 230) = 1;
  return 0;
}
