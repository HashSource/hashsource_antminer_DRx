int __fastcall prepare_for_pcba_test_eth(int a1, int *a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r9
  const char *v8; // r0
  void (__fastcall *v9)(int, _DWORD *); // r3
  const char *v10; // r0
  const char *v12; // r0
  _DWORD v13[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -13840;
  HIWORD(v4) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw((char *)v13, 0x1000u, 0, v4, "prepare_for_pcba_test_eth");
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v6, 171, "prepare_for_pcba_test_eth", 25, 2180, 60, v13);
  v7 = *a2;
  if ( (unsigned int)*a2 > 0xB )
  {
    LOWORD(v12) = -12572;
    HIWORD(v12) = (unsigned int)"t_init" >> 16;
    printf(v12, "prepare_for_pcba_test_eth");
    return 15;
  }
  else
  {
    LOWORD(v8) = -12528;
    HIWORD(v8) = (unsigned int)"d response_num %d" >> 16;
    printf(v8, "prepare_for_pcba_test_eth");
    membist1(a1);
    stop_mining_eth(a1);
    v9 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
    v13[0] = 272381185;
    v13[2] = 1310721;
    v13[1] = 0;
    v13[3] = 0;
    v9(a1, v13);
    usleep((__useconds_t)&stru_186A0);
    disable_mac(a1);
    release_all_phy(a1);
    reset_all_phy(a1);
    setup_serdes_phy(a1, v7);
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
    LOWORD(v10) = -12488;
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    HIWORD(v10) = (unsigned int)"[Core State] asic %02x core %04x reg %02x state %08x" >> 16;
    printf(v10, "prepare_for_pcba_test_eth");
    return 0;
  }
}
