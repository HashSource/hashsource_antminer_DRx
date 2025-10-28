int __fastcall recover_mining_eth(int a1)
{
  int v2; // r3
  _DWORD *v3; // r6
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  char *v8; // r1
  int v9; // r4
  int v10; // r1
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  _DWORD v13[2]; // [sp+48h] [bp-1000h] BYREF
  int v14; // [sp+50h] [bp-FF8h]
  int v15; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v2) = -12880;
  HIWORD(v2) = (unsigned int)"_ate_init" >> 16;
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw((char *)v13, 0x1000u, 0, v2, "recover_mining_eth", 0);
  V_UNLOCK();
  LOWORD(v4) = -14448;
  HIWORD(v4) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v3, v4, 171, "recover_mining_eth", 18, 1851, 60, v13);
  v14 = 1310720;
  v13[0] = 272381185;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  v13[1] = 0;
  v15 = 0;
  LOBYTE(v14) = 1;
  v5(a1, v13);
  usleep((__useconds_t)&stru_186A0);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 248));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    LOWORD(v8) = 27372;
    HIWORD(v8) = (unsigned int)":" >> 16;
    V_INT((int)v11, v8, *(int *)(a1 + 256));
    LOWORD(v9) = -12852;
    HIWORD(v9) = (unsigned int)"t" >> 16;
    logfmt_raw((char *)v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v9);
    V_UNLOCK();
    LOWORD(v10) = -14448;
    HIWORD(v10) = (unsigned int)" lost cnt: %08x" >> 16;
    zlog(*v3, v10, 171, "recover_mining_eth", 18, 1866, 60, v13);
    return 31;
  }
  else
  {
    setup_serdes_phy(a1, eeprom_phy_seq_level);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 1028) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 264) = 1;
    *(_BYTE *)(a1 + 265) = 1;
    return 0;
  }
}
