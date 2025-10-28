int __fastcall recover_mining_eth(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  _DWORD v5[7]; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+44h] [bp-1004h]
  _DWORD v7[2]; // [sp+48h] [bp-1000h] BYREF
  int v8; // [sp+50h] [bp-FF8h]
  int v9; // [sp+54h] [bp-FF4h]

  V_LOCK();
  logfmt_raw((char *)v7, 0x1000u, 0, "%s ...", "recover_mining_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "recover_mining_eth",
    18,
    1549,
    60,
    v7);
  v8 = 1310720;
  v7[0] = 272381185;
  v9 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  v7[1] = 0;
  LOBYTE(v8) = 1;
  v2(a1, v7);
  usleep((__useconds_t)&stru_18698.st_size);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 220));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    V_INT((int)v5, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      (char *)v7,
      0x1000u,
      0,
      v6,
      v5[0],
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6],
      v6,
      "eth phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "recover_mining_eth",
      18,
      1564,
      60,
      v7);
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
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 956) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 229) = 1;
    *(_BYTE *)(a1 + 230) = 1;
    return 0;
  }
}
