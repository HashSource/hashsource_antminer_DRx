int __fastcall slt_mining_eth(int a1)
{
  int v1; // r7
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r0
  void (__fastcall *v8)(int, _DWORD *); // r3
  int v9; // r3
  _DWORD v11[2]; // [sp+10h] [bp-1004h] BYREF
  int v12; // [sp+18h] [bp-FFCh]
  int v13; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -17656;
  HIWORD(v1) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v3) = -13840;
  HIWORD(v3) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v3, v1 + 3072);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, v1 + 3088, 14, 1756, 60, v11);
  v6 = *(_DWORD *)a1;
  v12 = 1310720;
  v13 = 0;
  v11[1] = 0;
  v11[0] = 272381185;
  v7 = v6;
  v8 = *(void (__fastcall **)(int, _DWORD *))(v6 + 276);
  LOBYTE(v12) = 1;
  v8(v7, v11);
  usleep((__useconds_t)&stru_186A0);
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
  v9 = *(_DWORD *)a1;
  *(_BYTE *)(v9 + 264) = 1;
  *(_BYTE *)(v9 + 265) = 1;
  return 0;
}
