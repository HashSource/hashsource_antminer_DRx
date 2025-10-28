int __fastcall slt_mining_eth(int a1)
{
  int v2; // r3
  int v3; // r0
  void (__fastcall *v4)(int, _DWORD *); // r3
  int v5; // r3
  _DWORD v7[2]; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v7, 0x1000u, 0, "%s ...", "slt_mining_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "slt_mining_eth",
    14,
    1821,
    60,
    v7);
  v2 = *(_DWORD *)a1;
  v8 = 1310720;
  v9 = 0;
  v7[1] = 0;
  v7[0] = 272381185;
  v3 = v2;
  v4 = *(void (__fastcall **)(int, _DWORD *))(v2 + 280);
  LOBYTE(v8) = 1;
  v4(v3, v7);
  usleep((__useconds_t)&stru_18698.st_size);
  disable_mac(*(_DWORD *)a1);
  release_all_phy(*(_DWORD *)a1);
  reset_all_phy(*(_DWORD *)a1);
  setup_serdes_phy(*(_DWORD *)a1, 9);
  enable_work(*(_DWORD *)a1, 0x80000000);
  set_work_mode(*(_DWORD *)a1, 0);
  setup_count_sync(*(_DWORD *)a1, 255);
  set_logic_core_id(*(_DWORD *)a1);
  set_logic_chip_id(*(_DWORD *)a1);
  setup_mac(*(_DWORD *)a1);
  set_dag_node_num(*(_DWORD *)a1, *(__int64 *)(a1 + 8) >> 6);
  set_ticketmask(*(_DWORD *)a1, 32);
  open_cores(*(_DWORD *)a1);
  set_work_num(*(_DWORD *)a1, 64);
  set_work_timeout(*(_DWORD *)a1, 1);
  set_nonce_num(*(_DWORD *)a1, 0);
  v5 = *(_DWORD *)a1;
  *(_BYTE *)(v5 + 266) = 1;
  *(_BYTE *)(v5 + 267) = 1;
  return 0;
}
