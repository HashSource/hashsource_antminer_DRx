int __fastcall recover_mining_rvn(int a1)
{
  int v2; // r3
  _DWORD *v3; // r6
  void (__fastcall *v4)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  char *v7; // r1
  int v8; // r4
  int v9; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  _DWORD v12[2]; // [sp+48h] [bp-1000h] BYREF
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = -13840;
  HIWORD(v2) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v2, "recover_mining_rvn");
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  zlog(
    *v3,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "recover_mining_rvn",
    18,
    2170,
    60,
    v12);
  get_chip_dag_packet_num_rvn(a1);
  v13 = 1310720;
  v12[0] = 272381185;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  v14 = 0;
  v12[1] = 0;
  LOBYTE(v13) = 1;
  v4(a1, v12);
  usleep((__useconds_t)&stru_186A0);
  disable_mac_rvn(a1);
  release_all_phy_rvn(a1);
  reset_all_phy_rvn(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 256));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    LOWORD(v7) = 27372;
    HIWORD(v7) = (unsigned int)":" >> 16;
    V_INT((int)v10, v7, *(int *)(a1 + 256));
    LOWORD(v8) = 9780;
    HIWORD(v8) = (unsigned int)"core_status_RVN" >> 16;
    logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v8);
    V_UNLOCK();
    LOWORD(v9) = 9076;
    HIWORD(v9) = (unsigned int)"" >> 16;
    zlog(*v3, v9, 171, "recover_mining_rvn", 18, 2185, 60, v12);
    return 31;
  }
  else
  {
    setup_serdes_phy_rvn(a1, eeprom_phy_seq_level);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 2);
    setup_count_sync_rvn(a1, 0xFFu);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 0);
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    return 0;
  }
}
