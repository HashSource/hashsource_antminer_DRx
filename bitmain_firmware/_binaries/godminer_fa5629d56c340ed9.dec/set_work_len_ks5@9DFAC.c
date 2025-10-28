int __fastcall set_work_len_ks5(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "set_work_len_ks5");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "set_work_len_ks5",
    16,
    133,
    40,
    v4);
  v5 = 5242880;
  v6 = 0;
  v4[1] = 0;
  v4[0] = 47;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
