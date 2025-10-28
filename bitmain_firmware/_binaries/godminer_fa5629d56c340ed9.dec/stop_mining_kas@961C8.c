int __fastcall stop_mining_kas(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s ...", "stop_mining_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "stop_mining_kas",
    15,
    1054,
    60,
    v5);
  v2 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 252));
  *(_BYTE *)(a1 + 266) = 0;
  *(_BYTE *)(a1 + 267) = 0;
  sub_923BC((int *)a1, 127);
  set_reset_kas(a1);
  set_core_reset_kas(a1);
  set_inactive_kas(a1);
  return 0;
}
