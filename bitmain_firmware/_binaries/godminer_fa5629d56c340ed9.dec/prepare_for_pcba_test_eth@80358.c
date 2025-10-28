int __fastcall prepare_for_pcba_test_eth(int a1, int *a2)
{
  int v4; // r9
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v7, 0x1000u, 0, "%s ...", "prepare_for_pcba_test_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "prepare_for_pcba_test_eth",
    25,
    2246,
    60,
    v7);
  v4 = *a2;
  if ( (unsigned int)*a2 > 0xB )
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_eth");
    return 15;
  }
  else
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_eth");
    membist1(a1);
    stop_mining_eth(a1);
    v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
    v7[0] = 272381185;
    v7[2] = 1310721;
    v7[1] = 0;
    v7[3] = 0;
    v5(a1, v7);
    usleep((__useconds_t)&stru_18698.st_size);
    disable_mac(a1);
    release_all_phy(a1);
    reset_all_phy(a1);
    setup_serdes_phy(a1, v4);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, 117440506);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 127);
    *(_BYTE *)(a1 + 266) = 1;
    *(_BYTE *)(a1 + 267) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_eth");
    return 0;
  }
}
