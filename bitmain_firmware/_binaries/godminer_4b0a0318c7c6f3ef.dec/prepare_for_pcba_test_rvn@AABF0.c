int __fastcall prepare_for_pcba_test_rvn(int a1, int *a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r9
  const char *v8; // r0
  void (__fastcall *v9)(int, _DWORD *); // r3
  int v10; // r1
  const char *v11; // r0
  const char *v13; // r0
  _DWORD v14[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -13840;
  HIWORD(v4) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw((char *)v14, 0x1000u, 0, v4, "prepare_for_pcba_test_rvn");
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 9076;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v5, v6, 171, "prepare_for_pcba_test_rvn", 25, 2487, 60, v14);
  v7 = *a2;
  if ( (unsigned int)*a2 > 0xA )
  {
    LOWORD(v13) = -12572;
    HIWORD(v13) = (unsigned int)"t_init" >> 16;
    printf(v13, "prepare_for_pcba_test_rvn");
    return 15;
  }
  else
  {
    LOWORD(v8) = -12528;
    HIWORD(v8) = (unsigned int)"d response_num %d" >> 16;
    printf(v8, "prepare_for_pcba_test_rvn");
    membist1_rvn(a1);
    stop_mining_rvn(a1);
    v9 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
    v14[0] = 272381185;
    v14[2] = 1310721;
    v14[1] = 0;
    v14[3] = 0;
    v9(a1, v14);
    usleep((__useconds_t)&stru_186A0);
    disable_mac_rvn(a1);
    release_all_phy_rvn(a1);
    reset_all_phy_rvn(a1);
    setup_serdes_phy_rvn(a1, v7);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 0);
    setup_count_sync_rvn(a1, 0xFFu);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_dag_node_num_rvn(a1, v10, 117440506, 0);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 127);
    LOWORD(v11) = -12488;
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    HIWORD(v11) = (unsigned int)"[Core State] asic %02x core %04x reg %02x state %08x" >> 16;
    printf(v11, "prepare_for_pcba_test_rvn");
    return 0;
  }
}
