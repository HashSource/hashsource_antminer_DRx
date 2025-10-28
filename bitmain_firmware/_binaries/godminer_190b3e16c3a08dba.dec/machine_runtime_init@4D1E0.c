_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  _DWORD *v3; // r6
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a2 )
  {
    case 1:
      v3 = machine_runtime_ctrl_ckb_2042();
      break;
    case 2:
      v3 = machine_runtime_ctrl_kda_2110();
      break;
    case 3:
      v3 = machine_runtime_ctrl_hns_2130();
      break;
    case 4:
      v3 = machine_runtime_ctrl_dcr_1727();
      break;
    case 5:
      v3 = machine_runtime_ctrl_dash_1766();
      break;
    case 6:
      v3 = machine_runtime_ctrl_eth_2280();
      break;
    case 7:
      v3 = machine_runtime_ctrl_eth_2282();
      break;
    case 8:
      v3 = machine_runtime_ctrl_ltc_1489();
      break;
    case 9:
      v3 = machine_runtime_ctrl_zec_1746();
      break;
    case 10:
      v3 = machine_runtime_ctrl_rvn_2020();
      break;
    case 11:
      v3 = machine_runtime_ctrl_rvn_2020_0();
      break;
    default:
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "not support miner type: %d", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_interface.c",
        171,
        "machine_runtime_init",
        20,
        65,
        100,
        v5);
      MEMORY[0x40] = 0;
      __und(0);
  }
  v3[16] = a2;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "miner type: %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_interface.c",
    171,
    "machine_runtime_init",
    20,
    69,
    40,
    v5);
  return v3;
}
