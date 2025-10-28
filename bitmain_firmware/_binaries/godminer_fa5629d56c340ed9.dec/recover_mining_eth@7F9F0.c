int __fastcall recover_mining_eth(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  _DWORD v8[1024]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw((char *)v8, 0x1000u, 0, "%s enter, membist_done: %u", "recover_mining_eth", 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "recover_mining_eth",
    18,
    1916,
    60,
    v8);
  v8[2] = 1310721;
  v8[0] = 272381185;
  v8[1] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
  v8[3] = 0;
  v2(a1, v8);
  usleep((__useconds_t)&stru_18698.st_size);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 252));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    V_INT((int)v6, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      (char *)v8,
      0x1000u,
      0,
      v7,
      v6[0],
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6],
      v7,
      "eth phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "recover_mining_eth",
      18,
      1931,
      60,
      v8);
    v4 = 3;
  }
  else
  {
    v4 = eeprom_phy_seq_level;
  }
  setup_serdes_phy(a1, v4);
  enable_work(a1, 0x80000000);
  set_work_mode(a1, 0);
  setup_count_sync(a1, 255);
  set_logic_core_id(a1);
  set_logic_chip_id(a1);
  setup_mac(a1);
  set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 1036) >> 6);
  set_ticketmask(a1, 32);
  open_cores(a1);
  set_work_num(a1, 64);
  set_work_timeout(a1, 1);
  set_nonce_num(a1, 0);
  *(_BYTE *)(a1 + 266) = 1;
  *(_BYTE *)(a1 + 267) = 1;
  return 0;
}
