int __fastcall stop_mining_eth(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  void (__fastcall *v4)(int, unsigned int *); // r3
  unsigned int v6; // [sp+10h] [bp-1004h] BYREF
  int v7; // [sp+14h] [bp-1000h]
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)&v6, 0x1000u, 0, "%s ...", "stop_mining_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "stop_mining_eth",
    15,
    1793,
    60,
    &v6);
  v2 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 252));
  *(_BYTE *)(a1 + 266) = 0;
  *(_BYTE *)(a1 + 267) = 0;
  set_ticketmask(a1, 1);
  set_core_reset(a1);
  v7 = 0;
  v8 = 1310721;
  v9 = 0;
  v6 = 274347265;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 5373953;
  v9 = 0;
  v7 = 0;
  v6 = 9;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 5701633;
  v9 = 0;
  v7 = 0;
  v4 = *(void (__fastcall **)(int, unsigned int *))(a1 + 280);
  v6 = 1;
  v4(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 5636097;
  v9 = 0;
  v7 = 0;
  v6 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_79D84(a1, 12, 2);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
