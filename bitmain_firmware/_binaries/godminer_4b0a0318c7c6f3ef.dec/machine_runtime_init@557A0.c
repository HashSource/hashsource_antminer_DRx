_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  int v3; // r3
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  _DWORD *v7; // r6
  int v8; // r3
  int *v9; // r3
  int v10; // r0
  int v11; // r1
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a2 )
  {
    case 1:
      v7 = machine_runtime_ctrl_ckb_2042();
      break;
    case 2:
      v7 = machine_runtime_ctrl_kda_2110();
      break;
    case 3:
      v7 = machine_runtime_ctrl_hns_2130();
      break;
    case 4:
      v7 = machine_runtime_ctrl_dcr_1727();
      break;
    case 5:
      v7 = machine_runtime_ctrl_dash_1766();
      break;
    case 6:
      v7 = machine_runtime_ctrl_eth_2280();
      break;
    case 7:
      v7 = machine_runtime_ctrl_eth_2282();
      break;
    case 8:
      v7 = machine_runtime_ctrl_ltc_1489();
      break;
    case 9:
      v7 = machine_runtime_ctrl_zec_1746();
      break;
    case 10:
      v7 = machine_runtime_ctrl_rvn_2044();
      break;
    case 11:
      v7 = machine_runtime_ctrl_kas_2380();
      break;
    case 12:
      v7 = machine_runtime_ctrl_ks5_2382();
      break;
    default:
      V_LOCK();
      LOWORD(v3) = -9992;
      HIWORD(v3) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
      logfmt_raw(v13, 0x1000u, 0, v3, a2);
      V_UNLOCK();
      LOWORD(v4) = 20532;
      HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
      v5 = *v4;
      LOWORD(v4) = -10016;
      LOWORD(v6) = -9964;
      HIWORD(v4) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
      HIWORD(v6) = (unsigned int)"/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
      zlog(v5, v6, 171, v4, 20, 69, 100, v13);
      MEMORY[0x48] = 0;
      __und(0);
  }
  v7[18] = a2;
  V_LOCK();
  LOWORD(v8) = -9980;
  HIWORD(v8) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v8, a2);
  V_UNLOCK();
  LOWORD(v9) = 20532;
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  v10 = *v9;
  LOWORD(v9) = -10016;
  LOWORD(v11) = -9964;
  HIWORD(v9) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
  HIWORD(v11) = (unsigned int)"/build/godminer-origin_godminer-new/dhash_content/base_common.c" >> 16;
  zlog(v10, v11, 171, v9, 20, 73, 40, v13);
  return v7;
}
